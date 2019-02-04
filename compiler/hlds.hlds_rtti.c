/*
** Automatically generated from `hlds_rtti.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__hlds_rtti__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.hlds_rtti.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.hlds_rtti.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "hlds.hlds_rtti.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "hlds.hlds_rtti.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "hlds.hlds_rtti.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "hlds.hlds_rtti.c"
#line 48 "hlds.hlds_rtti.c"
#include "hlds.hlds_rtti.mh"

#line 51 "hlds.hlds_rtti.c"
#line 52 "hlds.hlds_rtti.c"
#ifndef HLDS__HLDS_RTTI_DECL_GUARD
#define HLDS__HLDS_RTTI_DECL_GUARD

#line 56 "hlds.hlds_rtti.c"
#line 57 "hlds.hlds_rtti.c"

#endif
#line 60 "hlds.hlds_rtti.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_varmap_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_type_map_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_var_info_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_prog_var_name_0,
	mercury_data_hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0;
MR_decl_label1(hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0, 3)
MR_decl_label1(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0, 2)
MR_decl_label1(hlds__hlds_rtti__apply_constraint_key_transformation_5_0, 2)
MR_decl_label8(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0, 4,7,9,2,13,15,18,20)
MR_decl_label4(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0, 22,24,26,28)
MR_decl_label8(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0, 2,3,6,4,8,11,14,13)
MR_decl_label1(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0, 9)
MR_decl_label4(hlds__hlds_rtti__apply_substs_to_tci_map_7_0, 2,3,6,4)
MR_decl_label8(hlds__hlds_rtti__apply_substs_to_ti_map_7_0, 6,3,12,10,16,18,19,21)
MR_decl_label8(hlds__hlds_rtti__apply_substs_to_type_map_7_0, 2,3,6,4,8,11,15,13)
MR_decl_label4(hlds__hlds_rtti__apply_substs_to_type_map_7_0, 17,19,23,9)
MR_decl_label2(hlds__hlds_rtti__get_typeinfo_vars_4_0, 3,4)
MR_decl_label8(hlds__hlds_rtti__get_typeinfo_vars_2_4_0, 32,3,6,8,10,14,15,4)
MR_decl_label4(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0, 5,6,7,16)
MR_decl_label6(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0, 3,9,13,11,7,6)
MR_decl_label1(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0, 3)
MR_decl_label1(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0, 3)
MR_decl_label3(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0, 4,6,2)
MR_decl_label6(hlds__hlds_rtti__rtti_set_type_info_locn_4_0, 3,9,13,11,7,6)
MR_decl_label1(hlds__hlds_rtti__rtti_set_type_info_type_4_0, 3)
MR_decl_label1(hlds__hlds_rtti__rtti_set_typeclass_info_var_4_0, 3)
MR_decl_label3(hlds__hlds_rtti__rtti_var_info_duplicate_4_0, 2,7,5)
MR_decl_label4(hlds__hlds_rtti__rtti_varmaps_init_1_0, 3,5,6,7)
MR_decl_label5(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0, 4,2,7,8,1)
MR_decl_label4(hlds__hlds_rtti__rtti_varmaps_overlay_3_0, 3,5,6,7)
MR_decl_label2(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0, 3,4)
MR_decl_label4(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0, 4,6,8,10)
MR_decl_label4(hlds__hlds_rtti__rtti_varmaps_var_info_3_0, 4,2,9,7)
MR_decl_label1(hlds__hlds_rtti__type_info_locn_set_var_3_0, 3)
MR_decl_label1(fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0, 2)
MR_decl_label8(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0, 10,11,12,13,16,14,18,21)
MR_decl_label8(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0, 19,23,26,24,29,33,37,40)
MR_decl_label3(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0, 36,34,35)
MR_decl_label5(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0, 4,6,8,12,1)
MR_decl_label8(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0, 4,6,8,12,14,16,18,1)
MR_decl_label4(__Unify___hlds__hlds_rtti__rtti_var_info_0_0, 10,6,16,1)
MR_decl_label5(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0, 5,8,10,14,1)
MR_decl_label4(__Unify___hlds__hlds_rtti__type_info_locn_0_0, 16,5,10,1)
MR_decl_label6(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label8(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0, 29,33,39,43,47,51,55,59)
MR_decl_label2(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0, 63,135)
MR_decl_label6(__Compare___hlds__hlds_rtti__rtti_var_info_0_0, 44,20,24,23,12,15)
MR_decl_label6(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0, 3,2,6,11,16,41)
MR_decl_label7(__Compare___hlds__hlds_rtti__type_info_locn_0_0, 3,2,7,5,10,12,45)
MR_def_extern_entry(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0)
MR_def_extern_entry(hlds__hlds_rtti__proc_label_pred_proc_id_3_0)
MR_def_extern_entry(hlds__hlds_rtti__type_info_locn_var_2_0)
MR_def_extern_entry(hlds__hlds_rtti__type_info_locn_set_var_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_init_1_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_no_tvars_1_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_search_type_info_locn_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_search_typeclass_info_var_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_var_info_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_set_type_info_locn_4_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_set_typeclass_info_var_4_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_set_type_info_type_4_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_var_info_duplicate_4_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_tvars_2_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_types_2_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0)
MR_def_extern_entry(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0)
MR_def_extern_entry(hlds__hlds_rtti__rtti_varmaps_overlay_3_0)
MR_decl_static(hlds__hlds_rtti__get_typeinfo_vars_2_4_0)
MR_def_extern_entry(hlds__hlds_rtti__get_typeinfo_vars_4_0)
MR_def_extern_entry(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0)
MR_decl_static(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0)
MR_decl_static(hlds__hlds_rtti__apply_substs_to_tci_map_7_0)
MR_decl_static(hlds__hlds_rtti__apply_substs_to_ti_map_7_0)
MR_decl_static(hlds__hlds_rtti__apply_substs_to_type_map_7_0)
MR_decl_static(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0)
MR_decl_static(hlds__hlds_rtti__apply_constraint_key_transformation_5_0)
MR_decl_static(hlds__hlds_rtti__apply_constraint_value_transformation_4_0)
MR_def_extern_entry(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_rtti__prog_var_name_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_rtti__prog_var_name_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_rtti__rtti_var_info_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_rtti__rtti_var_info_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_rtti__type_info_locn_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_rtti__type_info_locn_0_0)
MR_decl_static(__Unify___hlds__hlds_rtti__type_info_type_map_0_0)
MR_decl_static(__Compare___hlds__hlds_rtti__type_info_type_map_0_0)
MR_decl_static(__Unify___hlds__hlds_rtti__type_info_varmap_0_0)
MR_decl_static(__Compare___hlds__hlds_rtti__type_info_varmap_0_0)
MR_decl_static(__Unify___hlds__hlds_rtti__typeclass_info_constraint_map_0_0)
MR_decl_static(__Compare___hlds__hlds_rtti__typeclass_info_constraint_map_0_0)
MR_decl_static(__Unify___hlds__hlds_rtti__typeclass_info_varmap_0_0)
MR_decl_static(__Compare___hlds__hlds_rtti__typeclass_info_varmap_0_0)
MR_decl_static(fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0)
MR_decl_static(hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_transform_types__679__1_4_0)
MR_decl_static(hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_116_116_105_95_118_97_114_109_97_112_115_95_116_114_97_110_115_102_111_114_109_95_116_121_112_101_115_95_95_54_55_57_95_95_49_95_95_91_50_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_0 mercury_common_0[7] =
{
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[13] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(0,3),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,5),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,5),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,4),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__get_typeinfo_vars_2_4_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,1),
MR_COMMON(0,2),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__get_typeinfo_vars_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,7),
MR_COMMON(0,6),
MR_COMMON(0,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_types_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_types_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_rtti, rtti_varmaps),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_4;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,4),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_COMMON(0,2),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_2,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,4),
MR_COMMON(0,6),
MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn),
MR_COMMON(1,7),
MR_COMMON(1,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,4),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(1,9),
MR_COMMON(1,9)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_4,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_COMMON(1,2),
MR_COMMON(1,3),
MR_COMMON(1,4),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_COMMON(1,11),
MR_COMMON(1,11)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_1;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(5,0),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_COMMON(0,2),
MR_COMMON(1,5),
MR_COMMON(1,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_3;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(5,0),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__typeclass_info_varmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__typeclass_info_varmap_0_0)),
	"hlds.hlds_rtti",
	"typeclass_info_varmap",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__typeclass_info_constraint_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__typeclass_info_constraint_map_0_0)),
	"hlds.hlds_rtti",
	"typeclass_info_constraint_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_varmap_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__type_info_varmap_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__type_info_varmap_0_0)),
	"hlds.hlds_rtti",
	"type_info_varmap",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_type_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__type_info_type_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__type_info_type_map_0_0)),
	"hlds.hlds_rtti",
	"type_info_type_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_rtti__field_types_type_info_locn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0 = {
	"type_info",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_rtti__field_types_type_info_locn_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_rtti__field_types_type_info_locn_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1 = {
	"typeclass_info",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_rtti__field_types_type_info_locn_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1

};

const MR_DuPtagLayout mercury_data_hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_name_ordered_type_info_locn_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
	&mercury_data_hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

const MR_Integer mercury_data_hlds__hlds_rtti__functor_number_map_type_info_locn_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__type_info_locn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__type_info_locn_0_0)),
	"hlds.hlds_rtti",
	"type_info_locn",
	{ (void *)mercury_data_hlds__hlds_rtti__du_name_ordered_type_info_locn_0 },
	{ (void *)mercury_data_hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0 },
	2,
	4,
	mercury_data_hlds__hlds_rtti__functor_number_map_type_info_locn_0
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_rtti__field_types_rtti_varmaps_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

const MR_ConstString mercury_data_hlds__hlds_rtti__field_names_rtti_varmaps_0_0[] = {
	"tci_varmap",
	"ti_varmap",
	"ti_type_map",
	"tci_constraint_map"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0 = {
	"rtti_varmaps",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_rtti__field_types_rtti_varmaps_0_0,
	mercury_data_hlds__hlds_rtti__field_names_rtti_varmaps_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

const MR_Integer mercury_data_hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0)),
	"hlds.hlds_rtti",
	"rtti_varmaps",
	{ (void *)mercury_data_hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0 },
	{ (void *)mercury_data_hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0 },
	1,
	4,
	mercury_data_hlds__hlds_rtti__functor_number_map_rtti_varmaps_0
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_rtti__field_types_rtti_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0 = {
	"type_info_var",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_rtti__field_types_rtti_var_info_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_hlds__hlds_rtti__field_types_rtti_var_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1 = {
	"typeclass_info_var",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_rtti__field_types_rtti_var_info_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2 = {
	"non_rtti_var",
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

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1

};

const MR_DuPtagLayout mercury_data_hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

const MR_Integer mercury_data_hlds__hlds_rtti__functor_number_map_rtti_var_info_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_var_info_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__rtti_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__rtti_var_info_0_0)),
	"hlds.hlds_rtti",
	"rtti_var_info",
	{ (void *)mercury_data_hlds__hlds_rtti__du_name_ordered_rtti_var_info_0 },
	{ (void *)mercury_data_hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0 },
	3,
	4,
	mercury_data_hlds__hlds_rtti__functor_number_map_rtti_var_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_mode_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_arg_mode_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_origin_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_origin_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_rtti__field_types_rtti_proc_label_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_hlds__hlds_rtti__field_names_rtti_proc_label_0_0[] = {
	"pred_or_func",
	"this_module",
	"proc_module",
	"proc_name",
	"proc_arity",
	"proc_arg_types",
	"pred_id",
	"proc_id",
	"proc_headvars",
	"proc_arg_modes",
	"proc_interface_detism",
	"pred_is_imported",
	"pred_is_pseudo_imported",
	"pred_info_origin",
	"proc_is_exported",
	"proc_is_imported"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0 = {
	"rtti_proc_label",
	16,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_rtti__field_types_rtti_proc_label_0_0,
	mercury_data_hlds__hlds_rtti__field_names_rtti_proc_label_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

const MR_Integer mercury_data_hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0)),
	"hlds.hlds_rtti",
	"rtti_proc_label",
	{ (void *)mercury_data_hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0 },
	{ (void *)mercury_data_hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0 },
	1,
	4,
	mercury_data_hlds__hlds_rtti__functor_number_map_rtti_proc_label_0
};

const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_prog_var_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__prog_var_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__prog_var_name_0_0)),
	"hlds.hlds_rtti",
	"prog_var_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_rtti__field_types_instance_method_constraints_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0 = {
	"instance_method_constraints",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_rtti__field_types_instance_method_constraints_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[] = {
	&mercury_data_hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

const MR_Integer mercury_data_hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0)),
	"hlds.hlds_rtti",
	"instance_method_constraints",
	{ (void *)mercury_data_hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0 },
	{ (void *)mercury_data_hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0 },
	1,
	4,
	mercury_data_hlds__hlds_rtti__functor_number_map_instance_method_constraints_0
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"lambda_hlds_rtti_m_354",
3,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
354,
"d1;c22;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_types_2_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"rtti_varmaps_is_known_type",
2,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
531,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"apply_substs_to_tci_map",
7,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
562,
"d1;c6;e;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"apply_substs_to_ti_map",
7,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
564,
"d1;c6;e;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"apply_substs_to_type_map",
7,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
566,
"d1;c6;e;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_4 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"apply_substs_to_constraint_map",
7,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
568,
"d1;c6;e;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"apply_constraint_key_transformation",
5,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
676,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_2 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"lambda_hlds_rtti_m_679",
4,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
678,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"apply_constraint_value_transformation",
4,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
682,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_rtti__get_typeinfo_vars_2_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_rtti",
"hlds.hlds_rtti",
"lambda_hlds_rtti_m_755",
3,
0
},
"hlds.hlds_rtti",
"hlds_rtti.m",
755,
"d2;c5;t;c2;d2;c2;"
};

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(check_hlds__mode_util__modes_to_arg_modes_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(hlds__hlds_pred__procedure_is_exported_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module0)
	MR_init_entry1(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);
	MR_init_label8(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,10,11,12,13,16,14,18,21)
	MR_init_label8(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,19,23,26,24,29,33,37,40)
	MR_init_label3(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,36,34,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_rtti__make_rtti_proc_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i2);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i3);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i4);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i5);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i6);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i7);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i8);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i9);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i10);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i11);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i12);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__modes_to_arg_modes_4_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i13);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i16);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i14);
	}
	MR_r1 = MR_sv(5);
	MR_sv(15) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i18);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_r1 = MR_sv(5);
	MR_sv(15) = (MR_Integer) 0;
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i21);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i23);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_sv(1) = (MR_Integer) 0;
	}
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__procedure_is_exported_3_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i26);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i24);
	}
	MR_r1 = MR_sv(5);
	MR_sv(5) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i29);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(5);
	MR_r1 = MR_tempr2;
	MR_sv(5) = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i29);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i33);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(15),1)) {
		MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i37);
	}
	MR_sv(13) = MR_r1;
	MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i36);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i35);
	}
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i40);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0_i34);
	}
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 15) = (MR_Integer) 1;
	MR_decr_sp_and_return(16);
	}
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
MR_def_label(fn__hlds__hlds_rtti__make_rtti_proc_label_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 16);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_sv(14);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(15);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 13) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 14) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 15) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module1)
	MR_init_entry1(hlds__hlds_rtti__proc_label_pred_proc_id_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__proc_label_pred_proc_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_r2 = MR_ctfield(0, MR_tempr1, 7);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module2)
	MR_init_entry1(hlds__hlds_rtti__type_info_locn_var_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__type_info_locn_var_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module3)
	MR_init_entry1(hlds__hlds_rtti__type_info_locn_set_var_3_0);
	MR_init_label1(hlds__hlds_rtti__type_info_locn_set_var_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__type_info_locn_set_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__type_info_locn_set_var_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(hlds__hlds_rtti__type_info_locn_set_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(1, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module4)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_init_1_0);
	MR_init_label4(hlds__hlds_rtti__rtti_varmaps_init_1_0,3,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_rtti__rtti_varmaps_init_1_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_init_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_rtti__rtti_varmaps_init_1_0_i5);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_init_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_rtti__rtti_varmaps_init_1_0_i6);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_init_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__hlds_rtti__rtti_varmaps_init_1_0_i7);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_init_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module5)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_no_tvars_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_no_tvars_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module6)
	MR_init_entry1(hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_lookup_type_info_locn_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module7)
	MR_init_entry1(hlds__hlds_rtti__rtti_search_type_info_locn_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_search_type_info_locn_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module8)
	MR_init_entry1(hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module9)
	MR_init_entry1(hlds__hlds_rtti__rtti_search_typeclass_info_var_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_search_typeclass_info_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__search_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module10)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_var_info_3_0);
	MR_init_label4(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,4,2,9,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_var_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 2);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__rtti_varmaps_var_info_3_0_i4);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_varmaps_var_info_3_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r4 = MR_ctfield(0, MR_sv(1), 3);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__rtti_varmaps_var_info_3_0_i9);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_varmaps_var_info_3_0_i7);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(__Unify___term__var_1_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module11)
	MR_init_entry1(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0);
	MR_init_label6(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,3,9,13,11,7,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0_i6);
	}
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0_i9);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0_i13);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = (MR_Word) MR_string_const("inconsistent info in rtti_varmaps", 33);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = (MR_Word) MR_string_const("missing info in rtti_varmaps", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module12)
	MR_init_entry1(hlds__hlds_rtti__rtti_set_type_info_locn_4_0);
	MR_init_label6(hlds__hlds_rtti__rtti_set_type_info_locn_4_0,3,9,13,11,7,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_set_type_info_locn_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_ctfield(0, MR_sv(3), 1);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hlds_rtti__rtti_set_type_info_locn_4_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_set_type_info_locn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r6 = MR_tempr1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr3, 3);
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_set_type_info_locn_4_0_i6);
	}
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__rtti_set_type_info_locn_4_0_i9);
MR_def_label(hlds__hlds_rtti__rtti_set_type_info_locn_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_set_type_info_locn_4_0_i7);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_set_type_info_locn_4_0_i11);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__hlds_rtti__rtti_set_type_info_locn_4_0_i13);
MR_def_label(hlds__hlds_rtti__rtti_set_type_info_locn_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_set_type_info_locn_4_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_rtti__rtti_set_type_info_locn_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = (MR_Word) MR_string_const("inconsistent info in rtti_varmaps", 33);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hlds_rtti__rtti_set_type_info_locn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = (MR_Word) MR_string_const("missing info in rtti_varmaps", 28);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hlds_rtti__rtti_set_type_info_locn_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module13)
	MR_init_entry1(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0);
	MR_init_label1(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r4 = MR_ctfield(0, MR_sv(1), 3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module14)
	MR_init_entry1(hlds__hlds_rtti__rtti_set_typeclass_info_var_4_0);
	MR_init_label1(hlds__hlds_rtti__rtti_set_typeclass_info_var_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_set_typeclass_info_var_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r4 = MR_ctfield(0, MR_sv(1), 3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hlds_rtti__rtti_set_typeclass_info_var_4_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_set_typeclass_info_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module15)
	MR_init_entry1(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0);
	MR_init_label3(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0,4,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r4 = MR_ctfield(0, MR_sv(2), 3);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0_i4);
MR_def_label(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0_i6);
MR_def_label(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = (MR_Word) MR_string_const("rtti_reuse_typeclass_info_var: variable not known", 49);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module16)
	MR_init_entry1(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0);
	MR_init_label1(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module17)
	MR_init_entry1(hlds__hlds_rtti__rtti_set_type_info_type_4_0);
	MR_init_label1(hlds__hlds_rtti__rtti_set_type_info_type_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_set_type_info_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		hlds__hlds_rtti__rtti_set_type_info_type_4_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_set_type_info_type_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module18)
	MR_init_entry1(hlds__hlds_rtti__rtti_var_info_duplicate_4_0);
	MR_init_label3(hlds__hlds_rtti__rtti_var_info_duplicate_4_0,2,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_var_info_duplicate_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_rtti__rtti_varmaps_var_info_3_0,
		hlds__hlds_rtti__rtti_var_info_duplicate_4_0_i2);
MR_def_label(hlds__hlds_rtti__rtti_var_info_duplicate_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_var_info_duplicate_4_0_i5);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(hlds__hlds_rtti__rtti_var_info_duplicate_4_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__hlds_rtti__rtti_var_info_duplicate_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_0);
MR_def_label(hlds__hlds_rtti__rtti_var_info_duplicate_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_rtti__rtti_det_insert_type_info_type_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module19)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_tvars_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_tvars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__keys_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__solutions_2_1);

MR_BEGIN_MODULE(hlds__hlds_rtti_module20)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_tailcall_ent(solutions__solutions_2_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module21)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(map__keys_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(hlds__hlds_rtti_module22)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0);
	MR_init_label2(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0_i4);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module23)
	MR_init_entry1(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0);
	MR_init_label8(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,4,7,9,2,13,15,18,20)
	MR_init_label4(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,22,24,26,28)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i4);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i2);
	}
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i7);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__is_empty_1_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i9);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__apply_substs_to_tci_map_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i13);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(10);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i15);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__apply_substs_to_ti_map_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i18);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,8);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i20);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__apply_substs_to_type_map_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i22);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,10);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i24);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i26);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,12);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0_i28);
MR_def_label(hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module24)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0);
	MR_init_label4(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0,4,6,8,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_transform_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__apply_constraint_key_transformation_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_tempr3;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_i4);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_i6);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_transform_types__679__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_i8);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__apply_constraint_value_transformation_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		hlds__hlds_rtti__rtti_varmaps_transform_types_3_0_i10);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_transform_types_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_sv(5), 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__overlay_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(map__old_merge_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module25)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_overlay_3_0);
	MR_init_label4(hlds__hlds_rtti__rtti_varmaps_overlay_3_0,3,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__rtti_varmaps_overlay_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_tempr4;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(map__overlay_3_0,
		hlds__hlds_rtti__rtti_varmaps_overlay_3_0_i3);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_overlay_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_111_118_101_114_108_97_121_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__rtti_varmaps_overlay_3_0_i5);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_overlay_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__old_merge_3_0,
		hlds__hlds_rtti__rtti_varmaps_overlay_3_0_i6);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_overlay_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__old_merge_3_0,
		hlds__hlds_rtti__rtti_varmaps_overlay_3_0_i7);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_overlay_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_vars_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module26)
	MR_init_entry1(hlds__hlds_rtti__get_typeinfo_vars_2_4_0);
	MR_init_label8(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,32,3,6,8,10,14,15,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__get_typeinfo_vars_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i6);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i4);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_vars_2_0,
		hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i8);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i10);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i32);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i14);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,
		hlds__hlds_rtti__get_typeinfo_vars_2_4_0_i15);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = (MR_Word) MR_string_const("get_typeinfo_vars_2: var not found in typemap", 45);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module27)
	MR_init_entry1(hlds__hlds_rtti__get_typeinfo_vars_4_0);
	MR_init_label2(hlds__hlds_rtti__get_typeinfo_vars_4_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__get_typeinfo_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r3, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_rtti__get_typeinfo_vars_4_0_i3);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,
		hlds__hlds_rtti__get_typeinfo_vars_4_0_i4);
MR_def_label(hlds__hlds_rtti__get_typeinfo_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module28)
	MR_init_entry1(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0);
	MR_init_label4(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,5,6,7,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0_i16);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = MR_ctfield(0, MR_r4, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0_i5);
MR_def_label(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_rtti__get_typeinfo_vars_2_4_0,
		hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0_i6);
MR_def_label(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0_i7);
MR_def_label(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
MR_def_label(hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__values_2_0);
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(hlds__hlds_rtti_module29)
	MR_init_entry1(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0);
	MR_init_label5(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0,4,2,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.hlds_rtti.rtti_varmaps_is_known_type/2-0", 1,
		MR_LABEL_AP(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0_i2));
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_fv(1) = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(map__values_2_0,
		hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0_i4);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0_i1);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_fv(1);
	MR_np_call_localret_ent(map__values_2_0,
		hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0_i7);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0_i8);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0_i1);
MR_def_label(hlds__hlds_rtti__rtti_varmaps_is_known_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module30)
	MR_init_entry1(hlds__hlds_rtti__apply_substs_to_tci_map_7_0);
	MR_init_label4(hlds__hlds_rtti__apply_substs_to_tci_map_7_0,2,3,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__apply_substs_to_tci_map_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0,
		hlds__hlds_rtti__apply_substs_to_tci_map_7_0_i2);
MR_def_label(hlds__hlds_rtti__apply_substs_to_tci_map_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0,
		hlds__hlds_rtti__apply_substs_to_tci_map_7_0_i3);
MR_def_label(hlds__hlds_rtti__apply_substs_to_tci_map_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__apply_substs_to_tci_map_7_0_i6);
MR_def_label(hlds__hlds_rtti__apply_substs_to_tci_map_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_tci_map_7_0_i4);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__set_4_0);
MR_def_label(hlds__hlds_rtti__apply_substs_to_tci_map_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_kind_0;
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module31)
	MR_init_entry1(hlds__hlds_rtti__apply_substs_to_ti_map_7_0);
	MR_init_label8(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,6,3,12,10,16,18,19,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__apply_substs_to_ti_map_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(0, MR_r5, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i6);
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0,
		hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i16);
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_ctfield(1, MR_r5, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i12);
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0,
		hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i16);
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0,
		hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i16);
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, kind);
	MR_np_call_localret_ent(fn__map__init_0_0,
		hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i18);
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_0,
		hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i19);
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_ti_map_7_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
MR_def_label(hlds__hlds_rtti__apply_substs_to_ti_map_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__string__format_2_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module32)
	MR_init_entry1(hlds__hlds_rtti__apply_substs_to_type_map_7_0);
	MR_init_label8(hlds__hlds_rtti__apply_substs_to_type_map_7_0,2,3,6,4,8,11,15,13)
	MR_init_label4(hlds__hlds_rtti__apply_substs_to_type_map_7_0,17,19,23,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__apply_substs_to_type_map_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i2);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_3_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i3);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i6);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_type_map_7_0_i4);
	}
	MR_r5 = MR_r2;
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_type_map_7_0_i8);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i11);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_type_map_7_0_i9);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i15);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_type_map_7_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__string_1_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i17);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 2, (MR_Integer) 1);
	MR_tfield(2, MR_sv(1), 0) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__string_1_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i19);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_string_const("inconsistent type_infos:  Type: %s ExistingType: %s", 51);
	}
	MR_np_call_localret_ent(fn__string__format_2_0,
		hlds__hlds_rtti__apply_substs_to_type_map_7_0_i23);
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
MR_def_label(hlds__hlds_rtti__apply_substs_to_type_map_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__prog_constraint_0_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module33)
	MR_init_entry1(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0);
	MR_init_label8(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,2,3,6,4,8,11,14,13)
	MR_init_label1(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r6;
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0,
		hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i2);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0,
		hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i3);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_r2;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i6);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i4);
	}
	MR_r5 = MR_r2;
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i8);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(3);
	MR_r4 = MR_sv(4);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i11);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i9);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__prog_constraint_0_0,
		hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i14);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0_i13);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_rtti.m", 11);
	MR_r2 = (MR_Word) MR_string_const("inconsistent typeclass_infos", 28);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hlds_rtti__apply_substs_to_constraint_map_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module34)
	MR_init_entry1(hlds__hlds_rtti__apply_constraint_key_transformation_5_0);
	MR_init_label1(hlds__hlds_rtti__apply_constraint_key_transformation_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__apply_constraint_key_transformation_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_r4;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_rtti__apply_constraint_key_transformation_5_0_i2);
MR_def_label(hlds__hlds_rtti__apply_constraint_key_transformation_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(svmap__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module35)
	MR_init_entry1(hlds__hlds_rtti__apply_constraint_value_transformation_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__apply_constraint_value_transformation_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__class_id_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__prog_constraints_0_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module36)
	MR_init_entry1(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0);
	MR_init_label5(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_rtti__instance_method_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__class_id_0_0,
		__Unify___hlds__hlds_rtti__instance_method_constraints_0_0_i4);
MR_def_label(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_rtti__instance_method_constraints_0_0_i6);
MR_def_label(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_rtti__instance_method_constraints_0_0_i8);
MR_def_label(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__prog_constraints_0_0);
MR_def_label(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_rtti__instance_method_constraints_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__class_id_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__prog_constraints_0_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module37)
	MR_init_entry1(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0);
	MR_init_label6(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_rtti__instance_method_constraints_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i2);
MR_def_label(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__class_id_0_0,
		__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i5);
MR_def_label(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i9);
MR_def_label(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i13);
MR_def_label(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__prog_constraints_0_0);
MR_def_label(__Compare___hlds__hlds_rtti__instance_method_constraints_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module38)
	MR_init_entry1(__Unify___hlds__hlds_rtti__prog_var_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_rtti__prog_var_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module39)
	MR_init_entry1(__Compare___hlds__hlds_rtti__prog_var_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_rtti__prog_var_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_origin_0_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module40)
	MR_init_entry1(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0);
	MR_init_label8(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,4,6,8,12,14,16,18,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_rtti__rtti_proc_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i18);
	}
	MR_incr_sp(29);
	MR_sv(29) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
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
	MR_sv(8) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(9) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(10) = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(11) = MR_ctfield(0, MR_tempr3, 12);
	MR_sv(12) = MR_ctfield(0, MR_tempr3, 13);
	MR_sv(13) = MR_ctfield(0, MR_tempr3, 14);
	MR_sv(14) = MR_ctfield(0, MR_tempr3, 15);
	MR_sv(15) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(16) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(17) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(18) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(19) = MR_ctfield(0, MR_tempr4, 6);
	MR_sv(20) = MR_ctfield(0, MR_tempr4, 7);
	MR_sv(21) = MR_ctfield(0, MR_tempr4, 8);
	MR_sv(22) = MR_ctfield(0, MR_tempr4, 9);
	MR_sv(23) = MR_ctfield(0, MR_tempr4, 10);
	MR_sv(24) = MR_ctfield(0, MR_tempr4, 11);
	MR_sv(25) = MR_ctfield(0, MR_tempr4, 12);
	MR_sv(26) = MR_ctfield(0, MR_tempr4, 13);
	MR_sv(27) = MR_ctfield(0, MR_tempr4, 14);
	MR_sv(28) = MR_ctfield(0, MR_tempr4, 15);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i4);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i6);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(16)) != 0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i8);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(19))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(20))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i12);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_mode);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i14);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(23))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(24))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(25))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_origin_0_0,
		__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i16);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	if ((MR_sv(13) != MR_sv(27))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0_i1);
	}
	MR_r1 = (MR_sv(14) == MR_sv(28));
	MR_decr_sp_and_return(29);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(29);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_origin_0_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module41)
	MR_init_entry1(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0);
	MR_init_label8(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,3,2,5,9,13,17,21,25)
	MR_init_label8(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,29,33,39,43,47,51,55,59)
	MR_init_label2(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,63,135)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_rtti__rtti_proc_label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i3);
	}
	MR_incr_sp(31);
	MR_sv(31) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i2);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(30) = MR_ctfield(0, MR_tempr5, 15);
	MR_sv(29) = MR_ctfield(0, MR_tempr5, 14);
	MR_sv(28) = MR_ctfield(0, MR_tempr5, 13);
	MR_sv(27) = MR_ctfield(0, MR_tempr5, 12);
	MR_sv(26) = MR_ctfield(0, MR_tempr5, 11);
	MR_sv(25) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(24) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(23) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(22) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(21) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(15) = MR_ctfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_ctfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_ctfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_ctfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_ctfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
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
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i5);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i9);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i13);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i17);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i21);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i25);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i29);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i33);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i39);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_mode);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i43);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i47);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i51);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i55);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_origin_0_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i59);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i63);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0_i135);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(30);
	MR_succip_word = MR_sv(31);
	MR_decr_sp(31);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(31);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module42)
	MR_init_entry1(__Unify___hlds__hlds_rtti__rtti_var_info_0_0);
	MR_init_label4(__Unify___hlds__hlds_rtti__rtti_var_info_0_0,10,6,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_rtti__rtti_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_var_info_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_var_info_0_0_i6);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_var_info_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__hlds_rtti__rtti_var_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_var_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__prog_constraint_0_0);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_var_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_var_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_var_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_rtti__rtti_var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__prog_constraint_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module43)
	MR_init_entry1(__Compare___hlds__hlds_rtti__rtti_var_info_0_0);
	MR_init_label6(__Compare___hlds__hlds_rtti__rtti_var_info_0_0,44,20,24,23,12,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_rtti__rtti_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i44);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i12);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i20);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i23);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i23);
	}
	}
MR_def_label(__Compare___hlds__hlds_rtti__rtti_var_info_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_var_info_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i23);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__hlds_rtti__rtti_var_info_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	MR_r2 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__prog_constraint_0_0);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_var_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_var_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_var_info_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___hlds__hlds_rtti__rtti_var_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module44)
	MR_init_entry1(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
	MR_init_label5(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,5,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_rtti__rtti_varmaps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0_i14);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_rtti__rtti_varmaps_0_0_i5);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_rtti__rtti_varmaps_0_0_i8);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___hlds__hlds_rtti__rtti_varmaps_0_0_i10);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_rtti__rtti_varmaps_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module45)
	MR_init_entry1(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
	MR_init_label6(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,3,2,6,11,16,41)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_rtti__rtti_varmaps_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i2);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i6);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i11);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i16);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0_i41);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___hlds__hlds_rtti__rtti_varmaps_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module46)
	MR_init_entry1(__Unify___hlds__hlds_rtti__type_info_locn_0_0);
	MR_init_label4(__Unify___hlds__hlds_rtti__type_info_locn_0_0,16,5,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_rtti__type_info_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__type_info_locn_0_0_i16);
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
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__type_info_locn_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__type_info_locn_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__var_1_0);
	}
MR_def_label(__Unify___hlds__hlds_rtti__type_info_locn_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_rtti__type_info_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__type_info_locn_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		__Unify___hlds__hlds_rtti__type_info_locn_0_0_i10);
MR_def_label(__Unify___hlds__hlds_rtti__type_info_locn_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_rtti__type_info_locn_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__hlds_rtti__type_info_locn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___term__var_1_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module47)
	MR_init_entry1(__Compare___hlds__hlds_rtti__type_info_locn_0_0);
	MR_init_label7(__Compare___hlds__hlds_rtti__type_info_locn_0_0,3,2,7,5,10,12,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_rtti__type_info_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__type_info_locn_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_rtti__type_info_locn_0_0_i2);
MR_def_label(__Compare___hlds__hlds_rtti__type_info_locn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_rtti__type_info_locn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__type_info_locn_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__type_info_locn_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___term__var_1_0);
MR_def_label(__Compare___hlds__hlds_rtti__type_info_locn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_rtti__type_info_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__type_info_locn_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___hlds__hlds_rtti__type_info_locn_0_0,10)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___term__var_1_0,
		__Compare___hlds__hlds_rtti__type_info_locn_0_0_i12);
MR_def_label(__Compare___hlds__hlds_rtti__type_info_locn_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_rtti__type_info_locn_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__hlds_rtti__type_info_locn_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module48)
	MR_init_entry1(__Unify___hlds__hlds_rtti__type_info_type_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_rtti__type_info_type_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(hlds__hlds_rtti_module49)
	MR_init_entry1(__Compare___hlds__hlds_rtti__type_info_type_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_rtti__type_info_type_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(hlds__hlds_rtti_module50)
	MR_init_entry1(__Unify___hlds__hlds_rtti__type_info_varmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_rtti__type_info_varmap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module51)
	MR_init_entry1(__Compare___hlds__hlds_rtti__type_info_varmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_rtti__type_info_varmap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module52)
	MR_init_entry1(__Unify___hlds__hlds_rtti__typeclass_info_constraint_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_rtti__typeclass_info_constraint_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module53)
	MR_init_entry1(__Compare___hlds__hlds_rtti__typeclass_info_constraint_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_rtti__typeclass_info_constraint_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module54)
	MR_init_entry1(__Unify___hlds__hlds_rtti__typeclass_info_varmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_rtti__typeclass_info_varmap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module55)
	MR_init_entry1(__Compare___hlds__hlds_rtti__typeclass_info_varmap_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_rtti__typeclass_info_varmap_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__varset__lookup_name_2_0);

MR_BEGIN_MODULE(hlds__hlds_rtti_module56)
	MR_init_entry1(fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0);
	MR_init_label1(fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__varset__lookup_name_2_0,
		fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0_i2);
MR_def_label(fn__hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__354__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module57)
	MR_init_entry1(hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_transform_types__679__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_transform_types__679__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_116_116_105_95_118_97_114_109_97_112_115_95_116_114_97_110_115_102_111_114_109_95_116_121_112_101_115_95_95_54_55_57_95_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module58)
	MR_init_entry1(hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0);
	MR_init_label1(hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_rtti, type_info_locn);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0_i3);
MR_def_label(hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__755__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_rtti_module59)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0);
	MR_init_label1(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(hlds__hlds_rtti_module60)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_116_116_105_95_118_97_114_109_97_112_115_95_116_114_97_110_115_102_111_114_109_95_116_121_112_101_115_95_95_54_55_57_95_95_49_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_116_116_105_95_118_97_114_109_97_112_115_95_116_114_97_110_115_102_111_114_109_95_116_121_112_101_115_95_95_54_55_57_95_95_49_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_104_108_100_115_95_95_104_108_100_115_95_114_116_116_105_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_116_116_105_95_118_97_114_109_97_112_115_95_116_114_97_110_115_102_111_114_109_95_116_121_112_101_115_95_95_54_55_57_95_95_49_95_95_91_50_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_rtti_maybe_bunch_0(void)
{
	hlds__hlds_rtti_module0();
	hlds__hlds_rtti_module1();
	hlds__hlds_rtti_module2();
	hlds__hlds_rtti_module3();
	hlds__hlds_rtti_module4();
	hlds__hlds_rtti_module5();
	hlds__hlds_rtti_module6();
	hlds__hlds_rtti_module7();
	hlds__hlds_rtti_module8();
	hlds__hlds_rtti_module9();
	hlds__hlds_rtti_module10();
	hlds__hlds_rtti_module11();
	hlds__hlds_rtti_module12();
	hlds__hlds_rtti_module13();
	hlds__hlds_rtti_module14();
	hlds__hlds_rtti_module15();
	hlds__hlds_rtti_module16();
	hlds__hlds_rtti_module17();
	hlds__hlds_rtti_module18();
	hlds__hlds_rtti_module19();
	hlds__hlds_rtti_module20();
	hlds__hlds_rtti_module21();
	hlds__hlds_rtti_module22();
	hlds__hlds_rtti_module23();
	hlds__hlds_rtti_module24();
	hlds__hlds_rtti_module25();
	hlds__hlds_rtti_module26();
	hlds__hlds_rtti_module27();
	hlds__hlds_rtti_module28();
	hlds__hlds_rtti_module29();
	hlds__hlds_rtti_module30();
	hlds__hlds_rtti_module31();
	hlds__hlds_rtti_module32();
	hlds__hlds_rtti_module33();
	hlds__hlds_rtti_module34();
	hlds__hlds_rtti_module35();
	hlds__hlds_rtti_module36();
	hlds__hlds_rtti_module37();
	hlds__hlds_rtti_module38();
	hlds__hlds_rtti_module39();
}

static void mercury__hlds__hlds_rtti_maybe_bunch_1(void)
{
	hlds__hlds_rtti_module40();
	hlds__hlds_rtti_module41();
	hlds__hlds_rtti_module42();
	hlds__hlds_rtti_module43();
	hlds__hlds_rtti_module44();
	hlds__hlds_rtti_module45();
	hlds__hlds_rtti_module46();
	hlds__hlds_rtti_module47();
	hlds__hlds_rtti_module48();
	hlds__hlds_rtti_module49();
	hlds__hlds_rtti_module50();
	hlds__hlds_rtti_module51();
	hlds__hlds_rtti_module52();
	hlds__hlds_rtti_module53();
	hlds__hlds_rtti_module54();
	hlds__hlds_rtti_module55();
	hlds__hlds_rtti_module56();
	hlds__hlds_rtti_module57();
	hlds__hlds_rtti_module58();
	hlds__hlds_rtti_module59();
	hlds__hlds_rtti_module60();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_rtti__init(void);
void mercury__hlds__hlds_rtti__init_type_tables(void);
void mercury__hlds__hlds_rtti__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_rtti__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_rtti__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_rtti__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_rtti_maybe_bunch_0();
	mercury__hlds__hlds_rtti_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0,
		hlds__hlds_rtti__typeclass_info_varmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0,
		hlds__hlds_rtti__typeclass_info_constraint_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_varmap_0,
		hlds__hlds_rtti__type_info_varmap_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_type_map_0,
		hlds__hlds_rtti__type_info_type_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
		hlds__hlds_rtti__type_info_locn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
		hlds__hlds_rtti__rtti_varmaps_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_var_info_0,
		hlds__hlds_rtti__rtti_var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
		hlds__hlds_rtti__rtti_proc_label_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_prog_var_name_0,
		hlds__hlds_rtti__prog_var_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0,
		hlds__hlds_rtti__instance_method_constraints_0_0);
	mercury__hlds__hlds_rtti__init_debugger();
}

void mercury__hlds__hlds_rtti__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_varmap_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_type_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_type_info_locn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_prog_var_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0);
	}
}


void mercury__hlds__hlds_rtti__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_rtti__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_rtti);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_rtti__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
