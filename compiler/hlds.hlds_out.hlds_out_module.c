/*
** Automatically generated from `hlds_out_module.m'
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
INIT mercury__hlds__hlds_out__hlds_out_module__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_out.hlds_out_module.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "hlds.hlds_out.hlds_out_module.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.hlds_out.hlds_out_module.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.hlds_out.hlds_out_module.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 44 "hlds.hlds_out.hlds_out_module.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.hlds_out.hlds_out_module.c"
#line 49 "hlds.hlds_out.hlds_out_module.c"
#include "hlds.hlds_out.hlds_out_module.mh"

#line 52 "hlds.hlds_out.hlds_out_module.c"
#line 53 "hlds.hlds_out.hlds_out_module.c"
#ifndef HLDS__HLDS_OUT__HLDS_OUT_MODULE_DECL_GUARD
#define HLDS__HLDS_OUT__HLDS_OUT_MODULE_DECL_GUARD

#line 57 "hlds.hlds_out.hlds_out_module.c"
#line 58 "hlds.hlds_out.hlds_out_module.c"

#endif
#line 61 "hlds.hlds_out.hlds_out_module.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
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
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0, 2,3,4)
MR_decl_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0, 2,3,4)
MR_decl_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0, 3,6,8,5,10,12,13,14,15,16)
MR_decl_label1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0, 17)
MR_decl_label6(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0, 2,3,5,6,7,9)
MR_decl_label10(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0, 2,3,7,6,17,18,16,21,22,71)
MR_decl_label10(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0, 5,32,34,29,39,41,43,44,36,48)
MR_decl_label3(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0, 50,66,26)
MR_decl_label7(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0, 36,4,6,9,11,13,38)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_class_defn_5_0, 2,3,4,5,6,7,11,12,13,14)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_class_defn_5_0, 15,8,19,18,21,22,23,24,25,26)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_class_defn_5_0, 27,29,30,31,32,34,35,36,37,39)
MR_decl_label6(hlds__hlds_out__hlds_out_module__write_class_proc_3_0, 2,3,4,5,6,7)
MR_decl_label4(hlds__hlds_out__hlds_out_module__write_classes_5_0, 2,3,4,7)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_constructors_7_0, 6,7,8,9,12,14,5,17,18,19)
MR_decl_label3(hlds__hlds_out__hlds_out_module__write_constructors_7_0, 20,3,40)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0, 29,4,5,6,7,10,12,14,17,31)
MR_decl_label5(hlds__hlds_out__hlds_out_module__write_ctor_6_0, 2,3,6,8,10)
MR_decl_label4(hlds__hlds_out__hlds_out_module__write_footer_4_0, 2,3,4,5)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0, 12,13,14,15,16,17,18,19,20,24)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0, 22,28,30,31,32,34,27,38,40,41)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0, 42,43,44,37,48,50,51,52,47,56)
MR_decl_label4(hlds__hlds_out__hlds_out_module__write_hlds_4_0, 58,55,61,62)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0, 2,3,7,8,9,10,11,4,15,14)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0, 19,20,21,22,23,24,25,27,28,29)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0, 31,33,30,35,48,37,38,39,41,43)
MR_decl_label4(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0, 2,3,4,5)
MR_decl_label4(hlds__hlds_out__hlds_out_module__write_instances_5_0, 2,3,5,8)
MR_decl_label3(hlds__hlds_out__hlds_out_module__write_preds_6_0, 2,3,4)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0, 12,13,15,16,18,20,21,22,23,25)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0, 29,30,31,32,34,24,40,42,43,44)
MR_decl_label4(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0, 39,47,46,51)
MR_decl_label3(hlds__hlds_out__hlds_out_module__write_table_structs_4_0, 2,3,6)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0, 126,6,79,8,9,10,11,12,13,14)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0, 15,16,7,31,47,20,28,22,23,24)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0, 25,26,33,34,35,36,37,38,39,41)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0, 43,44,51,52,49,55,56,53,57,58)
MR_decl_label7(hlds__hlds_out__hlds_out_module__write_type_body_7_0, 96,60,61,127,65,68,128)
MR_decl_label8(hlds__hlds_out__hlds_out_module__write_type_params_4_0, 6,7,5,9,10,11,12,27)
MR_decl_label4(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0, 13,3,5,6)
MR_decl_label3(hlds__hlds_out__hlds_out_module__write_types_5_0, 2,3,4)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_types_2_5_0, 63,4,5,6,7,8,9,11,13,14)
MR_decl_label10(hlds__hlds_out__hlds_out_module__write_types_2_5_0, 18,19,20,21,22,23,24,25,10,29)
MR_decl_label8(hlds__hlds_out__hlds_out_module__write_types_2_5_0, 32,31,30,36,38,39,40,65)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_footer_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_type_params_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_ctor_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_constructors_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_type_body_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_types_2_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_types_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_classes_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_instances_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_table_structs_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_preds_6_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_module__write_hlds_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_module__write_promise_13_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_class_defn_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_class_proc_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0)
MR_decl_static(hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__814__1_4_0)
MR_def_extern_entry(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_table_struct_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_table_struct_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
static const struct mercury_type_0 mercury_common_0[7] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(2,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_TAG_COMMON(0,2,0)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, table_struct_info)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(hlds__hlds_module, table_struct_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_classes_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instances_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defns_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_3;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_classes_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_out__hlds_out_util, hlds_out_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instances_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_out__hlds_out_util, hlds_out_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,2),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,2),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defns_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_out__hlds_out_util, hlds_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,2),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,2),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(2,2),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_2 mercury_common_2[7] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc)
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
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_table_structs_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_step_desc_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_1;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_table_structs_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,4),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,2),
MR_CTOR0_ADDR(hlds__hlds_pred, table_step_desc),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(2,4),
MR_COMMON(2,5),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_preds_6_0_1;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_preds_6_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(hlds__hlds_out__hlds_out_util, hlds_out_info),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,6),
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_hlds_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_2;
static const struct mercury_type_5 mercury_common_5[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_hlds_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(parse_tree__prog_out__write_sym_name_3_0);
MR_decl_entry(io__write_int_3_0);
static const struct mercury_type_6 mercury_common_6[5] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(parse_tree__prog_out__write_sym_name_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__write_class_proc_3_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(io__write_int_3_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(io__write_int_3_0),
0
},
};


static const MR_UserClosureId
mercury_data__closure_layout__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"lambda_hlds_out_module_m_814",
4,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
814,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_pred",
"hlds.hlds_out.hlds_out_pred",
"write_space_and_table_trie_step",
4,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
654,
"c18;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_3 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_constraint",
5,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
564,
"d1;c23;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_2 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_type",
5,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
554,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_1 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_type",
5,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
554,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instance_defns_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"write_instance_defn",
5,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
523,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_2 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
481,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_int",
3,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
478,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_3 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"write_class_proc",
3,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
470,
"d1;c41;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_2 = {
{
MR_PREDICATE,
"parse_tree.mercury_to_mercury",
"parse_tree.mercury_to_mercury",
"mercury_output_constraint",
5,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
464,
"d1;c34;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_class_defn_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"hlds_output_fundep",
3,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
459,
"d1;c27;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_hlds_4_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_out",
"parse_tree.prog_out",
"write_sym_name",
3,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
162,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_preds_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"maybe_write_pred",
7,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
742,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_table_structs_4_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"write_table_struct_info",
4,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
636,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_instances_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"write_instance_defns",
5,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
511,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_module__write_classes_5_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_module",
"hlds.hlds_out.hlds_out_module",
"write_class_defn",
5,
0
},
"hlds.hlds_out.hlds_out_module",
"hlds_out_module.m",
416,
"d1;c11;"
};


MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_indent_3_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module0)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_footer_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_footer_4_0);
	MR_init_label4(hlds__hlds_out__hlds_out_module__write_footer_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_footer'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_footer_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__hlds_out__hlds_out_module__write_footer_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_footer_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_footer_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_footer_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- end_module ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_footer_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_footer_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		hlds__hlds_out__hlds_out_module__write_footer_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_footer_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_var_5_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module1)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_type_params_2_4_0);
	MR_init_label4(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0,13,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_type_params_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_params_2_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_module__write_type_params_2_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0_i13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module2)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_type_params_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_type_params_4_0);
	MR_init_label8(hlds__hlds_out__hlds_out_module__write_type_params_4_0,6,7,5,9,10,11,12,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_type_params'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_type_params_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_params_4_0_i27);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r4 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_params_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_params_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_module__write_type_params_4_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_params_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_module__write_type_params_4_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_params_4_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_var_5_0,
		hlds__hlds_out__hlds_out_module__write_type_params_4_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_module__write_type_params_2_4_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_params_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(io__print_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module3)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_ctor_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_ctor_6_0);
	MR_init_label5(hlds__hlds_out__hlds_out_module__write_ctor_6_0,2,3,6,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_ctor'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_ctor_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0,
		hlds__hlds_out__hlds_out_module__write_ctor_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_ctor_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__hlds_out__hlds_out_module__write_ctor_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_ctor_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__hlds_out_module__write_ctor_6_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_ctor_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_ctor_6_0_i10);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t% tag: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_ctor_6_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_ctor_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__print_3_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_ctor_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module4)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_constructors_2_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,29,4,5,6,7,10,12,14,17,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constructors_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i31);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i14);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t% tag: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module5)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_constructors_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_constructors_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_constructors_7_0,6,7,8,9,12,14,5,17,18,19)
	MR_init_label3(hlds__hlds_out__hlds_out_module__write_constructors_7_0,20,3,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constructors'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_constructors_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_constructors_7_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r7 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_constructors_7_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_ctor_4_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_constructors_7_0_i40);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("\t% tag: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__print_3_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_tfield(1, MR_r4, 0);
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_ctor_6_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_constructors_7_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_module__write_constructors_2_7_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_out_module.m", 17);
	MR_r2 = (MR_Word) MR_string_const("write_constructors: empty constructor list?", 43);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_constructors_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);
MR_decl_entry(fn__libs__globals__foreign_language_string_1_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_where_attributes_6_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module6)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_type_body_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_type_body_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0,126,6,79,8,9,10,11,12,13,14)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0,15,16,7,31,47,20,28,22,23,24)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0,25,26,33,34,35,36,37,38,39,41)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_type_body_7_0,43,44,51,52,49,55,56,53,57,58)
	MR_init_label7(hlds__hlds_out__hlds_out_module__write_type_body_7_0,96,60,61,127,65,68,128)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_type_body'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_type_body_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i126) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i127) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i68) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i128));
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = (MR_Word) MR_string_const(" --->\n", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i8);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(13) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(14) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(15) = MR_tfield(1, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("/* cheaper tag test: ", 21);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" tag ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" tag ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(io__print_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i79);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(8),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i33);
	}
	if (MR_PTAG_TEST(MR_sv(8),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i22);
	}
	if (MR_INT_NE(MR_unmkbody(MR_sv(8)),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i47);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* KIND enumeration */\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(8)),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i28);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* KIND dummy */\n", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/* KIND general */\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = MR_tfield(1, MR_sv(8), 0);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* KIND foreign enumeration for ", 32);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(8);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 0);
	MR_tempr1 = MR_tempr2;
	MR_sv(8) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(13) = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* KIND notag: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(13),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("no arg name", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(13), 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" */\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	if (MR_INT_EQ(MR_sv(10),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i49);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* reserved_tag */\n", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i52);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(11),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i53);
	}
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i55);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* reserved_address */\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_constructors_7_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i57);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 3);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_where_attributes_6_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(12),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i60);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(16);
	MR_decr_sp(16);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/* has foreign_type */\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i96);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r5;
	MR_sv(1) = MR_tfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_string_const(" == ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i65);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_type_5_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i96);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" == \044foreign_type.\n", 19);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_type_body_7_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_tfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_type_body_7_0_i96);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tempr3 = MR_r3;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_tempr3, 1);
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_r2 = MR_r5;
	MR_tempr2 = MR_tempr3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_where_attributes_6_0,
		hlds__hlds_out__hlds_out_module__write_type_body_7_0_i96);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_tvarset_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_context_2_0);
MR_decl_entry(string__contains_char_2_0);
MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0);
MR_decl_entry(parse_tree__prog_out__write_type_name_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module7)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_types_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_types_2_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_types_2_5_0,63,4,5,6,7,8,9,11,13,14)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_types_2_5_0,18,19,20,21,22,23,24,25,10,29)
	MR_init_label8(hlds__hlds_out__hlds_out_module__write_types_2_5_0,32,31,30,36,38,39,40,65)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_types_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_types_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i65);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tvarset_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_context_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = (MR_Integer) 99;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i10);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(9), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i10);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", status ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_pred__import_status_to_string_1_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i32);
	}
	MR_r3 = MR_tfield(3, MR_sv(8), 1);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i30);
	}
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i30);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- solver type ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- type ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_out__write_type_name_3_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_type_params_4_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	MR_r4 = ((MR_Integer) MR_sv(2) + (MR_Integer) 1);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_type_body_7_0,
		hlds__hlds_out__hlds_out_module__write_types_2_5_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_types_2_5_0_i63);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_2_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_all_type_ctor_defns_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module8)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_types_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_types_5_0);
	MR_init_label3(hlds__hlds_out__hlds_out_module__write_types_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_types'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_types_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_types_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Types --------\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_types_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__get_all_type_ctor_defns_2_0,
		hlds__hlds_out__hlds_out_module__write_types_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_types_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_module__write_types_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(io__write_list_5_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module9)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_classes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_classes_5_0);
	MR_init_label4(hlds__hlds_out__hlds_out_module__write_classes_5_0,2,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_classes'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_classes_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_classes_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_classes_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Classes --------\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_classes_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_classes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_module__write_classes_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_classes_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__write_class_defn_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_classes_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_classes_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module10)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_instances_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_instances_5_0);
	MR_init_label4(hlds__hlds_out__hlds_out_module__write_instances_5_0,2,3,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_instances'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_instances_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_instances_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instances_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Instances --------\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instances_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instances_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_module__write_instances_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instances_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n\n", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_instances_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instances_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module11)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_table_structs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_table_structs_4_0);
	MR_init_label3(hlds__hlds_out__hlds_out_module__write_table_structs_4_0,2,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_structs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_table_structs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, table_struct_info);
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_module__write_table_structs_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_structs_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("%-------- Table structs --------\n", 33);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_structs_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_structs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_module__write_table_structs_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_structs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module12)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_preds_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_preds_6_0);
	MR_init_label3(hlds__hlds_out__hlds_out_module__write_preds_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_preds'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_preds_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_string_const("%-------- Predicates --------\n\n", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_preds_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_preds_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_preds_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_preds_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		hlds__hlds_out__hlds_out_module__write_preds_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_preds_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_imported_module_specifiers_2_0);
MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_inst_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_mode_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_class_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_instance_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_table_struct_map_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module13)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_hlds_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_hlds_4_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0,12,13,14,15,16,17,18,19,20,24)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0,22,28,30,31,32,34,27,38,40,41)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_hlds_4_0,42,43,44,37,48,50,51,52,47,56)
	MR_init_label4(hlds__hlds_out__hlds_out_module__write_hlds_4_0,58,55,61,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_hlds'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_module__write_hlds_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_imported_module_specifiers_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_mode_table_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_instance_table_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_table_struct_map_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r2 = (MR_Integer) 127;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Integer) 128;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% vim: ts=2 sw=2\n\n", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- module ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(10),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i24);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(11),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i22);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i61);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 73;
	}
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- import_module ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 84;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i37);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_types_5_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_classes_5_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_instances_5_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 77;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i47);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i51);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i52);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i47);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Integer) 90;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i56);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_hlds_4_0_i55);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_table_structs_4_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i55);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r1 = MR_sv(9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_preds_6_0,
		hlds__hlds_out__hlds_out_module__write_hlds_4_0_i62);
MR_def_label(hlds__hlds_out__hlds_out_module__write_hlds_4_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_module__write_footer_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module14)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_promise_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_promise_13_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_promise'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_module__write_promise_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r6;
	MR_r6 = MR_r7;
	MR_r7 = MR_r8;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_np_tailcall_ent(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_class_id_3_0);
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_vars_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module15)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_class_defn_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_class_defn_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,2,3,4,5,6,7,11,12,13,14)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,15,8,19,18,21,22,23,24,25,26)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,27,29,30,31,32,34,35,36,37,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_class_defn'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_class_defn_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_class_id_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_sv(6) = MR_tfield(0, MR_r2, 7);
	MR_sv(7) = MR_tfield(0, MR_r2, 8);
	MR_sv(8) = MR_tfield(0, MR_r2, 9);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(8), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i8);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i18);
	}
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Integer) 0;
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Vars: ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_vars_5_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i26);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Functional dependencies: ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_fundep);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Constraints: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Class Methods: ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i37);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_class_defn_5_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_defn_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module16)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0);
	MR_init_label6(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0,2,3,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'hlds_output_fundep'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(io__write_char_3_0,
		hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,3);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" -> ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,4);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__hlds_output_fundep_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module17)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_class_proc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_class_proc_3_0);
	MR_init_label6(hlds__hlds_out__hlds_out_module__write_class_proc_3_0,2,3,4,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_class_proc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_class_proc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("hlds_class_proc(pred_id:", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_proc_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_proc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_module__write_class_proc_3_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_proc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_module__write_class_proc_3_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_proc_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", proc_id:", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_class_proc_3_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_proc_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_module__write_class_proc_3_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_proc_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_module__write_class_proc_3_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_class_proc_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 41;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_char_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module18)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_instance_defns_5_0);
	MR_init_label4(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_instance_defns'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defns_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defns_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_class_id_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defns_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defns_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defns_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_instance_methods_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0);
MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module19)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_instance_defn_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,2,3,7,8,9,10,11,4,15,14)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,19,20,21,22,23,24,25,27,28,29)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,31,33,30,35,48,37,38,39,41,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_instance_defn'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 8);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i4);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% context: file \140", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\', line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Integer) 1;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i19);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_type_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_sv(2);
	MR_sv(1) = (MR_Integer) 0;
	}
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Types: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Constraints: ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i28);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i29);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("% abstract", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = (MR_Word) MR_string_const("% Instance Methods: ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_instance_methods_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i35);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i37);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(7), 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i38);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% procedures: ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_3_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_instance_defn_5_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_module__write_instance_defn_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module20)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0);
	MR_init_label7(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,36,4,6,9,11,13,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_arg_tabling_methods'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i38);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("output", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(1, MR_sv(1), 0);
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("addr", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("promise_implied", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("value", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0_i36);
MR_def_label(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_table_step_desc_0;
MR_decl_entry(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module21)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,12,13,15,16,18,20,21,22,23,25)
	MR_init_label10(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,29,30,31,32,34,24,40,42,43,44)
	MR_init_label4(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,39,47,46,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_table_struct_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% table struct info for ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(4) = MR_tfield(0, MR_r2, 5);
	MR_sv(5) = MR_tfield(0, MR_r2, 6);
	MR_sv(6) = MR_tfield(0, MR_r2, 7);
	MR_r1 = MR_tfield(0, MR_r2, 4);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i7);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", #outputs: ", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% #inputs: ", 11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% input steps:", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_pred__write_space_and_table_trie_step_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, table_step_desc);
	MR_sv(8) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i16);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("% no output steps", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(5), 0);
	MR_r1 = (MR_Word) MR_string_const("% output steps:", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i20);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(list__foldl_4_2,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_pred__write_table_arg_infos_4_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i29);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i25);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_string_const("% all strict\n", 13);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_string_const("% all fast_loose\n", 17);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_string_const("% specified [", 13);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i30);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_4_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i31);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const(", hidden args by addr\n", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", hidden args by value\n", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i24);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i40);
	}
	MR_r1 = (MR_Word) MR_string_const("% no size limit\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i42);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% size limit ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i47);
	}
	MR_r1 = (MR_Word) MR_string_const("% do not gather statistics\n", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% gather statistics\n", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i46);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0_i51);
	}
	MR_r1 = (MR_Word) MR_string_const("% allow reset\n", 14);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_module__write_table_struct_info_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% do not allow reset\n", 21);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(string__to_int_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_out__hlds_out_pred__write_pred_7_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module22)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0);
	MR_init_label10(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,2,3,7,6,17,18,16,21,22,71)
	MR_init_label10(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,5,32,34,29,39,41,43,44,36,48)
	MR_init_label3(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,50,66,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_pred'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(0, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_sv(8) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i7);
	}
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(8),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i5);
	}
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(10) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(11));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i16);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i17);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i18);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_sv(4) != MR_r2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(11));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i71);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(9);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(10);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i21);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__member_2_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i66);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_pred_7_0);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 73;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i32);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i29);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i34);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i66);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 73;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i36);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_pseudo_imported_1_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i36);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i43);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i44);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i36);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i36);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i66);
	}
	}
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 85;
	MR_np_call_localret_ent(string__contains_char_2_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i48);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i26);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i50);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0_i26);
	}
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(12);
MR_def_label(hlds__hlds_out__hlds_out_module__maybe_write_pred_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_pred__write_pred_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term_io__write_variable_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module23)
	MR_init_entry1(hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__814__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__814__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__write_promise__814__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__814__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term_io__write_variable_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_newline_3_0);
MR_decl_entry(parse_tree__prog_out__write_promise_type_3_0);
MR_decl_entry(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module24)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0);
	MR_init_label10(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,3,6,8,5,10,12,13,14,15,16)
	MR_init_label1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_promise__[5, 9]_0'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_module__IntroducedFrom__pred__write_promise__814__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),3)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const(":- promise all [", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i6);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i8);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("] (\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i17);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":- all [", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i10);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r2 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(io__write_list_5_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i12);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i13);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_newline_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i14);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_out__write_promise_type_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i15);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_newline_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i16);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0_i17);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_112_114_111_109_105_115_101_95_95_91_53_44_32_57_93_95_48_13_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r8 = MR_sv(9);
	MR_r2 = MR_tfield(0, MR_sv(8), 1);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = (MR_Word) MR_string_const(").\n", 3);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_goal__do_write_goal_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module25)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0);
	MR_init_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_insts__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Insts --------\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_105_110_115_116_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%%% Not yet implemented, sorry.\n", 32);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_module_module26)
	MR_init_entry1(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0);
	MR_init_label3(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__write_modes__[2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0_i2);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%-------- Modes --------\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0_i3);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0_i4);
MR_def_label(f_104_108_100_115_95_95_104_108_100_115_95_111_117_116_95_95_104_108_100_115_95_111_117_116_95_109_111_100_117_108_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_109_111_100_101_115_95_95_91_50_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("%%% Not yet implemented, sorry.\n", 32);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_out__hlds_out_module_maybe_bunch_0(void)
{
	hlds__hlds_out__hlds_out_module_module0();
	hlds__hlds_out__hlds_out_module_module1();
	hlds__hlds_out__hlds_out_module_module2();
	hlds__hlds_out__hlds_out_module_module3();
	hlds__hlds_out__hlds_out_module_module4();
	hlds__hlds_out__hlds_out_module_module5();
	hlds__hlds_out__hlds_out_module_module6();
	hlds__hlds_out__hlds_out_module_module7();
	hlds__hlds_out__hlds_out_module_module8();
	hlds__hlds_out__hlds_out_module_module9();
	hlds__hlds_out__hlds_out_module_module10();
	hlds__hlds_out__hlds_out_module_module11();
	hlds__hlds_out__hlds_out_module_module12();
	hlds__hlds_out__hlds_out_module_module13();
	hlds__hlds_out__hlds_out_module_module14();
	hlds__hlds_out__hlds_out_module_module15();
	hlds__hlds_out__hlds_out_module_module16();
	hlds__hlds_out__hlds_out_module_module17();
	hlds__hlds_out__hlds_out_module_module18();
	hlds__hlds_out__hlds_out_module_module19();
	hlds__hlds_out__hlds_out_module_module20();
	hlds__hlds_out__hlds_out_module_module21();
	hlds__hlds_out__hlds_out_module_module22();
	hlds__hlds_out__hlds_out_module_module23();
	hlds__hlds_out__hlds_out_module_module24();
	hlds__hlds_out__hlds_out_module_module25();
	hlds__hlds_out__hlds_out_module_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_out__hlds_out_module__init(void);
void mercury__hlds__hlds_out__hlds_out_module__init_type_tables(void);
void mercury__hlds__hlds_out__hlds_out_module__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_out__hlds_out_module__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_out__hlds_out_module__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_out__hlds_out_module__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_out__hlds_out_module_maybe_bunch_0();
	mercury__hlds__hlds_out__hlds_out_module__init_debugger();
}

void mercury__hlds__hlds_out__hlds_out_module__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__hlds_out__hlds_out_module__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_out__hlds_out_module__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_out__hlds_out_module);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_out__hlds_out_module__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
