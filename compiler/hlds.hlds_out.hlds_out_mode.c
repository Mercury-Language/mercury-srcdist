/*
** Automatically generated from `hlds_out_mode.m'
** by the Mercury compiler,
** version rotd-2011-03-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__hlds_out__hlds_out_mode__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_out.hlds_out_mode.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "hlds.hlds_out.hlds_out_mode.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.hlds_out.hlds_out_mode.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.hlds_out.hlds_out_mode.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "hlds.hlds_out.hlds_out_mode.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.hlds_out.hlds_out_mode.c"
#line 49 "hlds.hlds_out.hlds_out_mode.c"
#include "hlds.hlds_out.hlds_out_mode.mh"

#line 52 "hlds.hlds_out.hlds_out_mode.c"
#line 53 "hlds.hlds_out.hlds_out_mode.c"
#ifndef HLDS__HLDS_OUT__HLDS_OUT_MODE_DECL_GUARD
#define HLDS__HLDS_OUT__HLDS_OUT_MODE_DECL_GUARD

#line 57 "hlds.hlds_out.hlds_out_mode.c"
#line 58 "hlds.hlds_out.hlds_out_mode.c"

#endif
#line 61 "hlds.hlds_out.hlds_out_mode.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0;
MR_decl_label5(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0, 3,2,6,10,11)
MR_decl_label7(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0, 27,3,6,7,9,12,30)
MR_decl_label1(hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0, 2)
MR_decl_label2(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0, 5,6)
MR_decl_label3(hlds__hlds_out__hlds_out_mode__write_instmap_6_0, 4,2,7)
MR_decl_label8(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0, 20,4,5,6,7,10,11,22)
MR_decl_label2(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0, 3,5)
MR_decl_label10(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0, 4,8,9,11,3,19,20,23,28,33)
MR_decl_label4(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0, 38,43,48,53)
MR_decl_label10(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0, 4,8,9,11,3,19,20,23,28,33)
MR_decl_label4(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0, 38,43,48,53)
MR_decl_label6(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0, 6,8,11,13,7,3)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0, 3,14,15,20,21,22,24,25,11,30)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0, 27,34,35,36,37,38,39,40,32,48)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0, 49,50,51,52,53,54,46,60,67,65)
MR_decl_label8(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0, 71,73,74,75,70,79,81,82)
MR_decl_label1(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0, 2)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0, 3,6,12,15,18,21,10,8,28,29)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0, 27,33,38,40,42,44,37,47,36,54)
MR_decl_label9(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0, 50,56,62,65,68,71,60,253,77)
MR_decl_label4(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0, 3,4,5,6)
MR_decl_label1(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0, 3)
MR_decl_label1(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0, 2)
MR_decl_label2(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0, 5,6)
MR_decl_label1(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0, 2)
MR_decl_label7(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0, 8,4,5,12,13,3,20)
MR_decl_label1(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0, 3)
MR_decl_label4(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0, 4,6,10,1)
MR_decl_label5(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0, 3,2,5,9,29)
MR_def_extern_entry(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_mode__write_instmap_6_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0)
MR_decl_static(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0)
MR_decl_static(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0)
MR_decl_static(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0)
MR_decl_static(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0)
MR_decl_static(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0)
MR_decl_static(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)
MR_decl_static(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[37] =
{
{
MR_string_const("\044merge_inst", 11)
},
{
MR_string_const("\044unify", 6)
},
{
MR_string_const("\044any", 4)
},
{
MR_string_const("\044ground", 7)
},
{
MR_string_const("\044mostly_uniq_inst", 17)
},
{
MR_string_const("\044shared_inst", 12)
},
{
MR_string_const("\044typed_ground", 13)
},
{
MR_string_const("\044typed_inst", 11)
},
{
MR_string_const(";", 1)
},
{
MR_string_const(">>", 2)
},
{
MR_string_const("free", 4)
},
{
MR_string_const("clobbered_any", 13)
},
{
MR_string_const("mostly_clobbered_any", 20)
},
{
MR_string_const("mostly_unique_any", 17)
},
{
MR_string_const("any", 3)
},
{
MR_string_const("unique_any", 10)
},
{
MR_string_const("clobbered", 9)
},
{
MR_string_const("mostly_clobbered", 16)
},
{
MR_string_const("mostly_unique", 13)
},
{
MR_string_const("bound", 5)
},
{
MR_string_const("unique", 6)
},
{
MR_string_const("ground", 6)
},
{
MR_string_const("=<", 2)
},
{
MR_string_const("func", 4)
},
{
MR_string_const("=", 1)
},
{
MR_string_const("is", 2)
},
{
MR_string_const("pred", 4)
},
{
MR_string_const("cc_multi", 8)
},
{
MR_string_const("cc_nondet", 9)
},
{
MR_string_const("det", 3)
},
{
MR_string_const("erroneous", 9)
},
{
MR_string_const("failure", 7)
},
{
MR_string_const("multi", 5)
},
{
MR_string_const("nondet", 6)
},
{
MR_string_const("semidet", 7)
},
{
MR_string_const("any_func", 8)
},
{
MR_string_const("any_pred", 8)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__io__state__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__parse_tree__mercury_to_mercury__simple_inst_info__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__mercury_to_mercury__type_ctor_info_simple_inst_info_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__string__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
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
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__io__state__arity0__,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__parse_tree__mercury_to_mercury__simple_inst_info__arity0__,
MR_CTOR0_ADDR(parse_tree__mercury_to_mercury, simple_inst_info)
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__output__arity1__string__arity0__,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__,
MR_CTOR0_ADDR(hlds__hlds_out__hlds_out_mode, expanded_inst_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_2;
static const struct mercury_type_2 mercury_common_2[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_COMMON(1,1)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(1,3),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0
};

const MR_ConstString mercury_data_hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0[] = {
	"eii_varset",
	"eii_module_info",
	"eii_expansions"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0 = {
	"expanded_inst_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_out__hlds_out_mode__field_types_expanded_inst_info_0_0,
	mercury_data_hlds__hlds_out__hlds_out_mode__field_names_expanded_inst_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_out__hlds_out_mode__du_stag_ordered_expanded_inst_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_mode__du_functor_desc_expanded_inst_info_0_0
};

const MR_Integer mercury_data_hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0)),
	"hlds.hlds_out.hlds_out_mode",
	"expanded_inst_info",
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_mode__du_name_ordered_expanded_inst_info_0 },
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_mode__du_ptag_ordered_expanded_inst_info_0 },
	1,
	4,
	mercury_data_hlds__hlds_out__hlds_out_mode__functor_number_map_expanded_inst_info_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0))
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"mode_to_term_with_context",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
237,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"mode_to_term_with_context",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
243,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"mode_to_term_with_context",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
213,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"mode_to_term_with_context",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
219,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"lambda_hlds_out_mode_m_188",
4,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
188,
"57"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
134,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
346,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_3 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
258,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
279,
"48"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_mode",
"hlds.hlds_out.hlds_out_mode",
"map_inst_to_term",
3,
0
},
"hlds.hlds_out.hlds_out_mode",
"hlds_out_mode.m",
263,
"16"
};


MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(varset__init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_inst_4_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_newline_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module0)
	MR_init_entry1(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0);
	MR_init_label8(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,20,4,5,6,7,10,11,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_inst_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i22);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_inst_4_0,
		hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_newline_3_0,
		hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%            ", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_is_unreachable_1_0);
MR_decl_entry(hlds__instmap__instmap_to_assoc_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module1)
	MR_init_entry1(hlds__hlds_out__hlds_out_mode__write_instmap_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_mode__write_instmap_6_0);
	MR_init_label3(hlds__hlds_out__hlds_out_mode__write_instmap_6_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_instmap'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_mode__write_instmap_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__instmap__instmap_is_unreachable_1_0,
		hlds__hlds_out__hlds_out_mode__write_instmap_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_instmap_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__write_instmap_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("unreachable", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_instmap_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_mode__write_instmap_6_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_mode__write_instmap_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module2)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_atom'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module3)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0);
	MR_init_label1(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_live_to_str'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("dead", 4);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("live", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module4)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0);
	MR_init_label1(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_is_real_to_str'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("fake", 4);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("real", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module5)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0);
	MR_init_label4(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_uniqueness'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("clobbered", 9);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("mostly_clobbered", 16);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("mostly_unique", 13);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0_i6);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unique", 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(parse_tree__prog_util__construct_qualified_term_4_0);
MR_decl_entry(parse_tree__prog_io_util__unparse_type_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
MR_decl_entry(fn__term__coerce_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module6)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,3,14,15,20,21,22,24,25,11,30)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,27,34,35,36,37,38,39,40,32,48)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,49,50,51,52,53,54,46,60,67,65)
	MR_init_label8(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,71,73,74,75,70,79,81,82)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_name_to_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_r1, 1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i30);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i11);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_r1, 3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(4) = MR_tfield(2, MR_r1, 1);
	MR_sv(5) = MR_tfield(2, MR_r1, 2);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i14);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i15);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i20);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i21);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i22);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i24);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i25);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i27);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i30);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i32);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(5) = MR_tfield(3, MR_r1, 4);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i34);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i35);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i36);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("shared", 6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i38);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i39);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i40);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i46);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(3, MR_r1, 3);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_sv(5) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i48);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__is_live_to_str_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i49);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i50);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("shared", 6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i51);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i52);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__unify_is_real_to_str_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i53);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i54);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i60);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i67);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i65);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i67);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i70);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i71);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("shared", 6);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__inst_uniqueness_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i73);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i74);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i75);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i79);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i81);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0_i82);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__cons_id_and_args_to_term_3_0);
MR_decl_entry(require__unexpected_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module7)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0);
	MR_init_label6(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,6,8,11,13,7,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bound_insts_to_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_i6);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__cons_id_and_args_to_term_3_0,
		fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_i11);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,
		fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0_i13);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_out_mode.m", 15);
	MR_r2 = (MR_Word) MR_string_const("bound_insts_to_term: cons_id_and_args_to_term failed", 52);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_2_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_out_mode.m", 15);
	MR_r2 = (MR_Word) MR_string_const("bound_insts_to_term([])", 23);
	MR_np_tailcall_ent(require__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module8)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
	MR_init_label7(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,8,4,5,12,13,3,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_to_term_with_context'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i5);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,
		fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i12);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,
		fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i13);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0_i20);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__fold_3_0);
MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module9)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,3,6,12,15,18,21,10,8,28,29)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,27,33,38,40,42,44,37,47,36,54)
	MR_init_label9(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,50,56,62,65,68,71,60,253,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_to_term_with_context'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("not_reached", 11);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__make_atom_2_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i8);
	}
	MR_r3 = MR_tfield(2, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i10);
	}
	MR_r3 = MR_tfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i18);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,13);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,15);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i27);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_io_util__unparse_type_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i28);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i29);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i33);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i36);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i38);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i40);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,17);
	MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i42);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,18);
	MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i44);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,19);
	MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,20);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__bound_insts_to_term_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i47);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i50);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	}
	MR_np_localcall_lab(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i54);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__set__fold_3_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i56);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__inst_name_to_term_2_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i253);
	}
	MR_r3 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i60);
	}
	MR_r3 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i62);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,4)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i65);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,17);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i68);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,18);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i71);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,21);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(0,0,20);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r3, 0);
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0_i77);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__term__coerce_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module10)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0);
	MR_init_label1(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_to_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module11)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0);
	MR_init_label1(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_to_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_format_mode_4_0);
MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module12)
	MR_init_entry1(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0);
	MR_init_label2(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_output_uni_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module13)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0);
	MR_init_label2(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_uni_mode_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_r2;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0_i5);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" = ", 3);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0_i6);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module14)
	MR_init_entry1(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0);
	MR_init_label7(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,27,3,6,7,9,12,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_format_uni_mode_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(8);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 0);
	MR_tempr5 = MR_r3;
	MR_sv(1) = MR_tempr5;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(6) = MR_tempr5;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(" = ", 3);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_format_mode_4_0,
		hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0_i30);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0_i27);
	}
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module15)
	MR_init_entry1(hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_output_uni_mode_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module16)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_uni_mode_list_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_mode__mercury_uni_mode_list_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_mode__mercury_format_uni_mode_list_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module17)
	MR_init_entry1(hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0);
	MR_init_label1(hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_output_expanded_inst'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_mode__mercury_output_expanded_inst_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module18)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0);
	MR_init_label1(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_expanded_inst_to_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_sv(1);
	MR_r5 = (MR_Word) MR_string_const("", 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module19)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'map_inst_to_term'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__map_inst_to_term_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_mode__inst_to_term_with_context_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___varset__varset_1_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module20)
	MR_init_entry1(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0);
	MR_init_label4(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i10);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___varset__varset_1_0,
		__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i4);
MR_def_label(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i6);
MR_def_label(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___set_ordlist__set_ordlist_1_0);
MR_def_label(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___varset__varset_1_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module21)
	MR_init_entry1(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0);
	MR_init_label5(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i2);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___varset__varset_1_0,
		__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i5);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i9);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___set_ordlist__set_ordlist_1_0);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module22)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_format_inst_name_4_0);
MR_decl_entry(check_hlds__mode_util__inst_lookup_3_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module23)
	MR_init_entry1(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0);
	MR_init_label5(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,3,2,6,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r3 = MR_tfield(0, MR_r3, 2);
	MR_np_call_localret_ent(set__member_2_0,
		hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("...", 3);
	MR_r4 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
MR_def_label(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_name_4_0);
MR_def_label(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(2), 1);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tfield(0, MR_sv(2), 2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,7);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_format_inst_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module24)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0);
	MR_init_label2(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__inst_to_term_with_context__188__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,22);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	}
	MR_np_call_localret_ent(fn__term__coerce_1_0,
		fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0_i5);
MR_def_label(fn__hlds__hlds_out__hlds_out_mode__IntroducedFrom__func__inst_to_term_with_context__188__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(4);
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module25)
	MR_init_entry1(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_init_label10(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,4,8,9,11,3,19,20,23,28,33)
	MR_init_label4(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,38,43,48,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ground_pred_inst_info_to_term__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,23);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i9);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,24);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i11);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i20);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,26);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i19);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i20);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	if (MR_INT_NE(MR_sv(2),4)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,27);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),5)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,28);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,29);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),6)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,30);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),7)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,31);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,32);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,33);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_114_111_117_110_100_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,34);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_mode_module26)
	MR_init_entry1(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0);
	MR_init_label10(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,4,8,9,11,3,19,20,23,28,33)
	MR_init_label4(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,38,43,48,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__any_pred_inst_info_to_term__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(3) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,35);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i9);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,24);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i11);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i20);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__mode_to_term_with_context_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,36);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i19);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__construct_qualified_term_4_0,
		fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i20);
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,25);
	if (MR_INT_NE(MR_sv(2),4)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,27);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),5)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,28);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,29);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),6)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,30);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),7)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,31);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),2)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i48);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,32);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0_i53);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,33);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
MR_def_label(fn__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_97_110_121_95_112_114_101_100_95_105_110_115_116_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,0,34);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(parse_tree__prog_util__construct_qualified_term_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_out__hlds_out_mode_maybe_bunch_0(void)
{
	hlds__hlds_out__hlds_out_mode_module0();
	hlds__hlds_out__hlds_out_mode_module1();
	hlds__hlds_out__hlds_out_mode_module2();
	hlds__hlds_out__hlds_out_mode_module3();
	hlds__hlds_out__hlds_out_mode_module4();
	hlds__hlds_out__hlds_out_mode_module5();
	hlds__hlds_out__hlds_out_mode_module6();
	hlds__hlds_out__hlds_out_mode_module7();
	hlds__hlds_out__hlds_out_mode_module8();
	hlds__hlds_out__hlds_out_mode_module9();
	hlds__hlds_out__hlds_out_mode_module10();
	hlds__hlds_out__hlds_out_mode_module11();
	hlds__hlds_out__hlds_out_mode_module12();
	hlds__hlds_out__hlds_out_mode_module13();
	hlds__hlds_out__hlds_out_mode_module14();
	hlds__hlds_out__hlds_out_mode_module15();
	hlds__hlds_out__hlds_out_mode_module16();
	hlds__hlds_out__hlds_out_mode_module17();
	hlds__hlds_out__hlds_out_mode_module18();
	hlds__hlds_out__hlds_out_mode_module19();
	hlds__hlds_out__hlds_out_mode_module20();
	hlds__hlds_out__hlds_out_mode_module21();
	hlds__hlds_out__hlds_out_mode_module22();
	hlds__hlds_out__hlds_out_mode_module23();
	hlds__hlds_out__hlds_out_mode_module24();
	hlds__hlds_out__hlds_out_mode_module25();
	hlds__hlds_out__hlds_out_mode_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_out__hlds_out_mode__init(void);
void mercury__hlds__hlds_out__hlds_out_mode__init_type_tables(void);
void mercury__hlds__hlds_out__hlds_out_mode__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_out__hlds_out_mode__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_out__hlds_out_mode__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_out__hlds_out_mode__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_out__hlds_out_mode_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0,
		hlds__hlds_out__hlds_out_mode__expanded_inst_info_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__, 5) =
			MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__instvarset_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_parse_tree__mercury_to_mercury__inst_info__arity1__hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0__, 6) =
			MR_ENTRY_AP(hlds__hlds_out__hlds_out_mode__ClassMethod_for_parse_tree__mercury_to_mercury__inst_info____hlds__hlds_out__hlds_out_mode__expanded_inst_info__arity0______parse_tree__mercury_to_mercury__format_defined_inst_4_4_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__hlds__hlds_out__hlds_out_mode__init_debugger();
}

void mercury__hlds__hlds_out__hlds_out_mode__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_out__hlds_out_mode__type_ctor_info_expanded_inst_info_0);
	}
}


void mercury__hlds__hlds_out__hlds_out_mode__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_out__hlds_out_mode__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_out__hlds_out_mode);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_out__hlds_out_mode__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
