/*
** Automatically generated from `typecheck_info.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__typecheck_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "check_hlds.typecheck_info.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "check_hlds.typecheck_info.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "check_hlds.typecheck_info.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "check_hlds.typecheck_info.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "check_hlds.typecheck_info.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.typecheck_info.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.typecheck_info.c"
#line 52 "check_hlds.typecheck_info.c"
#include "check_hlds.typecheck_info.mh"

#line 55 "check_hlds.typecheck_info.c"
#line 56 "check_hlds.typecheck_info.c"
#ifndef CHECK_HLDS__TYPECHECK_INFO_DECL_GUARD
#define CHECK_HLDS__TYPECHECK_INFO_DECL_GUARD

#line 60 "check_hlds.typecheck_info.c"
#line 61 "check_hlds.typecheck_info.c"

#endif
#line 64 "check_hlds.typecheck_info.c"

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
	MR_Integer f1;
	MR_Word * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_info_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_set_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0,
	mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0;
MR_decl_label8(check_hlds__typecheck_info__do_type_checkpoint_4_0, 2,3,4,5,6,7,8,12)
MR_decl_label8(check_hlds__typecheck_info__do_type_checkpoint_4_0, 13,14,15,16,17,18,19,20)
MR_decl_label5(check_hlds__typecheck_info__do_type_checkpoint_4_0, 21,22,23,24,9)
MR_decl_label3(check_hlds__typecheck_info__expand_types_4_0, 11,2,4)
MR_decl_label6(check_hlds__typecheck_info__expand_types_2_6_0, 17,3,4,5,6,7)
MR_decl_label1(check_hlds__typecheck_info__get_existq_tvar_renaming_4_0, 2)
MR_decl_label4(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0, 3,6,9,2)
MR_decl_label4(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0, 19,3,2,1)
MR_decl_label3(check_hlds__typecheck_info__type_checkpoint_4_0, 2,3,4)
MR_decl_label3(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0, 3,2,6)
MR_decl_label1(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0, 3)
MR_decl_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0, 4,3,6,7,8,9,10,11)
MR_decl_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0, 28,29,30,31,32,33,34,35)
MR_decl_label8(check_hlds__typecheck_info__typecheck_info_init_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label5(check_hlds__typecheck_info__write_args_type_assign_set_4_0, 13,4,5,6,15)
MR_decl_label8(check_hlds__typecheck_info__write_type_assign_4_0, 2,4,5,6,7,3,8,9)
MR_decl_label1(check_hlds__typecheck_info__write_type_assign_4_0, 10)
MR_decl_label7(check_hlds__typecheck_info__write_type_assign_constraints_7_0, 21,5,7,8,9,10,23)
MR_decl_label5(check_hlds__typecheck_info__write_type_assign_set_4_0, 13,4,5,6,15)
MR_decl_label8(check_hlds__typecheck_info__write_type_assign_types_8_0, 38,5,8,9,7,10,11,12)
MR_decl_label5(check_hlds__typecheck_info__write_type_assign_types_8_0, 13,14,4,3,42)
MR_decl_label4(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0, 4,6,7,3)
MR_decl_label4(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0, 4,5,6,3)
MR_decl_label5(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0, 3,6,7,8,5)
MR_decl_label8(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0, 6,5,4,7,8,9,10,11)
MR_decl_label1(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0, 3)
MR_decl_label4(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0, 2,3,4,5)
MR_decl_label4(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0, 4,6,7,3)
MR_decl_label8(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0, 3,4,2,6,8,9,10,11)
MR_decl_label6(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0, 7,12,13,14,15,16)
MR_decl_label8(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0, 37,5,8,7,9,10,11,12)
MR_decl_label5(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0, 13,14,4,3,19)
MR_decl_label4(__Unify___check_hlds__typecheck_info__args_type_assign_0_0, 4,6,10,1)
MR_decl_label7(__Unify___check_hlds__typecheck_info__cons_type_info_0_0, 4,6,8,10,12,16,1)
MR_decl_label8(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0, 6,10,12,16,17,21,39,1)
MR_decl_label5(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0, 7,21,5,12,1)
MR_decl_label8(__Unify___check_hlds__typecheck_info__type_assign_0_0, 4,6,8,10,12,14,18,1)
MR_decl_label8(__Unify___check_hlds__typecheck_info__typecheck_info_0_0, 4,6,8,10,12,14,16,1)
MR_decl_label8(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0, 4,6,8,10,12,14,16,1)
MR_decl_label5(__Compare___check_hlds__typecheck_info__args_type_assign_0_0, 3,2,5,9,29)
MR_decl_label8(__Compare___check_hlds__typecheck_info__cons_type_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label8(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0, 3,2,6,13,14,16,20,23)
MR_decl_label8(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0, 24,26,31,33,134,36,37,54)
MR_decl_label4(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0, 47,63,81,64)
MR_decl_label8(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0, 3,2,9,7,5,15,17,54)
MR_decl_label8(__Compare___check_hlds__typecheck_info__type_assign_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label1(__Compare___check_hlds__typecheck_info__type_assign_0_0, 61)
MR_decl_label8(__Compare___check_hlds__typecheck_info__typecheck_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label2(__Compare___check_hlds__typecheck_info__typecheck_info_0_0, 29,69)
MR_decl_label8(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label3(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0, 29,33,77)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_init_12_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_get_var_types_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_get_typevarset_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_get_constraint_map_2_0)
MR_decl_static(check_hlds__typecheck_info__expand_types_2_6_0)
MR_decl_static(check_hlds__typecheck_info__expand_types_4_0)
MR_decl_static(check_hlds__typecheck_info__get_existq_tvar_renaming_4_0)
MR_decl_static(fn__check_hlds__typecheck_info__this_file_0_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_predid_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_called_predid_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_varset_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_overload_error_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_overloaded_symbols_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_set_called_predid_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_set_overload_error_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_set_overloaded_symbols_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_module_name_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_preds_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_types_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_ctors_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_add_error_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_set_var_types_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_set_typevarset_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_set_head_type_params_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_set_constraint_proofs_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_assign_set_constraint_map_3_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__get_caller_arg_assign_1_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__get_callee_arg_types_1_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__get_callee_constraints_1_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__project_cons_type_info_source_1_0)
MR_decl_static(check_hlds__typecheck_info__write_type_assign_types_8_0)
MR_decl_static(check_hlds__typecheck_info__write_type_assign_constraints_7_0)
MR_decl_static(check_hlds__typecheck_info__write_type_assign_4_0)
MR_def_extern_entry(check_hlds__typecheck_info__write_type_assign_set_4_0)
MR_decl_static(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0)
MR_decl_static(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0)
MR_decl_static(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0)
MR_decl_static(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0)
MR_def_extern_entry(check_hlds__typecheck_info__write_args_type_assign_set_4_0)
MR_def_extern_entry(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0)
MR_decl_static(check_hlds__typecheck_info__do_type_checkpoint_4_0)
MR_def_extern_entry(check_hlds__typecheck_info__type_checkpoint_4_0)
MR_decl_static(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0)
MR_decl_static(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__args_type_assign_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__args_type_assign_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__args_type_assign_set_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__args_type_assign_set_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__cons_type_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__cons_type_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__overloaded_symbol_map_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__overloaded_symbol_map_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__type_assign_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__type_assign_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__type_assign_set_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__type_assign_set_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__typecheck_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__typecheck_info_0_0)
MR_def_extern_entry(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("", 0)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0,
MR_TAG_COMMON(0,0,0),
0
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_TAG_COMMON(0,1,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const struct mercury_type_3 mercury_common_3[10] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(3,4)
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
MR_TAG_COMMON(3,9,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
}
},
{
{
MR_TAG_COMMON(3,9,0),
MR_TAG_COMMON(1,3,2)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,4),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(3,4),
MR_COMMON(3,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,3,0),
MR_TAG_COMMON(0,3,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_info__get_existq_tvar_renaming_4_0_1;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck_info__get_existq_tvar_renaming_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(3,5),
MR_COMMON(4,0),
MR_COMMON(3,6),
MR_COMMON(4,1),
MR_COMMON(4,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_2;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_COMMON(4,4),
MR_COMMON(4,4)
}
},
};

MR_decl_entry(hlds__hlds_data__update_constraint_map_3_0);
static const struct mercury_type_7 mercury_common_7[2] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(hlds__hlds_data__update_constraint_map_3_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(hlds__hlds_data__update_constraint_map_3_0),
0
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_string_const(" ", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_9 mercury_common_9[3] =
{
{
2,
MR_string_const(":", 1)
},
{
3,
MR_string_const("(No variables were assigned a type)", 35)
},
{
3,
MR_string_const("Type assignment", 15)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_marker_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_marker_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__type_ctor_info_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__type_ctor_info_context_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_import_status_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[] = {
	"tc_sub_info_pred_id",
	"tc_sub_info_pred_import_status",
	"tc_sub_info_pred_markers",
	"tc_sub_info_is_field_access_function",
	"tc_sub_info_varset",
	"tc_sub_info_non_overload_errors",
	"tc_sub_info_overload_error",
	"tc_sub_info_overloaded_symbols",
	"tc_sub_info_ambiguity_error_limit"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0 = {
	"typecheck_sub_info",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0,
	mercury_data_check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0)),
	"check_hlds.typecheck_info",
	"typecheck_sub_info",
	{ (void *)mercury_data_check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0 },
	{ (void *)mercury_data_check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_unify_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_unify_context_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_typecheck_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_call_id_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_unify_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_info__field_names_typecheck_info_0_0[] = {
	"tc_info_sub_info",
	"tc_info_module_info",
	"tc_info_call_id",
	"tc_info_arg_num",
	"tc_info_context",
	"tc_info_unify_context",
	"tc_info_type_assign_set",
	"tc_info_ambiguity_warn_limit"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0 = {
	"typecheck_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_typecheck_info_0_0,
	mercury_data_check_hlds__typecheck_info__field_names_typecheck_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_info__functor_number_map_typecheck_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__typecheck_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__typecheck_info_0_0)),
	"check_hlds.typecheck_info",
	"typecheck_info",
	{ (void *)mercury_data_check_hlds__typecheck_info__du_name_ordered_typecheck_info_0 },
	{ (void *)mercury_data_check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_info__functor_number_map_typecheck_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_set_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__type_assign_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__type_assign_set_0_0)),
	"check_hlds.typecheck_info",
	"type_assign_set",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraints_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_type_assign_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraints_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_info__field_names_type_assign_0_0[] = {
	"var_types",
	"type_varset",
	"head_type_params",
	"type_bindings",
	"class_constraints",
	"constraint_proofs",
	"constraint_map"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_type_assign_0_0 = {
	"type_assign",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_type_assign_0_0,
	mercury_data_check_hlds__typecheck_info__field_names_type_assign_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_type_assign_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_info__du_ptag_ordered_type_assign_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_name_ordered_type_assign_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_type_assign_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_info__functor_number_map_type_assign_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__type_assign_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__type_assign_0_0)),
	"check_hlds.typecheck_info",
	"type_assign",
	{ (void *)mercury_data_check_hlds__typecheck_info__du_name_ordered_type_assign_0 },
	{ (void *)mercury_data_check_hlds__typecheck_info__du_ptag_ordered_type_assign_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_info__functor_number_map_type_assign_0
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__overloaded_symbol_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__overloaded_symbol_map_0_0)),
	"check_hlds.typecheck_info",
	"overloaded_symbol_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_simple_call_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0 = {
	"overloaded_pred",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_overloaded_symbol_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1 = {
	"overloaded_func",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_overloaded_symbol_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0)),
	"check_hlds.typecheck_info",
	"overloaded_symbol",
	{ (void *)mercury_data_check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0 },
	{ (void *)mercury_data_check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0 },
	2,
	4,
	mercury_data_check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0 = {
	"source_type",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1 = {
	"source_builtin_type",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2 = {
	"source_get_field_access",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3 = {
	"source_set_field_access",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4 = {
	"source_apply",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5 = {
	"source_pred",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_source_0_5,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[] = {
	5,
	1,
	2,
	4,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0)),
	"check_hlds.typecheck_info",
	"cons_type_info_source",
	{ (void *)mercury_data_check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0 },
	{ (void *)mercury_data_check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0 },
	6,
	4,
	mercury_data_check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraints_0,
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_info__field_names_cons_type_info_0_0[] = {
	"cti_varset",
	"cti_exit_tvars",
	"cti_result_type",
	"cti_arg_types",
	"cti_constraints",
	"cti_source"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0 = {
	"cons_type_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_cons_type_info_0_0,
	mercury_data_check_hlds__typecheck_info__field_names_cons_type_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_info__functor_number_map_cons_type_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__cons_type_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__cons_type_info_0_0)),
	"check_hlds.typecheck_info",
	"cons_type_info",
	{ (void *)mercury_data_check_hlds__typecheck_info__du_name_ordered_cons_type_info_0 },
	{ (void *)mercury_data_check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_info__functor_number_map_cons_type_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__args_type_assign_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__args_type_assign_set_0_0)),
	"check_hlds.typecheck_info",
	"args_type_assign_set",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_check_hlds__typecheck_info__field_types_args_type_assign_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraints_0
};

const MR_ConstString mercury_data_check_hlds__typecheck_info__field_names_args_type_assign_0_0[] = {
	"caller_arg_assign",
	"callee_arg_types",
	"callee_constraints"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0 = {
	"args",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__typecheck_info__field_types_args_type_assign_0_0,
	mercury_data_check_hlds__typecheck_info__field_names_args_type_assign_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__typecheck_info__du_name_ordered_args_type_assign_0[] = {
	&mercury_data_check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0
};

const MR_Integer mercury_data_check_hlds__typecheck_info__functor_number_map_args_type_assign_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__typecheck_info__args_type_assign_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__typecheck_info__args_type_assign_0_0)),
	"check_hlds.typecheck_info",
	"args_type_assign",
	{ (void *)mercury_data_check_hlds__typecheck_info__du_name_ordered_args_type_assign_0 },
	{ (void *)mercury_data_check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0 },
	1,
	4,
	mercury_data_check_hlds__typecheck_info__functor_number_map_args_type_assign_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_info__get_existq_tvar_renaming_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.typecheck_info",
"check_hlds.typecheck_info",
"get_existq_tvar_renaming_2",
5,
0
},
"check_hlds.typecheck_info",
"typecheck_info.m",
550,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_data",
"hlds.hlds_data",
"update_constraint_map",
3,
0
},
"check_hlds.typecheck_info",
"typecheck_info.m",
446,
"d1;c14;d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_data",
"hlds.hlds_data",
"update_constraint_map",
3,
0
},
"check_hlds.typecheck_info",
"typecheck_info.m",
448,
"d1;c14;d1;c16;"
};

MR_decl_entry(term__context_init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module0)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_init_12_0);
	MR_init_label8(check_hlds__typecheck_info__typecheck_info_init_12_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_init_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(term__context_init_1_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i2);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i3);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i4);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i5);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i6);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i7);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r2 = (MR_Integer) 543;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i8);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(18);
	MR_sv(18) = MR_tempr1;
	MR_r2 = (MR_Integer) 544;
	}
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		check_hlds__typecheck_info__typecheck_info_init_12_0_i9);
MR_def_label(check_hlds__typecheck_info__typecheck_info_init_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_sv(14);
	MR_tfield(0, MR_tempr2, 4) = MR_sv(8);
	MR_tfield(0, MR_tempr2, 5) = MR_sv(15);
	MR_tfield(0, MR_tempr2, 6) = MR_sv(16);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_sv(1);
	MR_tfield(0, MR_r1, 2) = MR_sv(12);
	MR_tfield(0, MR_r1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 4) = MR_sv(13);
	MR_tfield(0, MR_r1, 5) = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_tfield(0, MR_r1, 6) = MR_tempr3;
	MR_tfield(0, MR_r1, 7) = MR_sv(18);
	MR_decr_sp_and_return(19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module1)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_get_var_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_get_var_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module2)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_get_typevarset_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_get_typevarset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module3)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_get_head_type_params_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module4)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_get_type_bindings_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module5)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module6)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module7)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_get_constraint_map_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_get_constraint_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module8)
	MR_init_entry1(check_hlds__typecheck_info__expand_types_2_6_0);
	MR_init_label6(check_hlds__typecheck_info__expand_types_2_6_0,17,3,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__expand_types_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck_info__expand_types_2_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__expand_types_2_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typecheck_info__expand_types_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_GE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__expand_types_2_6_0_i4);
	}
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__typecheck_info__expand_types_2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck_info__expand_types_2_6_0_i5);
MR_def_label(check_hlds__typecheck_info__expand_types_2_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__typecheck_info__expand_types_2_6_0_i6);
MR_def_label(check_hlds__typecheck_info__expand_types_2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__typecheck_info__expand_types_2_6_0_i7);
MR_def_label(check_hlds__typecheck_info__expand_types_2_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck_info__expand_types_2_6_0_i17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module9)
	MR_init_entry1(check_hlds__typecheck_info__expand_types_4_0);
	MR_init_label3(check_hlds__typecheck_info__expand_types_4_0,11,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__expand_types_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck_info__expand_types_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r4 = MR_r3;
	MR_r3 = (MR_Integer) 1000;
	MR_np_call_localret_ent(check_hlds__typecheck_info__expand_types_2_6_0,
		check_hlds__typecheck_info__expand_types_4_0_i2);
MR_def_label(check_hlds__typecheck_info__expand_types_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__expand_types_4_0_i4);
	}
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__typecheck_info__expand_types_4_0_i11);
MR_def_label(check_hlds__typecheck_info__expand_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module10)
	MR_init_entry1(check_hlds__typecheck_info__get_existq_tvar_renaming_4_0);
	MR_init_label1(check_hlds__typecheck_info__get_existq_tvar_renaming_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__get_existq_tvar_renaming_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r3;
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_r1;
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__typecheck_info__get_existq_tvar_renaming_4_0_i2);
MR_def_label(check_hlds__typecheck_info__get_existq_tvar_renaming_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(list__foldl_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module11)
	MR_init_entry1(fn__check_hlds__typecheck_info__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_info__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck_info.m", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0);
MR_decl_entry(check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
MR_decl_entry(map__values_2_0);
MR_decl_entry(parse_tree__prog_type__type_vars_list_2_0);
MR_decl_entry(list__delete_elems_3_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(varset__squash_4_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(map__apply_to_list_3_0);
MR_decl_entry(hlds__hlds_data__retrieve_prog_constraints_2_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0);
MR_decl_entry(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0);
MR_decl_entry(check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module12)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0);
	MR_init_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,4,3,6,7,8,9,10,11)
	MR_init_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,12,13,14,15,16,17,18,19)
	MR_init_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,20,21,22,23,24,25,26,27)
	MR_init_label8(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,28,29,30,31,32,33,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_final_info_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(0, MR_r1, 6);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i3);
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__this_file_0_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i4);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("internal error in typecheck_info_get_vartypes", 45);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r5, 0);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_head_type_params_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i6);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typevarset_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i7);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_var_types_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i8);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_type_bindings_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i9);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i10);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i11);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__type_assign_get_constraint_map_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i12);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i13);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(check_hlds__typecheck_info__expand_types_4_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i14);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i15);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i16);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,4,3);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i17);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = MR_sv(12);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(list__foldl_4_1,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i18);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__typecheck_info__get_existq_tvar_renaming_4_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i19);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i20);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i21);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i22);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_list_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i23);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i24);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__delete_elems_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i25);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i26);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i27);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(varset__squash_4_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i28);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(6) = MR_r1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i29);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i30);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(map__apply_to_list_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i31);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_data__retrieve_prog_constraints_2_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i32);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i33);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i34);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0,
		check_hlds__typecheck_info__typecheck_info_get_final_info_12_0_i35);
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_final_info_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module13)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_predid_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_predid_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module14)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module15)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module16)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module17)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_called_predid_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_called_predid_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module18)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_varset_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_varset_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module19)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_overload_error_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_overload_error_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module20)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_overloaded_symbols_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_overloaded_symbols_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module21)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module22)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 0), 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module23)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_set_called_predid_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_set_called_predid_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module24)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_set_overload_error_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_set_overload_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module25)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_set_overloaded_symbols_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_set_overloaded_symbols_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr3, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr3, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module26)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_module_name_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_module_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_name_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module27)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_preds_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_preds_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_predicate_table_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module28)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_type_table_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_cons_table_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module29)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_ctors_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_ctors_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_get_cons_table_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module30)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0);
	MR_init_label3(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0,3,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 0), 7);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0_i3);
MR_def_label(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0_i6);
MR_def_label(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0_i6);
MR_def_label(check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tempr10 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr10, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr10, 7);
	MR_tempr3 = MR_ctfield(0, MR_tempr10, 6);
	MR_tempr4 = MR_ctfield(0, MR_tempr10, 5);
	MR_tempr5 = MR_ctfield(0, MR_tempr10, 4);
	MR_tempr6 = MR_ctfield(0, MR_tempr10, 3);
	MR_tempr7 = MR_ctfield(0, MR_tempr10, 2);
	MR_tempr8 = MR_ctfield(0, MR_tempr10, 1);
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr9, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr9, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_tempr9, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_tempr9, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_tempr9, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_tempr9, 5) = MR_ctfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_tempr9, 6) = MR_ctfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_tempr9, 7) = MR_r1;
	MR_tfield(0, MR_tempr9, 8) = MR_ctfield(0, MR_tempr1, 8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tempr9;
	MR_tfield(0, MR_r1, 1) = MR_tempr8;
	MR_tfield(0, MR_r1, 2) = MR_tempr7;
	MR_tfield(0, MR_r1, 3) = MR_tempr6;
	MR_tfield(0, MR_r1, 4) = MR_tempr5;
	MR_tfield(0, MR_r1, 5) = MR_tempr4;
	MR_tfield(0, MR_r1, 6) = MR_tempr3;
	MR_tfield(0, MR_r1, 7) = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module31)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_add_error_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_add_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr4 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr4, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 5);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 9);
	MR_tfield(0, MR_tempr3, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr3, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr3, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr3, 5) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr3, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr3, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r1, 0) = MR_tempr3;
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr4, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_r1, 6) = MR_ctfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_r1, 7) = MR_ctfield(0, MR_tempr4, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module32)
	MR_init_entry1(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0);
	MR_init_label1(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_tempr1, 6);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 5);
	MR_proceed();
	}
MR_def_label(check_hlds__typecheck_info__typecheck_info_get_all_errors_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_tfield(1, MR_r1, 1) = MR_ctfield(0, MR_r3, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module33)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_set_var_types_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_set_var_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module34)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_set_typevarset_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_set_typevarset_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module35)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_set_head_type_params_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_set_head_type_params_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module36)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_set_type_bindings_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_set_type_bindings_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module37)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module38)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_set_constraint_proofs_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_set_constraint_proofs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module39)
	MR_init_entry1(check_hlds__typecheck_info__type_assign_set_constraint_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_assign_set_constraint_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module40)
	MR_init_entry1(fn__check_hlds__typecheck_info__get_caller_arg_assign_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__get_caller_arg_assign_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module41)
	MR_init_entry1(fn__check_hlds__typecheck_info__get_callee_arg_types_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__get_callee_arg_types_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module42)
	MR_init_entry1(fn__check_hlds__typecheck_info__get_callee_constraints_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__get_callee_constraints_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__apply_rec_subst_to_constraints_3_0);
MR_decl_entry(hlds__hlds_data__merge_hlds_constraints_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module43)
	MR_init_entry1(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0);
	MR_init_label4(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr2, 3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,
		fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0_i4);
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__merge_hlds_constraints_3_0,
		fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0_i5);
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0,
		fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0_i6);
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module44)
	MR_init_entry1(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0);
	MR_init_label5(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,3,6,7,8,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 4);
	MR_r1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,
		fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0_i6);
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__merge_hlds_constraints_3_0,
		fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,
		fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0_i8);
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("typecheck_info.m", 16);
	MR_r2 = (MR_Word) MR_string_const("convert_nonempty_args_type_assign_set", 37);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module45)
	MR_init_entry1(fn__check_hlds__typecheck_info__project_cons_type_info_source_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__project_cons_type_info_source_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_decl_entry(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_type_5_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module46)
	MR_init_entry1(check_hlds__typecheck_info__write_type_assign_types_8_0);
	MR_init_label8(check_hlds__typecheck_info__write_type_assign_types_8_0,38,5,8,9,7,10,11,12)
	MR_init_label5(check_hlds__typecheck_info__write_type_assign_types_8_0,13,14,4,3,42)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__write_type_assign_types_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_types_8_0_i3);
	}
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck_info__write_type_assign_types_8_0_i5);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_types_8_0_i4);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_types_8_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_types_8_0_i7);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\n\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_type_assign_types_8_0_i9);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		check_hlds__typecheck_info__write_type_assign_types_8_0_i10);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_type_assign_types_8_0_i11);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		check_hlds__typecheck_info__write_type_assign_types_8_0_i12);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,
		check_hlds__typecheck_info__write_type_assign_types_8_0_i13);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		check_hlds__typecheck_info__write_type_assign_types_8_0_i14);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_types_8_0_i38);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_types_8_0_i38);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_types_8_0_i42);
	}
	MR_r1 = (MR_Word) MR_string_const("(No variables were assigned a type)", 35);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(check_hlds__typecheck_info__write_type_assign_types_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(check_hlds__type_util__apply_rec_subst_to_constraint_3_0);
MR_decl_entry(hlds__hlds_data__retrieve_prog_constraint_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module47)
	MR_init_entry1(check_hlds__typecheck_info__write_type_assign_constraints_7_0);
	MR_init_label7(check_hlds__typecheck_info__write_type_assign_constraints_7_0,21,5,7,8,9,10,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__write_type_assign_constraints_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck_info__write_type_assign_constraints_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_constraints_7_0_i23);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_constraints_7_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,8,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\n\t", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		check_hlds__typecheck_info__write_type_assign_constraints_7_0_i7);
MR_def_label(check_hlds__typecheck_info__write_type_assign_constraints_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(",\n\t   ", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_type_assign_constraints_7_0_i7);
MR_def_label(check_hlds__typecheck_info__write_type_assign_constraints_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraint_3_0,
		check_hlds__typecheck_info__write_type_assign_constraints_7_0_i8);
MR_def_label(check_hlds__typecheck_info__write_type_assign_constraints_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__retrieve_prog_constraint_2_0,
		check_hlds__typecheck_info__write_type_assign_constraints_7_0_i9);
MR_def_label(check_hlds__typecheck_info__write_type_assign_constraints_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		check_hlds__typecheck_info__write_type_assign_constraints_7_0_i10);
MR_def_label(check_hlds__typecheck_info__write_type_assign_constraints_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_constraints_7_0_i21);
MR_def_label(check_hlds__typecheck_info__write_type_assign_constraints_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module48)
	MR_init_entry1(check_hlds__typecheck_info__write_type_assign_4_0);
	MR_init_label8(check_hlds__typecheck_info__write_type_assign_4_0,2,4,5,6,7,3,8,9)
	MR_init_label1(check_hlds__typecheck_info__write_type_assign_4_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__write_type_assign_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r1, 3);
	MR_sv(6) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__typecheck_info__write_type_assign_4_0_i2);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_4_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_4_0_i3);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("some [", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_type_assign_4_0_i5);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		check_hlds__typecheck_info__write_type_assign_4_0_i6);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]\n\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_type_assign_4_0_i7);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_sv(7);
	MR_r6 = (MR_Integer) 0;
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_np_call_localret_ent(check_hlds__typecheck_info__write_type_assign_types_8_0,
		check_hlds__typecheck_info__write_type_assign_4_0_i8);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__write_type_assign_constraints_7_0,
		check_hlds__typecheck_info__write_type_assign_4_0_i9);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<=", 2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(check_hlds__typecheck_info__write_type_assign_constraints_7_0,
		check_hlds__typecheck_info__write_type_assign_4_0_i10);
MR_def_label(check_hlds__typecheck_info__write_type_assign_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module49)
	MR_init_entry1(check_hlds__typecheck_info__write_type_assign_set_4_0);
	MR_init_label5(check_hlds__typecheck_info__write_type_assign_set_4_0,13,4,5,6,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__write_type_assign_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck_info__write_type_assign_set_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_set_4_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_type_assign_set_4_0_i4);
MR_def_label(check_hlds__typecheck_info__write_type_assign_set_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__write_type_assign_4_0,
		check_hlds__typecheck_info__write_type_assign_set_4_0_i5);
MR_def_label(check_hlds__typecheck_info__write_type_assign_set_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_type_assign_set_4_0_i6);
MR_def_label(check_hlds__typecheck_info__write_type_assign_set_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__typecheck_info__write_type_assign_set_4_0_i13);
MR_def_label(check_hlds__typecheck_info__write_type_assign_set_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module50)
	MR_init_entry1(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0);
	MR_init_label8(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,37,5,8,7,9,10,11,12)
	MR_init_label5(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,13,14,4,3,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i3);
	}
	MR_sv(7) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i5);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i4);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r3 = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i9);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i10);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_0,
		fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i11);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_to_string_3_0,
		fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i12);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,9,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr3;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,
		fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i13);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i14);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i37);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,7);
	MR_decr_sp_and_return(8);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module51)
	MR_init_entry1(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0);
	MR_init_label8(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,6,5,4,7,8,9,10,11)
	MR_init_label1(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i6);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i4);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = (MR_Word) MR_string_const("   ", 3);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,3,8);
	}
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(check_hlds__type_util__apply_rec_subst_to_constraint_3_0,
		fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__retrieve_prog_constraint_2_0,
		fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i8);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_0,
		fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i9);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i10);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = (MR_Integer) 1;
	}
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,
		fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0_i11);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__error_util__component_list_to_line_pieces_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module52)
	MR_init_entry1(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0);
	MR_init_label4(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,
		fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<=", 2);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_0,
		fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0_i3);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_line_pieces_2_0,
		fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0_i5);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module53)
	MR_init_entry1(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0);
	MR_init_label8(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,3,4,2,6,8,9,10,11)
	MR_init_label6(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,7,12,13,14,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i3);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i2);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,9,2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	if (MR_INT_LE(MR_ctfield(3, MR_tempr1, 1),1)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i2);
	}
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_r3 = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_sv(6) = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(map__keys_2_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i6);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Integer) 0;
	MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_vars_to_string_3_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i9);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i10);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("some [", 6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i11);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr2;
	MR_r6 = (MR_Integer) 0;
	}
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_types_to_pieces_6_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i12);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i13);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i14);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i15);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0_i16);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module54)
	MR_init_entry1(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0);
	MR_init_label4(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,4,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,
		fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0_i6);
	}
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = ((MR_Integer) MR_ctfield(1, MR_sv(1), 0) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__typecheck_info__type_assign_set_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module55)
	MR_init_entry1(check_hlds__typecheck_info__write_args_type_assign_set_4_0);
	MR_init_label5(check_hlds__typecheck_info__write_args_type_assign_set_4_0,13,4,5,6,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__write_args_type_assign_set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck_info__write_args_type_assign_set_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__write_args_type_assign_set_4_0_i15);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_args_type_assign_set_4_0_i4);
MR_def_label(check_hlds__typecheck_info__write_args_type_assign_set_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__typecheck_info__write_type_assign_4_0,
		check_hlds__typecheck_info__write_args_type_assign_set_4_0_i5);
MR_def_label(check_hlds__typecheck_info__write_args_type_assign_set_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__write_args_type_assign_set_4_0_i6);
MR_def_label(check_hlds__typecheck_info__write_args_type_assign_set_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__typecheck_info__write_args_type_assign_set_4_0_i13);
MR_def_label(check_hlds__typecheck_info__write_args_type_assign_set_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module56)
	MR_init_entry1(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0);
	MR_init_label4(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,4,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 0);
	MR_np_call_localret_ent(fn__check_hlds__typecheck_info__type_assign_to_pieces_3_0,
		fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0_i4);
MR_def_label(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0_i6);
	}
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = ((MR_Integer) MR_ctfield(1, MR_sv(1), 0) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_localcall_lab(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,
		fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0_i7);
MR_def_label(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(fn__check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(parse_tree__prog_out__maybe_report_stats_3_0);
MR_decl_entry(map__count_2_0);
MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module57)
	MR_init_entry1(check_hlds__typecheck_info__do_type_checkpoint_4_0);
	MR_init_label8(check_hlds__typecheck_info__do_type_checkpoint_4_0,2,3,4,5,6,7,8,12)
	MR_init_label8(check_hlds__typecheck_info__do_type_checkpoint_4_0,13,14,15,16,17,18,19,20)
	MR_init_label5(check_hlds__typecheck_info__do_type_checkpoint_4_0,21,22,23,24,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__do_type_checkpoint_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("At ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i2);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i3);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i4);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 43;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i5);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_out__maybe_report_stats_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i6);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i7);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 6);
	MR_np_call_localret_ent(check_hlds__typecheck_info__typecheck_info_get_varset_2_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i8);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__do_type_checkpoint_4_0_i9);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__do_type_checkpoint_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(1, MR_sv(2), 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__count_2_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i12);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\140var -> type\' map", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i13);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": count = ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i14);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_int_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i15);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i16);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(map__count_2_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i17);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\140type var -> type\' map", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i18);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": count = ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i19);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_int_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i20);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i21);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i22);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__typecheck_info__write_type_assign_4_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i23);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		check_hlds__typecheck_info__do_type_checkpoint_4_0_i24);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__typecheck_info__write_type_assign_set_4_0);
MR_def_label(check_hlds__typecheck_info__do_type_checkpoint_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(check_hlds__typecheck_info__write_type_assign_set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module58)
	MR_init_entry1(check_hlds__typecheck_info__type_checkpoint_4_0);
	MR_init_label3(check_hlds__typecheck_info__type_checkpoint_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__typecheck_info__type_checkpoint_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__typecheck_info__type_checkpoint_4_0_i2);
MR_def_label(check_hlds__typecheck_info__type_checkpoint_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 44;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		check_hlds__typecheck_info__type_checkpoint_4_0_i3);
MR_def_label(check_hlds__typecheck_info__type_checkpoint_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__type_checkpoint_4_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__typecheck_info__do_type_checkpoint_4_0);
MR_def_label(check_hlds__typecheck_info__type_checkpoint_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module59)
	MR_init_entry1(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0);
	MR_init_label4(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0,19,3,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__typecheck_info__tvar_maps_to_tvar_3_0_i3);
MR_def_label(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0_i2);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0_i19);
MR_def_label(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module60)
	MR_init_entry1(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0);
	MR_init_label4(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0,3,6,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__typecheck_info__tvar_maps_to_tvar_3_0,
		check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0_i3);
MR_def_label(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0_i6);
MR_def_label(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0_i9);
MR_def_label(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_def_label(check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___hlds__hlds_data__hlds_constraints_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module61)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__args_type_assign_0_0);
	MR_init_label4(__Unify___check_hlds__typecheck_info__args_type_assign_0_0,4,6,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__args_type_assign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__args_type_assign_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___check_hlds__typecheck_info__type_assign_0_0,
		__Unify___check_hlds__typecheck_info__args_type_assign_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_info__args_type_assign_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__args_type_assign_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_info__args_type_assign_0_0_i6);
MR_def_label(__Unify___check_hlds__typecheck_info__args_type_assign_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__args_type_assign_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_data__hlds_constraints_0_0);
MR_def_label(__Unify___check_hlds__typecheck_info__args_type_assign_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_info__args_type_assign_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___hlds__hlds_data__hlds_constraints_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module62)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__args_type_assign_0_0);
	MR_init_label5(__Compare___check_hlds__typecheck_info__args_type_assign_0_0,3,2,5,9,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__args_type_assign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__args_type_assign_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__args_type_assign_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_info__args_type_assign_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_info__args_type_assign_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___check_hlds__typecheck_info__type_assign_0_0,
		__Compare___check_hlds__typecheck_info__args_type_assign_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_info__args_type_assign_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__args_type_assign_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_info__args_type_assign_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_info__args_type_assign_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__args_type_assign_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_data__hlds_constraints_0_0);
MR_def_label(__Compare___check_hlds__typecheck_info__args_type_assign_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module63)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__args_type_assign_set_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__args_type_assign_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, args_type_assign);
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


MR_BEGIN_MODULE(check_hlds__typecheck_info_module64)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__args_type_assign_set_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__args_type_assign_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, args_type_assign);
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

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module65)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__cons_type_info_0_0);
	MR_init_label7(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__cons_type_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i16);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i6);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i8);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i10);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_data__hlds_constraints_0_0,
		__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i12);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module66)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__cons_type_info_0_0);
	MR_init_label8(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__cons_type_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__mer_type_0_0,
		__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i13);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i17);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_data__hlds_constraints_0_0,
		__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i21);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module67)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0);
	MR_init_label8(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,6,10,12,16,17,21,39,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__cons_type_info_source_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i39);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i16));
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_info__cons_type_info_source_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module68)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0);
	MR_init_label8(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,3,2,6,13,14,16,20,23)
	MR_init_label8(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,24,26,31,33,134,36,37,54)
	MR_init_label4(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,47,63,81,64)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__cons_type_info_source_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i16) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i36));
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i134) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i134) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i13));
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i134);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i20) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i134) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i23));
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i134);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i81) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i31) MR_AND
		MR_LABEL_AP(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i33));
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r3, 0);
	MR_r2 = MR_const_mask_field(MR_r4, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__type_ctor_0_0);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i81);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i134);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__type_ctor_0_0);
	}
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i47);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i81);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i134);
	}
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),3)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i81);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr1, 0),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r4, 0),1)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0_i64);
	}
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__cons_type_info_source_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r3, 1);
	MR_r2 = MR_ctfield(3, MR_r4, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__simple_call_id_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module69)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0);
	MR_init_label5(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0,7,21,5,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__overloaded_symbol_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i21);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__simple_call_id_0_0,
		__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i7);
MR_def_label(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i12);
MR_def_label(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__typecheck_info__overloaded_symbol_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__simple_call_id_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module70)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0);
	MR_init_label8(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,3,2,9,7,5,15,17,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__overloaded_symbol_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__simple_call_id_0_0,
		__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i17);
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0_i54);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, cons_type_info_source);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__typecheck_info__overloaded_symbol_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module71)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__overloaded_symbol_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__overloaded_symbol_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
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

MR_BEGIN_MODULE(check_hlds__typecheck_info_module72)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__overloaded_symbol_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__overloaded_symbol_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module73)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__type_assign_0_0);
	MR_init_label8(__Unify___check_hlds__typecheck_info__type_assign_0_0,4,6,8,10,12,14,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__type_assign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__type_assign_0_0_i18);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__typecheck_info__type_assign_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__type_assign_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__typecheck_info__type_assign_0_0_i6);
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__type_assign_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_info__type_assign_0_0_i8);
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__type_assign_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__typecheck_info__type_assign_0_0_i10);
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__type_assign_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___hlds__hlds_data__hlds_constraints_0_0,
		__Unify___check_hlds__typecheck_info__type_assign_0_0_i12);
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__type_assign_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__typecheck_info__type_assign_0_0_i14);
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__type_assign_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_info__type_assign_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module74)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__type_assign_0_0);
	MR_init_label8(__Compare___check_hlds__typecheck_info__type_assign_0_0,3,2,5,9,13,17,21,25)
	MR_init_label1(__Compare___check_hlds__typecheck_info__type_assign_0_0,61)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__type_assign_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__typecheck_info__type_assign_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__typecheck_info__type_assign_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_info__type_assign_0_0_i13);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__typecheck_info__type_assign_0_0_i17);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___hlds__hlds_data__hlds_constraints_0_0,
		__Compare___check_hlds__typecheck_info__type_assign_0_0_i21);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__typecheck_info__type_assign_0_0_i25);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__type_assign_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___check_hlds__typecheck_info__type_assign_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__typecheck_info_module75)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__type_assign_set_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__type_assign_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
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


MR_BEGIN_MODULE(check_hlds__typecheck_info_module76)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__type_assign_set_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__type_assign_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
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

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__call_id_0_0);
MR_decl_entry(__Unify___term__context_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__unify_context_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module77)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__typecheck_info_0_0);
	MR_init_label8(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,4,6,8,10,12,14,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__typecheck_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i16);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 7);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,
		__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i6);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__call_id_0_0,
		__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i8);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i10);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__unify_context_0_0,
		__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i12);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i14);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__call_id_0_0);
MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__unify_context_0_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module78)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__typecheck_info_0_0);
	MR_init_label8(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label2(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,29,69)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__typecheck_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,
		__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__call_id_0_0,
		__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i13);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i17);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i21);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__unify_context_0_0,
		__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i25);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, type_assign);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i29);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_info_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__import_status_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_markers_0;
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module79)
	MR_init_entry1(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0);
	MR_init_label8(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,4,6,8,10,12,14,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i16);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 6);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 8);
	MR_sv(8) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr4, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr4, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr4, 8);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__import_status_0_0,
		__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i4);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i6);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i8);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i10);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i12);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i14);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0_i1);
	}
	MR_r1 = (MR_sv(7) == MR_sv(14));
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__typecheck_info__typecheck_sub_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_pred__import_status_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(check_hlds__typecheck_info_module80)
	MR_init_entry1(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0);
	MR_init_label8(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,3,2,5,9,13,17,21,25)
	MR_init_label3(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,29,33,77)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i2);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(9) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i5);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__import_status_0_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i9);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_markers);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i13);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i17);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i21);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i25);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i29);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__typecheck_info, overloaded_symbol);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i33);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0_i77);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__typecheck_info__typecheck_sub_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__typecheck_info_maybe_bunch_0(void)
{
	check_hlds__typecheck_info_module0();
	check_hlds__typecheck_info_module1();
	check_hlds__typecheck_info_module2();
	check_hlds__typecheck_info_module3();
	check_hlds__typecheck_info_module4();
	check_hlds__typecheck_info_module5();
	check_hlds__typecheck_info_module6();
	check_hlds__typecheck_info_module7();
	check_hlds__typecheck_info_module8();
	check_hlds__typecheck_info_module9();
	check_hlds__typecheck_info_module10();
	check_hlds__typecheck_info_module11();
	check_hlds__typecheck_info_module12();
	check_hlds__typecheck_info_module13();
	check_hlds__typecheck_info_module14();
	check_hlds__typecheck_info_module15();
	check_hlds__typecheck_info_module16();
	check_hlds__typecheck_info_module17();
	check_hlds__typecheck_info_module18();
	check_hlds__typecheck_info_module19();
	check_hlds__typecheck_info_module20();
	check_hlds__typecheck_info_module21();
	check_hlds__typecheck_info_module22();
	check_hlds__typecheck_info_module23();
	check_hlds__typecheck_info_module24();
	check_hlds__typecheck_info_module25();
	check_hlds__typecheck_info_module26();
	check_hlds__typecheck_info_module27();
	check_hlds__typecheck_info_module28();
	check_hlds__typecheck_info_module29();
	check_hlds__typecheck_info_module30();
	check_hlds__typecheck_info_module31();
	check_hlds__typecheck_info_module32();
	check_hlds__typecheck_info_module33();
	check_hlds__typecheck_info_module34();
	check_hlds__typecheck_info_module35();
	check_hlds__typecheck_info_module36();
	check_hlds__typecheck_info_module37();
	check_hlds__typecheck_info_module38();
	check_hlds__typecheck_info_module39();
}

static void mercury__check_hlds__typecheck_info_maybe_bunch_1(void)
{
	check_hlds__typecheck_info_module40();
	check_hlds__typecheck_info_module41();
	check_hlds__typecheck_info_module42();
	check_hlds__typecheck_info_module43();
	check_hlds__typecheck_info_module44();
	check_hlds__typecheck_info_module45();
	check_hlds__typecheck_info_module46();
	check_hlds__typecheck_info_module47();
	check_hlds__typecheck_info_module48();
	check_hlds__typecheck_info_module49();
	check_hlds__typecheck_info_module50();
	check_hlds__typecheck_info_module51();
	check_hlds__typecheck_info_module52();
	check_hlds__typecheck_info_module53();
	check_hlds__typecheck_info_module54();
	check_hlds__typecheck_info_module55();
	check_hlds__typecheck_info_module56();
	check_hlds__typecheck_info_module57();
	check_hlds__typecheck_info_module58();
	check_hlds__typecheck_info_module59();
	check_hlds__typecheck_info_module60();
	check_hlds__typecheck_info_module61();
	check_hlds__typecheck_info_module62();
	check_hlds__typecheck_info_module63();
	check_hlds__typecheck_info_module64();
	check_hlds__typecheck_info_module65();
	check_hlds__typecheck_info_module66();
	check_hlds__typecheck_info_module67();
	check_hlds__typecheck_info_module68();
	check_hlds__typecheck_info_module69();
	check_hlds__typecheck_info_module70();
	check_hlds__typecheck_info_module71();
	check_hlds__typecheck_info_module72();
	check_hlds__typecheck_info_module73();
	check_hlds__typecheck_info_module74();
	check_hlds__typecheck_info_module75();
	check_hlds__typecheck_info_module76();
	check_hlds__typecheck_info_module77();
	check_hlds__typecheck_info_module78();
	check_hlds__typecheck_info_module79();
}

static void mercury__check_hlds__typecheck_info_maybe_bunch_2(void)
{
	check_hlds__typecheck_info_module80();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__typecheck_info__init(void);
void mercury__check_hlds__typecheck_info__init_type_tables(void);
void mercury__check_hlds__typecheck_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__typecheck_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__typecheck_info__init_complexity_procs(void);
#endif

void mercury__check_hlds__typecheck_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__typecheck_info_maybe_bunch_0();
	mercury__check_hlds__typecheck_info_maybe_bunch_1();
	mercury__check_hlds__typecheck_info_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0,
		check_hlds__typecheck_info__typecheck_sub_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_info_0,
		check_hlds__typecheck_info__typecheck_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_set_0,
		check_hlds__typecheck_info__type_assign_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0,
		check_hlds__typecheck_info__type_assign_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0,
		check_hlds__typecheck_info__overloaded_symbol_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
		check_hlds__typecheck_info__overloaded_symbol_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0,
		check_hlds__typecheck_info__cons_type_info_source_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0,
		check_hlds__typecheck_info__cons_type_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0,
		check_hlds__typecheck_info__args_type_assign_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0,
		check_hlds__typecheck_info__args_type_assign_0_0);
	mercury__check_hlds__typecheck_info__init_debugger();
}

void mercury__check_hlds__typecheck_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_sub_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_typecheck_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_type_assign_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_cons_type_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__typecheck_info__type_ctor_info_args_type_assign_0);
	}
}


void mercury__check_hlds__typecheck_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__typecheck_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__typecheck_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__typecheck_info__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
