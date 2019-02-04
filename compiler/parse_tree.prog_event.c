/*
** Automatically generated from `prog_event.m'
** by the Mercury compiler,
** version rotd-2011-07-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parse_tree__prog_event__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "parse_tree.prog_event.c"
#include "parse_tree.prog_event.mh"

#line 28 "parse_tree.prog_event.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "parse_tree.prog_event.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 36 "parse_tree.prog_event.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "parse_tree.prog_event.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 44 "parse_tree.prog_event.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "parse_tree.prog_event.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "parse_tree.prog_event.c"
#line 53 "parse_tree.prog_event.c"
#ifndef PARSE_TREE__PROG_EVENT_DECL_GUARD
#define PARSE_TREE__PROG_EVENT_DECL_GUARD

#line 57 "parse_tree.prog_event.c"
#line 149 "prog_event.m"

#include "mercury_event_spec.h"
#include <stdio.h>

MR_String   read_specs_file_2(MR_AllocSiteInfoPtr alloc_id,
    MR_String specs_file_name, MR_String term_file_name);
MR_String   read_specs_file_3(MR_AllocSiteInfoPtr alloc_id,
    MR_String specs_file_name, MR_String term_file_name, int spec_fd);
MR_String   read_specs_file_4(MR_AllocSiteInfoPtr alloc_id,
    MR_String specs_file_name, MR_String term_file_name, int spec_fd,
    size_t size, char *spec_buf);

#line 71 "parse_tree.prog_event.c"
#line 72 "parse_tree.prog_event.c"

#endif
#line 75 "parse_tree.prog_event.c"

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

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_event__type_ctor_info_attr_dep_rel_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_map_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_attr_name_map_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_attr_num_map_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_attr_type_map_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_term_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_event_set_spec_0,
	mercury_data_parse_tree__prog_event__type_ctor_info_event_spec_term_0;
MR_decl_label10(parse_tree__prog_event__build_dep_map_11_0, 140,3,5,7,8,9,13,16,18,22)
MR_decl_label10(parse_tree__prog_event__build_dep_map_11_0, 21,28,32,31,27,51,17,12,11,75)
MR_decl_label2(parse_tree__prog_event__build_dep_map_11_0, 76,77)
MR_decl_label10(parse_tree__prog_event__build_plain_type_map_17_0, 84,3,5,6,9,11,7,30,32,34)
MR_decl_label8(parse_tree__prog_event__build_plain_type_map_17_0, 36,35,38,33,40,42,41,44)
MR_decl_label8(parse_tree__prog_event__compute_prev_synth_attr_order_6_0, 3,18,2,6,10,12,13,15)
MR_decl_label10(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0, 45,5,4,8,25,11,12,14,15,17)
MR_decl_label2(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0, 20,21)
MR_decl_label3(parse_tree__prog_event__convert_list_to_spec_map_6_0, 10,3,4)
MR_decl_label10(parse_tree__prog_event__convert_term_to_spec_map_6_0, 2,3,4,6,7,8,9,10,13,15)
MR_decl_label5(parse_tree__prog_event__convert_term_to_spec_map_6_0, 11,33,36,35,57)
MR_decl_label10(parse_tree__prog_event__convert_terms_to_attrs_10_0, 95,3,7,9,6,5,32,33,31,36)
MR_decl_label10(parse_tree__prog_event__convert_terms_to_attrs_10_0, 38,40,42,45,46,47,48,49,52,37)
MR_decl_label3(parse_tree__prog_event__event_arg_modes_3_0, 2,5,1)
MR_decl_label3(parse_tree__prog_event__event_arg_types_3_0, 2,5,1)
MR_decl_label2(parse_tree__prog_event__event_attributes_3_0, 2,1)
MR_decl_label2(parse_tree__prog_event__event_number_3_0, 2,1)
MR_decl_label4(parse_tree__prog_event__keep_only_synth_attr_nums_3_0, 26,4,5,7)
MR_decl_label1(parse_tree__prog_event__project_event_arg_mode_2_0, 1)
MR_decl_label1(parse_tree__prog_event__project_event_arg_type_2_0, 1)
MR_decl_label10(parse_tree__prog_event__read_event_set_6_0, 2,3,6,9,10,8,20,23,22,31)
MR_decl_label7(parse_tree__prog_event__read_event_set_6_0, 30,42,43,44,4,45,56)
MR_decl_label5(parse_tree__prog_event__record_arg_dependencies_11_0, 46,3,6,8,4)
MR_decl_label1(parse_tree__prog_event__update_max_num_attr_3_0, 2)
MR_decl_label5(fn__parse_tree__prog_event__convert_term_to_type_1_0, 5,2,3,8,10)
MR_decl_label8(fn__parse_tree__prog_event__derive_event_set_data_1_0, 2,4,6,7,8,9,10,12)
MR_decl_label10(fn__parse_tree__prog_event__describe_attr_type_1_0, 3,7,9,11,12,13,14,15,5,17)
MR_decl_label10(fn__parse_tree__prog_event__describe_event_attr_1_0, 2,4,5,6,7,8,9,10,11,12)
MR_decl_label1(fn__parse_tree__prog_event__describe_event_attr_1_0, 13)
MR_decl_label5(fn__parse_tree__prog_event__describe_event_spec_1_0, 3,4,5,6,7)
MR_decl_label2(__Unify___parse_tree__prog_event__attr_info_0_0, 6,1)
MR_decl_label2(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0, 6,1)
MR_decl_label2(__Unify___parse_tree__prog_event__event_attr_term_0_0, 6,1)
MR_decl_label5(__Unify___parse_tree__prog_event__event_attr_type_0_0, 5,23,7,12,1)
MR_decl_label2(__Unify___parse_tree__prog_event__event_attr_type_term_0_0, 6,1)
MR_decl_label2(__Unify___parse_tree__prog_event__event_set_spec_0_0, 6,1)
MR_decl_label2(__Unify___parse_tree__prog_event__event_spec_term_0_0, 6,1)
MR_decl_label6(__Compare___parse_tree__prog_event__attr_info_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0, 3,2,5,21)
MR_decl_label5(__Compare___parse_tree__prog_event__event_attr_term_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___parse_tree__prog_event__event_attr_type_0_0, 3,2,7,5,12,10,32,16,33,17)
MR_decl_label2(__Compare___parse_tree__prog_event__event_attr_type_0_0, 19,69)
MR_decl_label4(__Compare___parse_tree__prog_event__event_attr_type_term_0_0, 3,2,5,21)
MR_decl_label4(__Compare___parse_tree__prog_event__event_set_spec_0_0, 3,2,5,21)
MR_decl_label6(__Compare___parse_tree__prog_event__event_spec_term_0_0, 3,2,5,9,13,37)
MR_decl_static(parse_tree__prog_event__read_specs_file_5_0)
MR_decl_static(parse_tree__prog_event__keep_only_synth_attr_nums_3_0)
MR_decl_static(fn__parse_tree__prog_event__convert_term_to_type_1_0)
MR_decl_static(parse_tree__prog_event__build_plain_type_map_17_0)
MR_decl_static(parse_tree__prog_event__record_arg_dependencies_11_0)
MR_decl_static(parse_tree__prog_event__build_dep_map_11_0)
MR_decl_static(fn__parse_tree__prog_event__attr_info_number_1_0)
MR_decl_static(parse_tree__prog_event__compute_prev_synth_attr_order_6_0)
MR_decl_static(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0)
MR_decl_static(parse_tree__prog_event__convert_terms_to_attrs_10_0)
MR_decl_static(parse_tree__prog_event__convert_term_to_spec_map_6_0)
MR_decl_static(parse_tree__prog_event__convert_list_to_spec_map_6_0)
MR_def_extern_entry(parse_tree__prog_event__read_event_set_6_0)
MR_def_extern_entry(fn__parse_tree__prog_event__derive_event_set_data_1_0)
MR_def_extern_entry(parse_tree__prog_event__event_number_3_0)
MR_def_extern_entry(parse_tree__prog_event__event_attributes_3_0)
MR_def_extern_entry(parse_tree__prog_event__event_arg_types_3_0)
MR_def_extern_entry(parse_tree__prog_event__event_arg_modes_3_0)
MR_decl_static(parse_tree__prog_event__update_max_num_attr_3_0)
MR_decl_static(parse_tree__prog_event__compare_event_specs_by_num_3_0)
MR_decl_static(fn__parse_tree__prog_event__describe_event_spec_1_0)
MR_decl_static(fn__parse_tree__prog_event__describe_attr_type_1_0)
MR_decl_static(fn__parse_tree__prog_event__describe_event_attr_1_0)
MR_decl_static(parse_tree__prog_event__project_event_arg_type_2_0)
MR_decl_static(parse_tree__prog_event__project_event_arg_mode_2_0)
MR_decl_static(__Unify___parse_tree__prog_event__attr_dep_rel_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__attr_dep_rel_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__attr_info_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__attr_info_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__attr_key_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__attr_key_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__attr_key_map_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__attr_key_map_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__attr_name_map_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__attr_name_map_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__attr_num_map_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__attr_num_map_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__attr_type_map_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__attr_type_map_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__event_attr_function_kind_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__event_attr_function_kind_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__event_attr_term_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__event_attr_term_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__event_attr_type_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__event_attr_type_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__event_attr_type_term_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__event_attr_type_term_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__event_set_spec_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__event_set_spec_0_0)
MR_decl_static(__Unify___parse_tree__prog_event__event_spec_term_0_0)
MR_decl_static(__Compare___parse_tree__prog_event__event_spec_term_0_0)
MR_decl_static(fn__parse_tree__prog_event__IntroducedFrom__func__build_dep_map__528__1_2_0)
MR_decl_static(parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__640__1_3_0)
MR_decl_static(parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__802__1_2_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__convert_term_to_type_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__convert_terms_to_attrs_10_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__event_arg_types_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_attribute_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__event_arg_modes_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__describe_event_spec_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__describe_attr_type_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__describe_attr_type_1_0_2;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_event__convert_term_to_type_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_event, event_attr_type_term),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_event__convert_terms_to_attrs_10_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_event, attr_info),
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, event_spec),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_event__event_arg_types_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_event__event_arg_modes_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_event__describe_event_spec_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_event__describe_attr_type_1_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, kind),
MR_CTOR0_ADDR(parse_tree__prog_data, kind)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_event__describe_attr_type_1_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_STRING_CTOR_ADDR
},
};

static const struct mercury_type_1 mercury_common_1[9] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__parse_tree__prog_event__convert_term_to_type_1_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__parse_tree__prog_event__attr_info_number_1_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(parse_tree__prog_event__compare_event_specs_by_num_3_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__parse_tree__prog_event__describe_event_spec_1_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(parse_tree__prog_event__update_max_num_attr_3_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(parse_tree__prog_event__project_event_arg_type_2_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(parse_tree__prog_event__project_event_arg_mode_2_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(fn__parse_tree__prog_event__describe_event_attr_1_0),
0
},
{
MR_COMMON(0,7),
MR_ENTRY_AP(fn__parse_tree__prog_event__describe_attr_type_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_key_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_2 mercury_common_2[12] =
{
{
{
MR_CTOR1_ADDR(digraph, digraph_key),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,2),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(3,3,6),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(3,3,8),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(3,3,7),
MR_TAG_COMMON(1,2,4)
}
},
{
{
MR_TAG_COMMON(3,3,15),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(0,6,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,3,16),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(0,6,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,7,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(0,4,2),
MR_tbmkword(0, 0)
}
},
};

static const struct mercury_type_3 mercury_common_3[17] =
{
{
4,
MR_string_const("Event", 5)
},
{
4,
MR_string_const("has more than one attribute named", 33)
},
{
3,
MR_string_const(".", 1)
},
{
4,
MR_string_const("Attribute", 9)
},
{
4,
MR_string_const("of event", 8)
},
{
4,
MR_string_const("uses nonexistent attribute", 26)
},
{
4,
MR_string_const("in its synthesis.", 17)
},
{
4,
MR_string_const("is assigned inconsistent types", 30)
},
{
4,
MR_string_const("by synthesized attributes.", 26)
},
{
4,
MR_string_const("cannot be synthesized", 21)
},
{
4,
MR_string_const("by non-function attribute", 25)
},
{
4,
MR_string_const("does not use the function attribute", 35)
},
{
4,
MR_string_const("Circular dependency among", 25)
},
{
4,
MR_string_const("the synthesized attributes of event", 35)
},
{
4,
MR_string_const("Duplicate event specification for event", 39)
},
{
4,
MR_string_const("The previous event specification is here.", 41)
},
{
4,
MR_string_const("eof in term specification file", 30)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0;
static const struct mercury_type_4 mercury_common_4[3] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_event, attr_info)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,2,10)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__build_dep_map_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__convert_terms_to_attrs_10_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_3;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_event__build_dep_map_11_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,0),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__prog_event__convert_terms_to_attrs_10_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(4,1),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_event, attr_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, event_spec),
MR_CTOR0_ADDR(parse_tree__prog_data, event_spec),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__prog_data, event_spec),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_6 mercury_common_6[2] =
{
{
MR_TAG_COMMON(1,2,6)
},
{
MR_TAG_COMMON(1,2,8)
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_tbmkword(0, 0),
1,
0,
MR_TAG_COMMON(1,2,9)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_digraph__type_ctor_info_digraph_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_digraph__ti_digraph_1builtin__type_ctor_info_string_0 = {
	&mercury_data_digraph__type_ctor_info_digraph_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_dep_rel_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__attr_dep_rel_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__attr_dep_rel_0_0)),
	"parse_tree.prog_event",
	"attr_dep_rel",
	{ 0 },
	{ (void *)&mercury_data_digraph__ti_digraph_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_attr_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_0
};

const MR_ConstString mercury_data_parse_tree__prog_event__field_names_attr_info_0_0[] = {
	"attr_info_number",
	"attr_info_name",
	"attr_info_linenumber",
	"attr_info_type"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_attr_info_0_0 = {
	"attr_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_attr_info_0_0,
	mercury_data_parse_tree__prog_event__field_names_attr_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_attr_info_0_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_attr_info_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_event__du_ptag_ordered_attr_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_attr_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_name_ordered_attr_info_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_attr_info_0_0
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_attr_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__attr_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__attr_info_0_0)),
	"parse_tree.prog_event",
	"attr_info",
	{ (void *)mercury_data_parse_tree__prog_event__du_name_ordered_attr_info_0 },
	{ (void *)mercury_data_parse_tree__prog_event__du_ptag_ordered_attr_info_0 },
	1,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_attr_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
	&mercury_data_digraph__type_ctor_info_digraph_key_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__attr_key_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__attr_key_0_0)),
	"parse_tree.prog_event",
	"attr_key",
	{ 0 },
	{ (void *)&mercury_data_digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bimap__type_ctor_info_bimap_2;

static const MR_FA_TypeInfo_Struct2 mercury_data_bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 = {
	&mercury_data_bimap__type_ctor_info_bimap_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_digraph__ti_digraph_key_1builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__attr_key_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__attr_key_map_0_0)),
	"parse_tree.prog_event",
	"attr_key_map",
	{ 0 },
	{ (void *)&mercury_data_bimap__ti_bimap_2builtin__type_ctor_info_string_0digraph__ti_digraph_key_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_name_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__attr_name_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__attr_name_map_0_0)),
	"parse_tree.prog_event",
	"attr_name_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_event__type_ctor_info_attr_info_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_num_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__attr_num_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__attr_num_map_0_0)),
	"parse_tree.prog_event",
	"attr_num_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0parse_tree__prog_event__type_ctor_info_attr_info_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_attr_type_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__attr_type_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__attr_type_map_0_0)),
	"parse_tree.prog_event",
	"attr_type_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0 = {
	"event_attr_pure_function",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1 = {
	"event_attr_impure_function",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0[] = {
	&mercury_data_parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0,
	&mercury_data_parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0[] = {
	&mercury_data_parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_1,
	&mercury_data_parse_tree__prog_event__enum_functor_desc_event_attr_function_kind_0_0
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_event_attr_function_kind_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__event_attr_function_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__event_attr_function_kind_0_0)),
	"parse_tree.prog_event",
	"event_attr_function_kind",
	{ (void *)mercury_data_parse_tree__prog_event__enum_name_ordered_event_attr_function_kind_0 },
	{ (void *)mercury_data_parse_tree__prog_event__enum_value_ordered_event_attr_function_kind_0 },
	2,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_event_attr_function_kind_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0[] = {
	"func_attr_name",
	"arg_attr_names"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0 = {
	"event_attr_synth_call_term",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_attr_synth_call_term_0_0,
	mercury_data_parse_tree__prog_event__field_names_event_attr_synth_call_term_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_synth_call_term_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_synth_call_term_0_0
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0)),
	"parse_tree.prog_event",
	"event_attr_synth_call_term",
	{ (void *)mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_synth_call_term_0 },
	{ (void *)mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_synth_call_term_0 },
	1,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_event_attr_synth_call_term_0
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_attr_term_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_0
};

const MR_ConstString mercury_data_parse_tree__prog_event__field_names_event_attr_term_0_0[] = {
	"attr_name",
	"attr_linenum",
	"attr_type"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_term_0_0 = {
	"event_attr_term",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_attr_term_0_0,
	mercury_data_parse_tree__prog_event__field_names_event_attr_term_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_term_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_term_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_term_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_term_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_term_0_0
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_event_attr_term_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__event_attr_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__event_attr_term_0_0)),
	"parse_tree.prog_event",
	"event_attr_term",
	{ (void *)mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_term_0 },
	{ (void *)mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_term_0 },
	1,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_event_attr_term_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_attr_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_0 = {
	"event_attr_type_ordinary",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_attr_type_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_attr_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_1 = {
	"event_attr_type_synthesized",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_attr_type_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_attr_type_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_2 = {
	"event_attr_type_function",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_attr_type_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_2

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_type_0[] = {
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_type_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_2,
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_0,
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_0_1
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_event_attr_type_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__event_attr_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__event_attr_type_0_0)),
	"parse_tree.prog_event",
	"event_attr_type",
	{ (void *)mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_type_0 },
	{ (void *)mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_type_0 },
	3,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_event_attr_type_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_attr_type_term_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_type_term_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0 = {
	"event_attr_type_term",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_attr_type_term_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_attr_type_term_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_type_term_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_attr_type_term_0_0
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_event_attr_type_term_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__event_attr_type_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__event_attr_type_term_0_0)),
	"parse_tree.prog_event",
	"event_attr_type_term",
	{ (void *)mercury_data_parse_tree__prog_event__du_name_ordered_event_attr_type_term_0 },
	{ (void *)mercury_data_parse_tree__prog_event__du_ptag_ordered_event_attr_type_term_0 },
	1,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_event_attr_type_term_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_spec_term_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_spec_term_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_set_spec_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_event__type_ctor_info_event_spec_term_0
};

const MR_ConstString mercury_data_parse_tree__prog_event__field_names_event_set_spec_0_0[] = {
	"event_set_name",
	"event_set_specs"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_set_spec_0_0 = {
	"event_set_spec",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_set_spec_0_0,
	mercury_data_parse_tree__prog_event__field_names_event_set_spec_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_set_spec_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_event__du_ptag_ordered_event_set_spec_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_set_spec_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_name_ordered_event_set_spec_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_set_spec_0_0
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_event_set_spec_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_set_spec_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__event_set_spec_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__event_set_spec_0_0)),
	"parse_tree.prog_event",
	"event_set_spec",
	{ (void *)mercury_data_parse_tree__prog_event__du_name_ordered_event_set_spec_0 },
	{ (void *)mercury_data_parse_tree__prog_event__du_ptag_ordered_event_set_spec_0 },
	1,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_event_set_spec_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_term_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_term_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_event__field_types_event_spec_term_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_event__type_ctor_info_event_attr_term_0
};

const MR_ConstString mercury_data_parse_tree__prog_event__field_names_event_spec_term_0_0[] = {
	"event_name",
	"event_num",
	"event_linenumber",
	"event_attrs"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_event__du_functor_desc_event_spec_term_0_0 = {
	"event_spec_term",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_event__field_types_event_spec_term_0_0,
	mercury_data_parse_tree__prog_event__field_names_event_spec_term_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_spec_term_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_event__du_ptag_ordered_event_spec_term_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_event__du_stag_ordered_event_spec_term_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_event__du_name_ordered_event_spec_term_0[] = {
	&mercury_data_parse_tree__prog_event__du_functor_desc_event_spec_term_0_0
};

const MR_Integer mercury_data_parse_tree__prog_event__functor_number_map_event_spec_term_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_event__type_ctor_info_event_spec_term_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_event__event_spec_term_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_event__event_spec_term_0_0)),
	"parse_tree.prog_event",
	"event_spec_term",
	{ (void *)mercury_data_parse_tree__prog_event__du_name_ordered_event_spec_term_0 },
	{ (void *)mercury_data_parse_tree__prog_event__du_ptag_ordered_event_spec_term_0 },
	1,
	4,
	mercury_data_parse_tree__prog_event__functor_number_map_event_spec_term_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__describe_attr_type_1_0_2 = {
{
MR_FUNCTION,
"parse_tree.prog_event",
"parse_tree.prog_event",
"describe_attr_type",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
809,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__describe_attr_type_1_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_event",
"parse_tree.prog_event",
"lambda_prog_event_m_802",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
802,
"7"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__describe_event_spec_1_0_1 = {
{
MR_FUNCTION,
"parse_tree.prog_event",
"parse_tree.prog_event",
"describe_event_attr",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
776,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__event_arg_modes_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_event",
"parse_tree.prog_event",
"project_event_arg_mode",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
844,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__event_arg_types_3_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_event",
"parse_tree.prog_event",
"project_event_arg_type",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
840,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_event",
"parse_tree.prog_event",
"update_max_num_attr",
3,
0
},
"parse_tree.prog_event",
"prog_event.m",
754,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_2 = {
{
MR_FUNCTION,
"parse_tree.prog_event",
"parse_tree.prog_event",
"describe_event_spec",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
751,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__derive_event_set_data_1_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_event",
"parse_tree.prog_event",
"compare_event_specs_by_num",
3,
0
},
"parse_tree.prog_event",
"prog_event.m",
750,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__convert_terms_to_attrs_10_0_2 = {
{
MR_FUNCTION,
"parse_tree.prog_event",
"parse_tree.prog_event",
"attr_info_number",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
642,
"47"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__convert_terms_to_attrs_10_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_event",
"parse_tree.prog_event",
"lambda_prog_event_m_640",
3,
0
},
"parse_tree.prog_event",
"prog_event.m",
640,
"43"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__prog_event__build_dep_map_11_0_1 = {
{
MR_FUNCTION,
"parse_tree.prog_event",
"parse_tree.prog_event",
"lambda_prog_event_m_528",
3,
0
},
"parse_tree.prog_event",
"prog_event.m",
528,
"48"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_event__convert_term_to_type_1_0_1 = {
{
MR_FUNCTION,
"parse_tree.prog_event",
"parse_tree.prog_event",
"convert_term_to_type",
2,
0
},
"parse_tree.prog_event",
"prog_event.m",
687,
"13"
};



MR_BEGIN_MODULE(parse_tree__prog_event_module0)
	MR_init_entry1(parse_tree__prog_event__read_specs_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__read_specs_file_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_specs_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__read_specs_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	SpecsFileName;
	MR_String	TermFileName;
	MR_String	Problem;
#define	MR_PROC_LABEL	mercury__parse_tree__prog_event__read_specs_file_5_0
	SpecsFileName = (MR_String) MR_r1;
	TermFileName = (MR_String) MR_r2;
{
#line 167 "prog_event.m"

    /*
    ** We need to save/restore MR_hp so that we can allocate the return
    ** value on Mercury's heap if necessary.
    */
    MR_save_transient_hp();
    Problem = read_specs_file_2(MR_ALLOC_ID, SpecsFileName, TermFileName);
    MR_restore_transient_hp();
;}
#line 1535 "parse_tree.prog_event.c"
	MR_r1 = (MR_Word) Problem;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module1)
	MR_init_entry1(parse_tree__prog_event__keep_only_synth_attr_nums_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__keep_only_synth_attr_nums_3_0);
	MR_init_label4(parse_tree__prog_event__keep_only_synth_attr_nums_3_0,26,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'keep_only_synth_attr_nums'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__keep_only_synth_attr_nums_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__keep_only_synth_attr_nums_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_event__keep_only_synth_attr_nums_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_localcall_lab(parse_tree__prog_event__keep_only_synth_attr_nums_3_0,
		parse_tree__prog_event__keep_only_synth_attr_nums_3_0_i4);
MR_def_label(parse_tree__prog_event__keep_only_synth_attr_nums_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		parse_tree__prog_event__keep_only_synth_attr_nums_3_0_i5);
MR_def_label(parse_tree__prog_event__keep_only_synth_attr_nums_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(parse_tree__prog_event__keep_only_synth_attr_nums_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_event__keep_only_synth_attr_nums_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__builtin_type_to_string_2_1);
MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module2)
	MR_init_entry1(fn__parse_tree__prog_event__convert_term_to_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_event__convert_term_to_type_1_0);
	MR_init_label5(fn__parse_tree__prog_event__convert_term_to_type_1_0,5,2,3,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_term_to_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_event__convert_term_to_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_event__convert_term_to_type_1_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_out__builtin_type_to_string_2_1,
		fn__parse_tree__prog_event__convert_term_to_type_1_0_i5);
MR_def_label(fn__parse_tree__prog_event__convert_term_to_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_event__convert_term_to_type_1_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(fn__parse_tree__prog_event__convert_term_to_type_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(fn__parse_tree__prog_event__convert_term_to_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__parse_tree__prog_event__convert_term_to_type_1_0_i8);
MR_def_label(fn__parse_tree__prog_event__convert_term_to_type_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_attr_type_term);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__parse_tree__prog_event__convert_term_to_type_1_0_i10);
MR_def_label(fn__parse_tree__prog_event__convert_term_to_type_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);
MR_decl_entry(digraph__add_vertex_4_0);
MR_decl_entry(bimap__insert_4_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module3)
	MR_init_entry1(parse_tree__prog_event__build_plain_type_map_17_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__build_plain_type_map_17_0);
	MR_init_label10(parse_tree__prog_event__build_plain_type_map_17_0,84,3,5,6,9,11,7,30,32,34)
	MR_init_label8(parse_tree__prog_event__build_plain_type_map_17_0,36,35,38,33,40,42,41,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_plain_type_map'/17 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__build_plain_type_map_17_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	MR_decr_sp_and_return(17);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tempr4 = MR_r4;
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_sv(13) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(12) = MR_tempr1;
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r1 = MR_sv(15);
	MR_r2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i5);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_sv(16) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__add_vertex_4_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i6);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(bimap__insert_4_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i9);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i11);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r12 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r8 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(7);
	MR_r10 = MR_sv(14);
	MR_r7 = MR_r12;
	MR_r11 = MR_sv(8);
	MR_r9 = MR_sv(12);
	MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i30);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr7 = MR_sv(1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tempr8 = MR_sv(2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr8;
	MR_tempr9 = MR_sv(3);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r11 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(8);
	MR_r1 = MR_tempr7;
	MR_r2 = MR_tempr8;
	MR_r3 = MR_tempr9;
	MR_r8 = MR_sv(5);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(7);
	MR_r10 = MR_sv(14);
	MR_r7 = MR_sv(13);
	MR_r9 = MR_sv(6);
	}
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),2)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i32);
	}
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i84);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(11),0)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i33);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r8;
	MR_sv(9) = MR_r4;
	MR_sv(7) = MR_r6;
	MR_sv(14) = MR_r10;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r11;
	MR_sv(12) = MR_r9;
	MR_r1 = MR_body((MR_Integer) MR_sv(11), (MR_Integer) 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_event__convert_term_to_type_1_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i34);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i36);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i35);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(7);
	MR_r10 = MR_sv(14);
	MR_r7 = MR_sv(6);
	MR_r11 = MR_sv(8);
	MR_r9 = MR_sv(12);
	MR_r8 = MR_sv(5);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i84);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i38);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(7);
	MR_r10 = MR_sv(14);
	MR_r7 = MR_sv(6);
	MR_r11 = MR_sv(8);
	MR_r9 = MR_sv(12);
	MR_r8 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i84);
	}
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r8;
	MR_sv(9) = MR_r4;
	MR_sv(7) = MR_r6;
	MR_sv(14) = MR_r10;
	MR_sv(6) = MR_r7;
	MR_sv(8) = MR_r11;
	MR_sv(12) = MR_r9;
	MR_r1 = MR_tfield(1, MR_sv(11), 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_event__convert_term_to_type_1_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i40);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i42);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i41);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(7);
	MR_r10 = MR_sv(14);
	MR_r7 = MR_sv(6);
	MR_r11 = MR_sv(8);
	MR_r9 = MR_sv(12);
	MR_r8 = MR_sv(5);
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i84);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_event__build_plain_type_map_17_0_i44);
MR_def_label(parse_tree__prog_event__build_plain_type_map_17_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(7);
	MR_r10 = MR_sv(14);
	MR_r7 = MR_sv(6);
	MR_r11 = MR_sv(8);
	MR_r9 = MR_sv(12);
	MR_r8 = MR_tempr1;
	MR_r5 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_succip_word = MR_sv(17);
	MR_GOTO_LAB(parse_tree__prog_event__build_plain_type_map_17_0_i84);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__search_3_0);
MR_decl_entry(digraph__add_edge_4_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module4)
	MR_init_entry1(parse_tree__prog_event__record_arg_dependencies_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__record_arg_dependencies_11_0);
	MR_init_label5(parse_tree__prog_event__record_arg_dependencies_11_0,46,3,6,8,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_arg_dependencies'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__record_arg_dependencies_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_event__record_arg_dependencies_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__record_arg_dependencies_11_0_i3);
	}
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(11);
MR_def_label(parse_tree__prog_event__record_arg_dependencies_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r7;
	MR_sv(10) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_r4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(bimap__search_3_0,
		parse_tree__prog_event__record_arg_dependencies_11_0_i6);
MR_def_label(parse_tree__prog_event__record_arg_dependencies_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__record_arg_dependencies_11_0_i4);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(digraph__add_edge_4_0,
		parse_tree__prog_event__record_arg_dependencies_11_0_i8);
MR_def_label(parse_tree__prog_event__record_arg_dependencies_11_0,8)
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
	MR_r7 = MR_sv(10);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_sv(8);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(parse_tree__prog_event__record_arg_dependencies_11_0_i46);
	}
MR_def_label(parse_tree__prog_event__record_arg_dependencies_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr7 = MR_sv(5);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tempr8 = MR_sv(1);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr3, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tempr9 = MR_sv(2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr9;
	MR_tempr10 = MR_sv(3);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr10;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr5, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_sv(8);
	MR_r1 = MR_tempr8;
	MR_r2 = MR_tempr9;
	MR_r3 = MR_tempr10;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr7;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(parse_tree__prog_event__record_arg_dependencies_11_0_i46);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bimap__lookup_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__void_type_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module5)
	MR_init_entry1(parse_tree__prog_event__build_dep_map_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__build_dep_map_11_0);
	MR_init_label10(parse_tree__prog_event__build_dep_map_11_0,140,3,5,7,8,9,13,16,18,22)
	MR_init_label10(parse_tree__prog_event__build_dep_map_11_0,21,28,32,31,27,51,17,12,11,75)
	MR_init_label2(parse_tree__prog_event__build_dep_map_11_0,76,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_dep_map'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__build_dep_map_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i3);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_decr_sp_and_return(15);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_tempr3 = MR_r5;
	MR_sv(7) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(14) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(bimap__lookup_3_0,
		parse_tree__prog_event__build_dep_map_11_0_i5);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),2)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),0)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_tempr2 = MR_tfield(1, MR_sv(9), 1);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_tempr2;
	MR_r7 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_r9 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_event__record_arg_dependencies_11_0,
		parse_tree__prog_event__build_dep_map_11_0_i9);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i11);
	}
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(11);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__build_dep_map_11_0_i13);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__parse_tree__prog_event__IntroducedFrom__func__build_dep_map__528__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tempr2 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		parse_tree__prog_event__build_dep_map_11_0_i16);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__build_dep_map_11_0_i18);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i17);
	}
	MR_r6 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i22);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 5);
	MR_sv(12) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = (MR_Integer) 2;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i21);
	}
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 5);
	MR_sv(12) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 3) = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(14);
	}
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(14) = MR_r1;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__build_dep_map_11_0_i28);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i27);
	}
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		parse_tree__prog_event__build_dep_map_11_0_i32);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i31);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(13);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_sv(11), 2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr5;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(13);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
	}
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_event__build_dep_map_11_0_i51);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(13);
	MR_r6 = MR_tempr1;
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
	}
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,9);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr5 = MR_sv(2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr5;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(13);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
	}
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(13);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(6);
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r2;
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__void_type_0_0,
		parse_tree__prog_event__build_dep_map_11_0_i75);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_event__build_dep_map_11_0_i76);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_event__build_dep_map_11_0_i77);
MR_def_label(parse_tree__prog_event__build_dep_map_11_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(13);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(15);
	MR_GOTO_LAB(parse_tree__prog_event__build_dep_map_11_0_i140);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module6)
	MR_init_entry1(fn__parse_tree__prog_event__attr_info_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_event__attr_info_number_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'attr_info_number'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_event__attr_info_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(set__insert_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(parse_tree__prog_event_module7)
	MR_init_entry1(parse_tree__prog_event__compute_prev_synth_attr_order_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__compute_prev_synth_attr_order_6_0);
	MR_init_label8(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,3,18,2,6,10,12,13,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_prev_synth_attr_order'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__compute_prev_synth_attr_order_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(set__member_2_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i3);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i2);
	}
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i6);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i18);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i18);
	}
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(7) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i10);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i12);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i13);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_sv(2), 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_6_0_i15);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module8)
	MR_init_entry1(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0);
	MR_init_label10(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,45,5,4,8,25,11,12,14,15,17)
	MR_init_label2(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,20,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_prev_synth_attr_order_for_args'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i45);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i5);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i20);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i8);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	MR_r5 = MR_tempr1;
	if (!(((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 2)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 0))))) {
		MR_GOTO_LAB(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i11);
	}
	}
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(8);
	MR_np_localcall_lab(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i20);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r5, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(9) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__insert_3_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i12);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_localcall_lab(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i14);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i15);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_sv(5), 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i17);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(4) = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_localcall_lab(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i20);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0_i21);
MR_def_label(parse_tree__prog_event__compute_prev_synth_attr_order_for_args_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_mode__in_mode_0_0);
MR_decl_entry(fn__map__search_2_0);
MR_decl_entry(list__map_3_2);
MR_decl_entry(fn__assoc_list__from_corresponding_lists_2_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module9)
	MR_init_entry1(parse_tree__prog_event__convert_terms_to_attrs_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__convert_terms_to_attrs_10_0);
	MR_init_label10(parse_tree__prog_event__convert_terms_to_attrs_10_0,95,3,7,9,6,5,32,33,31,36)
	MR_init_label10(parse_tree__prog_event__convert_terms_to_attrs_10_0,38,40,42,45,46,47,48,49,52,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_terms_to_attrs'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__convert_terms_to_attrs_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i3);
	}
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(16);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_r10 = MR_tempr1;
	MR_r9 = MR_tfield(0, MR_tempr1, 2);
	if (MR_PTAG_TESTR(MR_r9,2)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i5);
	}
	MR_sv(12) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = MR_tempr2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i7);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i6);
	}
	MR_sv(12) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i9);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r8 = MR_sv(7);
	MR_r5 = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i95);
	}
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr6 = MR_sv(1);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tempr7 = MR_sv(2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_sv(7);
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tempr7;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i95);
	}
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r9,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_r6, 1);
	MR_sv(9) = MR_tfield(0, MR_r10, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i32);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i33);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tempr3 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r8 = MR_sv(7);
	MR_r5 = ((MR_Integer) MR_tempr3 + (MR_Integer) 1);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i95);
	}
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_tfield(1, MR_r6, 1);
	MR_sv(9) = MR_tfield(0, MR_r10, 0);
	MR_sv(12) = MR_tfield(1, MR_r9, 1);
	MR_sv(14) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i36);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(13) = MR_r1;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__map__search_2_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i38);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i37);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_event__attr_info_number_1_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i40);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__640__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(list__map_3_2,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i42);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i37);
	}
	MR_sv(15) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(15);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i45);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__assoc_list__from_corresponding_lists_2_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i46);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(fn__set__init_0_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i47);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__init_0_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i48);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_event__compute_prev_synth_attr_order_6_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i49);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_sv(12);
	MR_tfield(0, MR_r1, 1) = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(12) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__in_mode_0_0,
		parse_tree__prog_event__convert_terms_to_attrs_10_0_i52);
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_r6 = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(9);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(13);
	MR_tfield(0, MR_tempr2, 3) = MR_r1;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r8 = MR_sv(7);
	MR_r5 = ((MR_Integer) MR_tempr4 + (MR_Integer) 1);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i95);
	}
MR_def_label(parse_tree__prog_event__convert_terms_to_attrs_10_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(8);
	MR_r8 = MR_sv(7);
	MR_r7 = MR_sv(6);
	MR_r5 = ((MR_Integer) MR_sv(5) + (MR_Integer) 1);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(parse_tree__prog_event__convert_terms_to_attrs_10_0_i95);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(fn__bimap__init_0_0);
MR_decl_entry(fn__digraph__init_0_0);
MR_decl_entry(digraph__tsort_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_attribute_0;
MR_decl_entry(list__reverse_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_spec_0;

MR_BEGIN_MODULE(parse_tree__prog_event_module10)
	MR_init_entry1(parse_tree__prog_event__convert_term_to_spec_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__convert_term_to_spec_map_6_0);
	MR_init_label10(parse_tree__prog_event__convert_term_to_spec_map_6_0,2,3,4,6,7,8,9,10,13,15)
	MR_init_label5(parse_tree__prog_event__convert_term_to_spec_map_6_0,11,33,36,35,57)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_term_to_spec_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__convert_term_to_spec_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i2);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(12) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i3);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i4);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(fn__bimap__init_0_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i6);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(fn__digraph__init_0_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i7);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(9);
	MR_r9 = MR_sv(10);
	MR_r10 = MR_tempr1;
	MR_r11 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__prog_event__build_plain_type_map_17_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i8);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_tempr2 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_tempr3 = MR_r6;
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_event__build_dep_map_11_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i9);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr2;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_tempr1;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__prog_event__convert_terms_to_attrs_10_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i10);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(digraph__tsort_2_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i13);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_term_to_spec_map_6_0_i11);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_event__keep_only_synth_attr_nums_3_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i15);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i33);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,3,13);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,3,12);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_sv(7) = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_r2;
	MR_r2 = MR_r1;
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i33);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i36);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_term_to_spec_map_6_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tempr4 = MR_sv(1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,7);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(13);
	}
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(map__det_insert_4_0,
		parse_tree__prog_event__convert_term_to_spec_map_6_0_i57);
MR_def_label(parse_tree__prog_event__convert_term_to_spec_map_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module11)
	MR_init_entry1(parse_tree__prog_event__convert_list_to_spec_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__convert_list_to_spec_map_6_0);
	MR_init_label3(parse_tree__prog_event__convert_list_to_spec_map_6_0,10,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_list_to_spec_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__convert_list_to_spec_map_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_event__convert_list_to_spec_map_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__convert_list_to_spec_map_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(3);
MR_def_label(parse_tree__prog_event__convert_list_to_spec_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_event__convert_term_to_spec_map_6_0,
		parse_tree__prog_event__convert_list_to_spec_map_6_0_i4);
MR_def_label(parse_tree__prog_event__convert_list_to_spec_map_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(parse_tree__prog_event__convert_list_to_spec_map_6_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__make_temp_3_0);
MR_decl_entry(io__open_input_4_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(io__remove_file_4_0);
MR_decl_entry(io__read_4_0);
MR_decl_entry(io__close_input_3_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module12)
	MR_init_entry1(parse_tree__prog_event__read_event_set_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__read_event_set_6_0);
	MR_init_label10(parse_tree__prog_event__read_event_set_6_0,2,3,6,9,10,8,20,23,22,31)
	MR_init_label7(parse_tree__prog_event__read_event_set_6_0,30,42,43,44,4,45,56)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_event_set'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_event__read_event_set_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(io__make_temp_3_0,
		parse_tree__prog_event__read_event_set_6_0_i2);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_event__read_specs_file_5_0,
		parse_tree__prog_event__read_event_set_6_0_i3);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_event__read_event_set_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__open_input_4_0,
		parse_tree__prog_event__read_event_set_6_0_i6);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_event__read_event_set_6_0_i8);
	}
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__read_event_set_6_0_i9);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		parse_tree__prog_event__read_event_set_6_0_i10);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(io__remove_file_4_0,
		parse_tree__prog_event__read_event_set_6_0_i56);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_set_spec);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__read_4_0,
		parse_tree__prog_event__read_event_set_6_0_i20);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__read_event_set_6_0_i22);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__read_event_set_6_0_i23);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,2,11);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		parse_tree__prog_event__read_event_set_6_0_i44);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(parse_tree__prog_event__read_event_set_6_0_i30);
	}
	MR_sv(5) = MR_tfield(2, MR_r1, 0);
	MR_sv(4) = MR_tfield(2, MR_r1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__read_event_set_6_0_i31);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr3, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_sv(5) = MR_r1;
	MR_tempr3 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		parse_tree__prog_event__read_event_set_6_0_i44);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__read_event_set_6_0_i42);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_event__convert_list_to_spec_map_6_0,
		parse_tree__prog_event__read_event_set_6_0_i43);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__close_input_3_0,
		parse_tree__prog_event__read_event_set_6_0_i44);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__remove_file_4_0,
		parse_tree__prog_event__read_event_set_6_0_i56);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_np_call_localret_ent(fn__map__init_0_0,
		parse_tree__prog_event__read_event_set_6_0_i45);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(io__remove_file_4_0,
		parse_tree__prog_event__read_event_set_6_0_i56);
MR_def_label(parse_tree__prog_event__read_event_set_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__values_2_0);
MR_decl_entry(list__sort_3_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module13)
	MR_init_entry1(fn__parse_tree__prog_event__derive_event_set_data_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_event__derive_event_set_data_1_0);
	MR_init_label8(fn__parse_tree__prog_event__derive_event_set_data_1_0,2,4,6,7,8,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'derive_event_set_data'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_event__derive_event_set_data_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__values_2_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i2);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__sort_3_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i4);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i6);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i7);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i8);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i9);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("event set ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i10);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Integer) -1;
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		fn__parse_tree__prog_event__derive_event_set_data_1_0_i12);
MR_def_label(fn__parse_tree__prog_event__derive_event_set_data_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module14)
	MR_init_entry1(parse_tree__prog_event__event_number_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__event_number_3_0);
	MR_init_label2(parse_tree__prog_event__event_number_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'event_number'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_event__event_number_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__event_number_3_0_i2);
MR_def_label(parse_tree__prog_event__event_number_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__event_number_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_event__event_number_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module15)
	MR_init_entry1(parse_tree__prog_event__event_attributes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__event_attributes_3_0);
	MR_init_label2(parse_tree__prog_event__event_attributes_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'event_attributes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_event__event_attributes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__event_attributes_3_0_i2);
MR_def_label(parse_tree__prog_event__event_attributes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__event_attributes_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r2, 3);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_event__event_attributes_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_map_3_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module16)
	MR_init_entry1(parse_tree__prog_event__event_arg_types_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__event_arg_types_3_0);
	MR_init_label3(parse_tree__prog_event__event_arg_types_3_0,2,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'event_arg_types'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_event__event_arg_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__event_arg_types_3_0_i2);
MR_def_label(parse_tree__prog_event__event_arg_types_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__event_arg_types_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		parse_tree__prog_event__event_arg_types_3_0_i5);
MR_def_label(parse_tree__prog_event__event_arg_types_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_event__event_arg_types_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;

MR_BEGIN_MODULE(parse_tree__prog_event_module17)
	MR_init_entry1(parse_tree__prog_event__event_arg_modes_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__event_arg_modes_3_0);
	MR_init_label3(parse_tree__prog_event__event_arg_modes_3_0,2,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'event_arg_modes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_event__event_arg_modes_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_spec);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__prog_event__event_arg_modes_3_0_i2);
MR_def_label(parse_tree__prog_event__event_arg_modes_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__prog_event__event_arg_modes_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		parse_tree__prog_event__event_arg_modes_3_0_i5);
MR_def_label(parse_tree__prog_event__event_arg_modes_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_event__event_arg_modes_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__int__max_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module18)
	MR_init_entry1(parse_tree__prog_event__update_max_num_attr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__update_max_num_attr_3_0);
	MR_init_label1(parse_tree__prog_event__update_max_num_attr_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_max_num_attr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__update_max_num_attr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__length_2_0,
		parse_tree__prog_event__update_max_num_attr_3_0_i2);
MR_def_label(parse_tree__prog_event__update_max_num_attr_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__int__max_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module19)
	MR_init_entry1(parse_tree__prog_event__compare_event_specs_by_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__compare_event_specs_by_num_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compare_event_specs_by_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__compare_event_specs_by_num_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module20)
	MR_init_entry1(fn__parse_tree__prog_event__describe_event_spec_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_event__describe_event_spec_1_0);
	MR_init_label5(fn__parse_tree__prog_event__describe_event_spec_1_0,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_event_spec'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_event__describe_event_spec_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, event_attribute);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r4 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__parse_tree__prog_event__describe_event_spec_1_0_i3);
MR_def_label(fn__parse_tree__prog_event__describe_event_spec_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__parse_tree__prog_event__describe_event_spec_1_0_i4);
MR_def_label(fn__parse_tree__prog_event__describe_event_spec_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_spec_1_0_i5);
MR_def_label(fn__parse_tree__prog_event__describe_event_spec_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_spec_1_0_i6);
MR_def_label(fn__parse_tree__prog_event__describe_event_spec_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_spec_1_0_i7);
MR_def_label(fn__parse_tree__prog_event__describe_event_spec_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("event ", 6);
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

MR_decl_entry(parse_tree__prog_out__builtin_type_to_string_2_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module21)
	MR_init_entry1(fn__parse_tree__prog_event__describe_attr_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_event__describe_attr_type_1_0);
	MR_init_label10(fn__parse_tree__prog_event__describe_attr_type_1_0,3,7,9,11,12,13,14,15,5,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_attr_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_event__describe_attr_type_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_event__describe_attr_type_1_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_tailcall_ent(parse_tree__prog_out__builtin_type_to_string_2_0);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_event__describe_attr_type_1_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__802__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(1, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("parse_tree.prog_event", 21);
	MR_r3 = (MR_Word) MR_string_const("function \140parse_tree.prog_event.describe_attr_type\'/1", 53);
	MR_r4 = (MR_Word) MR_string_const("not kind_star", 13);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		fn__parse_tree__prog_event__describe_attr_type_1_0_i7);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_event__describe_attr_type_1_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__prog_event__describe_attr_type_1_0_i15);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__parse_tree__prog_event__describe_attr_type_1_0_i11);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__parse_tree__prog_event__describe_attr_type_1_0_i12);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_attr_type_1_0_i13);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_attr_type_1_0_i14);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__prog_event__describe_attr_type_1_0_i15);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_event__describe_attr_type_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("function", 8);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_event__describe_attr_type_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("parse_tree.prog_event", 21);
	MR_r2 = (MR_Word) MR_string_const("function \140parse_tree.prog_event.describe_attr_type\'/1", 53);
	MR_r3 = (MR_Word) MR_string_const("type not constructed by prog_event", 34);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__assoc_list__keys_1_0);
MR_decl_entry(fn__pair__fst_1_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module22)
	MR_init_entry1(fn__parse_tree__prog_event__describe_event_attr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_event__describe_event_attr_1_0);
	MR_init_label10(fn__parse_tree__prog_event__describe_event_attr_1_0,2,4,5,6,7,8,9,10,11,12)
	MR_init_label1(fn__parse_tree__prog_event__describe_event_attr_1_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'describe_event_attr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_event__describe_event_attr_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__parse_tree__prog_event__describe_attr_type_1_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i2);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_event__describe_event_attr_1_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i12);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__assoc_list__keys_1_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i5);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i6);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pair__fst_1_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i7);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i8);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i9);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i10);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" synthesized by ", 16);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i11);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i12);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_event__describe_event_attr_1_0_i13);
MR_def_label(fn__parse_tree__prog_event__describe_event_attr_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module23)
	MR_init_entry1(parse_tree__prog_event__project_event_arg_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__project_event_arg_type_2_0);
	MR_init_label1(parse_tree__prog_event__project_event_arg_type_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_event_arg_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__project_event_arg_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__project_event_arg_type_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_event__project_event_arg_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module24)
	MR_init_entry1(parse_tree__prog_event__project_event_arg_mode_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__project_event_arg_mode_2_0);
	MR_init_label1(parse_tree__prog_event__project_event_arg_mode_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'project_event_arg_mode'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__project_event_arg_mode_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_event__project_event_arg_mode_2_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__prog_event__project_event_arg_mode_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___digraph__digraph_1_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module25)
	MR_init_entry1(__Unify___parse_tree__prog_event__attr_dep_rel_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__attr_dep_rel_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__attr_dep_rel_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___digraph__digraph_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___digraph__digraph_1_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module26)
	MR_init_entry1(__Compare___parse_tree__prog_event__attr_dep_rel_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__attr_dep_rel_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__attr_dep_rel_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___digraph__digraph_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module27)
	MR_init_entry1(__Unify___parse_tree__prog_event__attr_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__attr_info_0_0);
	MR_init_label2(__Unify___parse_tree__prog_event__attr_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__attr_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__attr_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__attr_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__attr_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__attr_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_event__event_attr_type_0_0);
	}
MR_def_label(__Unify___parse_tree__prog_event__attr_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_event__attr_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module28)
	MR_init_entry1(__Compare___parse_tree__prog_event__attr_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__attr_info_0_0);
	MR_init_label6(__Compare___parse_tree__prog_event__attr_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__attr_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__attr_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_event__attr_info_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_event__attr_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_event__attr_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_event__attr_info_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_event__attr_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__attr_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_event__attr_info_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_event__attr_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__attr_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_event__attr_info_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_event__attr_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__attr_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_event__event_attr_type_0_0);
MR_def_label(__Compare___parse_tree__prog_event__attr_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___digraph__digraph_key_1_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module29)
	MR_init_entry1(__Unify___parse_tree__prog_event__attr_key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__attr_key_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__attr_key_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___digraph__digraph_key_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___digraph__digraph_key_1_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module30)
	MR_init_entry1(__Compare___parse_tree__prog_event__attr_key_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__attr_key_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__attr_key_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___digraph__digraph_key_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___bimap__bimap_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module31)
	MR_init_entry1(__Unify___parse_tree__prog_event__attr_key_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__attr_key_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__attr_key_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___bimap__bimap_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___bimap__bimap_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module32)
	MR_init_entry1(__Compare___parse_tree__prog_event__attr_key_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__attr_key_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__attr_key_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___bimap__bimap_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module33)
	MR_init_entry1(__Unify___parse_tree__prog_event__attr_name_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__attr_name_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__attr_name_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
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

MR_BEGIN_MODULE(parse_tree__prog_event_module34)
	MR_init_entry1(__Compare___parse_tree__prog_event__attr_name_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__attr_name_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__attr_name_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module35)
	MR_init_entry1(__Unify___parse_tree__prog_event__attr_num_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__attr_num_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__attr_num_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module36)
	MR_init_entry1(__Compare___parse_tree__prog_event__attr_num_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__attr_num_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__attr_num_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module37)
	MR_init_entry1(__Unify___parse_tree__prog_event__attr_type_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__attr_type_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__attr_type_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module38)
	MR_init_entry1(__Compare___parse_tree__prog_event__attr_type_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__attr_type_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__attr_type_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module39)
	MR_init_entry1(__Unify___parse_tree__prog_event__event_attr_function_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__event_attr_function_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__event_attr_function_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module40)
	MR_init_entry1(__Compare___parse_tree__prog_event__event_attr_function_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__event_attr_function_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__event_attr_function_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module41)
	MR_init_entry1(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0);
	MR_init_label2(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module42)
	MR_init_entry1(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0);
	MR_init_label4(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module43)
	MR_init_entry1(__Unify___parse_tree__prog_event__event_attr_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__event_attr_term_0_0);
	MR_init_label2(__Unify___parse_tree__prog_event__event_attr_term_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__event_attr_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_term_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_term_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_term_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_event__event_attr_type_0_0);
	}
MR_def_label(__Unify___parse_tree__prog_event__event_attr_term_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_event__event_attr_term_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module44)
	MR_init_entry1(__Compare___parse_tree__prog_event__event_attr_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__event_attr_term_0_0);
	MR_init_label5(__Compare___parse_tree__prog_event__event_attr_term_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__event_attr_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_term_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_term_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_term_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_event__event_attr_term_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_event__event_attr_term_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_term_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_term_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_event__event_attr_term_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_term_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_term_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_event__event_attr_type_0_0);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_term_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module45)
	MR_init_entry1(__Unify___parse_tree__prog_event__event_attr_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__event_attr_type_0_0);
	MR_init_label5(__Unify___parse_tree__prog_event__event_attr_type_0_0,5,23,7,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__event_attr_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_0_0_i23);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_event__event_attr_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_event__event_attr_type_term_0_0);
MR_def_label(__Unify___parse_tree__prog_event__event_attr_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_event__event_attr_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_event__event_attr_type_term_0_0,
		__Unify___parse_tree__prog_event__event_attr_type_0_0_i12);
MR_def_label(__Unify___parse_tree__prog_event__event_attr_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_event__event_attr_synth_call_term_0_0);
MR_def_label(__Unify___parse_tree__prog_event__event_attr_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module46)
	MR_init_entry1(__Compare___parse_tree__prog_event__event_attr_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__event_attr_type_0_0);
	MR_init_label10(__Compare___parse_tree__prog_event__event_attr_type_0_0,3,2,7,5,12,10,32,16,33,17)
	MR_init_label2(__Compare___parse_tree__prog_event__event_attr_type_0_0,19,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__event_attr_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i33);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i32);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_event__event_attr_type_term_0_0);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i16);
	}
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i17);
	}
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_event__event_attr_type_term_0_0,
		__Compare___parse_tree__prog_event__event_attr_type_0_0_i19);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_event__event_attr_synth_call_term_0_0);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module47)
	MR_init_entry1(__Unify___parse_tree__prog_event__event_attr_type_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__event_attr_type_term_0_0);
	MR_init_label2(__Unify___parse_tree__prog_event__event_attr_type_term_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__event_attr_type_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_term_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_attr_type_term_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_attr_type_term);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_event__event_attr_type_term_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_event__event_attr_type_term_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module48)
	MR_init_entry1(__Compare___parse_tree__prog_event__event_attr_type_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__event_attr_type_term_0_0);
	MR_init_label4(__Compare___parse_tree__prog_event__event_attr_type_term_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__event_attr_type_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_term_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_term_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_term_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_term_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_event__event_attr_type_term_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_term_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_attr_type_term_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_attr_type_term);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_event__event_attr_type_term_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module49)
	MR_init_entry1(__Unify___parse_tree__prog_event__event_set_spec_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__event_set_spec_0_0);
	MR_init_label2(__Unify___parse_tree__prog_event__event_set_spec_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__event_set_spec_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_set_spec_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_set_spec_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_spec_term);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_event__event_set_spec_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_event__event_set_spec_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module50)
	MR_init_entry1(__Compare___parse_tree__prog_event__event_set_spec_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__event_set_spec_0_0);
	MR_init_label4(__Compare___parse_tree__prog_event__event_set_spec_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__event_set_spec_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_set_spec_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_set_spec_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_event__event_set_spec_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_event__event_set_spec_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_event__event_set_spec_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_event__event_set_spec_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_set_spec_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_spec_term);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_event__event_set_spec_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module51)
	MR_init_entry1(__Unify___parse_tree__prog_event__event_spec_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_event__event_spec_term_0_0);
	MR_init_label2(__Unify___parse_tree__prog_event__event_spec_term_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__prog_event__event_spec_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_spec_term_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_spec_term_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_spec_term_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_event__event_spec_term_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_attr_term);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___parse_tree__prog_event__event_spec_term_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_event__event_spec_term_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module52)
	MR_init_entry1(__Compare___parse_tree__prog_event__event_spec_term_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_event__event_spec_term_0_0);
	MR_init_label6(__Compare___parse_tree__prog_event__event_spec_term_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__prog_event__event_spec_term_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_spec_term_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_spec_term_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_event__event_spec_term_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_event__event_spec_term_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_event__event_spec_term_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_event__event_spec_term_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_spec_term_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_event__event_spec_term_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_event__event_spec_term_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_spec_term_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_event__event_spec_term_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_event__event_spec_term_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_event__event_spec_term_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, event_attr_term);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_event__event_spec_term_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__lookup_2_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module53)
	MR_init_entry1(fn__parse_tree__prog_event__IntroducedFrom__func__build_dep_map__528__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_event__IntroducedFrom__func__build_dep_map__528__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__build_dep_map__528__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_event__IntroducedFrom__func__build_dep_map__528__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__map__lookup_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_event_module54)
	MR_init_entry1(parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__640__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__640__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_terms_to_attrs__640__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__IntroducedFrom__pred__convert_terms_to_attrs__640__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_event, attr_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__kind_0_0);

MR_BEGIN_MODULE(parse_tree__prog_event_module55)
	MR_init_entry1(parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__802__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__802__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__describe_attr_type__802__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_event__IntroducedFrom__pred__describe_attr_type__802__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__kind_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 180 "prog_event.m"


MR_String
read_specs_file_2(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name)
{
    int         spec_fd;
    MR_String   problem;

    /*
    ** There are race conditions between opening the file, stat'ing the file
    ** and reading the contents of the file, but the Unix API doesn't really
    ** allow these race conditions to be resolved.
    */

    spec_fd = open(specs_file_name, O_RDONLY);
    if (spec_fd < 0) {
        problem = MR_make_string(alloc_id, "could not open %s: %s",
            specs_file_name, strerror(errno));
    } else {
        problem = read_specs_file_3(alloc_id, specs_file_name,
            term_file_name, spec_fd);
        (void) close(spec_fd);
    }
    return problem;
}

MR_String
read_specs_file_3(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name, int spec_fd)
{
    struct stat stat_buf;
    MR_String   problem;

    if (fstat(spec_fd, &stat_buf) != 0) {
        problem = MR_make_string(alloc_id, "could not stat %s",
            specs_file_name);
    } else {
        char        *spec_buf;

        spec_buf = malloc(stat_buf.st_size + 1);
        if (spec_buf == NULL) {
            problem = MR_make_string(alloc_id,
                "could not allocate memory for a copy of %s",
                specs_file_name);
        } else {
            problem = read_specs_file_4(alloc_id, specs_file_name,
                term_file_name, spec_fd, stat_buf.st_size, spec_buf);
            free(spec_buf);
        }
    }
    return problem;
}

MR_String
read_specs_file_4(MR_AllocSiteInfoPtr alloc_id, MR_String specs_file_name,
    MR_String term_file_name, int spec_fd, size_t size, char *spec_buf)
{
    size_t      num_bytes_read;
    MR_String   problem;

    /* XXX we don't handle successful but partial reads */
    do {
        num_bytes_read = read(spec_fd, spec_buf, size);
    } while (num_bytes_read == -1 && MR_is_eintr(errno));
    if (num_bytes_read != size) {
        problem = MR_make_string(alloc_id, "could not read in %s",
            specs_file_name);
    } else {
        MR_EventSet event_set;

        /* NULL terminate the string we have read in. */
        spec_buf[num_bytes_read] = '\0';
        event_set = MR_read_event_set(specs_file_name, spec_buf);
        if (event_set == NULL) {
            problem = MR_make_string(alloc_id, "could not parse %s",
                specs_file_name);
        } else {
            FILE *term_fp;

            term_fp = fopen(term_file_name, "w");
            if (term_fp == NULL) {
                problem = MR_make_string(alloc_id, "could not open %s: %s",
                    term_file_name, strerror(errno));
            } else {
                MR_print_event_set(term_fp, event_set);
                fclose(term_fp);

                /*
                ** Our caller tests Problem against the empty string, not NULL.
                */
                problem = MR_make_string(alloc_id, "");
            }
        }
    }
    return problem;
}

#line 6288 "parse_tree.prog_event.c"

static void mercury__parse_tree__prog_event_maybe_bunch_0(void)
{
	parse_tree__prog_event_module0();
	parse_tree__prog_event_module1();
	parse_tree__prog_event_module2();
	parse_tree__prog_event_module3();
	parse_tree__prog_event_module4();
	parse_tree__prog_event_module5();
	parse_tree__prog_event_module6();
	parse_tree__prog_event_module7();
	parse_tree__prog_event_module8();
	parse_tree__prog_event_module9();
	parse_tree__prog_event_module10();
	parse_tree__prog_event_module11();
	parse_tree__prog_event_module12();
	parse_tree__prog_event_module13();
	parse_tree__prog_event_module14();
	parse_tree__prog_event_module15();
	parse_tree__prog_event_module16();
	parse_tree__prog_event_module17();
	parse_tree__prog_event_module18();
	parse_tree__prog_event_module19();
	parse_tree__prog_event_module20();
	parse_tree__prog_event_module21();
	parse_tree__prog_event_module22();
	parse_tree__prog_event_module23();
	parse_tree__prog_event_module24();
	parse_tree__prog_event_module25();
	parse_tree__prog_event_module26();
	parse_tree__prog_event_module27();
	parse_tree__prog_event_module28();
	parse_tree__prog_event_module29();
	parse_tree__prog_event_module30();
	parse_tree__prog_event_module31();
	parse_tree__prog_event_module32();
	parse_tree__prog_event_module33();
	parse_tree__prog_event_module34();
	parse_tree__prog_event_module35();
	parse_tree__prog_event_module36();
	parse_tree__prog_event_module37();
	parse_tree__prog_event_module38();
	parse_tree__prog_event_module39();
}

static void mercury__parse_tree__prog_event_maybe_bunch_1(void)
{
	parse_tree__prog_event_module40();
	parse_tree__prog_event_module41();
	parse_tree__prog_event_module42();
	parse_tree__prog_event_module43();
	parse_tree__prog_event_module44();
	parse_tree__prog_event_module45();
	parse_tree__prog_event_module46();
	parse_tree__prog_event_module47();
	parse_tree__prog_event_module48();
	parse_tree__prog_event_module49();
	parse_tree__prog_event_module50();
	parse_tree__prog_event_module51();
	parse_tree__prog_event_module52();
	parse_tree__prog_event_module53();
	parse_tree__prog_event_module54();
	parse_tree__prog_event_module55();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_event__init(void);
void mercury__parse_tree__prog_event__init_type_tables(void);
void mercury__parse_tree__prog_event__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_event__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_event__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__parse_tree__prog_event__init_threadscope_string_table(void);
#endif

void mercury__parse_tree__prog_event__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_event_maybe_bunch_0();
	mercury__parse_tree__prog_event_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_attr_dep_rel_0,
		parse_tree__prog_event__attr_dep_rel_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0,
		parse_tree__prog_event__attr_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_0,
		parse_tree__prog_event__attr_key_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_map_0,
		parse_tree__prog_event__attr_key_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_attr_name_map_0,
		parse_tree__prog_event__attr_name_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_attr_num_map_0,
		parse_tree__prog_event__attr_num_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_attr_type_map_0,
		parse_tree__prog_event__attr_type_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0,
		parse_tree__prog_event__event_attr_function_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0,
		parse_tree__prog_event__event_attr_synth_call_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_term_0,
		parse_tree__prog_event__event_attr_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_0,
		parse_tree__prog_event__event_attr_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0,
		parse_tree__prog_event__event_attr_type_term_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_event_set_spec_0,
		parse_tree__prog_event__event_set_spec_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_event__type_ctor_info_event_spec_term_0,
		parse_tree__prog_event__event_spec_term_0_0);
	mercury__parse_tree__prog_event__init_debugger();
}

void mercury__parse_tree__prog_event__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_attr_dep_rel_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_attr_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_attr_key_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_attr_name_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_attr_num_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_attr_type_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_function_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_synth_call_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_event_attr_type_term_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_event_set_spec_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_event__type_ctor_info_event_spec_term_0);
	}
}


void mercury__parse_tree__prog_event__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_event__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_event);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_event__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__parse_tree__prog_event__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
