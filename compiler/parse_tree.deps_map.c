/*
** Automatically generated from `deps_map.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__parse_tree__deps_map__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "parse_tree.deps_map.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "parse_tree.deps_map.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 36 "parse_tree.deps_map.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "parse_tree.deps_map.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "parse_tree.deps_map.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "parse_tree.deps_map.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "parse_tree.deps_map.c"
#line 53 "parse_tree.deps_map.c"
#include "parse_tree.deps_map.mh"

#line 56 "parse_tree.deps_map.c"
#line 57 "parse_tree.deps_map.c"
#ifndef PARSE_TREE__DEPS_MAP_DECL_GUARD
#define PARSE_TREE__DEPS_MAP_DECL_GUARD

#line 61 "parse_tree.deps_map.c"
#line 62 "parse_tree.deps_map.c"

#endif
#line 65 "parse_tree.deps_map.c"

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
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
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
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__deps_map__type_ctor_info_deps_0,
	mercury_data_parse_tree__deps_map__type_ctor_info_deps_map_0,
	mercury_data_parse_tree__deps_map__type_ctor_info_have_processed_0,
	mercury_data_parse_tree__deps_map__type_ctor_info_submodule_kind_0;
MR_decl_label1(parse_tree__deps_map__generate_deps_map_7_0, 2)
MR_decl_label4(parse_tree__deps_map__generate_deps_map_loop_7_0, 13,3,5,2)
MR_decl_label7(parse_tree__deps_map__generate_deps_map_step_9_0, 2,4,6,8,14,15,16)
MR_decl_label1(parse_tree__deps_map__insert_into_deps_map_3_0, 2)
MR_decl_label10(parse_tree__deps_map__lookup_dependencies_9_0, 3,2,5,9,6,13,14,16,17,20)
MR_decl_label2(parse_tree__deps_map__lookup_dependencies_9_0, 23,24)
MR_decl_label6(fn__parse_tree__deps_map__get_submodule_kind_2_0, 2,4,6,7,8,3)
MR_decl_label2(__Unify___parse_tree__deps_map__deps_0_0, 6,1)
MR_decl_label4(__Compare___parse_tree__deps_map__deps_0_0, 3,2,5,21)
MR_def_extern_entry(fn__parse_tree__deps_map__get_submodule_kind_2_0)
MR_decl_static(parse_tree__deps_map__lookup_dependencies_9_0)
MR_decl_static(parse_tree__deps_map__generate_deps_map_step_9_0)
MR_decl_static(parse_tree__deps_map__generate_deps_map_loop_7_0)
MR_def_extern_entry(parse_tree__deps_map__generate_deps_map_7_0)
MR_def_extern_entry(parse_tree__deps_map__insert_into_deps_map_3_0)
MR_def_extern_entry(__Unify___parse_tree__deps_map__deps_0_0)
MR_def_extern_entry(__Compare___parse_tree__deps_map__deps_0_0)
MR_def_extern_entry(__Unify___parse_tree__deps_map__deps_map_0_0)
MR_def_extern_entry(__Compare___parse_tree__deps_map__deps_map_0_0)
MR_def_extern_entry(__Unify___parse_tree__deps_map__have_processed_0_0)
MR_def_extern_entry(__Compare___parse_tree__deps_map__have_processed_0_0)
MR_def_extern_entry(__Unify___parse_tree__deps_map__submodule_kind_0_0)
MR_def_extern_entry(__Compare___parse_tree__deps_map__submodule_kind_0_0)
MR_decl_static(fn__parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__157__1_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_item, item)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_item, item)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__deps_map__type_ctor_info_deps_0;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__deps_map, deps)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(parse_tree__deps_map, deps)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__deps_map__lookup_dependencies_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_imports__type_ctor_info_module_and_imports_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__deps_map__lookup_dependencies_9_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_io, module_error),
MR_CTOR0_ADDR(libs__globals, globals),
MR_COMMON(1,0),
MR_CTOR0_ADDR(parse_tree__module_imports, module_and_imports)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__deps_map__lookup_dependencies_9_0_2;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__deps_map__lookup_dependencies_9_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(parse_tree__module_imports, module_and_imports),
MR_COMMON(1,2),
MR_COMMON(1,2)
}
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(parse_tree__deps_map__insert_into_deps_map_3_0),
0
},
{
MR_COMMON(5,0),
MR_ENTRY_AP(fn__parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__157__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__deps_map__generate_deps_map_step_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__deps_map__generate_deps_map_step_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_imports__type_ctor_info_module_and_imports_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__deps_map__type_ctor_info_have_processed_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__deps_map__field_types_deps_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__deps_map__type_ctor_info_have_processed_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__module_imports__type_ctor_info_module_and_imports_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__deps_map__du_functor_desc_deps_0_0 = {
	"deps",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__deps_map__field_types_deps_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__deps_map__du_stag_ordered_deps_0_0[] = {
	&mercury_data_parse_tree__deps_map__du_functor_desc_deps_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__deps_map__du_ptag_ordered_deps_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__deps_map__du_stag_ordered_deps_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__deps_map__du_name_ordered_deps_0[] = {
	&mercury_data_parse_tree__deps_map__du_functor_desc_deps_0_0
};

const MR_Integer mercury_data_parse_tree__deps_map__functor_number_map_deps_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__deps_map__type_ctor_info_deps_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__deps_map__deps_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__deps_map__deps_0_0)),
	"parse_tree.deps_map",
	"deps",
	{ (void *)mercury_data_parse_tree__deps_map__du_name_ordered_deps_0 },
	{ (void *)mercury_data_parse_tree__deps_map__du_ptag_ordered_deps_0 },
	1,
	4,
	mercury_data_parse_tree__deps_map__functor_number_map_deps_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_parse_tree__deps_map__type_ctor_info_deps_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__deps_map__type_ctor_info_deps_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__deps_map__deps_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__deps_map__deps_map_0_0)),
	"parse_tree.deps_map",
	"deps_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0parse_tree__deps_map__type_ctor_info_deps_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__deps_map__enum_functor_desc_have_processed_0_0 = {
	"not_yet_processed",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__deps_map__enum_functor_desc_have_processed_0_1 = {
	"already_processed",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__deps_map__enum_value_ordered_have_processed_0[] = {
	&mercury_data_parse_tree__deps_map__enum_functor_desc_have_processed_0_0,
	&mercury_data_parse_tree__deps_map__enum_functor_desc_have_processed_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__deps_map__enum_name_ordered_have_processed_0[] = {
	&mercury_data_parse_tree__deps_map__enum_functor_desc_have_processed_0_1,
	&mercury_data_parse_tree__deps_map__enum_functor_desc_have_processed_0_0
};

const MR_Integer mercury_data_parse_tree__deps_map__functor_number_map_have_processed_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__deps_map__type_ctor_info_have_processed_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__deps_map__have_processed_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__deps_map__have_processed_0_0)),
	"parse_tree.deps_map",
	"have_processed",
	{ (void *)mercury_data_parse_tree__deps_map__enum_name_ordered_have_processed_0 },
	{ (void *)mercury_data_parse_tree__deps_map__enum_value_ordered_have_processed_0 },
	2,
	4,
	mercury_data_parse_tree__deps_map__functor_number_map_have_processed_0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0 = {
	"toplevel",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1 = {
	"nested_submodule",
	1
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2 = {
	"separate_submodule",
	2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__deps_map__enum_value_ordered_submodule_kind_0[] = {
	&mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0,
	&mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
	&mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__deps_map__enum_name_ordered_submodule_kind_0[] = {
	&mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_1,
	&mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_2,
	&mercury_data_parse_tree__deps_map__enum_functor_desc_submodule_kind_0_0
};

const MR_Integer mercury_data_parse_tree__deps_map__functor_number_map_submodule_kind_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__deps_map__type_ctor_info_submodule_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__deps_map__submodule_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__deps_map__submodule_kind_0_0)),
	"parse_tree.deps_map",
	"submodule_kind",
	{ (void *)mercury_data_parse_tree__deps_map__enum_name_ordered_submodule_kind_0 },
	{ (void *)mercury_data_parse_tree__deps_map__enum_value_ordered_submodule_kind_0 },
	3,
	4,
	mercury_data_parse_tree__deps_map__functor_number_map_submodule_kind_0
};


static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__deps_map__generate_deps_map_step_9_0_1 = {
{
MR_FUNCTION,
"parse_tree.deps_map",
"parse_tree.deps_map",
"lambda_deps_map_m_157",
2,
0
},
"parse_tree.deps_map",
"deps_map.m",
157,
"d1;c11;d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__deps_map__lookup_dependencies_9_0_2 = {
{
MR_PREDICATE,
"parse_tree.deps_map",
"parse_tree.deps_map",
"insert_into_deps_map",
3,
0
},
"parse_tree.deps_map",
"deps_map.m",
192,
"d1;c10;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__deps_map__lookup_dependencies_9_0_1 = {
{
MR_PREDICATE,
"parse_tree.module_imports",
"parse_tree.module_imports",
"init_dependencies",
8,
0
},
"parse_tree.deps_map",
"deps_map.m",
225,
"d1;c13;"
};


MR_decl_entry(fn__mdbcomp__prim_data__get_ancestors_1_0);
MR_decl_entry(list__last_2_0);
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module0)
	MR_init_entry1(fn__parse_tree__deps_map__get_submodule_kind_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__deps_map__get_submodule_kind_2_0);
	MR_init_label6(fn__parse_tree__deps_map__get_submodule_kind_2_0,2,4,6,7,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_submodule_kind'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__deps_map__get_submodule_kind_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_ancestors_1_0,
		fn__parse_tree__deps_map__get_submodule_kind_2_0_i2);
MR_def_label(fn__parse_tree__deps_map__get_submodule_kind_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__last_2_0,
		fn__parse_tree__deps_map__get_submodule_kind_2_0_i4);
MR_def_label(fn__parse_tree__deps_map__get_submodule_kind_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__deps_map__get_submodule_kind_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__deps_map, deps);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__parse_tree__deps_map__get_submodule_kind_2_0_i6);
MR_def_label(fn__parse_tree__deps_map__get_submodule_kind_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__parse_tree__deps_map__get_submodule_kind_2_0_i7);
MR_def_label(fn__parse_tree__deps_map__get_submodule_kind_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_r1, 1), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__deps_map__get_submodule_kind_2_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__parse_tree__deps_map__get_submodule_kind_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__parse_tree__deps_map__get_submodule_kind_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(parse_tree__read_modules__read_module_ignore_errors_12_0);
MR_decl_entry(parse_tree__modules__split_into_submodules_5_0);
MR_decl_entry(parse_tree__error_util__write_error_specs_8_0);
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(parse_tree__module_imports__init_dependencies_8_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module1)
	MR_init_entry1(parse_tree__deps_map__lookup_dependencies_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__deps_map__lookup_dependencies_9_0);
	MR_init_label10(parse_tree__deps_map__lookup_dependencies_9_0,3,2,5,9,6,13,14,16,17,20)
	MR_init_label2(parse_tree__deps_map__lookup_dependencies_9_0,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_dependencies'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__deps_map__lookup_dependencies_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__deps_map, deps);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i3);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__deps_map__lookup_dependencies_9_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(".m", 2);
	MR_r4 = (MR_Word) MR_string_const("Getting dependencies for module", 31);
	MR_r5 = MR_sv(3);
	MR_r6 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__read_modules__read_module_ignore_errors_12_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i5);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__deps_map__lookup_dependencies_9_0_i6);
	}
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(parse_tree__deps_map__lookup_dependencies_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(".int", 4);
	MR_r4 = (MR_Word) MR_string_const("Getting dependencies for module interface", 41);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__read_modules__read_module_ignore_errors_12_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i9);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_GOTO_LAB(parse_tree__deps_map__lookup_dependencies_9_0_i16);
	}
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__modules__split_into_submodules_5_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i13);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__error_util__write_error_specs_8_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i14);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i17);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__module_imports__init_dependencies_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_CTOR_ADDR(pair, pair, 2);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tfield(0, MR_r1, 2) = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__module_imports, module_and_imports);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i20);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__deps_map, deps);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__module_imports, module_and_imports);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i23);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		parse_tree__deps_map__lookup_dependencies_9_0_i24);
MR_def_label(parse_tree__deps_map__lookup_dependencies_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__set_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(set__list_to_set_2_0);
MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module2)
	MR_init_entry1(parse_tree__deps_map__generate_deps_map_step_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__deps_map__generate_deps_map_step_9_0);
	MR_init_label7(parse_tree__deps_map__generate_deps_map_step_9_0,2,4,6,8,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_deps_map_step'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__deps_map__generate_deps_map_step_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(parse_tree__deps_map__lookup_dependencies_9_0,
		parse_tree__deps_map__generate_deps_map_step_9_0_i2);
MR_def_label(parse_tree__deps_map__generate_deps_map_step_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__deps_map__generate_deps_map_step_9_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(parse_tree__deps_map__generate_deps_map_step_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr4 = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr4;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(4);
	MR_tempr3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__deps_map, deps);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		parse_tree__deps_map__generate_deps_map_step_9_0_i6);
MR_def_label(parse_tree__deps_map__generate_deps_map_step_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r4 = MR_tfield(0, MR_sv(1), 12);
	MR_np_call_localret_ent(fn__list__map_2_0,
		parse_tree__deps_map__generate_deps_map_step_9_0_i8);
MR_def_label(parse_tree__deps_map__generate_deps_map_step_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(1);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__condense_2_0,
		parse_tree__deps_map__generate_deps_map_step_9_0_i14);
MR_def_label(parse_tree__deps_map__generate_deps_map_step_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__list_to_set_2_0,
		parse_tree__deps_map__generate_deps_map_step_9_0_i15);
MR_def_label(parse_tree__deps_map__generate_deps_map_step_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__union_3_0,
		parse_tree__deps_map__generate_deps_map_step_9_0_i16);
MR_def_label(parse_tree__deps_map__generate_deps_map_step_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__remove_least_3_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module3)
	MR_init_entry1(parse_tree__deps_map__generate_deps_map_loop_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__deps_map__generate_deps_map_loop_7_0);
	MR_init_label4(parse_tree__deps_map__generate_deps_map_loop_7_0,13,3,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_deps_map_loop'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__deps_map__generate_deps_map_loop_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__deps_map__generate_deps_map_loop_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(set__remove_least_3_0,
		parse_tree__deps_map__generate_deps_map_loop_7_0_i3);
MR_def_label(parse_tree__deps_map__generate_deps_map_loop_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__deps_map__generate_deps_map_loop_7_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__deps_map__generate_deps_map_step_9_0,
		parse_tree__deps_map__generate_deps_map_loop_7_0_i5);
MR_def_label(parse_tree__deps_map__generate_deps_map_loop_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__deps_map__generate_deps_map_loop_7_0_i13);
	}
MR_def_label(parse_tree__deps_map__generate_deps_map_loop_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__make_singleton_set_1_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module4)
	MR_init_entry1(parse_tree__deps_map__generate_deps_map_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__deps_map__generate_deps_map_7_0);
	MR_init_label1(parse_tree__deps_map__generate_deps_map_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_deps_map'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__deps_map__generate_deps_map_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(fn__set__make_singleton_set_1_0,
		parse_tree__deps_map__generate_deps_map_7_0_i2);
MR_def_label(parse_tree__deps_map__generate_deps_map_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__deps_map__generate_deps_map_loop_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__module_imports__module_and_imports_get_module_name_2_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module5)
	MR_init_entry1(parse_tree__deps_map__insert_into_deps_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__deps_map__insert_into_deps_map_3_0);
	MR_init_label1(parse_tree__deps_map__insert_into_deps_map_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_into_deps_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__deps_map__insert_into_deps_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(parse_tree__module_imports__module_and_imports_get_module_name_2_0,
		parse_tree__deps_map__insert_into_deps_map_3_0_i2);
MR_def_label(parse_tree__deps_map__insert_into_deps_map_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__deps_map, deps);
	MR_r3 = MR_tempr2;
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(svmap__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__module_imports__module_and_imports_0_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module6)
	MR_init_entry1(__Unify___parse_tree__deps_map__deps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__deps_map__deps_0_0);
	MR_init_label2(__Unify___parse_tree__deps_map__deps_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__deps_map__deps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__deps_map__deps_0_0_i6);
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
		MR_GOTO_LAB(__Unify___parse_tree__deps_map__deps_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__module_imports__module_and_imports_0_0);
	}
MR_def_label(__Unify___parse_tree__deps_map__deps_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__deps_map__deps_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___parse_tree__module_imports__module_and_imports_0_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module7)
	MR_init_entry1(__Compare___parse_tree__deps_map__deps_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__deps_map__deps_0_0);
	MR_init_label4(__Compare___parse_tree__deps_map__deps_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__deps_map__deps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__deps_map__deps_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__deps_map__deps_0_0_i2);
MR_def_label(__Compare___parse_tree__deps_map__deps_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__deps_map__deps_0_0,2)
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
		__Compare___parse_tree__deps_map__deps_0_0_i5);
MR_def_label(__Compare___parse_tree__deps_map__deps_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__deps_map__deps_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__module_imports__module_and_imports_0_0);
MR_def_label(__Compare___parse_tree__deps_map__deps_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__deps_map_module8)
	MR_init_entry1(__Unify___parse_tree__deps_map__deps_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__deps_map__deps_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__deps_map__deps_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__deps_map, deps);
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

MR_BEGIN_MODULE(parse_tree__deps_map_module9)
	MR_init_entry1(__Compare___parse_tree__deps_map__deps_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__deps_map__deps_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__deps_map__deps_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__deps_map, deps);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__deps_map_module10)
	MR_init_entry1(__Unify___parse_tree__deps_map__have_processed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__deps_map__have_processed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__deps_map__have_processed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__deps_map_module11)
	MR_init_entry1(__Compare___parse_tree__deps_map__have_processed_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__deps_map__have_processed_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__deps_map__have_processed_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__deps_map_module12)
	MR_init_entry1(__Unify___parse_tree__deps_map__submodule_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__deps_map__submodule_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__deps_map__submodule_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__deps_map_module13)
	MR_init_entry1(__Compare___parse_tree__deps_map__submodule_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__deps_map__submodule_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__deps_map__submodule_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__deps_map_module14)
	MR_init_entry1(fn__parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__157__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__157__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__generate_deps_map_step__157__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__deps_map__IntroducedFrom__func__generate_deps_map_step__157__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__deps_map_maybe_bunch_0(void)
{
	parse_tree__deps_map_module0();
	parse_tree__deps_map_module1();
	parse_tree__deps_map_module2();
	parse_tree__deps_map_module3();
	parse_tree__deps_map_module4();
	parse_tree__deps_map_module5();
	parse_tree__deps_map_module6();
	parse_tree__deps_map_module7();
	parse_tree__deps_map_module8();
	parse_tree__deps_map_module9();
	parse_tree__deps_map_module10();
	parse_tree__deps_map_module11();
	parse_tree__deps_map_module12();
	parse_tree__deps_map_module13();
	parse_tree__deps_map_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__deps_map__init(void);
void mercury__parse_tree__deps_map__init_type_tables(void);
void mercury__parse_tree__deps_map__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__deps_map__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__deps_map__init_complexity_procs(void);
#endif

void mercury__parse_tree__deps_map__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__deps_map_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__deps_map__type_ctor_info_deps_0,
		parse_tree__deps_map__deps_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__deps_map__type_ctor_info_deps_map_0,
		parse_tree__deps_map__deps_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__deps_map__type_ctor_info_have_processed_0,
		parse_tree__deps_map__have_processed_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__deps_map__type_ctor_info_submodule_kind_0,
		parse_tree__deps_map__submodule_kind_0_0);
	mercury__parse_tree__deps_map__init_debugger();
}

void mercury__parse_tree__deps_map__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__deps_map__type_ctor_info_deps_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__deps_map__type_ctor_info_deps_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__deps_map__type_ctor_info_have_processed_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__deps_map__type_ctor_info_submodule_kind_0);
	}
}


void mercury__parse_tree__deps_map__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__deps_map__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__deps_map);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__deps_map__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
