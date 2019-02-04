/*
** Automatically generated from `ilds.m'
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
INIT mercury__ml_backend__ilds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ilds.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ilds.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.ilds.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.ilds.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 44 "ml_backend.ilds.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ml_backend.ilds.c"
#line 49 "ml_backend.ilds.c"
#include "ml_backend.ilds.mh"

#line 52 "ml_backend.ilds.c"
#line 53 "ml_backend.ilds.c"
#ifndef ML_BACKEND__ILDS_DECL_GUARD
#define ML_BACKEND__ILDS_DECL_GUARD

#line 57 "ml_backend.ilds.c"
#line 58 "ml_backend.ilds.c"

#endif
#line 61 "ml_backend.ilds.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ilds__type_ctor_info_alignment_0,
	mercury_data_ml_backend__ilds__type_ctor_info_assembly_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_blockid_0,
	mercury_data_ml_backend__ilds__type_ctor_info_blocktype_0,
	mercury_data_ml_backend__ilds__type_ctor_info_bound_0,
	mercury_data_ml_backend__ilds__type_ctor_info_bounds_0,
	mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0,
	mercury_data_ml_backend__ilds__type_ctor_info_class_member_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_class_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_constant_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0,
	mercury_data_ml_backend__ilds__type_ctor_info_id_0,
	mercury_data_ml_backend__ilds__type_ctor_info_il_call_kind_0,
	mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0,
	mercury_data_ml_backend__ilds__type_ctor_info_il_type_0,
	mercury_data_ml_backend__ilds__type_ctor_info_index_0,
	mercury_data_ml_backend__ilds__type_ctor_info_instr_0,
	mercury_data_ml_backend__ilds__type_ctor_info_label_0,
	mercury_data_ml_backend__ilds__type_ctor_info_locals_0,
	mercury_data_ml_backend__ilds__type_ctor_info_location_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ilds__type_ctor_info_member_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_methodref_0,
	mercury_data_ml_backend__ilds__type_ctor_info_namespace_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_namespace_qual_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_nested_class_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_node_number_0,
	mercury_data_ml_backend__ilds__type_ctor_info_overflow_0,
	mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0,
	mercury_data_ml_backend__ilds__type_ctor_info_signature_0,
	mercury_data_ml_backend__ilds__type_ctor_info_signed_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0,
	mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0,
	mercury_data_ml_backend__ilds__type_ctor_info_target_0,
	mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0,
	mercury_data_ml_backend__ilds__type_ctor_info_variable_0;
MR_decl_label1(fn__ml_backend__ilds__append_nested_class_name_2_0, 2)
MR_decl_label2(fn__ml_backend__ilds__append_toplevel_class_name_2_0, 3,5)
MR_decl_label6(fn__ml_backend__ilds__calculate_max_stack_2_3_0, 31,4,7,8,10,30)
MR_decl_label4(fn__ml_backend__ilds__get_call_stack_difference_1_0, 4,6,7,10)
MR_decl_label4(fn__ml_backend__ilds__get_calli_stack_difference_1_0, 2,4,5,8)
MR_decl_label3(fn__ml_backend__ilds__get_class_namespace_1_0, 3,6,2)
MR_decl_label2(fn__ml_backend__ilds__get_class_suffix_1_0, 3,2)
MR_decl_label10(fn__ml_backend__ilds__get_stack_difference_1_0, 108,111,22,24,129,74,76,88,114,90)
MR_decl_label3(fn__ml_backend__ilds__get_stack_difference_1_0, 95,99,104)
MR_decl_label3(__Unify___ml_backend__ilds__assembly_name_0_0, 12,5,1)
MR_decl_label4(__Unify___ml_backend__ilds__blocktype_0_0, 9,5,17,1)
MR_decl_label4(__Unify___ml_backend__ilds__bound_0_0, 9,7,13,1)
MR_decl_label2(__Unify___ml_backend__ilds__call_conv_0_0, 4,1)
MR_decl_label3(__Unify___ml_backend__ilds__class_member_name_0_0, 4,8,1)
MR_decl_label3(__Unify___ml_backend__ilds__constant_0_0, 12,5,1)
MR_decl_label3(__Unify___ml_backend__ilds__fieldref_0_0, 4,8,1)
MR_decl_label3(__Unify___ml_backend__ilds__il_method_param_0_0, 4,8,1)
MR_decl_label3(__Unify___ml_backend__ilds__il_type_0_0, 4,8,1)
MR_decl_label10(__Unify___ml_backend__ilds__instr_0_0, 75,112,272,5,8,12,16,24,28,32)
MR_decl_label10(__Unify___ml_backend__ilds__instr_0_0, 36,40,45,49,53,57,61,65,70,73)
MR_decl_label10(__Unify___ml_backend__ilds__instr_0_0, 77,79,84,88,91,93,97,100,104,108)
MR_decl_label10(__Unify___ml_backend__ilds__instr_0_0, 114,118,122,124,128,132,136,140,144,148)
MR_decl_label10(__Unify___ml_backend__ilds__instr_0_0, 153,157,162,166,170,174,176,180,184,189)
MR_decl_label10(__Unify___ml_backend__ilds__instr_0_0, 193,196,200,207,211,216,218,222,226,228)
MR_decl_label10(__Unify___ml_backend__ilds__instr_0_0, 230,234,238,242,246,250,254,256,262,264)
MR_decl_label3(__Unify___ml_backend__ilds__instr_0_0, 268,273,1)
MR_decl_label3(__Unify___ml_backend__ilds__member_name_0_0, 7,11,1)
MR_decl_label9(__Unify___ml_backend__ilds__methodref_0_0, 7,9,11,31,5,16,18,20,1)
MR_decl_label3(__Unify___ml_backend__ilds__ret_type_0_0, 12,5,1)
MR_decl_label4(__Unify___ml_backend__ilds__signature_0_0, 4,6,10,1)
MR_decl_label10(__Unify___ml_backend__ilds__simple_type_0_0, 21,45,52,5,13,15,31,44,53,1)
MR_decl_label4(__Unify___ml_backend__ilds__structured_name_0_0, 4,6,10,1)
MR_decl_label3(__Unify___ml_backend__ilds__target_0_0, 12,5,1)
MR_decl_label3(__Unify___ml_backend__ilds__variable_0_0, 12,5,1)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 95,28,43,98,3,4,5,6,7,8)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 9,10,11,12,13,14,15,16,17,18)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 19,20,21,22,23,24,25,26,27,29)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 30,31,32,33,34,35,36,37,38,39)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 40,41,42,44,45,46,47,48,49,50)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 51,52,53,54,55,56,57,58,59,60)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 61,62,63,64,65,66,67,68,69,70)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 71,72,73,74,75,76,77,78,79,80)
MR_decl_label10(__Index___ml_backend__ilds__instr_0_0, 81,82,83,84,85,86,87,88,89,90)
MR_decl_label4(__Index___ml_backend__ilds__instr_0_0, 91,92,93,94)
MR_decl_label10(__Index___ml_backend__ilds__simple_type_0_0, 27,8,26,30,3,5,6,7,9,10)
MR_decl_label10(__Index___ml_backend__ilds__simple_type_0_0, 11,12,13,14,15,16,17,18,19,20)
MR_decl_label5(__Index___ml_backend__ilds__simple_type_0_0, 21,22,23,24,25)
MR_decl_label7(__Compare___ml_backend__ilds__assembly_name_0_0, 3,2,7,5,10,12,45)
MR_decl_label7(__Compare___ml_backend__ilds__blocktype_0_0, 45,13,47,16,5,40,7)
MR_decl_label9(__Compare___ml_backend__ilds__bound_0_0, 3,2,9,26,18,56,23,21,92)
MR_decl_label4(__Compare___ml_backend__ilds__call_conv_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ml_backend__ilds__class_member_name_0_0, 3,2,5,21)
MR_decl_label5(__Compare___ml_backend__ilds__constant_0_0, 3,2,7,5,10)
MR_decl_label4(__Compare___ml_backend__ilds__fieldref_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ml_backend__ilds__il_method_param_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ml_backend__ilds__il_type_0_0, 3,2,5,21)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 4,5,6,7,99,149,302,10,13,19)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 22,25,30,33,42,45,50,53,58,61)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 66,69,73,76,79,82,85,88,92,96)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 102,105,110,114,117,121,124,131,134,140)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 143,146,152,155,158,161,166,169,172,175)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 178,181,185,188,192,195,198,201,204,207)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 210,214,217,220,226,229,235,238,244,247)
MR_decl_label10(__Compare___ml_backend__ilds__instr_0_0, 250,253,256,261,264,267,270,273,276,279)
MR_decl_label7(__Compare___ml_backend__ilds__instr_0_0, 282,287,292,295,298,8,307)
MR_decl_label5(__Compare___ml_backend__ilds__member_name_0_0, 34,5,9,19,23)
MR_decl_label10(__Compare___ml_backend__ilds__methodref_0_0, 3,2,9,13,17,7,5,25,27,31)
MR_decl_label2(__Compare___ml_backend__ilds__methodref_0_0, 35,90)
MR_decl_label4(__Compare___ml_backend__ilds__ret_type_0_0, 18,7,5,9)
MR_decl_label5(__Compare___ml_backend__ilds__signature_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___ml_backend__ilds__simple_type_0_0, 4,5,6,7,26,48,54,10,16,19)
MR_decl_label4(__Compare___ml_backend__ilds__simple_type_0_0, 35,47,8,59)
MR_decl_label5(__Compare___ml_backend__ilds__structured_name_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___ml_backend__ilds__target_0_0, 3,2,7,5,10)
MR_decl_label5(__Compare___ml_backend__ilds__variable_0_0, 3,2,7,5,10)
MR_decl_static(fn__ml_backend__ilds__get_call_stack_difference_1_0)
MR_decl_static(fn__ml_backend__ilds__get_calli_stack_difference_1_0)
MR_decl_static(fn__ml_backend__ilds__get_stack_difference_1_0)
MR_decl_static(fn__ml_backend__ilds__calculate_max_stack_2_3_0)
MR_def_extern_entry(fn__ml_backend__ilds__calculate_max_stack_1_0)
MR_def_extern_entry(fn__ml_backend__ilds__get_class_namespace_1_0)
MR_def_extern_entry(fn__ml_backend__ilds__get_class_suffix_1_0)
MR_def_extern_entry(fn__ml_backend__ilds__append_toplevel_class_name_2_0)
MR_def_extern_entry(fn__ml_backend__ilds__append_nested_class_name_2_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__alignment_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__alignment_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__assembly_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__assembly_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__blockid_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__blockid_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__blocktype_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__blocktype_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__bound_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__bound_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__bounds_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__bounds_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__call_conv_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__call_conv_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__class_member_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__class_member_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__class_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__class_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__constant_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__constant_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__fieldref_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__fieldref_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__id_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__id_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__il_call_kind_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__il_call_kind_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__il_method_param_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__il_method_param_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__il_type_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__il_type_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__index_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__index_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__instr_0_0)
MR_def_extern_entry(__Index___ml_backend__ilds__instr_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__instr_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__label_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__label_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__locals_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__locals_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__location_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__location_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__member_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__member_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__methodref_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__methodref_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__namespace_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__namespace_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__namespace_qual_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__namespace_qual_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__nested_class_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__nested_class_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__node_number_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__node_number_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__overflow_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__overflow_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__ret_type_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__ret_type_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__signature_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__signature_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__signed_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__signed_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__simple_type_0_0)
MR_def_extern_entry(__Index___ml_backend__ilds__simple_type_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__simple_type_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__structured_name_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__structured_name_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__target_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__target_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__type_modifier_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__type_modifier_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilds__variable_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilds__variable_0_0)
MR_decl_static(ml_backend__ilds__IntroducedFrom__pred__append_toplevel_class_name__470__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ilds__append_toplevel_class_name_2_0_1;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ml_backend__ilds__append_toplevel_class_name_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,0),
MR_COMMON(0,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__ilds, il_type)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_alignment_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__alignment_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__alignment_0_0)),
	"ml_backend.ilds",
	"alignment",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_assembly_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ml_backend__ilds__field_names_assembly_name_0_0[] = {
	"il_module_name",
	"containing_assembly_name"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_assembly_name_0_0 = {
	"module",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_assembly_name_0_0,
	mercury_data_ml_backend__ilds__field_names_assembly_name_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_assembly_name_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_assembly_name_0_1 = {
	"assembly",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_assembly_name_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_assembly_name_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_assembly_name_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_assembly_name_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_assembly_name_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_assembly_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_assembly_name_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_assembly_name_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_assembly_name_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_assembly_name_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_assembly_name_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_assembly_name_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_assembly_name_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__assembly_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__assembly_name_0_0)),
	"ml_backend.ilds",
	"assembly_name",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_assembly_name_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_assembly_name_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_assembly_name_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_blockid_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__blockid_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__blockid_0_0)),
	"ml_backend.ilds",
	"blockid",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__ilds__type_ctor_info_il_type_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__ilds__type_ctor_info_il_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__ilds__type_ctor_info_il_type_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_blocktype_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_0 = {
	"bt_scope",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_blocktype_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_1 = {
	"bt_try",
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
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_blocktype_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_2 = {
	"bt_catch",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_blocktype_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_blocktype_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_blocktype_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_blocktype_0_2[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_2

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_blocktype_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilds__du_stag_ordered_blocktype_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_blocktype_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_blocktype_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_blocktype_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_2,
	&mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_0,
	&mercury_data_ml_backend__ilds__du_functor_desc_blocktype_0_1
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_blocktype_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_blocktype_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__blocktype_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__blocktype_0_0)),
	"ml_backend.ilds",
	"blocktype",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_blocktype_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_blocktype_0 },
	3,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_blocktype_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_bound_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_bound_0_0 = {
	"upper",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_bound_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_bound_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_bound_0_1 = {
	"lower",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_bound_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_bound_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_bound_0_2 = {
	"between",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_bound_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_bound_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_bound_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_bound_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_bound_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_bound_0_2[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_bound_0_2

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_bound_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_bound_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_bound_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_bound_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_bound_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_bound_0_2,
	&mercury_data_ml_backend__ilds__du_functor_desc_bound_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_bound_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_bound_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_bound_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__bound_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__bound_0_0)),
	"ml_backend.ilds",
	"bound",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_bound_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_bound_0 },
	3,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_bound_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_bound_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_bound_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_bound_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_bounds_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__bounds_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__bounds_0_0)),
	"ml_backend.ilds",
	"bounds",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_bound_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_call_kind_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_call_conv_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_call_kind_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_call_conv_0_0 = {
	"call_conv",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_call_conv_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_call_conv_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_call_conv_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_call_conv_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_call_conv_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_call_conv_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_call_conv_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_call_conv_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__call_conv_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__call_conv_0_0)),
	"ml_backend.ilds",
	"call_conv",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_call_conv_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_call_conv_0 },
	1,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_call_conv_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_member_name_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_class_member_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_member_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_class_member_name_0_0 = {
	"class_member_name",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_class_member_name_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_class_member_name_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_class_member_name_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_class_member_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_class_member_name_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_class_member_name_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_class_member_name_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_class_member_name_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_class_member_name_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__class_member_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__class_member_name_0_0)),
	"ml_backend.ilds",
	"class_member_name",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_class_member_name_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_class_member_name_0 },
	1,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_class_member_name_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_class_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__class_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__class_name_0_0)),
	"ml_backend.ilds",
	"class_name",
	{ 0 },
	{ (void *)&mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_constant_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_constant_0_0 = {
	"i",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_constant_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_constant_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_constant_0_1 = {
	"f",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_constant_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_constant_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_constant_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_constant_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_constant_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_constant_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_constant_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_constant_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_constant_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_constant_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_constant_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_constant_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_constant_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__constant_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__constant_0_0)),
	"ml_backend.ilds",
	"constant",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_constant_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_constant_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_constant_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_class_member_name_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_fieldref_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_class_member_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_fieldref_0_0 = {
	"fieldref",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_fieldref_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_fieldref_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_fieldref_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_fieldref_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_fieldref_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_fieldref_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_fieldref_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_fieldref_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__fieldref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__fieldref_0_0)),
	"ml_backend.ilds",
	"fieldref",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_fieldref_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_fieldref_0 },
	1,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_fieldref_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_id_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__id_0_0)),
	"ml_backend.ilds",
	"id",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_0 = {
	"default",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_1 = {
	"vararg",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_2 = {
	"unmanaged_cdecl",
	2
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_3 = {
	"unmanaged_stdcall",
	3
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_4 = {
	"unmanaged_thiscall",
	4
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_5 = {
	"unmanaged_fastcall",
	5
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_value_ordered_il_call_kind_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_1,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_2,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_3,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_4,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_5
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_name_ordered_il_call_kind_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_2,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_5,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_3,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_4,
	&mercury_data_ml_backend__ilds__enum_functor_desc_il_call_kind_0_1
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_il_call_kind_0[] = {
	0,
	5,
	1,
	3,
	4,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_call_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__il_call_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__il_call_kind_0_0)),
	"ml_backend.ilds",
	"il_call_kind",
	{ (void *)mercury_data_ml_backend__ilds__enum_name_ordered_il_call_kind_0 },
	{ (void *)mercury_data_ml_backend__ilds__enum_value_ordered_il_call_kind_0 },
	6,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_il_call_kind_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_il_method_param_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ml_backend__ilds__field_names_il_method_param_0_0[] = {
	"ilmp_type",
	"ilmp_maybe_id"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_il_method_param_0_0 = {
	"il_method_param",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_il_method_param_0_0,
	mercury_data_ml_backend__ilds__field_names_il_method_param_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_il_method_param_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_il_method_param_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_il_method_param_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_il_method_param_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_il_method_param_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_il_method_param_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_il_method_param_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__il_method_param_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__il_method_param_0_0)),
	"ml_backend.ilds",
	"il_method_param",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_il_method_param_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_il_method_param_0 },
	1,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_il_method_param_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_type_modifier_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_il_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_type_modifier_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_il_type_0_0 = {
	"il_type",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_il_type_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_il_type_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_il_type_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_il_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_il_type_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_il_type_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_il_type_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_il_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__il_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__il_type_0_0)),
	"ml_backend.ilds",
	"il_type",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_il_type_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_il_type_0 },
	1,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_il_type_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_index_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__index_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__index_0_0)),
	"ml_backend.ilds",
	"index",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_0 = {
	"comment",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_1 = {
	"label",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_blocktype_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_blocktype_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_2 = {
	"start_block",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_blocktype_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_3 = {
	"end_block",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_4 = {
	"context",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_5 = {
	"il_asm_code",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_overflow_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signed_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_overflow_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_6 = {
	"add",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_6,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_7 = {
	"bitwise_and",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_8 = {
	"arglist",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_target_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_9 = {
	"beq",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_9,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_10 = {
	"bge",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	10,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_10,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_11 = {
	"bgt",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_11,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_12 = {
	"ble",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	12,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_12,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_13 = {
	"blt",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	13,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_13,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_14 = {
	"bne",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	14,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_14,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_15 = {
	"br",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	15,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_15,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_16 = {
	"break",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_17 = {
	"brfalse",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	17,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_17,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_18 = {
	"brtrue",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	18,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_18,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_methodref_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_methodref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_19 = {
	"call",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	19,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_19,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signature_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signature_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_20 = {
	"calli",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	15,
	20,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_20,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_21 = {
	"ceq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	21,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_22 = {
	"cgt",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	16,
	22,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_22,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_23 = {
	"ckfinite",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	23,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_24[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_24 = {
	"clt",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	17,
	24,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_24,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_25[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_25 = {
	"conv",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	18,
	25,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_25,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_26 = {
	"cpblk",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	26,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_27[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_27 = {
	"div",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	19,
	27,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_27,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_28 = {
	"dup",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	28,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_29 = {
	"endfilter",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	29,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_30 = {
	"endfinally",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	30,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_31 = {
	"initblk",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	31,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_32[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_methodref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_32 = {
	"jmp",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	20,
	32,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_32,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_variable_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_33[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_variable_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_33 = {
	"ldarg",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	21,
	33,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_33,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_34[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_variable_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_34 = {
	"ldarga",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	22,
	34,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_34,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_constant_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_35[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_constant_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_35 = {
	"ldc",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	23,
	35,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_35,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_36[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_methodref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_36 = {
	"ldftn",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	24,
	36,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_36,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_37[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_37 = {
	"ldind",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	25,
	37,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_37,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_38[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_variable_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_38 = {
	"ldloc",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	26,
	38,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_38,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_39[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_variable_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_39 = {
	"ldloca",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	27,
	39,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_39,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_40 = {
	"ldnull",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	40,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_41[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_41 = {
	"leave",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	28,
	41,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_41,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_42 = {
	"localloc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	42,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_43[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_overflow_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_43 = {
	"mul",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	29,
	43,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_43,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_44 = {
	"neg",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	44,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_45 = {
	"nop",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	45,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_46 = {
	"bitwise_not",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	46,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_47 = {
	"bitwise_or",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	15,
	47,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_48 = {
	"pop",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	16,
	48,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_49[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_49 = {
	"rem",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	30,
	49,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_49,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_50 = {
	"ret",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	17,
	50,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_51 = {
	"shl",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	18,
	51,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_52[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_52 = {
	"shr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	31,
	52,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_52,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_53[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_variable_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_53 = {
	"starg",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	32,
	53,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_53,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_54[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_54 = {
	"stind",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	33,
	54,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_54,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_55[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_variable_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_55 = {
	"stloc",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	34,
	55,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_55,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_56[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_overflow_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_56 = {
	"sub",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	35,
	56,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_56,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_target_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_target_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_57[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_target_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_57 = {
	"switch",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	36,
	57,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_57,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_58 = {
	"tailcall",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	19,
	58,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_59[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_59 = {
	"unaligned",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	37,
	59,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_59,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_60 = {
	"volatile",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	20,
	60,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_61 = {
	"bitwise_xor",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	21,
	61,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_62[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_62 = {
	"box",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	38,
	62,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_62,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_63[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_methodref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_63 = {
	"callvirt",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	39,
	63,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_63,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_64[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_64 = {
	"castclass",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	40,
	64,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_64,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_65[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_65 = {
	"cpobj",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	41,
	65,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_65,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_66[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_66 = {
	"initobj",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	42,
	66,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_66,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_67[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_67 = {
	"isinst",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	43,
	67,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_67,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_68[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_68 = {
	"ldelem",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	44,
	68,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_68,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_69[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_69 = {
	"ldelema",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	45,
	69,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_69,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_70[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_70 = {
	"ldfld",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	46,
	70,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_70,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_71[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_71 = {
	"ldflda",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	47,
	71,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_71,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_72 = {
	"ldlen",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	22,
	72,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_73[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_73 = {
	"ldobj",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	48,
	73,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_73,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_74[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_74 = {
	"ldsfld",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	49,
	74,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_74,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_75[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_75 = {
	"ldsflda",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	50,
	75,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_75,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_76[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_76 = {
	"ldstr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	51,
	76,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_76,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_77[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signature_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_77 = {
	"ldtoken",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	52,
	77,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_77,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_78[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_methodref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_78 = {
	"ldvirtftn",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	53,
	78,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_78,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_79[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_79 = {
	"mkrefany",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	54,
	79,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_79,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_80[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_80 = {
	"newarr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	55,
	80,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_80,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_81[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_methodref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_81 = {
	"newobj",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	56,
	81,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_81,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_82 = {
	"refanytype",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	23,
	82,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_83[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_83 = {
	"refanyval",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	57,
	83,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_83,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_84 = {
	"rethrow",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	24,
	84,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_85[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_85 = {
	"sizeof",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	58,
	85,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_85,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_86[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_86 = {
	"stelem",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	59,
	86,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_86,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_87[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_87 = {
	"stfld",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	60,
	87,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_87,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_88[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_88 = {
	"stobj",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	61,
	88,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_88,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_89[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_89 = {
	"stsfld",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	62,
	89,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_89,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_90 = {
	"throw",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	25,
	90,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_instr_0_91[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_instr_0_91 = {
	"unbox",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	63,
	91,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_instr_0_91,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_7,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_8,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_16,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_21,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_23,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_26,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_28,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_29,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_30,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_31,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_40,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_42,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_44,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_45,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_46,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_47,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_48,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_50,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_51,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_58,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_60,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_61,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_72,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_82,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_84,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_90

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_2[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_3[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_2,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_3,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_4,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_5,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_6,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_9,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_10,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_11,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_12,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_13,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_14,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_15,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_17,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_18,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_19,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_20,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_22,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_24,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_25,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_27,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_32,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_33,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_34,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_35,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_36,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_37,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_38,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_39,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_41,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_43,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_49,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_52,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_53,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_54,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_55,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_56,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_57,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_59,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_62,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_63,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_64,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_65,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_66,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_67,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_68,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_69,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_70,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_71,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_73,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_74,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_75,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_76,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_77,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_78,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_79,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_80,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_81,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_83,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_85,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_86,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_87,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_88,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_89,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_91

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_instr_0[] = {
	{ 26, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_2 },
	{ 64, MR_SECTAG_REMOTE,
	mercury_data_ml_backend__ilds__du_stag_ordered_instr_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_instr_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_6,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_8,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_9,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_10,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_11,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_7,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_46,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_47,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_61,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_12,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_13,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_14,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_62,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_15,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_16,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_17,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_18,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_19,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_20,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_63,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_64,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_21,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_22,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_23,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_24,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_0,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_4,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_25,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_26,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_65,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_27,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_28,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_3,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_29,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_30,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_5,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_31,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_66,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_67,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_32,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_33,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_34,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_35,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_68,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_69,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_70,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_71,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_36,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_37,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_72,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_38,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_39,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_40,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_73,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_74,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_75,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_76,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_77,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_78,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_41,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_42,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_79,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_43,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_44,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_80,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_81,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_45,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_48,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_82,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_83,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_49,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_50,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_84,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_51,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_52,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_85,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_53,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_2,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_86,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_87,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_54,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_55,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_88,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_89,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_56,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_57,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_58,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_90,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_59,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_91,
	&mercury_data_ml_backend__ilds__du_functor_desc_instr_0_60
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_instr_0[] = {
	25,
	40,
	78,
	32,
	26,
	35,
	0,
	5,
	1,
	2,
	3,
	4,
	9,
	10,
	11,
	13,
	14,
	15,
	16,
	17,
	18,
	21,
	22,
	23,
	24,
	27,
	28,
	30,
	31,
	33,
	34,
	36,
	39,
	41,
	42,
	43,
	48,
	49,
	51,
	52,
	53,
	60,
	61,
	63,
	64,
	67,
	6,
	7,
	68,
	71,
	72,
	74,
	75,
	77,
	81,
	82,
	85,
	86,
	87,
	89,
	91,
	8,
	12,
	19,
	20,
	29,
	37,
	38,
	44,
	45,
	46,
	47,
	50,
	54,
	55,
	56,
	57,
	58,
	59,
	62,
	65,
	66,
	69,
	70,
	73,
	76,
	79,
	80,
	83,
	84,
	88,
	90 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__instr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__instr_0_0)),
	"ml_backend.ilds",
	"instr",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_instr_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_instr_0 },
	92,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_instr_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_label_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__label_0_0)),
	"ml_backend.ilds",
	"label",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_locals_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__locals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__locals_0_0)),
	"ml_backend.ilds",
	"locals",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_string_0ml_backend__ilds__type_ctor_info_il_type_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_location_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__location_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__location_0_0)),
	"ml_backend.ilds",
	"location",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_0 = {
	"ctor",
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

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_1 = {
	"cctor",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_member_name_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_2 = {
	"id",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_member_name_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_member_name_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_0,
	&mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_member_name_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_2

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_member_name_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilds__du_stag_ordered_member_name_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_member_name_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_member_name_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_0,
	&mercury_data_ml_backend__ilds__du_functor_desc_member_name_0_2
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_member_name_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_member_name_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__member_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__member_name_0_0)),
	"ml_backend.ilds",
	"member_name",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_member_name_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_member_name_0 },
	3,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_member_name_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_il_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_methodref_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_class_member_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_methodref_0_0 = {
	"methoddef",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_methodref_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_methodref_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_member_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_methodref_0_1 = {
	"local_method",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_methodref_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_methodref_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_methodref_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_methodref_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_methodref_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_methodref_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_methodref_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_methodref_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_methodref_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_methodref_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_methodref_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_methodref_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_methodref_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__methodref_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__methodref_0_0)),
	"ml_backend.ilds",
	"methodref",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_methodref_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_methodref_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_methodref_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_namespace_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__namespace_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__namespace_name_0_0)),
	"ml_backend.ilds",
	"namespace_name",
	{ 0 },
	{ (void *)&mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_namespace_qual_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__namespace_qual_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__namespace_qual_name_0_0)),
	"ml_backend.ilds",
	"namespace_qual_name",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_nested_class_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__nested_class_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__nested_class_name_0_0)),
	"ml_backend.ilds",
	"nested_class_name",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_node_number_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__node_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__node_number_0_0)),
	"ml_backend.ilds",
	"node_number",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_overflow_0_0 = {
	"checkoverflow",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_overflow_0_1 = {
	"nocheckoverflow",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_value_ordered_overflow_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_overflow_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_overflow_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_name_ordered_overflow_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_overflow_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_overflow_0_1
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_overflow_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_overflow_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__overflow_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__overflow_0_0)),
	"ml_backend.ilds",
	"overflow",
	{ (void *)mercury_data_ml_backend__ilds__enum_name_ordered_overflow_0 },
	{ (void *)mercury_data_ml_backend__ilds__enum_value_ordered_overflow_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_overflow_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_ret_type_0_0 = {
	"void",
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

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_ret_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_ret_type_0_1 = {
	"simple_type",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_ret_type_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_ret_type_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_ret_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_ret_type_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_ret_type_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_ret_type_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilds__du_stag_ordered_ret_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_ret_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_ret_type_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_ret_type_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_ret_type_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_ret_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__ret_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__ret_type_0_0)),
	"ml_backend.ilds",
	"ret_type",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_ret_type_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_ret_type_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_ret_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_il_method_param_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_signature_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_il_method_param_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_signature_0_0 = {
	"signature",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_signature_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_signature_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_signature_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_signature_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_signature_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_signature_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_signature_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_signature_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signature_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__signature_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__signature_0_0)),
	"ml_backend.ilds",
	"signature",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_signature_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_signature_0 },
	1,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_signature_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_signed_0_0 = {
	"signed",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_signed_0_1 = {
	"unsigned",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_value_ordered_signed_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_signed_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_signed_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_name_ordered_signed_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_signed_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_signed_0_1
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_signed_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signed_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__signed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__signed_0_0)),
	"ml_backend.ilds",
	"signed",
	{ (void *)mercury_data_ml_backend__ilds__enum_name_ordered_signed_0 },
	{ (void *)mercury_data_ml_backend__ilds__enum_value_ordered_signed_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_signed_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_0 = {
	"int8",
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

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_1 = {
	"int16",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_2 = {
	"int32",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_3 = {
	"int64",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_4 = {
	"uint8",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_5 = {
	"uint16",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_6 = {
	"uint32",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_7 = {
	"uint64",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_8 = {
	"native_int",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_9 = {
	"native_uint",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_10 = {
	"float32",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_11 = {
	"float64",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_12 = {
	"native_float",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_13 = {
	"bool",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_14 = {
	"char",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_15 = {
	"object",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	15,
	15,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_16 = {
	"string",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	16,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_17 = {
	"refany",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	17,
	17,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_simple_type_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_18 = {
	"class",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	18,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_simple_type_0_18,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_simple_type_0_19[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_19 = {
	"valuetype",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	19,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_simple_type_0_19,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_simple_type_0_20[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_20 = {
	"interface",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	20,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_simple_type_0_20,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_simple_type_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_bound_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_21 = {
	"[]",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	21,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_simple_type_0_21,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_simple_type_0_22[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_22 = {
	"&",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	22,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_simple_type_0_22,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_simple_type_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_23 = {
	"*",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	23,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_simple_type_0_23,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_0,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_2,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_3,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_4,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_5,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_6,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_7,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_8,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_9,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_10,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_11,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_12,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_13,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_14,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_15,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_16,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_17

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_18

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_2[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_19

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_3[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_20,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_21,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_22,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_23

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_simple_type_0[] = {
	{ 18, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_2 },
	{ 4, MR_SECTAG_REMOTE,
	mercury_data_ml_backend__ilds__du_stag_ordered_simple_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_simple_type_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_22,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_23,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_21,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_13,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_14,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_18,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_10,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_11,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_2,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_3,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_0,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_20,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_12,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_8,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_9,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_15,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_17,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_16,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_5,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_6,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_7,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_4,
	&mercury_data_ml_backend__ilds__du_functor_desc_simple_type_0_19
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_simple_type_0[] = {
	11,
	8,
	9,
	10,
	22,
	19,
	20,
	21,
	14,
	15,
	6,
	7,
	13,
	3,
	4,
	16,
	18,
	17,
	5,
	23,
	12,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__simple_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__simple_type_0_0)),
	"ml_backend.ilds",
	"simple_type",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_simple_type_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_simple_type_0 },
	24,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_simple_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_assembly_name_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_structured_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_assembly_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_structured_name_0_0 = {
	"structured_name",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_structured_name_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_structured_name_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_structured_name_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_structured_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_structured_name_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_structured_name_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_structured_name_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_structured_name_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__structured_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__structured_name_0_0)),
	"ml_backend.ilds",
	"structured_name",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_structured_name_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_structured_name_0 },
	1,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_structured_name_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_target_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_target_0_0 = {
	"offset_target",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_target_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_target_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_target_0_1 = {
	"label_target",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_target_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_target_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_target_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_target_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_target_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_target_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_target_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_target_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_target_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_target_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_target_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_target_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_target_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__target_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__target_0_0)),
	"ml_backend.ilds",
	"target",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_target_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_target_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_target_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_0 = {
	"const",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_1 = {
	"readonly",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_2 = {
	"volatile",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_value_ordered_type_modifier_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_1,
	&mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilds__enum_name_ordered_type_modifier_0[] = {
	&mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_0,
	&mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_1,
	&mercury_data_ml_backend__ilds__enum_functor_desc_type_modifier_0_2
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_type_modifier_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__type_modifier_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__type_modifier_0_0)),
	"ml_backend.ilds",
	"type_modifier",
	{ (void *)mercury_data_ml_backend__ilds__enum_name_ordered_type_modifier_0 },
	{ (void *)mercury_data_ml_backend__ilds__enum_value_ordered_type_modifier_0 },
	3,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_type_modifier_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_variable_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_variable_0_0 = {
	"name",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_variable_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilds__field_types_variable_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilds__du_functor_desc_variable_0_1 = {
	"index",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilds__field_types_variable_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_variable_0_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_variable_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_stag_ordered_variable_0_1[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_variable_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilds__du_ptag_ordered_variable_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_variable_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilds__du_stag_ordered_variable_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilds__du_name_ordered_variable_0[] = {
	&mercury_data_ml_backend__ilds__du_functor_desc_variable_0_1,
	&mercury_data_ml_backend__ilds__du_functor_desc_variable_0_0
};

const MR_Integer mercury_data_ml_backend__ilds__functor_number_map_variable_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_variable_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilds__variable_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilds__variable_0_0)),
	"ml_backend.ilds",
	"variable",
	{ (void *)mercury_data_ml_backend__ilds__du_name_ordered_variable_0 },
	{ (void *)mercury_data_ml_backend__ilds__du_ptag_ordered_variable_0 },
	2,
	4,
	mercury_data_ml_backend__ilds__functor_number_map_variable_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__ml_backend__ilds__append_toplevel_class_name_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilds",
"ml_backend.ilds",
"lambda_ilds_m_470",
2,
0
},
"ml_backend.ilds",
"ilds.m",
470,
"d1;c5;"
};


MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(ml_backend__ilds_module0)
	MR_init_entry1(fn__ml_backend__ilds__get_call_stack_difference_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__get_call_stack_difference_1_0);
	MR_init_label4(fn__ml_backend__ilds__get_call_stack_difference_1_0,4,6,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_call_stack_difference'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ilds__get_call_stack_difference_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r4 = MR_tempr1;
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_r3 = MR_mask_field(MR_tempr1, 1);
	MR_r2 = MR_mask_field(MR_tempr1, 3);
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_call_stack_difference_1_0_i4);
	}
	MR_r1 = MR_r3;
	MR_sv(1) = (MR_Integer) -1;
	MR_GOTO_LAB(fn__ml_backend__ilds__get_call_stack_difference_1_0_i6);
	}
MR_def_label(fn__ml_backend__ilds__get_call_stack_difference_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(fn__ml_backend__ilds__get_call_stack_difference_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_call_stack_difference_1_0_i7);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ml_backend__ilds__get_call_stack_difference_1_0_i10);
MR_def_label(fn__ml_backend__ilds__get_call_stack_difference_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ml_backend__ilds__get_call_stack_difference_1_0_i10);
MR_def_label(fn__ml_backend__ilds__get_call_stack_difference_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) 0 - (MR_Integer) MR_r1) + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2));
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module1)
	MR_init_entry1(fn__ml_backend__ilds__get_calli_stack_difference_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__get_calli_stack_difference_1_0);
	MR_init_label4(fn__ml_backend__ilds__get_calli_stack_difference_1_0,2,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_calli_stack_difference'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ilds__get_calli_stack_difference_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 2);
	MR_r3 = MR_tfield(0, MR_r1, 1);
	MR_r4 = MR_tfield(0, MR_tfield(0, MR_r1, 0), 0);
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_calli_stack_difference_1_0_i2);
	}
	MR_r1 = MR_r3;
	MR_sv(1) = (MR_Integer) -1;
	MR_GOTO_LAB(fn__ml_backend__ilds__get_calli_stack_difference_1_0_i4);
MR_def_label(fn__ml_backend__ilds__get_calli_stack_difference_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(fn__ml_backend__ilds__get_calli_stack_difference_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_calli_stack_difference_1_0_i5);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_method_param);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ml_backend__ilds__get_calli_stack_difference_1_0_i8);
MR_def_label(fn__ml_backend__ilds__get_calli_stack_difference_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_method_param);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ml_backend__ilds__get_calli_stack_difference_1_0_i8);
MR_def_label(fn__ml_backend__ilds__get_calli_stack_difference_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((((MR_Integer) 0 - (MR_Integer) MR_r1) + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_sv(2)) - (MR_Integer) 1);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module2)
	MR_init_entry1(fn__ml_backend__ilds__get_stack_difference_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__get_stack_difference_1_0);
	MR_init_label10(fn__ml_backend__ilds__get_stack_difference_1_0,108,111,22,24,129,74,76,88,114,90)
	MR_init_label3(fn__ml_backend__ilds__get_stack_difference_1_0,95,99,104)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_stack_difference'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ilds__get_stack_difference_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i108) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i111));
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i95) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i95) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104));
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i88) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i22) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i24) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i129) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i90) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i95) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i99) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i104) MR_AND
		MR_LABEL_AP(fn__ml_backend__ilds__get_stack_difference_1_0_i114));
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ilds__get_calli_stack_difference_1_0);
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__ml_backend__ilds__get_call_stack_difference_1_0);
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_stack_difference_1_0_i74);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_tfield(1, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ml_backend__ilds__get_stack_difference_1_0_i76);
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_tfield(0, MR_r3, 3);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__ml_backend__ilds__get_stack_difference_1_0_i76);
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) 0 - (MR_Integer) MR_r1) + (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_stack_difference_1_0_i90);
	}
	}
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -3;
	MR_proceed();
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -2;
	MR_proceed();
MR_def_label(fn__ml_backend__ilds__get_stack_difference_1_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) -1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__int__max_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__ilds_module3)
	MR_init_entry1(fn__ml_backend__ilds__calculate_max_stack_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__calculate_max_stack_2_3_0);
	MR_init_label6(fn__ml_backend__ilds__calculate_max_stack_2_3_0,31,4,7,8,10,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_max_stack_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ilds__calculate_max_stack_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__calculate_max_stack_2_3_0_i31);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__ml_backend__ilds__calculate_max_stack_2_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__calculate_max_stack_2_3_0_i4);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = ((MR_Integer) MR_r2 + (MR_Integer) MR_tfield(3, MR_tempr1, 2));
	MR_r2 = MR_r3;
	}
	MR_np_call_localret_ent(fn__int__max_2_0,
		fn__ml_backend__ilds__calculate_max_stack_2_3_0_i8);
MR_def_label(fn__ml_backend__ilds__calculate_max_stack_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__ml_backend__ilds__get_stack_difference_1_0,
		fn__ml_backend__ilds__calculate_max_stack_2_3_0_i7);
MR_def_label(fn__ml_backend__ilds__calculate_max_stack_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__int__max_2_0,
		fn__ml_backend__ilds__calculate_max_stack_2_3_0_i8);
MR_def_label(fn__ml_backend__ilds__calculate_max_stack_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__ml_backend__ilds__calculate_max_stack_2_3_0,
		fn__ml_backend__ilds__calculate_max_stack_2_3_0_i10);
MR_def_label(fn__ml_backend__ilds__calculate_max_stack_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__calculate_max_stack_2_3_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ilds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("stack underflow while calculating max stack", 43);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(fn__ml_backend__ilds__calculate_max_stack_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module4)
	MR_init_entry1(fn__ml_backend__ilds__calculate_max_stack_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__calculate_max_stack_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'calculate_max_stack'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ilds__calculate_max_stack_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__ml_backend__ilds__calculate_max_stack_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__last_2_0);
MR_decl_entry(list__remove_suffix_3_0);

MR_BEGIN_MODULE(ml_backend__ilds_module5)
	MR_init_entry1(fn__ml_backend__ilds__get_class_namespace_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__get_class_namespace_1_0);
	MR_init_label3(fn__ml_backend__ilds__get_class_namespace_1_0,3,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_class_namespace'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ilds__get_class_namespace_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__last_2_0,
		fn__ml_backend__ilds__get_class_namespace_1_0_i3);
MR_def_label(fn__ml_backend__ilds__get_class_namespace_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_class_namespace_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__remove_suffix_3_0,
		fn__ml_backend__ilds__get_class_namespace_1_0_i6);
MR_def_label(fn__ml_backend__ilds__get_class_namespace_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_class_namespace_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__ml_backend__ilds__get_class_namespace_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ilds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("get_class_namespace: class has no name", 38);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module6)
	MR_init_entry1(fn__ml_backend__ilds__get_class_suffix_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__get_class_suffix_1_0);
	MR_init_label2(fn__ml_backend__ilds__get_class_suffix_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_class_suffix'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ilds__get_class_suffix_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__last_2_0,
		fn__ml_backend__ilds__get_class_suffix_1_0_i3);
MR_def_label(fn__ml_backend__ilds__get_class_suffix_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ml_backend__ilds__get_class_suffix_1_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__ml_backend__ilds__get_class_suffix_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ilds.m", 6);
	MR_r2 = (MR_Word) MR_string_const("get_class_namespace: class has no name", 38);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(ml_backend__ilds_module7)
	MR_init_entry1(fn__ml_backend__ilds__append_toplevel_class_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__append_toplevel_class_name_2_0);
	MR_init_label2(fn__ml_backend__ilds__append_toplevel_class_name_2_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_toplevel_class_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ilds__append_toplevel_class_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ilds__IntroducedFrom__pred__append_toplevel_class_name__470__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ilds.m", 6);
	MR_r3 = (MR_Word) MR_string_const("append_toplevel_class_name: namespace name has nested class?", 60);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		fn__ml_backend__ilds__append_toplevel_class_name_2_0_i3);
MR_def_label(fn__ml_backend__ilds__append_toplevel_class_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__append_3_1,
		fn__ml_backend__ilds__append_toplevel_class_name_2_0_i5);
MR_def_label(fn__ml_backend__ilds__append_toplevel_class_name_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ilds_module8)
	MR_init_entry1(fn__ml_backend__ilds__append_nested_class_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ilds__append_nested_class_name_2_0);
	MR_init_label1(fn__ml_backend__ilds__append_nested_class_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'append_nested_class_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ml_backend__ilds__append_nested_class_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__ml_backend__ilds__append_nested_class_name_2_0_i2);
MR_def_label(fn__ml_backend__ilds__append_nested_class_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module9)
	MR_init_entry1(__Unify___ml_backend__ilds__alignment_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__alignment_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__alignment_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ilds_module10)
	MR_init_entry1(__Compare___ml_backend__ilds__alignment_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__alignment_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__alignment_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module11)
	MR_init_entry1(__Unify___ml_backend__ilds__assembly_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__assembly_name_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__assembly_name_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__assembly_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__assembly_name_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__assembly_name_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__assembly_name_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__assembly_name_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__assembly_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__assembly_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__assembly_name_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__assembly_name_0_0,1)
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

MR_BEGIN_MODULE(ml_backend__ilds_module12)
	MR_init_entry1(__Compare___ml_backend__ilds__assembly_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__assembly_name_0_0);
	MR_init_label7(__Compare___ml_backend__ilds__assembly_name_0_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__assembly_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__assembly_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__assembly_name_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__assembly_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__assembly_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__assembly_name_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__assembly_name_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilds__assembly_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__assembly_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__assembly_name_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__assembly_name_0_0,10)
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ml_backend__ilds__assembly_name_0_0_i12);
MR_def_label(__Compare___ml_backend__ilds__assembly_name_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__assembly_name_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilds__assembly_name_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module13)
	MR_init_entry1(__Unify___ml_backend__ilds__blockid_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__blockid_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__blockid_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module14)
	MR_init_entry1(__Compare___ml_backend__ilds__blockid_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__blockid_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__blockid_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ilds_module15)
	MR_init_entry1(__Unify___ml_backend__ilds__blocktype_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__blocktype_0_0);
	MR_init_label4(__Unify___ml_backend__ilds__blocktype_0_0,9,5,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__blocktype_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__blocktype_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__blocktype_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__blocktype_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__blocktype_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__blocktype_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilds__blocktype_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__blocktype_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Unify___ml_backend__ilds__blocktype_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__blocktype_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ilds_module16)
	MR_init_entry1(__Compare___ml_backend__ilds__blocktype_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__blocktype_0_0);
	MR_init_label7(__Compare___ml_backend__ilds__blocktype_0_0,45,13,47,16,5,40,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__blocktype_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i45);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i5);
	}
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i13);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i47);
	}
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i40);
	}
	}
MR_def_label(__Compare___ml_backend__ilds__blocktype_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__blocktype_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i47);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i16);
	}
MR_def_label(__Compare___ml_backend__ilds__blocktype_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__blocktype_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilds__blocktype_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__blocktype_0_0_i7);
	}
MR_def_label(__Compare___ml_backend__ilds__blocktype_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__blocktype_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__structured_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module17)
	MR_init_entry1(__Unify___ml_backend__ilds__bound_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__bound_0_0);
	MR_init_label4(__Unify___ml_backend__ilds__bound_0_0,9,7,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__bound_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__bound_0_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__bound_0_0_i7);
	}
	if ((MR_r1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__bound_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__bound_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__bound_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__bound_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__bound_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__bound_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__bound_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__bound_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__bound_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module18)
	MR_init_entry1(__Compare___ml_backend__ilds__bound_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__bound_0_0);
	MR_init_label9(__Compare___ml_backend__ilds__bound_0_0,3,2,9,26,18,56,23,21,92)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__bound_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i18);
	}
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i26);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i23);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilds__bound_0_0_i9);
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i92);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i56);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i21);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__bound_0_0_i23);
	}
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__bound_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module19)
	MR_init_entry1(__Unify___ml_backend__ilds__bounds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__bounds_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__bounds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, bound);
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


MR_BEGIN_MODULE(ml_backend__ilds_module20)
	MR_init_entry1(__Compare___ml_backend__ilds__bounds_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__bounds_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__bounds_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, bound);
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


MR_BEGIN_MODULE(ml_backend__ilds_module21)
	MR_init_entry1(__Unify___ml_backend__ilds__call_conv_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__call_conv_0_0);
	MR_init_label2(__Unify___ml_backend__ilds__call_conv_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__call_conv_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__call_conv_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__call_conv_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__call_conv_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__call_conv_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module22)
	MR_init_entry1(__Compare___ml_backend__ilds__call_conv_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__call_conv_0_0);
	MR_init_label4(__Compare___ml_backend__ilds__call_conv_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__call_conv_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__call_conv_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__call_conv_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__call_conv_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__call_conv_0_0,2)
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
		__Compare___ml_backend__ilds__call_conv_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__call_conv_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__call_conv_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__call_conv_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module23)
	MR_init_entry1(__Unify___ml_backend__ilds__class_member_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__class_member_name_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__class_member_name_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__class_member_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__class_member_name_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__structured_name_0_0,
		__Unify___ml_backend__ilds__class_member_name_0_0_i4);
MR_def_label(__Unify___ml_backend__ilds__class_member_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__class_member_name_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__member_name_0_0);
MR_def_label(__Unify___ml_backend__ilds__class_member_name_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__class_member_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module24)
	MR_init_entry1(__Compare___ml_backend__ilds__class_member_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__class_member_name_0_0);
	MR_init_label4(__Compare___ml_backend__ilds__class_member_name_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__class_member_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__class_member_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__class_member_name_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__class_member_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__class_member_name_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__structured_name_0_0,
		__Compare___ml_backend__ilds__class_member_name_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__class_member_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__class_member_name_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__member_name_0_0);
MR_def_label(__Compare___ml_backend__ilds__class_member_name_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module25)
	MR_init_entry1(__Unify___ml_backend__ilds__class_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__class_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__class_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__structured_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module26)
	MR_init_entry1(__Compare___ml_backend__ilds__class_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__class_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__class_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__structured_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module27)
	MR_init_entry1(__Unify___ml_backend__ilds__constant_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__constant_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__constant_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__constant_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__constant_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__constant_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__constant_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_word_to_float(MR_r1) == MR_word_to_float(MR_r2));
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__constant_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__constant_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__constant_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__constant_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(ml_backend__ilds_module28)
	MR_init_entry1(__Compare___ml_backend__ilds__constant_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__constant_0_0);
	MR_init_label5(__Compare___ml_backend__ilds__constant_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__constant_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__constant_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__constant_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__constant_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__constant_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__constant_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__constant_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___ml_backend__ilds__constant_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__constant_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__constant_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__constant_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module29)
	MR_init_entry1(__Unify___ml_backend__ilds__fieldref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__fieldref_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__fieldref_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__fieldref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__fieldref_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__il_type_0_0,
		__Unify___ml_backend__ilds__fieldref_0_0_i4);
MR_def_label(__Unify___ml_backend__ilds__fieldref_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__fieldref_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__class_member_name_0_0);
MR_def_label(__Unify___ml_backend__ilds__fieldref_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__fieldref_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module30)
	MR_init_entry1(__Compare___ml_backend__ilds__fieldref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__fieldref_0_0);
	MR_init_label4(__Compare___ml_backend__ilds__fieldref_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__fieldref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__fieldref_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__fieldref_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__fieldref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__fieldref_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__il_type_0_0,
		__Compare___ml_backend__ilds__fieldref_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__fieldref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__fieldref_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__class_member_name_0_0);
MR_def_label(__Compare___ml_backend__ilds__fieldref_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module31)
	MR_init_entry1(__Unify___ml_backend__ilds__id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module32)
	MR_init_entry1(__Compare___ml_backend__ilds__id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__id_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module33)
	MR_init_entry1(__Unify___ml_backend__ilds__il_call_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__il_call_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__il_call_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module34)
	MR_init_entry1(__Compare___ml_backend__ilds__il_call_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__il_call_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__il_call_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ml_backend__ilds_module35)
	MR_init_entry1(__Unify___ml_backend__ilds__il_method_param_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__il_method_param_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__il_method_param_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__il_method_param_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__il_method_param_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__il_type_0_0,
		__Unify___ml_backend__ilds__il_method_param_0_0_i4);
MR_def_label(__Unify___ml_backend__ilds__il_method_param_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__il_method_param_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ml_backend__ilds__il_method_param_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__il_method_param_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ml_backend__ilds_module36)
	MR_init_entry1(__Compare___ml_backend__ilds__il_method_param_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__il_method_param_0_0);
	MR_init_label4(__Compare___ml_backend__ilds__il_method_param_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__il_method_param_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__il_method_param_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__il_method_param_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__il_method_param_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__il_method_param_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__il_type_0_0,
		__Compare___ml_backend__ilds__il_method_param_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__il_method_param_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__il_method_param_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ml_backend__ilds__il_method_param_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module37)
	MR_init_entry1(__Unify___ml_backend__ilds__il_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__il_type_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__il_type_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__il_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__il_type_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ilds__il_type_0_0_i4);
MR_def_label(__Unify___ml_backend__ilds__il_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__il_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__il_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__il_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module38)
	MR_init_entry1(__Compare___ml_backend__ilds__il_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__il_type_0_0);
	MR_init_label4(__Compare___ml_backend__ilds__il_type_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__il_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__il_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__il_type_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__il_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__il_type_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ilds__il_type_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__il_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__il_type_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__il_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module39)
	MR_init_entry1(__Unify___ml_backend__ilds__index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__index_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module40)
	MR_init_entry1(__Compare___ml_backend__ilds__index_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__index_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__index_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module41)
	MR_init_entry1(__Unify___ml_backend__ilds__instr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__instr_0_0);
	MR_init_label10(__Unify___ml_backend__ilds__instr_0_0,75,112,272,5,8,12,16,24,28,32)
	MR_init_label10(__Unify___ml_backend__ilds__instr_0_0,36,40,45,49,53,57,61,65,70,73)
	MR_init_label10(__Unify___ml_backend__ilds__instr_0_0,77,79,84,88,91,93,97,100,104,108)
	MR_init_label10(__Unify___ml_backend__ilds__instr_0_0,114,118,122,124,128,132,136,140,144,148)
	MR_init_label10(__Unify___ml_backend__ilds__instr_0_0,153,157,162,166,170,174,176,180,184,189)
	MR_init_label10(__Unify___ml_backend__ilds__instr_0_0,193,196,200,207,211,216,218,222,226,228)
	MR_init_label10(__Unify___ml_backend__ilds__instr_0_0,230,234,238,242,246,250,254,256,262,264)
	MR_init_label3(__Unify___ml_backend__ilds__instr_0_0,268,273,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i273);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i268) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i75) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i112) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i272));
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,272)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i226) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i91) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i77) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i97) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i12) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i16) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i24) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i28) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i32) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i40) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i49) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i53) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i57) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i70) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i73) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i79) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i88) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i108) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i114) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i118) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i122) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i144) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i148) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i153) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i157) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i184) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i193) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i211) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i216) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i222) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i238) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i242) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i254) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i256) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i262) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i36) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i61) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i65) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i84) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i100) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i104) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i128) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i132) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i136) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i140) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i162) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i166) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i170) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i174) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i176) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i180) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i189) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i196) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i200) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i207) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i218) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i230) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i234) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i246) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i250) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__instr_0_0_i264));
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr3, 2);
	MR_r2 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,38)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__methodref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__signature_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,39)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__methodref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,40)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,41)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__blocktype_0_0,
		__Unify___ml_backend__ilds__instr_0_0_i93);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,42)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,43)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__methodref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__variable_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__variable_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__simple_type_0_0,
		__Unify___ml_backend__ilds__instr_0_0_i124);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__constant_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,45)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,46)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,47)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__methodref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__variable_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__variable_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,48)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,49)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,170)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,50)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,51)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,52)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__signature_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,53)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__methodref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__target_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,54)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,55)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,56)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__methodref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,57)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,31)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,58)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,222)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__variable_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__blocktype_0_0,
		__Unify___ml_backend__ilds__instr_0_0_i228);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,59)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,234)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,60)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,242)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,34)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__variable_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,61)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,62)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,254)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,36)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, target);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,37)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,63)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__instr_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,268)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__instr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module42)
	MR_init_entry1(__Index___ml_backend__ilds__instr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ml_backend__ilds__instr_0_0);
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,95,28,43,98,3,4,5,6,7,8)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,9,10,11,12,13,14,15,16,17,18)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,19,20,21,22,23,24,25,26,27,29)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,30,31,32,33,34,35,36,37,38,39)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,40,41,42,44,45,46,47,48,49,50)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,51,52,53,54,55,56,57,58,59,60)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,61,62,63,64,65,66,67,68,69,70)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,71,72,73,74,75,76,77,78,79,80)
	MR_init_label10(__Index___ml_backend__ilds__instr_0_0,81,82,83,84,85,86,87,88,89,90)
	MR_init_label4(__Index___ml_backend__ilds__instr_0_0,91,92,93,94)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ml_backend__ilds__instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i95) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i43) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i98));
MR_def_label(__Index___ml_backend__ilds__instr_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i34) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i36) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i37) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i39) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i56) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i64) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i67) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i70) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i71) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i75) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i77) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i90) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i94) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i53) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i72) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i76) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i91));
MR_def_label(__Index___ml_backend__ilds__instr_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i81) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i35) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i38) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i3) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i33) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i42) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i44) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i45) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i46) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i51) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i52) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i54) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i55) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i63) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i66) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i74) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i78) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i80) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i84) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i85) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i88) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i89) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i92) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i40) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i41) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i47) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i48) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i49) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i50) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i57) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i58) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i59) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i60) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i61) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i62) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i65) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i68) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i69) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i73) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i79) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i82) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i83) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i86) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i87) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__instr_0_0_i93));
MR_def_label(__Index___ml_backend__ilds__instr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 46;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 47;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 61;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 62;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 63;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 64;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 65;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 66;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 67;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 68;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 69;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 70;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 71;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 72;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 39;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 40;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 73;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 74;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 75;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 76;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 77;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 78;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 42;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 79;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 43;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 44;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 80;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 81;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 45;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 48;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 82;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 83;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 49;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 50;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 84;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 51;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 52;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 85;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 53;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 86;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 87;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 54;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 55;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 88;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 89;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 56;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 57;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 58;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 90;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 59;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 91;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__instr_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 60;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(ml_backend__ilds_module43)
	MR_init_entry1(__Compare___ml_backend__ilds__instr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__instr_0_0);
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,4,5,6,7,99,149,302,10,13,19)
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,22,25,30,33,42,45,50,53,58,61)
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,66,69,73,76,79,82,85,88,92,96)
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,102,105,110,114,117,121,124,131,134,140)
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,143,146,152,155,158,161,166,169,172,175)
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,178,181,185,188,192,195,198,201,204,207)
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,210,214,217,220,226,229,235,238,244,247)
	MR_init_label10(__Compare___ml_backend__ilds__instr_0_0,250,253,256,261,264,267,270,273,276,279)
	MR_init_label7(__Compare___ml_backend__ilds__instr_0_0,282,287,292,295,298,8,307)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i298);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___ml_backend__ilds__instr_0_0,
		__Compare___ml_backend__ilds__instr_0_0_i4);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ml_backend__ilds__instr_0_0,
		__Compare___ml_backend__ilds__instr_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i298) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i149) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i302));
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i253) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i121) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i102) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i131) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i10) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i30) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i42) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i50) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i58) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i69) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i73) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i76) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i79) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i92) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i96) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i110) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i117) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i146) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i152) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i155) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i178) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i181) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i185) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i188) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i210) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i217) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i238) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i244) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i250) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i267) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i270) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i287) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i292) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i66) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i85) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i88) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i140) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i143) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i166) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i172) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i175) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i192) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i195) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i198) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i201) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i204) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i207) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i214) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i226) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i229) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i235) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i247) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i261) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i264) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i273) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i276) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__instr_0_0_i295));
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i13);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i25);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i33);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i45);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i53);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i61);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,38)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__methodref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,15)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__signature_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,39)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__methodref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,40)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,16)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,17)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i105);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,18)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,41)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,19)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__blocktype_0_0,
		__Compare___ml_backend__ilds__instr_0_0_i124);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i134);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,134)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,42)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,43)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,20)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__methodref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,21)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__variable_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,22)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__variable_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,23)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__simple_type_0_0,
		__Compare___ml_backend__ilds__instr_0_0_i161);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__constant_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,44)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,45)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,46)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,47)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,24)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__methodref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,25)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,26)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__variable_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,188)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,27)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__variable_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,48)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,49)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,50)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,51)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,52)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__signature_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,53)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__methodref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,28)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__target_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,54)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,29)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i220);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,226)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,55)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,56)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__methodref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,57)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,30)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,31)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,58)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,250)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,32)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__variable_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__blocktype_0_0,
		__Compare___ml_backend__ilds__instr_0_0_i256);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,59)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,60)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,267)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,33)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,34)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__variable_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,61)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,62)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__fieldref_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,35)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
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
		__Compare___ml_backend__ilds__instr_0_0_i282);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i307);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,36)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, target);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,37)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,63)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__instr_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,298)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___ml_backend__ilds__instr_0_0,307)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module44)
	MR_init_entry1(__Unify___ml_backend__ilds__label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__label_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module45)
	MR_init_entry1(__Compare___ml_backend__ilds__label_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__label_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module46)
	MR_init_entry1(__Unify___ml_backend__ilds__locals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__locals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__locals_0_0);
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


MR_BEGIN_MODULE(ml_backend__ilds_module47)
	MR_init_entry1(__Compare___ml_backend__ilds__locals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__locals_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__locals_0_0);
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


MR_BEGIN_MODULE(ml_backend__ilds_module48)
	MR_init_entry1(__Unify___ml_backend__ilds__location_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__location_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__location_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module49)
	MR_init_entry1(__Compare___ml_backend__ilds__location_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__location_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__location_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module50)
	MR_init_entry1(__Unify___ml_backend__ilds__member_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__member_name_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__member_name_0_0,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__member_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__member_name_0_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__member_name_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__member_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__member_name_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__member_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__member_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module51)
	MR_init_entry1(__Compare___ml_backend__ilds__member_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__member_name_0_0);
	MR_init_label5(__Compare___ml_backend__ilds__member_name_0_0,34,5,9,19,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__member_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i19);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i5);
	}
	MR_r2 = MR_tag(MR_tempr2);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i9);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i9);
	}
	}
MR_def_label(__Compare___ml_backend__ilds__member_name_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__member_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i9);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___ml_backend__ilds__member_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__member_name_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_sv(2));
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__member_name_0_0_i23);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__member_name_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module52)
	MR_init_entry1(__Unify___ml_backend__ilds__methodref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__methodref_0_0);
	MR_init_label9(__Unify___ml_backend__ilds__methodref_0_0,7,9,11,31,5,16,18,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__methodref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i31);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr4, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr4, 3);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__call_conv_0_0,
		__Unify___ml_backend__ilds__methodref_0_0_i7);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__ret_type_0_0,
		__Unify___ml_backend__ilds__methodref_0_0_i9);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__member_name_0_0,
		__Unify___ml_backend__ilds__methodref_0_0_i11);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__call_conv_0_0,
		__Unify___ml_backend__ilds__methodref_0_0_i16);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__ret_type_0_0,
		__Unify___ml_backend__ilds__methodref_0_0_i18);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__class_member_name_0_0,
		__Unify___ml_backend__ilds__methodref_0_0_i20);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__methodref_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilds__methodref_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module53)
	MR_init_entry1(__Compare___ml_backend__ilds__methodref_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__methodref_0_0);
	MR_init_label10(__Compare___ml_backend__ilds__methodref_0_0,3,2,9,13,17,7,5,25,27,31)
	MR_init_label2(__Compare___ml_backend__ilds__methodref_0_0,35,90)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__methodref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__call_conv_0_0,
		__Compare___ml_backend__ilds__methodref_0_0_i9);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i90);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__ret_type_0_0,
		__Compare___ml_backend__ilds__methodref_0_0_i13);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i90);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__member_name_0_0,
		__Compare___ml_backend__ilds__methodref_0_0_i17);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i90);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__call_conv_0_0,
		__Compare___ml_backend__ilds__methodref_0_0_i27);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i90);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__ret_type_0_0,
		__Compare___ml_backend__ilds__methodref_0_0_i31);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i90);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__class_member_name_0_0,
		__Compare___ml_backend__ilds__methodref_0_0_i35);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__methodref_0_0_i90);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilds__methodref_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module54)
	MR_init_entry1(__Unify___ml_backend__ilds__namespace_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__namespace_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__namespace_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__structured_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module55)
	MR_init_entry1(__Compare___ml_backend__ilds__namespace_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__namespace_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__namespace_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__structured_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module56)
	MR_init_entry1(__Unify___ml_backend__ilds__namespace_qual_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__namespace_qual_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__namespace_qual_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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


MR_BEGIN_MODULE(ml_backend__ilds_module57)
	MR_init_entry1(__Compare___ml_backend__ilds__namespace_qual_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__namespace_qual_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__namespace_qual_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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


MR_BEGIN_MODULE(ml_backend__ilds_module58)
	MR_init_entry1(__Unify___ml_backend__ilds__nested_class_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__nested_class_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__nested_class_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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


MR_BEGIN_MODULE(ml_backend__ilds_module59)
	MR_init_entry1(__Compare___ml_backend__ilds__nested_class_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__nested_class_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__nested_class_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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


MR_BEGIN_MODULE(ml_backend__ilds_module60)
	MR_init_entry1(__Unify___ml_backend__ilds__node_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__node_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__node_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module61)
	MR_init_entry1(__Compare___ml_backend__ilds__node_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__node_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__node_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module62)
	MR_init_entry1(__Unify___ml_backend__ilds__overflow_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__overflow_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__overflow_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module63)
	MR_init_entry1(__Compare___ml_backend__ilds__overflow_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__overflow_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__overflow_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module64)
	MR_init_entry1(__Unify___ml_backend__ilds__ret_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__ret_type_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__ret_type_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__ret_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__ret_type_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__ret_type_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__ret_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__ret_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__ret_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__ret_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module65)
	MR_init_entry1(__Compare___ml_backend__ilds__ret_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__ret_type_0_0);
	MR_init_label4(__Compare___ml_backend__ilds__ret_type_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__ret_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__ret_type_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__ret_type_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__ret_type_0_0_i7);
	}
MR_def_label(__Compare___ml_backend__ilds__ret_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__ret_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__ret_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__ret_type_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__ret_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module66)
	MR_init_entry1(__Unify___ml_backend__ilds__signature_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__signature_0_0);
	MR_init_label4(__Unify___ml_backend__ilds__signature_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__signature_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__signature_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__call_conv_0_0,
		__Unify___ml_backend__ilds__signature_0_0_i4);
MR_def_label(__Unify___ml_backend__ilds__signature_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__signature_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__ret_type_0_0,
		__Unify___ml_backend__ilds__signature_0_0_i6);
MR_def_label(__Unify___ml_backend__ilds__signature_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__signature_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_method_param);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilds__signature_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__signature_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module67)
	MR_init_entry1(__Compare___ml_backend__ilds__signature_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__signature_0_0);
	MR_init_label5(__Compare___ml_backend__ilds__signature_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__signature_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__signature_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__signature_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__signature_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__signature_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__call_conv_0_0,
		__Compare___ml_backend__ilds__signature_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__signature_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__signature_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__ret_type_0_0,
		__Compare___ml_backend__ilds__signature_0_0_i9);
MR_def_label(__Compare___ml_backend__ilds__signature_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__signature_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_method_param);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilds__signature_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module68)
	MR_init_entry1(__Unify___ml_backend__ilds__signed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__signed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__signed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module69)
	MR_init_entry1(__Compare___ml_backend__ilds__signed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__signed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__signed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module70)
	MR_init_entry1(__Unify___ml_backend__ilds__simple_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__simple_type_0_0);
	MR_init_label10(__Unify___ml_backend__ilds__simple_type_0_0,21,45,52,5,13,15,31,44,53,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__simple_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i53);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ml_backend__ilds__simple_type_0_0_i44) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__simple_type_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__simple_type_0_0_i45) MR_AND
		MR_LABEL_AP(__Unify___ml_backend__ilds__simple_type_0_0_i52));
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i31);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i13);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i5);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__il_type_0_0,
		__Unify___ml_backend__ilds__simple_type_0_0_i15);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, bound);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__simple_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__simple_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module71)
	MR_init_entry1(__Index___ml_backend__ilds__simple_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ml_backend__ilds__simple_type_0_0);
	MR_init_label10(__Index___ml_backend__ilds__simple_type_0_0,27,8,26,30,3,5,6,7,9,10)
	MR_init_label10(__Index___ml_backend__ilds__simple_type_0_0,11,12,13,14,15,16,17,18,19,20)
	MR_init_label5(__Index___ml_backend__ilds__simple_type_0_0,21,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ml_backend__ilds__simple_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i30));
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i9) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___ml_backend__ilds__simple_type_0_0_i20));
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(__Index___ml_backend__ilds__simple_type_0_0_i15);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),1)) {
		MR_GOTO_LAB(__Index___ml_backend__ilds__simple_type_0_0_i5);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_r1, 0),2)) {
		MR_GOTO_LAB(__Index___ml_backend__ilds__simple_type_0_0_i3);
	}
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ml_backend__ilds__simple_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module72)
	MR_init_entry1(__Compare___ml_backend__ilds__simple_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__simple_type_0_0);
	MR_init_label10(__Compare___ml_backend__ilds__simple_type_0_0,4,5,6,7,26,48,54,10,16,19)
	MR_init_label4(__Compare___ml_backend__ilds__simple_type_0_0,35,47,8,59)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__simple_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i47);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___ml_backend__ilds__simple_type_0_0,
		__Compare___ml_backend__ilds__simple_type_0_0_i4);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ml_backend__ilds__simple_type_0_0,
		__Compare___ml_backend__ilds__simple_type_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ml_backend__ilds__simple_type_0_0_i47) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__simple_type_0_0_i26) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__simple_type_0_0_i48) MR_AND
		MR_LABEL_AP(__Compare___ml_backend__ilds__simple_type_0_0_i54));
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i35);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i16);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(1), 0),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i10);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i8);
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__il_type_0_0,
		__Compare___ml_backend__ilds__simple_type_0_0_i19);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i59);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, bound);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__simple_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___ml_backend__ilds__simple_type_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module73)
	MR_init_entry1(__Unify___ml_backend__ilds__structured_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__structured_name_0_0);
	MR_init_label4(__Unify___ml_backend__ilds__structured_name_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__structured_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__structured_name_0_0_i10);
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
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__assembly_name_0_0,
		__Unify___ml_backend__ilds__structured_name_0_0_i4);
MR_def_label(__Unify___ml_backend__ilds__structured_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__structured_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ilds__structured_name_0_0_i6);
MR_def_label(__Unify___ml_backend__ilds__structured_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__structured_name_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilds__structured_name_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__structured_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module74)
	MR_init_entry1(__Compare___ml_backend__ilds__structured_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__structured_name_0_0);
	MR_init_label5(__Compare___ml_backend__ilds__structured_name_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__structured_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__structured_name_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__structured_name_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__structured_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__structured_name_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__assembly_name_0_0,
		__Compare___ml_backend__ilds__structured_name_0_0_i5);
MR_def_label(__Compare___ml_backend__ilds__structured_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__structured_name_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ilds__structured_name_0_0_i9);
MR_def_label(__Compare___ml_backend__ilds__structured_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__structured_name_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilds__structured_name_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module75)
	MR_init_entry1(__Unify___ml_backend__ilds__target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__target_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__target_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__target_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__target_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__target_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__target_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__target_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__target_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__target_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__target_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module76)
	MR_init_entry1(__Compare___ml_backend__ilds__target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__target_0_0);
	MR_init_label5(__Compare___ml_backend__ilds__target_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__target_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__target_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__target_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__target_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__target_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__target_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__target_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilds__target_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__target_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__target_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__target_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module77)
	MR_init_entry1(__Unify___ml_backend__ilds__type_modifier_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__type_modifier_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__type_modifier_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module78)
	MR_init_entry1(__Compare___ml_backend__ilds__type_modifier_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__type_modifier_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__type_modifier_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module79)
	MR_init_entry1(__Unify___ml_backend__ilds__variable_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilds__variable_0_0);
	MR_init_label3(__Unify___ml_backend__ilds__variable_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilds__variable_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__variable_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__variable_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__variable_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilds__variable_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__variable_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilds__variable_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilds__variable_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module80)
	MR_init_entry1(__Compare___ml_backend__ilds__variable_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilds__variable_0_0);
	MR_init_label5(__Compare___ml_backend__ilds__variable_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilds__variable_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__variable_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilds__variable_0_0_i2);
MR_def_label(__Compare___ml_backend__ilds__variable_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilds__variable_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__variable_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__variable_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilds__variable_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__variable_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilds__variable_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilds__variable_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilds_module81)
	MR_init_entry1(ml_backend__ilds__IntroducedFrom__pred__append_toplevel_class_name__470__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilds__IntroducedFrom__pred__append_toplevel_class_name__470__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__append_toplevel_class_name__470__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilds__IntroducedFrom__pred__append_toplevel_class_name__470__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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

static void mercury__ml_backend__ilds_maybe_bunch_0(void)
{
	ml_backend__ilds_module0();
	ml_backend__ilds_module1();
	ml_backend__ilds_module2();
	ml_backend__ilds_module3();
	ml_backend__ilds_module4();
	ml_backend__ilds_module5();
	ml_backend__ilds_module6();
	ml_backend__ilds_module7();
	ml_backend__ilds_module8();
	ml_backend__ilds_module9();
	ml_backend__ilds_module10();
	ml_backend__ilds_module11();
	ml_backend__ilds_module12();
	ml_backend__ilds_module13();
	ml_backend__ilds_module14();
	ml_backend__ilds_module15();
	ml_backend__ilds_module16();
	ml_backend__ilds_module17();
	ml_backend__ilds_module18();
	ml_backend__ilds_module19();
	ml_backend__ilds_module20();
	ml_backend__ilds_module21();
	ml_backend__ilds_module22();
	ml_backend__ilds_module23();
	ml_backend__ilds_module24();
	ml_backend__ilds_module25();
	ml_backend__ilds_module26();
	ml_backend__ilds_module27();
	ml_backend__ilds_module28();
	ml_backend__ilds_module29();
	ml_backend__ilds_module30();
	ml_backend__ilds_module31();
	ml_backend__ilds_module32();
	ml_backend__ilds_module33();
	ml_backend__ilds_module34();
	ml_backend__ilds_module35();
	ml_backend__ilds_module36();
	ml_backend__ilds_module37();
	ml_backend__ilds_module38();
	ml_backend__ilds_module39();
}

static void mercury__ml_backend__ilds_maybe_bunch_1(void)
{
	ml_backend__ilds_module40();
	ml_backend__ilds_module41();
	ml_backend__ilds_module42();
	ml_backend__ilds_module43();
	ml_backend__ilds_module44();
	ml_backend__ilds_module45();
	ml_backend__ilds_module46();
	ml_backend__ilds_module47();
	ml_backend__ilds_module48();
	ml_backend__ilds_module49();
	ml_backend__ilds_module50();
	ml_backend__ilds_module51();
	ml_backend__ilds_module52();
	ml_backend__ilds_module53();
	ml_backend__ilds_module54();
	ml_backend__ilds_module55();
	ml_backend__ilds_module56();
	ml_backend__ilds_module57();
	ml_backend__ilds_module58();
	ml_backend__ilds_module59();
	ml_backend__ilds_module60();
	ml_backend__ilds_module61();
	ml_backend__ilds_module62();
	ml_backend__ilds_module63();
	ml_backend__ilds_module64();
	ml_backend__ilds_module65();
	ml_backend__ilds_module66();
	ml_backend__ilds_module67();
	ml_backend__ilds_module68();
	ml_backend__ilds_module69();
	ml_backend__ilds_module70();
	ml_backend__ilds_module71();
	ml_backend__ilds_module72();
	ml_backend__ilds_module73();
	ml_backend__ilds_module74();
	ml_backend__ilds_module75();
	ml_backend__ilds_module76();
	ml_backend__ilds_module77();
	ml_backend__ilds_module78();
	ml_backend__ilds_module79();
}

static void mercury__ml_backend__ilds_maybe_bunch_2(void)
{
	ml_backend__ilds_module80();
	ml_backend__ilds_module81();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ilds__init(void);
void mercury__ml_backend__ilds__init_type_tables(void);
void mercury__ml_backend__ilds__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ilds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ilds__init_complexity_procs(void);
#endif

void mercury__ml_backend__ilds__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ilds_maybe_bunch_0();
	mercury__ml_backend__ilds_maybe_bunch_1();
	mercury__ml_backend__ilds_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_alignment_0,
		ml_backend__ilds__alignment_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_assembly_name_0,
		ml_backend__ilds__assembly_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_blockid_0,
		ml_backend__ilds__blockid_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_blocktype_0,
		ml_backend__ilds__blocktype_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_bound_0,
		ml_backend__ilds__bound_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_bounds_0,
		ml_backend__ilds__bounds_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0,
		ml_backend__ilds__call_conv_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_class_member_name_0,
		ml_backend__ilds__class_member_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_class_name_0,
		ml_backend__ilds__class_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_constant_0,
		ml_backend__ilds__constant_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0,
		ml_backend__ilds__fieldref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_id_0,
		ml_backend__ilds__id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_il_call_kind_0,
		ml_backend__ilds__il_call_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0,
		ml_backend__ilds__il_method_param_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_il_type_0,
		ml_backend__ilds__il_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_index_0,
		ml_backend__ilds__index_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_instr_0,
		ml_backend__ilds__instr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_label_0,
		ml_backend__ilds__label_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_locals_0,
		ml_backend__ilds__locals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_location_0,
		ml_backend__ilds__location_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_member_name_0,
		ml_backend__ilds__member_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_methodref_0,
		ml_backend__ilds__methodref_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_namespace_name_0,
		ml_backend__ilds__namespace_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_namespace_qual_name_0,
		ml_backend__ilds__namespace_qual_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_nested_class_name_0,
		ml_backend__ilds__nested_class_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_node_number_0,
		ml_backend__ilds__node_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_overflow_0,
		ml_backend__ilds__overflow_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0,
		ml_backend__ilds__ret_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_signature_0,
		ml_backend__ilds__signature_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_signed_0,
		ml_backend__ilds__signed_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0,
		ml_backend__ilds__simple_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0,
		ml_backend__ilds__structured_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_target_0,
		ml_backend__ilds__target_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0,
		ml_backend__ilds__type_modifier_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilds__type_ctor_info_variable_0,
		ml_backend__ilds__variable_0_0);
	mercury__ml_backend__ilds__init_debugger();
}

void mercury__ml_backend__ilds__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_alignment_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_assembly_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_blockid_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_blocktype_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_bound_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_bounds_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_call_conv_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_class_member_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_class_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_constant_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_fieldref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_il_call_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_il_method_param_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_il_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_index_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_instr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_label_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_locals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_location_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_member_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_methodref_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_namespace_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_namespace_qual_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_nested_class_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_node_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_overflow_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_ret_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_signature_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_signed_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_target_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilds__type_ctor_info_variable_0);
	}
}


void mercury__ml_backend__ilds__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ilds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ilds);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ilds__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
