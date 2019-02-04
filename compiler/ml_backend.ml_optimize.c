/*
** Automatically generated from `ml_optimize.m'
** by the Mercury compiler,
** version rotd-2011-09-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_optimize__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_optimize.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_optimize.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ml_backend.ml_optimize.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "ml_backend.ml_optimize.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ml_backend.ml_optimize.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.ml_optimize.c"
#line 49 "ml_backend.ml_optimize.c"
#include "ml_backend.ml_optimize.mh"

#line 52 "ml_backend.ml_optimize.c"
#line 53 "ml_backend.ml_optimize.c"
#ifndef ML_BACKEND__ML_OPTIMIZE_DECL_GUARD
#define ML_BACKEND__ML_OPTIMIZE_DECL_GUARD

#line 57 "ml_backend.ml_optimize.c"
#line 58 "ml_backend.ml_optimize.c"

#endif
#line 61 "ml_backend.ml_optimize.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_optimize__type_ctor_info_opt_info_0,
	mercury_data_ml_backend__ml_optimize__type_ctor_info_var_elim_info_0;
MR_decl_label4(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0, 7,9,4,1)
MR_decl_label4(ml_backend__ml_optimize__cases_affect_lvals_3_0, 15,3,4,6)
MR_decl_label8(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0, 73,9,11,15,19,21,2,3)
MR_decl_label5(ml_backend__ml_optimize__eliminate_locals_5_0, 25,3,6,4,9)
MR_decl_label10(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0, 4,5,3,9,10,8,13,12,17,15)
MR_decl_label10(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0, 20,19,23,25,22,29,27,32,31,34)
MR_decl_label1(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0, 102)
MR_decl_label2(ml_backend__ml_optimize__eliminate_var_in_block_6_0, 2,3)
MR_decl_label3(ml_backend__ml_optimize__eliminate_var_in_case_4_0, 2,4,5)
MR_decl_label4(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0, 4,5,3,7)
MR_decl_label2(ml_backend__ml_optimize__eliminate_var_in_default_4_0, 4,15)
MR_decl_label4(ml_backend__ml_optimize__eliminate_var_in_defn_4_0, 5,4,8,21)
MR_decl_label2(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0, 15,4)
MR_decl_label6(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0, 38,6,4,9,8,12)
MR_decl_label7(ml_backend__ml_optimize__eliminate_var_in_lval_4_0, 4,3,8,7,11,10,34)
MR_decl_label2(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0, 16,4)
MR_decl_label10(ml_backend__ml_optimize__eliminate_var_in_rval_4_0, 7,4,5,10,3,14,13,17,18,16)
MR_decl_label6(ml_backend__ml_optimize__eliminate_var_in_rval_4_0, 21,20,24,23,27,75)
MR_decl_label1(ml_backend__ml_optimize__eliminate_var_in_statement_4_0, 2)
MR_decl_label10(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0, 4,3,7,8,9,6,12,13,11,16)
MR_decl_label10(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0, 15,19,21,22,24,25,18,28,27,31)
MR_decl_label10(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0, 30,36,35,39,41,42,38,44,45,46)
MR_decl_label1(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0, 139)
MR_decl_label4(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0, 4,3,7,20)
MR_decl_label8(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0, 5,4,8,7,11,10,13,33)
MR_decl_label6(ml_backend__ml_optimize__find_initial_val_in_statement_4_0, 7,2,3,13,15,1)
MR_decl_label8(ml_backend__ml_optimize__find_initial_val_in_statements_4_0, 5,7,3,14,20,19,23,1)
MR_decl_label3(ml_backend__ml_optimize__find_lval_component_lvals_3_0, 3,12,5)
MR_decl_label10(ml_backend__ml_optimize__find_rval_component_lvals_3_0, 57,3,6,8,10,9,12,14,13,33)
MR_decl_label1(ml_backend__ml_optimize__find_rval_component_lvals_3_0, 16)
MR_decl_label10(ml_backend__ml_optimize__generate_assign_args_5_0, 91,3,17,13,14,20,23,33,36,9)
MR_decl_label1(ml_backend__ml_optimize__generate_assign_args_5_0, 8)
MR_decl_label2(ml_backend__ml_optimize__mlds_optimize_3_0, 2,4)
MR_decl_label9(ml_backend__ml_optimize__optimize_func_3_0, 69,8,10,12,6,14,18,20,5)
MR_decl_label10(ml_backend__ml_optimize__optimize_in_call_stmt_3_0, 2,7,12,14,20,4,38,43,44,45)
MR_decl_label1(ml_backend__ml_optimize__optimize_in_call_stmt_3_0, 28)
MR_decl_label1(ml_backend__ml_optimize__optimize_in_case_3_0, 3)
MR_decl_label3(ml_backend__ml_optimize__optimize_in_default_3_0, 3,26,6)
MR_decl_label8(ml_backend__ml_optimize__optimize_in_defn_4_0, 40,5,6,3,46,11,13,17)
MR_decl_label2(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0, 13,4)
MR_decl_label1(ml_backend__ml_optimize__optimize_in_statement_3_0, 3)
MR_decl_label3(ml_backend__ml_optimize__optimize_in_statements_3_0, 3,4,6)
MR_decl_label10(ml_backend__ml_optimize__optimize_in_stmt_3_0, 5,7,4,9,11,14,10,17,18,19)
MR_decl_label10(ml_backend__ml_optimize__optimize_in_stmt_3_0, 3,22,23,21,26,25,28,32,33,30)
MR_decl_label3(ml_backend__ml_optimize__optimize_in_stmt_3_0, 36,37,35)
MR_decl_label10(ml_backend__ml_optimize__peephole_opt_statements_2_0, 121,3,5,11,13,14,15,17,22,16)
MR_decl_label6(ml_backend__ml_optimize__peephole_opt_statements_2_0, 30,28,38,7,8,51)
MR_decl_label2(ml_backend__ml_optimize__rval_cannot_throw_1_0, 10,3)
MR_decl_label9(ml_backend__ml_optimize__rval_will_not_change_1_0, 73,3,7,6,14,46,17,12,1)
MR_decl_label5(ml_backend__ml_optimize__set_initializer_4_0, 8,4,5,15,3)
MR_decl_label10(ml_backend__ml_optimize__statement_affects_lvals_3_0, 148,3,7,6,9,5,13,19,17,24)
MR_decl_label10(ml_backend__ml_optimize__statement_affects_lvals_3_0, 22,29,27,34,32,61,15,62,38,63)
MR_decl_label4(ml_backend__ml_optimize__statement_affects_lvals_3_0, 39,41,66,45)
MR_decl_label4(ml_backend__ml_optimize__statements_affect_lvals_3_0, 15,3,4,6)
MR_decl_label10(ml_backend__ml_optimize__try_to_eliminate_defn_6_0, 4,5,11,10,9,14,19,18,21,23)
MR_decl_label8(ml_backend__ml_optimize__try_to_eliminate_defn_6_0, 16,26,27,30,32,34,35,1)
MR_decl_label1(ml_backend__ml_optimize__var_defn_2_0, 1)
MR_decl_label1(fn__ml_backend__ml_optimize__flatten_block_1_0, 2)
MR_decl_label6(__Unify___ml_backend__ml_optimize__opt_info_0_0, 4,6,8,10,14,1)
MR_decl_label4(__Unify___ml_backend__ml_optimize__var_elim_info_0_0, 4,6,8,1)
MR_decl_label7(__Compare___ml_backend__ml_optimize__opt_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label6(__Compare___ml_backend__ml_optimize__var_elim_info_0_0, 3,2,5,9,13,37)
MR_def_extern_entry(ml_backend__ml_optimize__mlds_optimize_3_0)
MR_decl_static(ml_backend__ml_optimize__find_rval_component_lvals_3_0)
MR_decl_static(ml_backend__ml_optimize__find_lval_component_lvals_3_0)
MR_decl_static(ml_backend__ml_optimize__statement_affects_lvals_3_0)
MR_decl_static(ml_backend__ml_optimize__statements_affect_lvals_3_0)
MR_decl_static(ml_backend__ml_optimize__cases_affect_lvals_3_0)
MR_decl_static(ml_backend__ml_optimize__peephole_opt_statements_2_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_statements_3_0)
MR_decl_static(ml_backend__ml_optimize__generate_assign_args_5_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_call_stmt_3_0)
MR_decl_static(ml_backend__ml_optimize__set_initializer_4_0)
MR_decl_static(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0)
MR_decl_static(ml_backend__ml_optimize__rval_will_not_change_1_0)
MR_decl_static(ml_backend__ml_optimize__rval_cannot_throw_1_0)
MR_decl_static(ml_backend__ml_optimize__find_initial_val_in_statements_4_0)
MR_decl_static(ml_backend__ml_optimize__find_initial_val_in_statement_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_defns_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_statements_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_block_6_0)
MR_decl_static(ml_backend__ml_optimize__try_to_eliminate_defn_6_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_locals_5_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_statement_3_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_stmt_3_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_default_3_0)
MR_decl_static(ml_backend__ml_optimize__optimize_func_3_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_defn_4_0)
MR_decl_static(ml_backend__ml_optimize__optimize_in_case_3_0)
MR_decl_static(fn__ml_backend__ml_optimize__flatten_block_1_0)
MR_decl_static(ml_backend__ml_optimize__var_defn_2_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_rvals_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_rval_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_lval_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_lvals_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_statement_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_default_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_defn_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_case_4_0)
MR_decl_static(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0)
MR_decl_static(__Unify___ml_backend__ml_optimize__opt_info_0_0)
MR_decl_static(__Compare___ml_backend__ml_optimize__opt_info_0_0)
MR_decl_static(__Unify___ml_backend__ml_optimize__var_elim_info_0_0)
MR_decl_static(__Compare___ml_backend__ml_optimize__var_elim_info_0_0)
MR_decl_static(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_0)
MR_decl_static(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0)

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__mlds_optimize_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_defns_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_optimize__type_ctor_info_var_elim_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_statements_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_defn_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_rvals_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_lvals_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_case_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;
static const struct mercury_type_0 mercury_common_0[13] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__mlds_optimize_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_defns_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_statements_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_defn_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_rvals_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_lvals_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component),
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_case_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info),
MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_statements_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_optimize__type_ctor_info_opt_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_3;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_statements_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ml_optimize, opt_info),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ml_optimize, opt_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case)
}
},
};

static const struct mercury_type_2 mercury_common_2[3] =
{
{
MR_string_const("direct tailcall eliminated", 26)
},
{
MR_string_const("loop_top", 8)
},
{
MR_string_const("tailcall optimized into a loop", 30)
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
8,
MR_TAG_COMMON(1,2,0)
},
{
2,
MR_TAG_COMMON(1,2,1)
},
{
2,
MR_tbmkword(0, 1)
},
{
8,
MR_TAG_COMMON(1,2,2)
},
{
0,
MR_tbmkword(0, 0)
},
{
2,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_2;
static const struct mercury_type_4 mercury_common_4[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(5,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_COMMON(6,3)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_COMMON(6,3)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
1,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_data_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
MR_CTOR1_ADDR(ml_backend__mlds, mlds_fully_qualified_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_data_name)
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_qual_kind_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_qual_kind),
MR_COMMON(6,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
};

static const struct mercury_type_8 mercury_common_8[13] =
{
{
MR_COMMON(0,1),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_defn_4_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_statement_4_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__ml_backend__ml_optimize__flatten_block_1_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__ml_backend__ml_optimize__flatten_block_1_0),
0
},
{
MR_COMMON(0,4),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_rval_4_0),
0
},
{
MR_COMMON(0,5),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_lval_4_0),
0
},
{
MR_COMMON(0,6),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0),
0
},
{
MR_COMMON(0,7),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_rval_4_0),
0
},
{
MR_COMMON(0,8),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_lval_4_0),
0
},
{
MR_COMMON(0,9),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_case_4_0),
0
},
{
MR_COMMON(0,10),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0),
0
},
{
MR_COMMON(0,11),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0),
0
},
{
MR_COMMON(0,12),
MR_ENTRY_AP(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0),
0
},
};

static const struct mercury_type_9 mercury_common_9[1] =
{
{
1,
MR_string_const("loop_top", 8)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_params_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_optimize__field_types_opt_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_globals_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_func_params_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0
};

const MR_ConstString mercury_data_ml_backend__ml_optimize__field_names_opt_info_0_0[] = {
	"oi_globals",
	"oi_module_name",
	"oi_entity_name",
	"oi_func_params",
	"oi_context"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_optimize__du_functor_desc_opt_info_0_0 = {
	"opt_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_optimize__field_types_opt_info_0_0,
	mercury_data_ml_backend__ml_optimize__field_names_opt_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[] = {
	&mercury_data_ml_backend__ml_optimize__du_functor_desc_opt_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_optimize__du_name_ordered_opt_info_0[] = {
	&mercury_data_ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_optimize__functor_number_map_opt_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_optimize__type_ctor_info_opt_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_optimize__opt_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_optimize__opt_info_0_0)),
	"ml_backend.ml_optimize",
	"opt_info",
	{ (void *)mercury_data_ml_backend__ml_optimize__du_name_ordered_opt_info_0 },
	{ (void *)mercury_data_ml_backend__ml_optimize__du_ptag_ordered_opt_info_0 },
	1,
	4,
	mercury_data_ml_backend__ml_optimize__functor_number_map_opt_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0 = {
	&mercury_data_ml_backend__mlds__type_ctor_info_mlds_fully_qualified_name_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_var_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_optimize__field_types_var_elim_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__ti_mlds_fully_qualified_name_1ml_backend__mlds__type_ctor_info_mlds_var_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ml_backend__ml_optimize__field_names_var_elim_info_0_0[] = {
	"var_name",
	"var_value",
	"replace_count",
	"invalidated"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0 = {
	"var_elim_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_optimize__field_types_var_elim_info_0_0,
	mercury_data_ml_backend__ml_optimize__field_names_var_elim_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[] = {
	&mercury_data_ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[] = {
	&mercury_data_ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_optimize__functor_number_map_var_elim_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_optimize__type_ctor_info_var_elim_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_optimize__var_elim_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_optimize__var_elim_info_0_0)),
	"ml_backend.ml_optimize",
	"var_elim_info",
	{ (void *)mercury_data_ml_backend__ml_optimize__du_name_ordered_var_elim_info_0 },
	{ (void *)mercury_data_ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0 },
	1,
	4,
	mercury_data_ml_backend__ml_optimize__functor_number_map_var_elim_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_case_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_case_cond",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1423,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_initializer",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1231,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_initializer",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1227,
"18"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_case",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1377,
"25"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_lval",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1299,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_rval",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1238,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_target_code_component",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1491,
"46"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_lvals_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_lval",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1299,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_rvals_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_rval",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1238,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_defn_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"optimize_in_defn",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
83,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"optimize_in_case",
3,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
190,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"flatten_block",
2,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
495,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_stmt_3_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"flatten_block",
2,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
495,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_statements_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_statement",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1335,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__eliminate_var_in_defns_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"eliminate_var_in_defn",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
1186,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"lambda_ml_optimize_m_878",
5,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
878,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"lambda_ml_optimize_m_876",
2,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
876,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"var_defn",
2,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
876,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__optimize_in_statements_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"optimize_in_statement",
3,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
144,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_optimize__mlds_optimize_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_optimize",
"ml_backend.ml_optimize",
"optimize_in_defn",
4,
0
},
"ml_backend.ml_optimize",
"ml_optimize.m",
83,
"6"
};


MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module0)
	MR_init_entry1(ml_backend__ml_optimize__mlds_optimize_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__mlds_optimize_3_0);
	MR_init_label2(ml_backend__ml_optimize__mlds_optimize_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mlds_optimize'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_optimize__mlds_optimize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 4);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_optimize__mlds_optimize_3_0_i2);
MR_def_label(ml_backend__ml_optimize__mlds_optimize_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_optimize__optimize_in_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_optimize__mlds_optimize_3_0_i4);
MR_def_label(ml_backend__ml_optimize__mlds_optimize_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_r1;
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module1)
	MR_init_entry1(ml_backend__ml_optimize__find_rval_component_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__find_rval_component_lvals_3_0);
	MR_init_label10(ml_backend__ml_optimize__find_rval_component_lvals_3_0,57,3,6,8,10,9,12,14,13,33)
	MR_init_label1(ml_backend__ml_optimize__find_rval_component_lvals_3_0,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_rval_component_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__find_rval_component_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ml_backend__ml_optimize__find_rval_component_lvals_3_0_i14);
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i6);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i57);
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i8);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i9);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__ml_optimize__find_rval_component_lvals_3_0,
		ml_backend__ml_optimize__find_rval_component_lvals_3_0_i10);
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i57);
	}
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i12);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i13);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ml_backend__ml_optimize__find_rval_component_lvals_3_0_i14);
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ml_optimize__find_lval_component_lvals_3_0);
	}
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i16);
	}
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_optimize__find_rval_component_lvals_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i33);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_optimize__find_rval_component_lvals_3_0_i57);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module2)
	MR_init_entry1(ml_backend__ml_optimize__find_lval_component_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__find_lval_component_lvals_3_0);
	MR_init_label3(ml_backend__ml_optimize__find_lval_component_lvals_3_0,3,12,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_lval_component_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__find_lval_component_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_lval_component_lvals_3_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_optimize__find_rval_component_lvals_3_0);
MR_def_label(ml_backend__ml_optimize__find_lval_component_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_lval_component_lvals_3_0_i5);
	}
MR_def_label(ml_backend__ml_optimize__find_lval_component_lvals_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__find_lval_component_lvals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_lval_component_lvals_3_0_i12);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__ml_optimize__find_rval_component_lvals_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module3)
	MR_init_entry1(ml_backend__ml_optimize__statement_affects_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__statement_affects_lvals_3_0);
	MR_init_label10(ml_backend__ml_optimize__statement_affects_lvals_3_0,148,3,7,6,9,5,13,19,17,24)
	MR_init_label10(ml_backend__ml_optimize__statement_affects_lvals_3_0,22,29,27,34,32,61,15,62,38,63)
	MR_init_label4(ml_backend__ml_optimize__statement_affects_lvals_3_0,39,41,66,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statement_affects_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__statement_affects_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i3);
	}
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__ml_optimize__statements_affect_lvals_3_0);
	}
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r3 = MR_tfield(2, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i7);
	}
	MR_r2 = MR_tfield(2, MR_tempr1, 1);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i6);
	}
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_r3, 0);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tfield(2, MR_r4, 1);
	}
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_localcall_lab(ml_backend__ml_optimize__statement_affects_lvals_3_0,
		ml_backend__ml_optimize__statement_affects_lvals_3_0_i9);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i62);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(ml_backend__ml_optimize__statements_affect_lvals_3_0);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i13);
	}
	MR_r2 = MR_tfield(1, MR_r4, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i148);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,8)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r4, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i17);
	}
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		ml_backend__ml_optimize__statement_affects_lvals_3_0_i19);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		ml_backend__ml_optimize__statement_affects_lvals_3_0_i24);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		ml_backend__ml_optimize__statement_affects_lvals_3_0_i29);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		ml_backend__ml_optimize__statement_affects_lvals_3_0_i34);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_tag(MR_r5) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r5, 0) == (MR_Integer) 6)) || ((MR_tag(MR_r5) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r5, 0) == (MR_Integer) 7))))) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i63);
	}
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i38);
	}
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i39);
	}
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i61);
	}
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 5);
	MR_r2 = MR_tfield(3, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__cases_affect_lvals_3_0,
		ml_backend__ml_optimize__statement_affects_lvals_3_0_i41);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i62);
	}
	if (!((((MR_Integer) MR_sv(2) == (MR_Integer) MR_tbmkword(0, 1)) || ((MR_Integer) MR_sv(2) == (MR_Integer) MR_tbmkword(0, 0))))) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i45);
	}
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statement_affects_lvals_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_optimize__statement_affects_lvals_3_0_i148);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module4)
	MR_init_entry1(ml_backend__ml_optimize__statements_affect_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__statements_affect_lvals_3_0);
	MR_init_label4(ml_backend__ml_optimize__statements_affect_lvals_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'statements_affect_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__statements_affect_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__statements_affect_lvals_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statements_affect_lvals_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statements_affect_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__statement_affects_lvals_3_0,
		ml_backend__ml_optimize__statements_affect_lvals_3_0_i4);
MR_def_label(ml_backend__ml_optimize__statements_affect_lvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__statements_affect_lvals_3_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__statements_affect_lvals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_optimize__statements_affect_lvals_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module5)
	MR_init_entry1(ml_backend__ml_optimize__cases_affect_lvals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__cases_affect_lvals_3_0);
	MR_init_label4(ml_backend__ml_optimize__cases_affect_lvals_3_0,15,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cases_affect_lvals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__cases_affect_lvals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__cases_affect_lvals_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__cases_affect_lvals_3_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__cases_affect_lvals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 2);
	MR_np_call_localret_ent(ml_backend__ml_optimize__statement_affects_lvals_3_0,
		ml_backend__ml_optimize__cases_affect_lvals_3_0_i4);
MR_def_label(ml_backend__ml_optimize__cases_affect_lvals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__cases_affect_lvals_3_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__cases_affect_lvals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_optimize__cases_affect_lvals_3_0_i15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_rval_0_0);
MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module6)
	MR_init_entry1(ml_backend__ml_optimize__peephole_opt_statements_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__peephole_opt_statements_2_0);
	MR_init_label10(ml_backend__ml_optimize__peephole_opt_statements_2_0,121,3,5,11,13,14,15,17,22,16)
	MR_init_label6(ml_backend__ml_optimize__peephole_opt_statements_2_0,30,28,38,7,8,51)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'peephole_opt_statements'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__peephole_opt_statements_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(11);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i8);
	}
	MR_tempr3 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr3,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i8);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(2, MR_tempr3, 1);
	MR_sv(9) = MR_tfield(2, MR_tempr3, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_rval_0_0,
		ml_backend__ml_optimize__peephole_opt_statements_2_0_i11);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_np_call_localret_ent(fn__set__init_0_0,
		ml_backend__ml_optimize__peephole_opt_statements_2_0_i13);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__find_rval_component_lvals_3_0,
		ml_backend__ml_optimize__peephole_opt_statements_2_0_i14);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_optimize__statement_affects_lvals_3_0,
		ml_backend__ml_optimize__peephole_opt_statements_2_0_i15);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i17);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = MR_tempr2;
	MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i16);
	}
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tfield(1, MR_sv(7), 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__statement_affects_lvals_3_0,
		ml_backend__ml_optimize__peephole_opt_statements_2_0_i22);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i7);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_sv(6);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = MR_tempr2;
	}
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i28);
	}
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i30);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(5);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i121);
	}
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(5);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = MR_sv(9);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i121);
	}
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i38);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(5);
	MR_tfield(2, MR_r2, 1) = MR_r1;
	MR_tfield(2, MR_r2, 2) = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i121);
	}
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_sv(9), 0);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(7), 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 1) = MR_r1;
	MR_tfield(2, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr2;
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_succip_word = MR_sv(11);
	MR_GOTO_LAB(ml_backend__ml_optimize__peephole_opt_statements_2_0_i121);
	}
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ml_backend__ml_optimize__peephole_opt_statements_2_0,
		ml_backend__ml_optimize__peephole_opt_statements_2_0_i51);
MR_def_label(ml_backend__ml_optimize__peephole_opt_statements_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module7)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_statements_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_statements_3_0);
	MR_init_label3(ml_backend__ml_optimize__optimize_in_statements_3_0,3,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_statements'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_statements_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_optimize__optimize_in_statement_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_optimize__optimize_in_statements_3_0_i3);
MR_def_label(ml_backend__ml_optimize__optimize_in_statements_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 444;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_optimize__optimize_in_statements_3_0_i4);
MR_def_label(ml_backend__ml_optimize__optimize_in_statements_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_statements_3_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_optimize__optimize_in_statements_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ml_optimize__peephole_opt_statements_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module8)
	MR_init_entry1(ml_backend__ml_optimize__generate_assign_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__generate_assign_args_5_0);
	MR_init_label10(ml_backend__ml_optimize__generate_assign_args_5_0,91,3,17,13,14,20,23,33,36,9)
	MR_init_label1(ml_backend__ml_optimize__generate_assign_args_5_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_assign_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__generate_assign_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i9);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr4, 2) = MR_body((MR_Integer) MR_tempr3, (MR_Integer) 1);
	MR_sv(8) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr6 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr6, 1);
	MR_tempr5 = MR_tfield(1, MR_tempr6, 0);
	MR_sv(7) = MR_tempr5;
	if (MR_PTAG_TESTR(MR_tempr5,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i14);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i14);
	}
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		ml_backend__ml_optimize__generate_assign_args_5_0_i17);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i13);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_optimize__generate_assign_args_5_0_i91);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r4 = MR_sv(2);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("__tmp_copy", 10);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_optimize__generate_assign_args_5_0_i20);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_sv(5), 4);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,
		ml_backend__ml_optimize__generate_assign_args_5_0_i23);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_sv(3);
	MR_tempr6 = MR_sv(1);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(2, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tempr7 = MR_sv(4);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(3, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(2, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr7;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_tempr3 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr3;
	}
	MR_np_localcall_lab(ml_backend__ml_optimize__generate_assign_args_5_0,
		ml_backend__ml_optimize__generate_assign_args_5_0_i33);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_optimize__generate_assign_args_5_0_i36);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_optimize", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("function param is not a var", 27);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ml_optimize__generate_assign_args_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_optimize", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_optimize.generate_assign_args\'/5", 57);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_util__can_optimize_tailcall_2_0);
MR_decl_entry(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module9)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_call_stmt_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_call_stmt_3_0);
	MR_init_label10(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,2,7,12,14,20,4,38,43,44,45)
	MR_init_label1(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_call_stmt'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_call_stmt_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_sv(1) = MR_tfield(3, MR_r2, 4);
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 437;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i2);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r1, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__can_optimize_tailcall_2_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i7);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(4), 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i12);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r1, 3), 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__generate_assign_args_5_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i20);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r1, 3), 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__generate_assign_args_5_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i20);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tempr1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r1, 1) = MR_r2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_sv(5), 1);
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tempr1, 2), 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_tempr3 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("mark_hp", 7)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i38);
	}
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr2, 1) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i43);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("restore_hp", 10)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(1, MR_sv(1), 0);
	MR_sv(4) = MR_tfield(0, MR_r3, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i43);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i44);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i45);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_call_stmt_3_0_i28);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r1, 1) = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_optimize__optimize_in_call_stmt_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_var_name_0_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module10)
	MR_init_entry1(ml_backend__ml_optimize__set_initializer_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__set_initializer_4_0);
	MR_init_label5(ml_backend__ml_optimize__set_initializer_4_0,8,4,5,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_initializer'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__set_initializer_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__set_initializer_4_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr4, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr4, 0);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__set_initializer_4_0_i5);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__set_initializer_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_body((MR_Integer) MR_tempr3, (MR_Integer) 1);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0,
		ml_backend__ml_optimize__set_initializer_4_0_i8);
MR_def_label(ml_backend__ml_optimize__set_initializer_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__set_initializer_4_0_i4);
	}
	if (MR_PTAG_TESTR(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__set_initializer_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tempr3 = MR_sv(8);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 2) = MR_tfield(1, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_optimize__set_initializer_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__ml_optimize__set_initializer_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(ml_backend__ml_optimize__set_initializer_4_0,
		ml_backend__ml_optimize__set_initializer_4_0_i15);
MR_def_label(ml_backend__ml_optimize__set_initializer_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_optimize__set_initializer_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_optimize", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_optimize.set_initializer\'/4", 52);
	MR_r3 = (MR_Word) MR_string_const("var not found", 13);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_util__rval_contains_var_2_0);
MR_decl_entry(list__takewhile_4_0);
MR_decl_entry(list__find_first_match_3_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module11)
	MR_init_entry1(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__convert_assignments_into_initializers_5_0);
	MR_init_label8(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,73,9,11,15,19,21,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_assignments_into_initializers'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_tempr5, 0), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i3);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i3);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tempr4 = MR_tfield(3, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tfield(0, MR_tempr4, 2));
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_tempr3;
	MR_sv(7) = MR_r2;
	MR_sv(8) = MR_tempr5;
	MR_sv(9) = MR_tfield(1, MR_tempr5, 1);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i9);
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i11);
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_optimize__var_defn_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__takewhile_4_0,
		ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i15);
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(list__find_first_match_3_0,
		ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i19);
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_optimize__set_initializer_4_0,
		ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i21);
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0_i73);
	}
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
MR_def_label(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module12)
	MR_init_entry1(ml_backend__ml_optimize__rval_will_not_change_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__rval_will_not_change_1_0);
	MR_init_label9(ml_backend__ml_optimize__rval_will_not_change_1_0,73,3,7,6,14,46,17,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_will_not_change'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__rval_will_not_change_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_succip_word = MR_sv(2);
	/* continue */
	} /* end while */
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i6);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__ml_optimize__rval_will_not_change_1_0,
		ml_backend__ml_optimize__rval_will_not_change_1_0_i7);
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i73);
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i46);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i12);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i14);
	}
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i73);
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i17);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i73);
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 3));
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_optimize__rval_will_not_change_1_0_i73);
MR_def_label(ml_backend__ml_optimize__rval_will_not_change_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module13)
	MR_init_entry1(ml_backend__ml_optimize__rval_cannot_throw_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__rval_cannot_throw_1_0);
	MR_init_label2(ml_backend__ml_optimize__rval_cannot_throw_1_0,10,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rval_cannot_throw'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__rval_cannot_throw_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_cannot_throw_1_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_localtailcall(ml_backend__ml_optimize__rval_cannot_throw_1_0);
MR_def_label(ml_backend__ml_optimize__rval_cannot_throw_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__rval_cannot_throw_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_cannot_throw_1_0_i10);
	}
	if (MR_RTAGS_TEST(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__rval_cannot_throw_1_0_i10);
	}
	MR_r1 = ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_util__statement_contains_var_2_0);
MR_decl_entry(ml_backend__ml_util__statement_contains_statement_2_0);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module14)
	MR_init_entry1(ml_backend__ml_optimize__find_initial_val_in_statements_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__find_initial_val_in_statements_4_0);
	MR_init_label8(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,5,7,3,14,20,19,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_initial_val_in_statements'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__find_initial_val_in_statements_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i1);
	}
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,
		ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i5);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i7);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i7);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i7);
	}
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r3;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tfield(0, MR_r1, 2));
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__statement_contains_var_2_0,
		ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i14);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i1);
	}
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i19);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_util__statement_contains_statement_2_0,
		ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i20);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,
		ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i23);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statements_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,1)
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

MR_decl_entry(fn__ml_backend__ml_util__defns_contains_var_2_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module15)
	MR_init_entry1(ml_backend__ml_optimize__find_initial_val_in_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__find_initial_val_in_statement_4_0);
	MR_init_label6(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,7,2,3,13,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_initial_val_in_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__find_initial_val_in_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i3);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i3);
	}
	MR_tempr3 = MR_tfield(2, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tfield(3, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i7);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i1);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tfield(0, MR_r1, 2));
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__defns_contains_var_2_0,
		ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i13);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,
		ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i15);
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__find_initial_val_in_statement_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__find_initial_val_in_statement_4_0,1)
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

MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module16)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_defns_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_defns_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_defns'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_defns_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module17)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_statements_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_statements_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_statements'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_statements_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module18)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_block_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_block_6_0);
	MR_init_label2(ml_backend__ml_optimize__eliminate_var_in_block_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_block'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_block_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_defns_4_0,
		ml_backend__ml_optimize__eliminate_var_in_block_6_0_i2);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_block_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statements_4_0,
		ml_backend__ml_optimize__eliminate_var_in_block_6_0_i3);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_block_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_decl_flags_0_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module19)
	MR_init_entry1(ml_backend__ml_optimize__try_to_eliminate_defn_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__try_to_eliminate_defn_6_0);
	MR_init_label10(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,4,5,11,10,9,14,19,18,21,23)
	MR_init_label8(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,16,26,27,30,32,34,35,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'try_to_eliminate_defn'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__try_to_eliminate_defn_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_r2, 2);
	MR_sv(3) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	MR_sv(5) = MR_r4;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_local_var_decl_flags_0_0,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i4);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_decl_flags_0_0,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i5);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_sv(4), 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_r2 = MR_tfield(1, MR_sv(3), 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i10);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__find_initial_val_in_statements_4_0,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i11);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_r1 = MR_r2;
	MR_sv(6) = MR_r3;
	MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i9);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_sv(5);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_optimize__rval_will_not_change_1_0,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i14);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_optimize__rval_cannot_throw_1_0,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i19);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i16);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(0, MR_sv(4), 0);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 149;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i21);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 150;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i23);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_r1 = MR_sv(1);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 0;
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_defns_4_0,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i26);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statements_4_0,
		ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i27);
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_INT_GT(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i30);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(3), 0);
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i34);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i35);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,5)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__try_to_eliminate_defn_6_0_i1);
	}
	MR_r2 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,1)
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


MR_BEGIN_MODULE(ml_backend__ml_optimize_module20)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_locals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_locals_5_0);
	MR_init_label5(ml_backend__ml_optimize__eliminate_locals_5_0,25,3,6,4,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_locals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_locals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_optimize__eliminate_locals_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_locals_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_optimize__eliminate_locals_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_tempr2 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__try_to_eliminate_defn_6_0,
		ml_backend__ml_optimize__eliminate_locals_5_0_i6);
MR_def_label(ml_backend__ml_optimize__eliminate_locals_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_locals_5_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_locals_5_0_i25);
MR_def_label(ml_backend__ml_optimize__eliminate_locals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_r2 = MR_tempr2;
	}
	MR_np_localcall_lab(ml_backend__ml_optimize__eliminate_locals_5_0,
		ml_backend__ml_optimize__eliminate_locals_5_0_i9);
MR_def_label(ml_backend__ml_optimize__eliminate_locals_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module21)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_maybe_statement_3_0);
	MR_init_label2(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_maybe_statement'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0_i13);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_statement_3_0,
		ml_backend__ml_optimize__optimize_in_maybe_statement_3_0_i4);
MR_def_label(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module22)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_statement_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_statement_3_0);
	MR_init_label1(ml_backend__ml_optimize__optimize_in_statement_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_statement'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_statement_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_stmt_3_0,
		ml_backend__ml_optimize__optimize_in_statement_3_0_i3);
MR_def_label(ml_backend__ml_optimize__optimize_in_statement_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__condense_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;

MR_BEGIN_MODULE(ml_backend__ml_optimize_module23)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_stmt_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_stmt_3_0);
	MR_init_label10(ml_backend__ml_optimize__optimize_in_stmt_3_0,5,7,4,9,11,14,10,17,18,19)
	MR_init_label10(ml_backend__ml_optimize__optimize_in_stmt_3_0,3,22,23,21,26,25,28,32,33,30)
	MR_init_label3(ml_backend__ml_optimize__optimize_in_stmt_3_0,36,37,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_stmt'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_stmt_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = (MR_Integer) 438;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i5);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_optimize__convert_assignments_into_initializers_5_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i7);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_r2 = (MR_Integer) 439;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i9);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_r2 = (MR_Integer) 439;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i9);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i11);
	}
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i10);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_locals_5_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i14);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r4 = MR_r2;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,2);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i17);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i18);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_statements_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i19);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i21);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 2);
	MR_sv(4) = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_statement_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i22);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_maybe_statement_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i23);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i25);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 2);
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_statement_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i26);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i28);
	}
	MR_np_tailcall_ent(ml_backend__ml_optimize__optimize_in_call_stmt_3_0);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i30);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_optimize__optimize_in_case_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_sv(1) = MR_tfield(3, MR_r2, 5);
	MR_sv(5) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r4 = MR_tfield(3, MR_tempr2, 4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i32);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_default_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i33);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_stmt_3_0_i35);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_tfield(3, MR_r2, 3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_statement_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i36);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_statement_3_0,
		ml_backend__ml_optimize__optimize_in_stmt_3_0_i37);
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__optimize_in_stmt_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module24)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_default_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_default_3_0);
	MR_init_label3(ml_backend__ml_optimize__optimize_in_default_3_0,3,26,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_default'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_default_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_default_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__optimize_in_default_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_default_3_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__optimize_in_default_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tempr2 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_stmt_3_0,
		ml_backend__ml_optimize__optimize_in_default_3_0_i6);
MR_def_label(ml_backend__ml_optimize__optimize_in_default_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_util__stmt_contains_statement_2_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module25)
	MR_init_entry1(ml_backend__ml_optimize__optimize_func_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_func_3_0);
	MR_init_label9(ml_backend__ml_optimize__optimize_func_3_0,69,8,10,12,6,14,18,20,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_func'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_func_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_func_3_0_i69);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_optimize__optimize_func_3_0_i6);
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_body((MR_Integer) MR_r2, (MR_Integer) 1);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 437;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		ml_backend__ml_optimize__optimize_func_3_0_i8);
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_func_3_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_util__stmt_contains_statement_2_0,
		ml_backend__ml_optimize__optimize_func_3_0_i10);
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__can_optimize_tailcall_2_0,
		ml_backend__ml_optimize__optimize_func_3_0_i12);
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_optimize__optimize_func_3_0_i14);
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_optimize__optimize_func_3_0_i5);
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,3,3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_0,
		ml_backend__ml_optimize__optimize_func_3_0_i18);
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_func_3_0_i20);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,9,0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,3,5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(3,3,4);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr4;
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr3);
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__optimize_func_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module26)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_defn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_defn_4_0);
	MR_init_label8(ml_backend__ml_optimize__optimize_in_defn_4_0,40,5,6,3,46,11,13,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_r3, 3);
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_defn_4_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__ml_optimize__optimize_in_defn_4_0_i40);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_body((MR_Integer) MR_r5, (MR_Integer) 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 6);
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_optimize__optimize_in_defn_4_0_i5);
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__map_3_0,
		ml_backend__ml_optimize__optimize_in_defn_4_0_i6);
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 7);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_sv(6);
	MR_tfield(0, MR_r2, 3) = MR_sv(7);
	MR_tfield(0, MR_r2, 4) = MR_sv(8);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = MR_sv(9);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r2);
	MR_decr_sp_and_return(11);
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_defn_4_0_i46);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(2, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr3, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_tfield(2, MR_tempr3, 3);
	MR_sv(7) = MR_tfield(2, MR_tempr3, 4);
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(2, MR_tempr3, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_func_3_0,
		ml_backend__ml_optimize__optimize_in_defn_4_0_i11);
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__optimize_in_defn_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_decr_sp_and_return(11);
	}
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_stmt_3_0,
		ml_backend__ml_optimize__optimize_in_defn_4_0_i17);
MR_def_label(ml_backend__ml_optimize__optimize_in_defn_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr2, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr2, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_tfield(2, MR_tempr2, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr2, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module27)
	MR_init_entry1(ml_backend__ml_optimize__optimize_in_case_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__optimize_in_case_3_0);
	MR_init_label1(ml_backend__ml_optimize__optimize_in_case_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_in_case'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__optimize_in_case_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r1, 3);
	MR_tempr2 = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__optimize_in_stmt_3_0,
		ml_backend__ml_optimize__optimize_in_case_3_0_i3);
MR_def_label(ml_backend__ml_optimize__optimize_in_case_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module28)
	MR_init_entry1(fn__ml_backend__ml_optimize__flatten_block_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_optimize__flatten_block_1_0);
	MR_init_label1(fn__ml_backend__ml_optimize__flatten_block_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'flatten_block'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_optimize__flatten_block_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_optimize__flatten_block_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_optimize__flatten_block_1_0_i2);
	}
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_proceed();
	}
MR_def_label(fn__ml_backend__ml_optimize__flatten_block_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module29)
	MR_init_entry1(ml_backend__ml_optimize__var_defn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__var_defn_2_0);
	MR_init_label1(ml_backend__ml_optimize__var_defn_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_defn'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__var_defn_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__var_defn_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__var_defn_2_0_i1);
	}
	MR_r2 = MR_body((MR_Integer) MR_tempr2, (MR_Integer) 1);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_var_name_0_0);
	}
MR_def_label(ml_backend__ml_optimize__var_defn_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module30)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_rvals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_rvals_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_rvals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_rvals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module31)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_rval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_rval_4_0);
	MR_init_label10(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,7,4,5,10,3,14,13,17,18,16)
	MR_init_label6(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,21,20,24,23,27,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i5);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i7);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = ((MR_Integer) MR_tfield(0, MR_tempr1, 2) + (MR_Integer) 1);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i10);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i13);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_localcall_lab(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i14);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i17);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i18);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i20);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i21);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i23);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i24);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i75);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_rval_4_0_i27);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module32)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_lval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_lval_4_0);
	MR_init_label7(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,4,3,8,7,11,10,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_lval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_lval_4_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_lval_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_lval_4_0_i34);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_lval_4_0_i7);
	}
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_lval_4_0_i8);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_tfield(3, MR_sv(3), 0);
	MR_r3 = MR_tfield(0, MR_sv(4), 0);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		ml_backend__ml_optimize__eliminate_var_in_lval_4_0_i11);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_lval_4_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = (MR_Integer) 1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module33)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_lvals_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_lvals_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_lvals'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_lvals_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,5);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(list__map_foldl_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module34)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0);
	MR_init_label8(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,5,4,8,7,11,10,13,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_trail_op'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0)) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1)))) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i33);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i4);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i5);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i8);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i10);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i11);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0_i13);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;

MR_BEGIN_MODULE(ml_backend__ml_optimize_module35)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0);
	MR_init_label10(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,4,5,3,9,10,8,13,12,17,15)
	MR_init_label10(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,20,19,23,25,22,29,27,32,31,34)
	MR_init_label1(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,102)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_atomic_stmt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i5);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_tag(MR_r1) == MR_mktag((MR_Integer) 1)) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0)))) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i102);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i8);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i9);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i10);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i12);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i13);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i15);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,6);
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i17);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i19);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i20);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i22);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_sv(7) = MR_tfield(3, MR_r1, 3);
	MR_sv(9) = MR_tfield(3, MR_r1, 4);
	MR_sv(1) = MR_tfield(3, MR_r1, 5);
	MR_sv(2) = MR_tfield(3, MR_r1, 6);
	MR_sv(6) = MR_tfield(3, MR_r1, 7);
	MR_sv(3) = MR_tfield(3, MR_r1, 8);
	MR_sv(4) = MR_tfield(3, MR_r1, 9);
	MR_sv(5) = MR_tfield(3, MR_r1, 10);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i23);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,7);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i25);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 11);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 7) = MR_r1;
	MR_tfield(3, MR_tempr1, 8) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 9) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 10) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i27);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_sv(7) = MR_tfield(3, MR_r1, 4);
	MR_sv(9) = MR_tfield(3, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,8);
	MR_r5 = MR_tfield(3, MR_tempr1, 3);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i29);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i31);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i32);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_trail_op_4_0,
		ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0_i34);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module36)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0);
	MR_init_label2(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0,16,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_maybe_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,
		ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module37)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_statement_4_0);
	MR_init_label1(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,
		ml_backend__ml_optimize__eliminate_var_in_statement_4_0_i2);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module38)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_stmt_4_0);
	MR_init_label10(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,4,3,7,8,9,6,12,13,11,16)
	MR_init_label10(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,15,19,21,22,24,25,18,28,27,31)
	MR_init_label10(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,30,36,35,39,41,42,38,44,45,46)
	MR_init_label1(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,139)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_stmt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_block_6_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i6);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(2, MR_r1, 1);
	MR_sv(2) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i7);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i8);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_maybe_statement_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i9);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i11);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 2);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i12);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i13);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i15);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i16);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i18);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(4) = MR_tfield(3, MR_r1, 5);
	MR_sv(1) = MR_tfield(3, MR_r1, 6);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i19);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i21);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rvals_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i24);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i22);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rvals_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i24);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lvals_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i25);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 7);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_tfield(3, MR_tempr1, 6) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i27);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i28);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i30);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i31);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i139);
	}
	if (MR_RTAGS_TEST(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i139);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i35);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rvals_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i36);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i38);
	}
	MR_sv(5) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(4) = MR_tfield(3, MR_r1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i39);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,9);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i41);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_default_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i42);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i44);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i45);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,
		ml_backend__ml_optimize__eliminate_var_in_stmt_4_0_i46);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module39)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_default_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_default_4_0);
	MR_init_label2(ml_backend__ml_optimize__eliminate_var_in_default_4_0,4,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_default'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_default_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_default_4_0_i15);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,
		ml_backend__ml_optimize__eliminate_var_in_default_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_default_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_default_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module40)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_function_body_4_0);
	MR_init_label2(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0,15,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_function_body'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_statement_4_0,
		ml_backend__ml_optimize__eliminate_var_in_function_body_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

MR_BEGIN_MODULE(ml_backend__ml_optimize_module41)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_initializer_4_0);
	MR_init_label6(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,38,6,4,9,8,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_initializer'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_i38);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,10);
	MR_r5 = MR_tfield(3, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_i6);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 1);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_i9);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,11);
	MR_r5 = MR_tfield(2, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_optimize__eliminate_var_in_initializer_4_0_i12);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module42)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_defn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_defn_4_0);
	MR_init_label4(ml_backend__ml_optimize__eliminate_var_in_defn_4_0,5,4,8,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 3);
	if (MR_PTAG_TEST(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_defn_4_0_i21);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_defn_4_0_i4);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 2);
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_initializer_4_0,
		ml_backend__ml_optimize__eliminate_var_in_defn_4_0_i5);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_defn_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tfield(1, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_defn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(2, MR_tempr1, 4);
	MR_r1 = MR_tfield(2, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_function_body_4_0,
		ml_backend__ml_optimize__eliminate_var_in_defn_4_0_i8);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_defn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 5);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_defn_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module43)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0);
	MR_init_label4(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0,4,5,3,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_case_cond'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0_i5);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0_i7);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0,7)
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

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0;

MR_BEGIN_MODULE(ml_backend__ml_optimize_module44)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_case_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_case_4_0);
	MR_init_label3(ml_backend__ml_optimize__eliminate_var_in_case_4_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_case'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_case_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_case_cond_4_0,
		ml_backend__ml_optimize__eliminate_var_in_case_4_0_i2);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_case_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_case_match_cond);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_optimize, var_elim_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,8,12);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_optimize__eliminate_var_in_case_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_case_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_stmt_4_0,
		ml_backend__ml_optimize__eliminate_var_in_case_4_0_i5);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_case_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module45)
	MR_init_entry1(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0);
	MR_init_label4(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0,4,3,7,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eliminate_var_in_target_code_component'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_rval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0_i4);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0_i20);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__ml_optimize__eliminate_var_in_lval_4_0,
		ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0_i7);
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__globals__globals_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_entity_name_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_func_params_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_context_0_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module46)
	MR_init_entry1(__Unify___ml_backend__ml_optimize__opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_optimize__opt_info_0_0);
	MR_init_label6(__Unify___ml_backend__ml_optimize__opt_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_optimize__opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__opt_info_0_0_i14);
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
	MR_np_call_localret_ent(__Unify___libs__globals__globals_0_0,
		__Unify___ml_backend__ml_optimize__opt_info_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_optimize__opt_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__opt_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		__Unify___ml_backend__ml_optimize__opt_info_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_optimize__opt_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__opt_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_entity_name_0_0,
		__Unify___ml_backend__ml_optimize__opt_info_0_0_i8);
MR_def_label(__Unify___ml_backend__ml_optimize__opt_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__opt_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_func_params_0_0,
		__Unify___ml_backend__ml_optimize__opt_info_0_0_i10);
MR_def_label(__Unify___ml_backend__ml_optimize__opt_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__opt_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_context_0_0);
MR_def_label(__Unify___ml_backend__ml_optimize__opt_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_optimize__opt_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__globals__globals_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_entity_name_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_func_params_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_context_0_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module47)
	MR_init_entry1(__Compare___ml_backend__ml_optimize__opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_optimize__opt_info_0_0);
	MR_init_label7(__Compare___ml_backend__ml_optimize__opt_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_optimize__opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__opt_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__opt_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_optimize__opt_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_optimize__opt_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___libs__globals__globals_0_0,
		__Compare___ml_backend__ml_optimize__opt_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_optimize__opt_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__opt_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_module_name_0_0,
		__Compare___ml_backend__ml_optimize__opt_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_optimize__opt_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__opt_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_entity_name_0_0,
		__Compare___ml_backend__ml_optimize__opt_info_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_optimize__opt_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__opt_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_func_params_0_0,
		__Compare___ml_backend__ml_optimize__opt_info_0_0_i17);
MR_def_label(__Compare___ml_backend__ml_optimize__opt_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__opt_info_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_context_0_0);
MR_def_label(__Compare___ml_backend__ml_optimize__opt_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_optimize_module48)
	MR_init_entry1(__Unify___ml_backend__ml_optimize__var_elim_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_optimize__var_elim_info_0_0);
	MR_init_label4(__Unify___ml_backend__ml_optimize__var_elim_info_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_optimize__var_elim_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__var_elim_info_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Unify___ml_backend__ml_optimize__var_elim_info_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_optimize__var_elim_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__var_elim_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_rval_0_0,
		__Unify___ml_backend__ml_optimize__var_elim_info_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_optimize__var_elim_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__var_elim_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_optimize__var_elim_info_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___ml_backend__ml_optimize__var_elim_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_optimize__var_elim_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_fully_qualified_name_1_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_rval_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module49)
	MR_init_entry1(__Compare___ml_backend__ml_optimize__var_elim_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_optimize__var_elim_info_0_0);
	MR_init_label6(__Compare___ml_backend__ml_optimize__var_elim_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_optimize__var_elim_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_optimize__var_elim_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_optimize__var_elim_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_var_name);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_fully_qualified_name_1_0,
		__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_optimize__var_elim_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_rval_0_0,
		__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_optimize__var_elim_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_optimize__var_elim_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_optimize__var_elim_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ml_optimize__var_elim_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(std_util__isnt_2_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module50)
	MR_init_entry1(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_assignments_into_initializers__876__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__876__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(std_util__isnt_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_util__initializer_contains_var_2_0);

MR_BEGIN_MODULE(ml_backend__ml_optimize_module51)
	MR_init_entry1(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0);
	MR_init_label4(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0,7,9,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_assignments_into_initializers__878__1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr4, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0_i1);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_r2;
	MR_tfield(0, MR_tempr3, 1) = MR_r3;
	MR_tfield(0, MR_tempr3, 2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_r4;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_util__rval_contains_var_2_0,
		ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0_i7);
MR_def_label(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_util__initializer_contains_var_2_0,
		ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0_i9);
MR_def_label(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__878__1_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_optimize_maybe_bunch_0(void)
{
	ml_backend__ml_optimize_module0();
	ml_backend__ml_optimize_module1();
	ml_backend__ml_optimize_module2();
	ml_backend__ml_optimize_module3();
	ml_backend__ml_optimize_module4();
	ml_backend__ml_optimize_module5();
	ml_backend__ml_optimize_module6();
	ml_backend__ml_optimize_module7();
	ml_backend__ml_optimize_module8();
	ml_backend__ml_optimize_module9();
	ml_backend__ml_optimize_module10();
	ml_backend__ml_optimize_module11();
	ml_backend__ml_optimize_module12();
	ml_backend__ml_optimize_module13();
	ml_backend__ml_optimize_module14();
	ml_backend__ml_optimize_module15();
	ml_backend__ml_optimize_module16();
	ml_backend__ml_optimize_module17();
	ml_backend__ml_optimize_module18();
	ml_backend__ml_optimize_module19();
	ml_backend__ml_optimize_module20();
	ml_backend__ml_optimize_module21();
	ml_backend__ml_optimize_module22();
	ml_backend__ml_optimize_module23();
	ml_backend__ml_optimize_module24();
	ml_backend__ml_optimize_module25();
	ml_backend__ml_optimize_module26();
	ml_backend__ml_optimize_module27();
	ml_backend__ml_optimize_module28();
	ml_backend__ml_optimize_module29();
	ml_backend__ml_optimize_module30();
	ml_backend__ml_optimize_module31();
	ml_backend__ml_optimize_module32();
	ml_backend__ml_optimize_module33();
	ml_backend__ml_optimize_module34();
	ml_backend__ml_optimize_module35();
	ml_backend__ml_optimize_module36();
	ml_backend__ml_optimize_module37();
	ml_backend__ml_optimize_module38();
	ml_backend__ml_optimize_module39();
}

static void mercury__ml_backend__ml_optimize_maybe_bunch_1(void)
{
	ml_backend__ml_optimize_module40();
	ml_backend__ml_optimize_module41();
	ml_backend__ml_optimize_module42();
	ml_backend__ml_optimize_module43();
	ml_backend__ml_optimize_module44();
	ml_backend__ml_optimize_module45();
	ml_backend__ml_optimize_module46();
	ml_backend__ml_optimize_module47();
	ml_backend__ml_optimize_module48();
	ml_backend__ml_optimize_module49();
	ml_backend__ml_optimize_module50();
	ml_backend__ml_optimize_module51();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_optimize__init(void);
void mercury__ml_backend__ml_optimize__init_type_tables(void);
void mercury__ml_backend__ml_optimize__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_optimize__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_optimize__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_optimize__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_optimize__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_optimize_maybe_bunch_0();
	mercury__ml_backend__ml_optimize_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_optimize__type_ctor_info_opt_info_0,
		ml_backend__ml_optimize__opt_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_optimize__type_ctor_info_var_elim_info_0,
		ml_backend__ml_optimize__var_elim_info_0_0);
	mercury__ml_backend__ml_optimize__init_debugger();
}

void mercury__ml_backend__ml_optimize__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_optimize__type_ctor_info_opt_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_optimize__type_ctor_info_var_elim_info_0);
	}
}


void mercury__ml_backend__ml_optimize__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_optimize__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_optimize);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_optimize__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_optimize__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
