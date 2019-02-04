/*
** Automatically generated from `mdbcomp.prim_data.m'
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
INIT mercury__mdbcomp__prim_data__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 28 "mdbcomp.prim_data.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "mdbcomp.prim_data.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 36 "mdbcomp.prim_data.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 40 "mdbcomp.prim_data.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdbcomp.prim_data.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "mdbcomp.prim_data.c"
#line 49 "mdbcomp.prim_data.c"
#include "mdbcomp.prim_data.mh"

#line 52 "mdbcomp.prim_data.c"
#line 53 "mdbcomp.prim_data.c"
#ifndef MDBCOMP__PRIM_DATA_DECL_GUARD
#define MDBCOMP__PRIM_DATA_DECL_GUARD

#line 57 "mdbcomp.prim_data.c"
#line 58 "mdbcomp.prim_data.c"

#endif
#line 61 "mdbcomp.prim_data.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__prim_data__type_ctor_info_module_name_0,
	mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
	mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
MR_decl_label3(mdbcomp__prim_data__add_sym_name_suffix_3_0, 4,3,6)
MR_decl_label8(mdbcomp__prim_data__any_mercury_builtin_module_1_0, 5,9,13,17,21,25,29,2)
MR_decl_label3(mdbcomp__prim_data__is_std_lib_module_name_2_0, 2,3,1)
MR_decl_label4(mdbcomp__prim_data__is_submodule_2_0, 19,5,2,1)
MR_decl_label3(mdbcomp__prim_data__match_sym_name_2_0, 3,8,1)
MR_decl_label5(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0, 5,9,13,17,2)
MR_decl_label4(mdbcomp__prim_data__remove_sym_name_prefix_3_0, 4,3,7,1)
MR_decl_label3(mdbcomp__prim_data__remove_sym_name_prefix_3_1, 4,3,6)
MR_decl_label4(mdbcomp__prim_data__remove_sym_name_suffix_3_0, 4,3,7,1)
MR_decl_label3(mdbcomp__prim_data__special_pred_name_arity_4_0, 3,4,5)
MR_decl_label4(mdbcomp__prim_data__special_pred_name_arity_4_1, 3,4,5,1)
MR_decl_label4(mdbcomp__prim_data__special_pred_name_arity_4_2, 3,4,5,1)
MR_decl_label4(mdbcomp__prim_data__strip_outermost_qualifier_3_0, 5,4,23,1)
MR_decl_label1(mdbcomp__prim_data__sym_name_get_module_name_2_0, 1)
MR_decl_label1(mdbcomp__prim_data__sym_name_get_module_name_default_3_0, 3)
MR_decl_label1(mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0, 3)
MR_decl_label3(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0, 7,8,2)
MR_decl_label2(fn__mdbcomp__prim_data__get_ancestors_2_2_0, 5,2)
MR_decl_label1(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0, 2)
MR_decl_label1(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0, 2)
MR_decl_label2(fn__mdbcomp__prim_data__outermost_qualifier_1_0, 4,2)
MR_decl_label7(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0, 3,5,6,7,8,9,2)
MR_decl_label2(fn__mdbcomp__prim_data__sym_name_to_list_1_0, 18,5)
MR_decl_label2(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0, 19,4)
MR_decl_label3(fn__mdbcomp__prim_data__transform_sym_base_name_2_0, 4,3,6)
MR_decl_label1(fn__mdbcomp__prim_data__unqualify_name_1_0, 3)
MR_decl_label7(__Unify___mdbcomp__prim_data__proc_label_0_0, 7,9,25,5,12,14,1)
MR_decl_label4(__Unify___mdbcomp__prim_data__sym_name_0_0, 7,15,5,1)
MR_decl_label10(__Compare___mdbcomp__prim_data__proc_label_0_0, 3,2,9,13,17,21,25,7,5,35)
MR_decl_label6(__Compare___mdbcomp__prim_data__proc_label_0_0, 37,41,45,49,53,126)
MR_decl_label7(__Compare___mdbcomp__prim_data__sym_name_0_0, 3,2,9,7,5,15,45)
MR_decl_static(fn__mdbcomp__prim_data__get_ancestors_2_2_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__get_ancestors_1_0)
MR_def_extern_entry(mdbcomp__prim_data__special_pred_name_arity_4_0)
MR_def_extern_entry(mdbcomp__prim_data__special_pred_name_arity_4_1)
MR_def_extern_entry(mdbcomp__prim_data__special_pred_name_arity_4_2)
MR_def_extern_entry(fn__mdbcomp__prim_data__get_special_pred_id_generic_name_1_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__sym_name_to_list_1_0)
MR_def_extern_entry(mdbcomp__prim_data__is_submodule_2_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__unqualify_name_1_0)
MR_def_extern_entry(mdbcomp__prim_data__sym_name_get_module_name_2_0)
MR_def_extern_entry(mdbcomp__prim_data__sym_name_get_module_name_default_3_0)
MR_def_extern_entry(mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0)
MR_def_extern_entry(mdbcomp__prim_data__match_sym_name_2_0)
MR_def_extern_entry(mdbcomp__prim_data__remove_sym_name_prefix_3_0)
MR_def_extern_entry(mdbcomp__prim_data__remove_sym_name_prefix_3_1)
MR_def_extern_entry(mdbcomp__prim_data__remove_sym_name_suffix_3_0)
MR_def_extern_entry(mdbcomp__prim_data__add_sym_name_suffix_3_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__transform_sym_base_name_2_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__outermost_qualifier_1_0)
MR_def_extern_entry(mdbcomp__prim_data__strip_outermost_qualifier_3_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_table_statistics_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_rtti_implementation_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__all_builtin_modules_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_exception_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_univ_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_list_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_string_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_io_module_0_0)
MR_def_extern_entry(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0)
MR_def_extern_entry(mdbcomp__prim_data__is_std_lib_module_name_2_0)
MR_def_extern_entry(mdbcomp__prim_data__any_mercury_builtin_module_1_0)
MR_def_extern_entry(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0)
MR_def_extern_entry(__Unify___mdbcomp__prim_data__module_name_0_0)
MR_def_extern_entry(__Compare___mdbcomp__prim_data__module_name_0_0)
MR_def_extern_entry(__Unify___mdbcomp__prim_data__pred_or_func_0_0)
MR_def_extern_entry(__Compare___mdbcomp__prim_data__pred_or_func_0_0)
MR_def_extern_entry(__Unify___mdbcomp__prim_data__proc_label_0_0)
MR_def_extern_entry(__Compare___mdbcomp__prim_data__proc_label_0_0)
MR_def_extern_entry(__Unify___mdbcomp__prim_data__special_pred_id_0_0)
MR_def_extern_entry(__Compare___mdbcomp__prim_data__special_pred_id_0_0)
MR_def_extern_entry(__Unify___mdbcomp__prim_data__sym_name_0_0)
MR_def_extern_entry(__Compare___mdbcomp__prim_data__sym_name_0_0)
MR_def_extern_entry(__Unify___mdbcomp__prim_data__trace_port_0_0)
MR_def_extern_entry(__Compare___mdbcomp__prim_data__trace_port_0_0)

static const struct mercury_type_0 mercury_common_0[16] =
{
{
MR_string_const("builtin", 7)
},
{
MR_string_const("private_builtin", 15)
},
{
MR_string_const("region_builtin", 14)
},
{
MR_string_const("stm_builtin", 11)
},
{
MR_string_const("table_builtin", 13)
},
{
MR_string_const("table_statistics", 16)
},
{
MR_string_const("profiling_builtin", 17)
},
{
MR_string_const("term_size_prof_builtin", 22)
},
{
MR_string_const("par_builtin", 11)
},
{
MR_string_const("rtti_implementation", 19)
},
{
MR_string_const("ssdb", 4)
},
{
MR_string_const("exception", 9)
},
{
MR_string_const("univ", 4)
},
{
MR_string_const("list", 4)
},
{
MR_string_const("string", 6)
},
{
MR_string_const("io", 2)
},
};

static const struct mercury_type_1 mercury_common_1[11] =
{
{
{
MR_TAG_COMMON(0,0,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,0,9),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(0,0,8),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(0,0,7),
MR_TAG_COMMON(1,1,2)
}
},
{
{
MR_TAG_COMMON(0,0,6),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(0,0,5),
MR_TAG_COMMON(1,1,4)
}
},
{
{
MR_TAG_COMMON(0,0,4),
MR_TAG_COMMON(1,1,5)
}
},
{
{
MR_TAG_COMMON(0,0,3),
MR_TAG_COMMON(1,1,6)
}
},
{
{
MR_TAG_COMMON(0,0,2),
MR_TAG_COMMON(1,1,7)
}
},
{
{
MR_TAG_COMMON(0,0,1),
MR_TAG_COMMON(1,1,8)
}
},
{
{
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(1,1,9)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_module_name_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__prim_data__module_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__prim_data__module_name_0_0)),
	"mdbcomp.prim_data",
	"module_name",
	{ 0 },
	{ (void *)&mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0 = {
	"pf_predicate",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1 = {
	"pf_function",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__prim_data__enum_value_ordered_pred_or_func_0[] = {
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__prim_data__enum_name_ordered_pred_or_func_0[] = {
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0
};

const MR_Integer mercury_data_mdbcomp__prim_data__functor_number_map_pred_or_func_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__prim_data__pred_or_func_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__prim_data__pred_or_func_0_0)),
	"mdbcomp.prim_data",
	"pred_or_func",
	{ (void *)mercury_data_mdbcomp__prim_data__enum_name_ordered_pred_or_func_0 },
	{ (void *)mercury_data_mdbcomp__prim_data__enum_value_ordered_pred_or_func_0 },
	2,
	4,
	mercury_data_mdbcomp__prim_data__functor_number_map_pred_or_func_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__prim_data__field_types_proc_label_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__prim_data__field_names_proc_label_0_0[] = {
	"ord_defining_module",
	"ord_p_or_f",
	"ord_declaring_module",
	"ord_pred_name",
	"ord_arity",
	"ord_mode_number"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__prim_data__du_functor_desc_proc_label_0_0 = {
	"ordinary_proc_label",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__prim_data__field_types_proc_label_0_0,
	mercury_data_mdbcomp__prim_data__field_names_proc_label_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__prim_data__field_types_proc_label_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__prim_data__field_names_proc_label_0_1[] = {
	"spec_defining_module",
	"spec_spec_id",
	"spec_type_module",
	"spec_type_name",
	"spec_type_arity",
	"spec_mode_number"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__prim_data__du_functor_desc_proc_label_0_1 = {
	"special_proc_label",
	6,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__prim_data__field_types_proc_label_0_1,
	mercury_data_mdbcomp__prim_data__field_names_proc_label_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__prim_data__du_stag_ordered_proc_label_0_0[] = {
	&mercury_data_mdbcomp__prim_data__du_functor_desc_proc_label_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__prim_data__du_stag_ordered_proc_label_0_1[] = {
	&mercury_data_mdbcomp__prim_data__du_functor_desc_proc_label_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__prim_data__du_ptag_ordered_proc_label_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__prim_data__du_stag_ordered_proc_label_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__prim_data__du_stag_ordered_proc_label_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__prim_data__du_name_ordered_proc_label_0[] = {
	&mercury_data_mdbcomp__prim_data__du_functor_desc_proc_label_0_0,
	&mercury_data_mdbcomp__prim_data__du_functor_desc_proc_label_0_1
};

const MR_Integer mercury_data_mdbcomp__prim_data__functor_number_map_proc_label_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__prim_data__proc_label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__prim_data__proc_label_0_0)),
	"mdbcomp.prim_data",
	"proc_label",
	{ (void *)mercury_data_mdbcomp__prim_data__du_name_ordered_proc_label_0 },
	{ (void *)mercury_data_mdbcomp__prim_data__du_ptag_ordered_proc_label_0 },
	2,
	4,
	mercury_data_mdbcomp__prim_data__functor_number_map_proc_label_0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0 = {
	"spec_pred_unify",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1 = {
	"spec_pred_index",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2 = {
	"spec_pred_compare",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3 = {
	"spec_pred_init",
	3
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__prim_data__enum_value_ordered_special_pred_id_0[] = {
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__prim_data__enum_name_ordered_special_pred_id_0[] = {
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0
};

const MR_Integer mercury_data_mdbcomp__prim_data__functor_number_map_special_pred_id_0[] = {
	3,
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__prim_data__special_pred_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__prim_data__special_pred_id_0_0)),
	"mdbcomp.prim_data",
	"special_pred_id",
	{ (void *)mercury_data_mdbcomp__prim_data__enum_name_ordered_special_pred_id_0 },
	{ (void *)mercury_data_mdbcomp__prim_data__enum_value_ordered_special_pred_id_0 },
	4,
	4,
	mercury_data_mdbcomp__prim_data__functor_number_map_special_pred_id_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__prim_data__field_types_sym_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__prim_data__du_functor_desc_sym_name_0_0 = {
	"unqualified",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__prim_data__field_types_sym_name_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__prim_data__field_types_sym_name_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__prim_data__du_functor_desc_sym_name_0_1 = {
	"qualified",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__prim_data__field_types_sym_name_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__prim_data__du_stag_ordered_sym_name_0_0[] = {
	&mercury_data_mdbcomp__prim_data__du_functor_desc_sym_name_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__prim_data__du_stag_ordered_sym_name_0_1[] = {
	&mercury_data_mdbcomp__prim_data__du_functor_desc_sym_name_0_1

};

const MR_DuPtagLayout mercury_data_mdbcomp__prim_data__du_ptag_ordered_sym_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__prim_data__du_stag_ordered_sym_name_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__prim_data__du_stag_ordered_sym_name_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__prim_data__du_name_ordered_sym_name_0[] = {
	&mercury_data_mdbcomp__prim_data__du_functor_desc_sym_name_0_1,
	&mercury_data_mdbcomp__prim_data__du_functor_desc_sym_name_0_0
};

const MR_Integer mercury_data_mdbcomp__prim_data__functor_number_map_sym_name_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__prim_data__sym_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__prim_data__sym_name_0_0)),
	"mdbcomp.prim_data",
	"sym_name",
	{ (void *)mercury_data_mdbcomp__prim_data__du_name_ordered_sym_name_0 },
	{ (void *)mercury_data_mdbcomp__prim_data__du_ptag_ordered_sym_name_0 },
	2,
	4,
	mercury_data_mdbcomp__prim_data__functor_number_map_sym_name_0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_0 = {
	"port_call",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_1 = {
	"port_exit",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_2 = {
	"port_redo",
	2
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_3 = {
	"port_fail",
	3
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_4 = {
	"port_tailrec_call",
	4
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_5 = {
	"port_exception",
	5
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_6 = {
	"port_ite_cond",
	6
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_7 = {
	"port_ite_then",
	7
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_8 = {
	"port_ite_else",
	8
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_9 = {
	"port_neg_enter",
	9
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_10 = {
	"port_neg_success",
	10
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_11 = {
	"port_neg_failure",
	11
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_12 = {
	"port_disj_first",
	12
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_13 = {
	"port_disj_later",
	13
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_14 = {
	"port_switch",
	14
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_15 = {
	"port_user",
	15
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__prim_data__enum_value_ordered_trace_port_0[] = {
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_0,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_1,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_2,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_3,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_4,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_5,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_6,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_7,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_8,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_9,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_10,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_11,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_12,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_13,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_14,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_15
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__prim_data__enum_name_ordered_trace_port_0[] = {
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_0,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_12,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_13,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_5,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_1,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_3,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_6,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_8,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_7,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_9,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_11,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_10,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_2,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_14,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_4,
	&mercury_data_mdbcomp__prim_data__enum_functor_desc_trace_port_0_15
};

const MR_Integer mercury_data_mdbcomp__prim_data__functor_number_map_trace_port_0[] = {
	0,
	4,
	12,
	5,
	14,
	3,
	6,
	8,
	7,
	9,
	11,
	10,
	1,
	2,
	13,
	15 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__prim_data__trace_port_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__prim_data__trace_port_0_0)),
	"mdbcomp.prim_data",
	"trace_port",
	{ (void *)mercury_data_mdbcomp__prim_data__enum_name_ordered_trace_port_0 },
	{ (void *)mercury_data_mdbcomp__prim_data__enum_value_ordered_trace_port_0 },
	16,
	4,
	mercury_data_mdbcomp__prim_data__functor_number_map_trace_port_0
};




MR_BEGIN_MODULE(mdbcomp__prim_data_module0)
	MR_init_entry1(fn__mdbcomp__prim_data__get_ancestors_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__get_ancestors_2_2_0);
	MR_init_label2(fn__mdbcomp__prim_data__get_ancestors_2_2_0,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_ancestors_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__prim_data__get_ancestors_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__get_ancestors_2_2_0_i2);
	}
MR_def_label(fn__mdbcomp__prim_data__get_ancestors_2_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_r1,0))
		continue;
	}
	break;
	} /* end while */
MR_def_label(fn__mdbcomp__prim_data__get_ancestors_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module1)
	MR_init_entry1(fn__mdbcomp__prim_data__get_ancestors_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__get_ancestors_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_ancestors'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__get_ancestors_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__get_ancestors_2_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module2)
	MR_init_entry1(mdbcomp__prim_data__special_pred_name_arity_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__special_pred_name_arity_4_0);
	MR_init_label3(mdbcomp__prim_data__special_pred_name_arity_4_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_name_arity'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__special_pred_name_arity_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("compare", 7);
	MR_r2 = (MR_Word) MR_string_const("__Compare__", 11);
	MR_r3 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("index", 5);
	MR_r2 = (MR_Word) MR_string_const("__Index__", 9);
	MR_r3 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("initialise", 10);
	MR_r2 = (MR_Word) MR_string_const("__Initialise__", 14);
	MR_r3 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unify", 5);
	MR_r2 = (MR_Word) MR_string_const("__Unify__", 9);
	MR_r3 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module3)
	MR_init_entry1(mdbcomp__prim_data__special_pred_name_arity_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__special_pred_name_arity_4_1);
	MR_init_label4(mdbcomp__prim_data__special_pred_name_arity_4_1,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_name_arity'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__special_pred_name_arity_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("index", 5)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_1_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const("__Index__", 9);
	MR_r4 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unify", 5)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_1_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("__Unify__", 9);
	MR_r4 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("compare", 7)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_1_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_string_const("__Compare__", 11);
	MR_r4 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("initialise", 10)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_1_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_string_const("__Initialise__", 14);
	MR_r4 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module4)
	MR_init_entry1(mdbcomp__prim_data__special_pred_name_arity_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__special_pred_name_arity_4_2);
	MR_init_label4(mdbcomp__prim_data__special_pred_name_arity_4_2,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_name_arity'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__special_pred_name_arity_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("__Index__", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_2_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r3 = (MR_Word) MR_string_const("index", 5);
	MR_r4 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("__Unify__", 9)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_2_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Word) MR_string_const("unify", 5);
	MR_r4 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("__Compare__", 11)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_2_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r3 = (MR_Word) MR_string_const("compare", 7);
	MR_r4 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("__Initialise__", 14)) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__special_pred_name_arity_4_2_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r3 = (MR_Word) MR_string_const("initialise", 10);
	MR_r4 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__special_pred_name_arity_4_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module5)
	MR_init_entry1(fn__mdbcomp__prim_data__get_special_pred_id_generic_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__get_special_pred_id_generic_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_special_pred_id_generic_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__get_special_pred_id_generic_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdbcomp__prim_data__special_pred_name_arity_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module6)
	MR_init_entry1(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0);
	MR_init_label1(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_special_pred_id_target_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_0,
		fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0_i2);
MR_def_label(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module7)
	MR_init_entry1(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0);
	MR_init_label1(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_special_pred_id_arity'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_0,
		fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0_i2);
MR_def_label(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module8)
	MR_init_entry1(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__add_outermost_qualifier_2_0);
	MR_init_label3(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0,7,8,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_outermost_qualifier'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__add_outermost_qualifier_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0_i2);
	}
	MR_r4 = (MR_Word) MR_sp;
MR_def_label(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r2,0))
		continue;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_r2, 0);
	}
	break;
	} /* end while */
MR_def_label(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r4))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__sub_string_search_3_0);
MR_decl_entry(string__left_3_0);
MR_decl_entry(string__length_2_0);
MR_decl_entry(string__right_3_0);

MR_BEGIN_MODULE(mdbcomp__prim_data_module9)
	MR_init_entry1(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0);
	MR_init_label7(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,3,5,6,7,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_sym_name_sep'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i3);
MR_def_label(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i2);
	}
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__left_3_0,
		fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i5);
MR_def_label(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__length_2_0,
		fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i6);
MR_def_label(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(string__length_2_0,
		fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i7);
MR_def_label(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (((MR_Integer) MR_sv(5) - (MR_Integer) MR_sv(3)) - (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(string__right_3_0,
		fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i8);
MR_def_label(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,
		fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0_i9);
MR_def_label(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__add_outermost_qualifier_2_0);
	}
MR_def_label(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module10)
	MR_init_entry1(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__string_to_sym_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'string_to_sym_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__string_to_sym_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__string_to_sym_name_sep_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(mdbcomp__prim_data_module11)
	MR_init_entry1(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
	MR_init_label2(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,19,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_string_sep'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0_i19);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0_i4);
MR_def_label(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module12)
	MR_init_entry1(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__sym_name_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdbcomp__prim_data_module13)
	MR_init_entry1(fn__mdbcomp__prim_data__sym_name_to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__sym_name_to_list_1_0);
	MR_init_label2(fn__mdbcomp__prim_data__sym_name_to_list_1_0,18,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__sym_name_to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__sym_name_to_list_1_0_i18);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__mdbcomp__prim_data__sym_name_to_list_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__mdbcomp__prim_data__sym_name_to_list_1_0,
		fn__mdbcomp__prim_data__sym_name_to_list_1_0_i5);
MR_def_label(fn__mdbcomp__prim_data__sym_name_to_list_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module14)
	MR_init_entry1(mdbcomp__prim_data__is_submodule_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__is_submodule_2_0);
	MR_init_label4(mdbcomp__prim_data__is_submodule_2_0,19,5,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_submodule'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__is_submodule_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__prim_data__is_submodule_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__is_submodule_2_0_i5);
MR_def_label(mdbcomp__prim_data__is_submodule_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__is_submodule_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__is_submodule_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdbcomp__prim_data__is_submodule_2_0_i19);
MR_def_label(mdbcomp__prim_data__is_submodule_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(mdbcomp__prim_data__is_submodule_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module15)
	MR_init_entry1(fn__mdbcomp__prim_data__unqualify_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__unqualify_name_1_0);
	MR_init_label1(fn__mdbcomp__prim_data__unqualify_name_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unqualify_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__unqualify_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__unqualify_name_1_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__mdbcomp__prim_data__unqualify_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module16)
	MR_init_entry1(mdbcomp__prim_data__sym_name_get_module_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__sym_name_get_module_name_2_0);
	MR_init_label1(mdbcomp__prim_data__sym_name_get_module_name_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_get_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__sym_name_get_module_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__sym_name_get_module_name_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__sym_name_get_module_name_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module17)
	MR_init_entry1(mdbcomp__prim_data__sym_name_get_module_name_default_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__sym_name_get_module_name_default_3_0);
	MR_init_label1(mdbcomp__prim_data__sym_name_get_module_name_default_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_get_module_name_default'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__sym_name_get_module_name_default_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__sym_name_get_module_name_default_3_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_proceed();
MR_def_label(mdbcomp__prim_data__sym_name_get_module_name_default_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module18)
	MR_init_entry1(mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0);
	MR_init_label1(mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_get_module_name_default_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_proceed();
	}
MR_def_label(mdbcomp__prim_data__sym_name_get_module_name_default_name_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module19)
	MR_init_entry1(mdbcomp__prim_data__match_sym_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__match_sym_name_2_0);
	MR_init_label3(mdbcomp__prim_data__match_sym_name_2_0,3,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match_sym_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__match_sym_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__match_sym_name_2_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__match_sym_name_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(mdbcomp__prim_data__match_sym_name_2_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_localtailcall(mdbcomp__prim_data__match_sym_name_2_0);
	}
MR_def_label(mdbcomp__prim_data__match_sym_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__match_sym_name_2_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(1, MR_r2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_proceed();
	}
MR_def_label(mdbcomp__prim_data__match_sym_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_proceed();
	}
MR_def_label(mdbcomp__prim_data__match_sym_name_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_1);

MR_BEGIN_MODULE(mdbcomp__prim_data_module20)
	MR_init_entry1(mdbcomp__prim_data__remove_sym_name_prefix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__remove_sym_name_prefix_3_0);
	MR_init_label4(mdbcomp__prim_data__remove_sym_name_prefix_3_0,4,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_sym_name_prefix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__remove_sym_name_prefix_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__remove_sym_name_prefix_3_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(string__append_3_1,
		mdbcomp__prim_data__remove_sym_name_prefix_3_0_i4);
MR_def_label(mdbcomp__prim_data__remove_sym_name_prefix_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__remove_sym_name_prefix_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__prim_data__remove_sym_name_prefix_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__append_3_1,
		mdbcomp__prim_data__remove_sym_name_prefix_3_0_i7);
MR_def_label(mdbcomp__prim_data__remove_sym_name_prefix_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__remove_sym_name_prefix_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__prim_data__remove_sym_name_prefix_3_0,1)
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

MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(mdbcomp__prim_data_module21)
	MR_init_entry1(mdbcomp__prim_data__remove_sym_name_prefix_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__remove_sym_name_prefix_3_1);
	MR_init_label3(mdbcomp__prim_data__remove_sym_name_prefix_3_1,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_sym_name_prefix'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__remove_sym_name_prefix_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__remove_sym_name_prefix_3_1_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(string__append_3_2,
		mdbcomp__prim_data__remove_sym_name_prefix_3_1_i4);
MR_def_label(mdbcomp__prim_data__remove_sym_name_prefix_3_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mdbcomp__prim_data__remove_sym_name_prefix_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(string__append_3_2,
		mdbcomp__prim_data__remove_sym_name_prefix_3_1_i6);
MR_def_label(mdbcomp__prim_data__remove_sym_name_prefix_3_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__remove_suffix_3_0);

MR_BEGIN_MODULE(mdbcomp__prim_data_module22)
	MR_init_entry1(mdbcomp__prim_data__remove_sym_name_suffix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__remove_sym_name_suffix_3_0);
	MR_init_label4(mdbcomp__prim_data__remove_sym_name_suffix_3_0,4,3,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_sym_name_suffix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__remove_sym_name_suffix_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__remove_sym_name_suffix_3_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		mdbcomp__prim_data__remove_sym_name_suffix_3_0_i4);
MR_def_label(mdbcomp__prim_data__remove_sym_name_suffix_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__remove_sym_name_suffix_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__prim_data__remove_sym_name_suffix_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		mdbcomp__prim_data__remove_sym_name_suffix_3_0_i7);
MR_def_label(mdbcomp__prim_data__remove_sym_name_suffix_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__remove_sym_name_suffix_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__prim_data__remove_sym_name_suffix_3_0,1)
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


MR_BEGIN_MODULE(mdbcomp__prim_data_module23)
	MR_init_entry1(mdbcomp__prim_data__add_sym_name_suffix_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__add_sym_name_suffix_3_0);
	MR_init_label3(mdbcomp__prim_data__add_sym_name_suffix_3_0,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_sym_name_suffix'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__add_sym_name_suffix_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__add_sym_name_suffix_3_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(string__append_3_2,
		mdbcomp__prim_data__add_sym_name_suffix_3_0_i4);
MR_def_label(mdbcomp__prim_data__add_sym_name_suffix_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mdbcomp__prim_data__add_sym_name_suffix_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(string__append_3_2,
		mdbcomp__prim_data__add_sym_name_suffix_3_0_i6);
MR_def_label(mdbcomp__prim_data__add_sym_name_suffix_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(mdbcomp__prim_data_module24)
	MR_init_entry1(fn__mdbcomp__prim_data__transform_sym_base_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__transform_sym_base_name_2_0);
	MR_init_label3(fn__mdbcomp__prim_data__transform_sym_base_name_2_0,4,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'transform_sym_base_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__transform_sym_base_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__transform_sym_base_name_2_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mdbcomp__prim_data__transform_sym_base_name_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mdbcomp__prim_data__transform_sym_base_name_2_0_i4);
MR_def_label(fn__mdbcomp__prim_data__transform_sym_base_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__mdbcomp__prim_data__transform_sym_base_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__mdbcomp__prim_data__transform_sym_base_name_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__fn__mdbcomp__prim_data__transform_sym_base_name_2_0_i6);
MR_def_label(fn__mdbcomp__prim_data__transform_sym_base_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module25)
	MR_init_entry1(fn__mdbcomp__prim_data__outermost_qualifier_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__outermost_qualifier_1_0);
	MR_init_label2(fn__mdbcomp__prim_data__outermost_qualifier_1_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'outermost_qualifier'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__outermost_qualifier_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__prim_data__outermost_qualifier_1_0_i2);
	}
MR_def_label(fn__mdbcomp__prim_data__outermost_qualifier_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r1,0))
		continue;
	break;
	} /* end while */
MR_def_label(fn__mdbcomp__prim_data__outermost_qualifier_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module26)
	MR_init_entry1(mdbcomp__prim_data__strip_outermost_qualifier_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__strip_outermost_qualifier_3_0);
	MR_init_label4(mdbcomp__prim_data__strip_outermost_qualifier_3_0,5,4,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'strip_outermost_qualifier'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__strip_outermost_qualifier_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__strip_outermost_qualifier_3_0_i23);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__strip_outermost_qualifier_3_0_i4);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdbcomp__prim_data__strip_outermost_qualifier_3_0,
		mdbcomp__prim_data__strip_outermost_qualifier_3_0_i5);
MR_def_label(mdbcomp__prim_data__strip_outermost_qualifier_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__strip_outermost_qualifier_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdbcomp__prim_data__strip_outermost_qualifier_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__strip_outermost_qualifier_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__prim_data__strip_outermost_qualifier_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module27)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_public_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module28)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_private_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module29)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_region_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_region_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module30)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_stm_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_stm_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module31)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_table_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_table_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module32)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_table_statistics_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_table_statistics_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_table_statistics_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_table_statistics_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module33)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_profiling_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_profiling_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module34)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_term_size_prof_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_term_size_prof_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module35)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_par_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_par_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module36)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_rtti_implementation_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_rtti_implementation_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_rtti_implementation_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_rtti_implementation_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module37)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_ssdb_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_ssdb_builtin_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module38)
	MR_init_entry1(fn__mdbcomp__prim_data__all_builtin_modules_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__all_builtin_modules_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_builtin_modules'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__all_builtin_modules_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,1,10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module39)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_exception_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_exception_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_exception_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_exception_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module40)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_univ_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_univ_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_univ_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_univ_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module41)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_list_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_list_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_list_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_list_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module42)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_string_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_string_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_string_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_string_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module43)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_io_module_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_io_module_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_io_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_io_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module44)
	MR_init_entry1(fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_std_lib_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__prim_data__mercury_std_lib_module_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(library__mercury_std_library_module_1_0);

MR_BEGIN_MODULE(mdbcomp__prim_data_module45)
	MR_init_entry1(mdbcomp__prim_data__is_std_lib_module_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__is_std_lib_module_name_2_0);
	MR_init_label3(mdbcomp__prim_data__is_std_lib_module_name_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_std_lib_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__is_std_lib_module_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		mdbcomp__prim_data__is_std_lib_module_name_2_0_i2);
MR_def_label(mdbcomp__prim_data__is_std_lib_module_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__mercury_std_library_module_1_0,
		mdbcomp__prim_data__is_std_lib_module_name_2_0_i3);
MR_def_label(mdbcomp__prim_data__is_std_lib_module_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__prim_data__is_std_lib_module_name_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__prim_data__is_std_lib_module_name_2_0,1)
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


MR_BEGIN_MODULE(mdbcomp__prim_data_module46)
	MR_init_entry1(mdbcomp__prim_data__any_mercury_builtin_module_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__any_mercury_builtin_module_1_0);
	MR_init_label8(mdbcomp__prim_data__any_mercury_builtin_module_1_0,5,9,13,17,21,25,29,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'any_mercury_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__any_mercury_builtin_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__any_mercury_builtin_module_1_0_i5);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__any_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__any_mercury_builtin_module_1_0_i9);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__any_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__any_mercury_builtin_module_1_0_i13);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__any_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__any_mercury_builtin_module_1_0_i17);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__any_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__any_mercury_builtin_module_1_0_i21);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__any_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__any_mercury_builtin_module_1_0_i25);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__any_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__any_mercury_builtin_module_1_0_i29);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__any_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(mdbcomp__prim_data__any_mercury_builtin_module_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module47)
	MR_init_entry1(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0);
	MR_init_label5(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0,5,9,13,17,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_traced_mercury_builtin_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i5);
MR_def_label(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i9);
MR_def_label(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i13);
MR_def_label(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i17);
MR_def_label(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(mdbcomp__prim_data__non_traced_mercury_builtin_module_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module48)
	MR_init_entry1(__Unify___mdbcomp__prim_data__module_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__prim_data__module_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__prim_data__module_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module49)
	MR_init_entry1(__Compare___mdbcomp__prim_data__module_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__prim_data__module_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__prim_data__module_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module50)
	MR_init_entry1(__Unify___mdbcomp__prim_data__pred_or_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__prim_data__pred_or_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__prim_data__pred_or_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdbcomp__prim_data_module51)
	MR_init_entry1(__Compare___mdbcomp__prim_data__pred_or_func_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__prim_data__pred_or_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__prim_data__pred_or_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module52)
	MR_init_entry1(__Unify___mdbcomp__prim_data__proc_label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__prim_data__proc_label_0_0);
	MR_init_label7(__Unify___mdbcomp__prim_data__proc_label_0_0,7,9,25,5,12,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__prim_data__proc_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i25);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr4, 5);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdbcomp__prim_data__proc_label_0_0_i7);
MR_def_label(__Unify___mdbcomp__prim_data__proc_label_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdbcomp__prim_data__proc_label_0_0_i9);
MR_def_label(__Unify___mdbcomp__prim_data__proc_label_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_sv(8)) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	MR_r1 = (MR_sv(5) == MR_sv(10));
	MR_decr_sp_and_return(11);
MR_def_label(__Unify___mdbcomp__prim_data__proc_label_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__prim_data__proc_label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
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
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(1, MR_tempr2, 5);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdbcomp__prim_data__proc_label_0_0_i12);
MR_def_label(__Unify___mdbcomp__prim_data__proc_label_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdbcomp__prim_data__proc_label_0_0_i14);
MR_def_label(__Unify___mdbcomp__prim_data__proc_label_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(3), (char *) (MR_Word *) MR_sv(8)) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__proc_label_0_0_i1);
	}
	MR_r1 = (MR_sv(5) == MR_sv(10));
	MR_decr_sp_and_return(11);
MR_def_label(__Unify___mdbcomp__prim_data__proc_label_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdbcomp__prim_data_module53)
	MR_init_entry1(__Compare___mdbcomp__prim_data__proc_label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__prim_data__proc_label_0_0);
	MR_init_label10(__Compare___mdbcomp__prim_data__proc_label_0_0,3,2,9,13,17,21,25,7,5,35)
	MR_init_label6(__Compare___mdbcomp__prim_data__proc_label_0_0,37,41,45,49,53,126)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__prim_data__proc_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i2);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i9);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i13);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i17);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i21);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i25);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i35);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i37);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i41);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i45);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i49);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__prim_data__proc_label_0_0_i53);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__proc_label_0_0_i126);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__prim_data__proc_label_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module54)
	MR_init_entry1(__Unify___mdbcomp__prim_data__special_pred_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__prim_data__special_pred_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__prim_data__special_pred_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module55)
	MR_init_entry1(__Compare___mdbcomp__prim_data__special_pred_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__prim_data__special_pred_id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__prim_data__special_pred_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module56)
	MR_init_entry1(__Unify___mdbcomp__prim_data__sym_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__prim_data__sym_name_0_0);
	MR_init_label4(__Unify___mdbcomp__prim_data__sym_name_0_0,7,15,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__prim_data__sym_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__sym_name_0_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__sym_name_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__sym_name_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___mdbcomp__prim_data__sym_name_0_0_i7);
MR_def_label(__Unify___mdbcomp__prim_data__sym_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__sym_name_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__prim_data__sym_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__prim_data__sym_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__prim_data__sym_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdbcomp__prim_data__sym_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module57)
	MR_init_entry1(__Compare___mdbcomp__prim_data__sym_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__prim_data__sym_name_0_0);
	MR_init_label7(__Compare___mdbcomp__prim_data__sym_name_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__prim_data__sym_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__sym_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__prim_data__sym_name_0_0_i2);
MR_def_label(__Compare___mdbcomp__prim_data__sym_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__prim_data__sym_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__sym_name_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__sym_name_0_0_i7);
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
	MR_np_localcall_lab(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___mdbcomp__prim_data__sym_name_0_0_i9);
MR_def_label(__Compare___mdbcomp__prim_data__sym_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__sym_name_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__prim_data__sym_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__prim_data__sym_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdbcomp__prim_data__sym_name_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdbcomp__prim_data__sym_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdbcomp__prim_data__sym_name_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module58)
	MR_init_entry1(__Unify___mdbcomp__prim_data__trace_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__prim_data__trace_port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__prim_data__trace_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__prim_data_module59)
	MR_init_entry1(__Compare___mdbcomp__prim_data__trace_port_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__prim_data__trace_port_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__prim_data__trace_port_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp__prim_data_maybe_bunch_0(void)
{
	mdbcomp__prim_data_module0();
	mdbcomp__prim_data_module1();
	mdbcomp__prim_data_module2();
	mdbcomp__prim_data_module3();
	mdbcomp__prim_data_module4();
	mdbcomp__prim_data_module5();
	mdbcomp__prim_data_module6();
	mdbcomp__prim_data_module7();
	mdbcomp__prim_data_module8();
	mdbcomp__prim_data_module9();
	mdbcomp__prim_data_module10();
	mdbcomp__prim_data_module11();
	mdbcomp__prim_data_module12();
	mdbcomp__prim_data_module13();
	mdbcomp__prim_data_module14();
	mdbcomp__prim_data_module15();
	mdbcomp__prim_data_module16();
	mdbcomp__prim_data_module17();
	mdbcomp__prim_data_module18();
	mdbcomp__prim_data_module19();
	mdbcomp__prim_data_module20();
	mdbcomp__prim_data_module21();
	mdbcomp__prim_data_module22();
	mdbcomp__prim_data_module23();
	mdbcomp__prim_data_module24();
	mdbcomp__prim_data_module25();
	mdbcomp__prim_data_module26();
	mdbcomp__prim_data_module27();
	mdbcomp__prim_data_module28();
	mdbcomp__prim_data_module29();
	mdbcomp__prim_data_module30();
	mdbcomp__prim_data_module31();
	mdbcomp__prim_data_module32();
	mdbcomp__prim_data_module33();
	mdbcomp__prim_data_module34();
	mdbcomp__prim_data_module35();
	mdbcomp__prim_data_module36();
	mdbcomp__prim_data_module37();
	mdbcomp__prim_data_module38();
	mdbcomp__prim_data_module39();
}

static void mercury__mdbcomp__prim_data_maybe_bunch_1(void)
{
	mdbcomp__prim_data_module40();
	mdbcomp__prim_data_module41();
	mdbcomp__prim_data_module42();
	mdbcomp__prim_data_module43();
	mdbcomp__prim_data_module44();
	mdbcomp__prim_data_module45();
	mdbcomp__prim_data_module46();
	mdbcomp__prim_data_module47();
	mdbcomp__prim_data_module48();
	mdbcomp__prim_data_module49();
	mdbcomp__prim_data_module50();
	mdbcomp__prim_data_module51();
	mdbcomp__prim_data_module52();
	mdbcomp__prim_data_module53();
	mdbcomp__prim_data_module54();
	mdbcomp__prim_data_module55();
	mdbcomp__prim_data_module56();
	mdbcomp__prim_data_module57();
	mdbcomp__prim_data_module58();
	mdbcomp__prim_data_module59();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__prim_data__init(void);
void mercury__mdbcomp__prim_data__init_type_tables(void);
void mercury__mdbcomp__prim_data__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__prim_data__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__prim_data__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdbcomp__prim_data__init_threadscope_string_table(void);
#endif

void mercury__mdbcomp__prim_data__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__prim_data_maybe_bunch_0();
	mercury__mdbcomp__prim_data_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__prim_data__type_ctor_info_module_name_0,
		mdbcomp__prim_data__module_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
		mdbcomp__prim_data__pred_or_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
		mdbcomp__prim_data__proc_label_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
		mdbcomp__prim_data__special_pred_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
		mdbcomp__prim_data__sym_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0,
		mdbcomp__prim_data__trace_port_0_0);
	mercury__mdbcomp__prim_data__init_debugger();
}

void mercury__mdbcomp__prim_data__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__prim_data__type_ctor_info_module_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0);
	}
}


void mercury__mdbcomp__prim_data__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__prim_data__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdbcomp__prim_data);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__prim_data__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdbcomp__prim_data__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
