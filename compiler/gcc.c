/*
** Automatically generated from `gcc.m'
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
INIT mercury__gcc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "gcc.c"
#include "gcc.mh"

#line 27 "gcc.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 31 "gcc.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 35 "gcc.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "gcc.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "gcc.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "gcc.c"
#line 48 "gcc.c"
#ifndef GCC_DECL_GUARD
#define GCC_DECL_GUARD

#line 52 "gcc.c"
#line 685 "gcc.m"


#ifndef MC_GUARD_GCC_HEADERS
#define MC_GUARD_GCC_HEADERS

#include "gcc/config.h"
#include "gcc/system.h"
#include "gcc/toplev.h"
#include "gcc/tree.h"

/* XXX The inclusion of c-tree.h is an undesirable dependency on GCC's
   C front-end.  It is only needed for versions of
   the mercury-gcc distribution based on GCC 3.2 or earlier.
   In later versions, I modified the mercury-gcc distribution so that
   it no longer depends on the C front-end, making the inclusion of
   c-tree.h unnecessary.
   This line should be removed once GCC 3.3 has been official released
   and we have then officially released a version of Mercury that uses
   GCC 3.3. */
#include "gcc/c-tree.h"
#include "gcc/ggc.h"

#include "gcc/mercury/mercury-gcc.h"

#endif


#line 81 "gcc.c"
#line 781 "gcc.m"

/* We use an `MC_' prefix for C code in the mercury/compiler directory. */

extern MR_Word MC_frontend_callback;
extern MR_Word MC_frontend_callback_output;
extern MR_Word MC_frontend_callback_type;

void MC_in_gcc(MR_Word *result);
void MC_call_gcc_backend(MR_String all_args, MR_Integer *result);
void MC_continue_frontend(void);

#include "mercury_wrapper.h"		/* for MR_make_argv() */
#include <stdio.h>			/* for fprintf() */
#include <stdlib.h>			/* for exit() */

#line 98 "gcc.c"
#line 99 "gcc.c"

#endif
#line 102 "gcc.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_gcc__type_ctor_info_var_name_0,
	mercury_data_gcc__type_ctor_info_var_decl_0,
	mercury_data_gcc__type_ctor_info_type_decl_0,
	mercury_data_gcc__type_ctor_info_type_0,
	mercury_data_gcc__type_ctor_info_tree_code_0,
	mercury_data_gcc__type_ctor_info_tree_0,
	mercury_data_gcc__type_ctor_info_struct_name_0,
	mercury_data_gcc__type_ctor_info_param_types_0,
	mercury_data_gcc__type_ctor_info_param_name_0,
	mercury_data_gcc__type_ctor_info_param_decls_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_gcc__type_ctor_info_param_decl_0,
	mercury_data_gcc__type_ctor_info_op_0,
	mercury_data_gcc__type_ctor_info_loop_0,
	mercury_data_gcc__type_ctor_info_label_name_0,
	mercury_data_gcc__type_ctor_info_label_0,
	mercury_data_gcc__type_ctor_info_init_list_0,
	mercury_data_gcc__type_ctor_info_init_elem_0,
	mercury_data_gcc__type_ctor_info_func_name_0,
	mercury_data_gcc__type_ctor_info_func_decl_0,
	mercury_data_gcc__type_ctor_info_func_asm_name_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_gcc__type_ctor_info_frontend_callback_1,
	mercury_data_gcc__type_ctor_info_field_name_0,
	mercury_data_gcc__type_ctor_info_field_decls_0,
	mercury_data_gcc__type_ctor_info_field_decl_0,
	mercury_data_gcc__type_ctor_info_expr_0,
	mercury_data_gcc__type_ctor_info_arg_list_0;
MR_decl_label2(gcc__array_elem_initializer_4_0, 2,3)
MR_decl_label2(gcc__build_int_4_0, 2,3)
MR_decl_label1(gcc__build_string_4_0, 2)
MR_decl_label2(gcc__run_backend_6_0, 4,2)
MR_decl_label1(__Unify___gcc__loop_0_0, 6)
MR_decl_label1(__Unify___gcc__tree_0_0, 6)
MR_decl_label2(__Compare___gcc__loop_0_0, 3,2)
MR_decl_label2(__Compare___gcc__tree_0_0, 3,2)
MR_decl_static(gcc__in_gcc_3_0)
MR_decl_static(gcc__call_gcc_backend_4_0)
MR_decl_static(gcc__set_global_frontend_callback_3_0)
MR_decl_static(gcc__get_global_frontend_callback_output_3_0)
MR_def_extern_entry(gcc__run_backend_6_0)
MR_def_extern_entry(fn__gcc__void_type_node_0_0)
MR_def_extern_entry(fn__gcc__boolean_type_node_0_0)
MR_def_extern_entry(fn__gcc__char_type_node_0_0)
MR_def_extern_entry(fn__gcc__string_type_node_0_0)
MR_def_extern_entry(fn__gcc__double_type_node_0_0)
MR_def_extern_entry(fn__gcc__ptr_type_node_0_0)
MR_def_extern_entry(fn__gcc__integer_type_node_0_0)
MR_def_extern_entry(fn__gcc__int8_type_node_0_0)
MR_def_extern_entry(fn__gcc__int16_type_node_0_0)
MR_def_extern_entry(fn__gcc__int32_type_node_0_0)
MR_def_extern_entry(fn__gcc__int64_type_node_0_0)
MR_def_extern_entry(fn__gcc__intptr_type_node_0_0)
MR_def_extern_entry(fn__gcc__jmpbuf_type_node_0_0)
MR_def_extern_entry(gcc__build_pointer_type_4_0)
MR_def_extern_entry(gcc__build_array_type_5_0)
MR_def_extern_entry(gcc__build_range_type_6_0)
MR_def_extern_entry(fn__gcc__empty_param_types_0_0)
MR_def_extern_entry(fn__gcc__cons_param_types_2_0)
MR_def_extern_entry(gcc__build_function_type_5_0)
MR_def_extern_entry(fn__gcc__declared_type_1_0)
MR_def_extern_entry(gcc__get_array_elem_type_4_0)
MR_def_extern_entry(gcc__get_struct_field_decls_4_0)
MR_def_extern_entry(gcc__build_extern_var_decl_5_0)
MR_def_extern_entry(gcc__build_static_var_decl_6_0)
MR_def_extern_entry(gcc__finish_static_var_decl_3_0)
MR_def_extern_entry(gcc__build_local_var_decl_5_0)
MR_def_extern_entry(gcc__set_var_decl_public_3_0)
MR_def_extern_entry(gcc__set_var_decl_readonly_3_0)
MR_def_extern_entry(gcc__set_var_decl_asm_name_4_0)
MR_def_extern_entry(gcc__start_block_2_0)
MR_def_extern_entry(gcc__end_block_2_0)
MR_def_extern_entry(gcc__build_param_decl_5_0)
MR_def_extern_entry(fn__gcc__empty_param_decls_0_0)
MR_def_extern_entry(fn__gcc__cons_param_decls_2_0)
MR_def_extern_entry(gcc__build_function_decl_8_0)
MR_def_extern_entry(fn__gcc__alloc_func_decl_0_0)
MR_def_extern_entry(fn__gcc__strcmp_func_decl_0_0)
MR_def_extern_entry(fn__gcc__hash_string_func_decl_0_0)
MR_def_extern_entry(fn__gcc__box_float_func_decl_0_0)
MR_def_extern_entry(fn__gcc__setjmp_func_decl_0_0)
MR_def_extern_entry(fn__gcc__longjmp_func_decl_0_0)
MR_def_extern_entry(gcc__set_func_decl_public_3_0)
MR_def_extern_entry(gcc__build_field_decl_5_0)
MR_def_extern_entry(gcc__field_type_4_0)
MR_def_extern_entry(gcc__empty_field_list_3_0)
MR_def_extern_entry(gcc__cons_field_list_5_0)
MR_def_extern_entry(gcc__next_field_decl_5_0)
MR_def_extern_entry(gcc__build_struct_type_decl_5_0)
MR_def_extern_entry(fn__gcc__plus_expr_0_0)
MR_def_extern_entry(fn__gcc__minus_expr_0_0)
MR_def_extern_entry(fn__gcc__mult_expr_0_0)
MR_def_extern_entry(fn__gcc__rdiv_expr_0_0)
MR_def_extern_entry(fn__gcc__trunc_div_expr_0_0)
MR_def_extern_entry(fn__gcc__trunc_mod_expr_0_0)
MR_def_extern_entry(fn__gcc__eq_expr_0_0)
MR_def_extern_entry(fn__gcc__ne_expr_0_0)
MR_def_extern_entry(fn__gcc__lt_expr_0_0)
MR_def_extern_entry(fn__gcc__gt_expr_0_0)
MR_def_extern_entry(fn__gcc__le_expr_0_0)
MR_def_extern_entry(fn__gcc__ge_expr_0_0)
MR_def_extern_entry(fn__gcc__truth_andif_expr_0_0)
MR_def_extern_entry(fn__gcc__truth_orif_expr_0_0)
MR_def_extern_entry(fn__gcc__truth_not_expr_0_0)
MR_def_extern_entry(fn__gcc__bit_ior_expr_0_0)
MR_def_extern_entry(fn__gcc__bit_xor_expr_0_0)
MR_def_extern_entry(fn__gcc__bit_and_expr_0_0)
MR_def_extern_entry(fn__gcc__bit_not_expr_0_0)
MR_def_extern_entry(fn__gcc__lshift_expr_0_0)
MR_def_extern_entry(fn__gcc__rshift_expr_0_0)
MR_def_extern_entry(fn__gcc__array_ref_0_0)
MR_def_extern_entry(gcc__expr_type_4_0)
MR_decl_static(gcc__build_int_2_5_0)
MR_def_extern_entry(gcc__build_int_4_0)
MR_decl_static(gcc__build_real_5_0)
MR_def_extern_entry(gcc__build_float_4_0)
MR_def_extern_entry(gcc__build_string_5_0)
MR_def_extern_entry(gcc__build_string_4_0)
MR_def_extern_entry(gcc__build_null_pointer_3_0)
MR_def_extern_entry(gcc__build_unop_6_0)
MR_def_extern_entry(gcc__build_binop_7_0)
MR_decl_static(fn__gcc__addr_expr_0_0)
MR_decl_static(gcc__mark_addressable_3_0)
MR_def_extern_entry(gcc__build_addr_expr_4_0)
MR_def_extern_entry(gcc__build_pointer_deref_4_0)
MR_def_extern_entry(gcc__build_component_ref_5_0)
MR_def_extern_entry(gcc__convert_type_5_0)
MR_def_extern_entry(fn__gcc__var_expr_1_0)
MR_def_extern_entry(gcc__build_func_addr_expr_4_0)
MR_def_extern_entry(gcc__empty_arg_list_3_0)
MR_def_extern_entry(gcc__cons_arg_list_5_0)
MR_def_extern_entry(gcc__build_call_expr_6_0)
MR_def_extern_entry(gcc__array_elem_initializer_4_0)
MR_def_extern_entry(gcc__struct_field_initializer_4_0)
MR_def_extern_entry(gcc__empty_init_list_3_0)
MR_def_extern_entry(gcc__cons_init_list_6_0)
MR_def_extern_entry(gcc__build_initializer_expr_5_0)
MR_def_extern_entry(gcc__push_gc_context_2_0)
MR_def_extern_entry(gcc__pop_gc_context_2_0)
MR_def_extern_entry(gcc__start_function_3_0)
MR_def_extern_entry(gcc__end_function_2_0)
MR_def_extern_entry(gcc__set_context_4_0)
MR_def_extern_entry(gcc__gen_line_note_4_0)
MR_def_extern_entry(gcc__gen_start_cond_3_0)
MR_def_extern_entry(gcc__gen_start_else_2_0)
MR_def_extern_entry(gcc__gen_end_cond_2_0)
MR_def_extern_entry(gcc__gen_start_switch_4_0)
MR_def_extern_entry(gcc__gen_case_label_4_0)
MR_def_extern_entry(gcc__gen_default_case_label_3_0)
MR_def_extern_entry(gcc__gen_break_2_0)
MR_def_extern_entry(gcc__gen_end_switch_3_0)
MR_def_extern_entry(gcc__gen_start_loop_3_0)
MR_def_extern_entry(gcc__gen_exit_loop_if_false_4_0)
MR_def_extern_entry(gcc__gen_end_loop_2_0)
MR_def_extern_entry(gcc__gen_expr_stmt_3_0)
MR_def_extern_entry(gcc__gen_return_3_0)
MR_def_extern_entry(gcc__gen_assign_4_0)
MR_def_extern_entry(gcc__build_label_4_0)
MR_def_extern_entry(gcc__build_unnamed_label_3_0)
MR_def_extern_entry(gcc__gen_label_3_0)
MR_def_extern_entry(gcc__gen_goto_3_0)
MR_decl_static(gcc__call_frontend_callback_4_0)
MR_def_extern_entry(__Unify___gcc__arg_list_0_0)
MR_def_extern_entry(__Compare___gcc__arg_list_0_0)
MR_def_extern_entry(__Unify___gcc__expr_0_0)
MR_def_extern_entry(__Compare___gcc__expr_0_0)
MR_def_extern_entry(__Unify___gcc__field_decl_0_0)
MR_def_extern_entry(__Compare___gcc__field_decl_0_0)
MR_def_extern_entry(__Unify___gcc__field_decls_0_0)
MR_def_extern_entry(__Compare___gcc__field_decls_0_0)
MR_def_extern_entry(__Unify___gcc__field_name_0_0)
MR_def_extern_entry(__Compare___gcc__field_name_0_0)
MR_def_extern_entry(__Unify___gcc__frontend_callback_1_0)
MR_def_extern_entry(__Compare___gcc__frontend_callback_1_0)
MR_def_extern_entry(__Unify___gcc__func_asm_name_0_0)
MR_def_extern_entry(__Compare___gcc__func_asm_name_0_0)
MR_def_extern_entry(__Unify___gcc__func_decl_0_0)
MR_def_extern_entry(__Compare___gcc__func_decl_0_0)
MR_def_extern_entry(__Unify___gcc__func_name_0_0)
MR_def_extern_entry(__Compare___gcc__func_name_0_0)
MR_def_extern_entry(__Unify___gcc__init_elem_0_0)
MR_def_extern_entry(__Compare___gcc__init_elem_0_0)
MR_def_extern_entry(__Unify___gcc__init_list_0_0)
MR_def_extern_entry(__Compare___gcc__init_list_0_0)
MR_def_extern_entry(__Unify___gcc__label_0_0)
MR_def_extern_entry(__Compare___gcc__label_0_0)
MR_def_extern_entry(__Unify___gcc__label_name_0_0)
MR_def_extern_entry(__Compare___gcc__label_name_0_0)
MR_def_extern_entry(__Unify___gcc__loop_0_0)
MR_def_extern_entry(__Compare___gcc__loop_0_0)
MR_def_extern_entry(__Unify___gcc__op_0_0)
MR_def_extern_entry(__Compare___gcc__op_0_0)
MR_def_extern_entry(__Unify___gcc__param_decl_0_0)
MR_def_extern_entry(__Compare___gcc__param_decl_0_0)
MR_def_extern_entry(__Unify___gcc__param_decls_0_0)
MR_def_extern_entry(__Compare___gcc__param_decls_0_0)
MR_def_extern_entry(__Unify___gcc__param_name_0_0)
MR_def_extern_entry(__Compare___gcc__param_name_0_0)
MR_def_extern_entry(__Unify___gcc__param_types_0_0)
MR_def_extern_entry(__Compare___gcc__param_types_0_0)
MR_def_extern_entry(__Unify___gcc__struct_name_0_0)
MR_def_extern_entry(__Compare___gcc__struct_name_0_0)
MR_def_extern_entry(__Unify___gcc__tree_0_0)
MR_def_extern_entry(__Compare___gcc__tree_0_0)
MR_def_extern_entry(__Unify___gcc__tree_code_0_0)
MR_def_extern_entry(__Compare___gcc__tree_code_0_0)
MR_def_extern_entry(__Unify___gcc__type_0_0)
MR_def_extern_entry(__Compare___gcc__type_0_0)
MR_def_extern_entry(__Unify___gcc__type_decl_0_0)
MR_def_extern_entry(__Compare___gcc__type_decl_0_0)
MR_def_extern_entry(__Unify___gcc__var_decl_0_0)
MR_def_extern_entry(__Compare___gcc__var_decl_0_0)
MR_def_extern_entry(__Unify___gcc__var_name_0_0)
MR_def_extern_entry(__Compare___gcc__var_name_0_0)
MR_decl_static(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_95_91_49_93_95_48_4_0)
MR_decl_static(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_103_108_111_98_97_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_111_117_116_112_117_116_95_95_91_49_93_95_48_3_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_var_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__var_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__var_name_0_0)),
	"gcc",
	"var_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0;

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_var_decl_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__var_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__var_decl_0_0)),
	"gcc",
	"var_decl",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_type_decl_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__type_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__type_decl_0_0)),
	"gcc",
	"type_decl",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__type_0_0)),
	"gcc",
	"type",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_code_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__tree_code_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__tree_code_0_0)),
	"gcc",
	"tree_code",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_c_pointer_0;

static const MR_NotagFunctorDesc mercury_data_gcc__notag_functor_desc_tree_0 = {
	"tree",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_c_pointer_0,
	NULL
};

const MR_Integer mercury_data_gcc__functor_number_map_tree_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_tree_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__tree_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__tree_0_0)),
	"gcc",
	"tree",
	{ (void *)&mercury_data_gcc__notag_functor_desc_tree_0 },
	{ (void *)&mercury_data_gcc__notag_functor_desc_tree_0 },
	1,
	4,
	mercury_data_gcc__functor_number_map_tree_0
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_struct_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__struct_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__struct_name_0_0)),
	"gcc",
	"struct_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_param_types_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__param_types_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__param_types_0_0)),
	"gcc",
	"param_types",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_param_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__param_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__param_name_0_0)),
	"gcc",
	"param_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_param_decls_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__param_decls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__param_decls_0_0)),
	"gcc",
	"param_decls",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_param_decl_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__param_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__param_decl_0_0)),
	"gcc",
	"param_decl",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_op_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__op_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__op_0_0)),
	"gcc",
	"op",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_NotagFunctorDesc mercury_data_gcc__notag_functor_desc_loop_0 = {
	"loop",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_c_pointer_0,
	NULL
};

const MR_Integer mercury_data_gcc__functor_number_map_loop_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_loop_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__loop_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__loop_0_0)),
	"gcc",
	"loop",
	{ (void *)&mercury_data_gcc__notag_functor_desc_loop_0 },
	{ (void *)&mercury_data_gcc__notag_functor_desc_loop_0 },
	1,
	4,
	mercury_data_gcc__functor_number_map_loop_0
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_label_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__label_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__label_name_0_0)),
	"gcc",
	"label_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_label_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__label_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__label_0_0)),
	"gcc",
	"label",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_init_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__init_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__init_list_0_0)),
	"gcc",
	"init_list",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_init_elem_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__init_elem_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__init_elem_0_0)),
	"gcc",
	"init_elem",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_func_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__func_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__func_name_0_0)),
	"gcc",
	"func_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_func_decl_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__func_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__func_decl_0_0)),
	"gcc",
	"func_decl",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_func_asm_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__func_asm_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__func_asm_name_0_0)),
	"gcc",
	"func_asm_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_frontend_callback_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__frontend_callback_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__frontend_callback_1_0)),
	"gcc",
	"frontend_callback",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_field_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__field_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__field_name_0_0)),
	"gcc",
	"field_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_field_decls_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__field_decls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__field_decls_0_0)),
	"gcc",
	"field_decls",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_field_decl_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__field_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__field_decl_0_0)),
	"gcc",
	"field_decl",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_expr_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__expr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__expr_0_0)),
	"gcc",
	"expr",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_gcc__type_ctor_info_arg_list_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___gcc__arg_list_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___gcc__arg_list_0_0)),
	"gcc",
	"arg_list",
	{ 0 },
	{ (void *)&mercury_data_gcc__type_ctor_info_tree_0 },
	-1,
	0,
	NULL
};


MR_BEGIN_MODULE(gcc_module0)
	MR_init_entry1(gcc__in_gcc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__in_gcc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Arg1;
	MR_Word	Arg2;
	MR_Word	Arg3;
#define	MR_PROC_LABEL	mercury__gcc__in_gcc_3_0
	MR_OBTAIN_GLOBAL_LOCK("in_gcc");
{
#line 771 "gcc.m"
 MC_in_gcc(&Arg1);;}
#line 802 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("in_gcc");
	MR_r1 = Arg1;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module1)
	MR_init_entry1(gcc__call_gcc_backend_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__call_gcc_backend_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_String	Arg1;
	MR_Integer	Arg2;
	MR_Word	Arg3;
	MR_Word	Arg4;
#define	MR_PROC_LABEL	mercury__gcc__call_gcc_backend_4_0
	Arg1 = (MR_String) MR_r1;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("call_gcc_backend");
{
#line 777 "gcc.m"
 MC_call_gcc_backend(Arg1, &Arg2);;}
#line 839 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("call_gcc_backend");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Arg2;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module2)
	MR_init_entry1(gcc__set_global_frontend_callback_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__set_global_frontend_callback_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	CallBack;
#define	MR_PROC_LABEL	mercury__gcc__set_global_frontend_callback_3_0
	TypeInfo_for_T = MR_r1;
	CallBack = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_global_frontend_callback");
{
#line 912 "gcc.m"

	MC_frontend_callback = CallBack;
	MC_frontend_callback_type = TypeInfo_for_T;

;}
#line 879 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("set_global_frontend_callback");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module3)
	MR_init_entry1(gcc__get_global_frontend_callback_output_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__get_global_frontend_callback_output_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_103_108_111_98_97_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_111_117_116_112_117_116_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(gcc_module4)
	MR_init_entry1(gcc__run_backend_6_0);
	MR_init_label2(gcc__run_backend_6_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__run_backend_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	Arg1;
	MR_Word	Arg2;
	MR_Word	Arg3;
#define	MR_PROC_LABEL	mercury__gcc__run_backend_6_0
	MR_OBTAIN_GLOBAL_LOCK("in_gcc");
{
#line 771 "gcc.m"
 MC_in_gcc(&Arg1);;}
#line 932 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("in_gcc");
	MR_r4 = Arg1;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(gcc__run_backend_6_0_i2);
	}
	MR_r1 = MR_r3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(gcc__run_backend_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__gcc__run_backend_6_0_i4);
MR_def_label(gcc__run_backend_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(gcc__run_backend_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	CallBack;
#define	MR_PROC_LABEL	mercury__gcc__run_backend_6_0
	TypeInfo_for_T = MR_r1;
	CallBack = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_global_frontend_callback");
{
#line 912 "gcc.m"

	MC_frontend_callback = CallBack;
	MC_frontend_callback_type = TypeInfo_for_T;

;}
#line 969 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("set_global_frontend_callback");
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_String	Arg1;
	MR_Integer	Arg2;
	MR_Word	Arg3;
	MR_Word	Arg4;
#define	MR_PROC_LABEL	mercury__gcc__run_backend_6_0
	Arg1 = (MR_String) MR_r2;
	MR_save_registers();
	MR_OBTAIN_GLOBAL_LOCK("call_gcc_backend");
{
#line 777 "gcc.m"
 MC_call_gcc_backend(Arg1, &Arg2);;}
#line 987 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("call_gcc_backend");
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = Arg2;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Output;
#define	MR_PROC_LABEL	mercury__gcc__run_backend_6_0
	MR_OBTAIN_GLOBAL_LOCK("get_global_frontend_callback_output");
{
#line 920 "gcc.m"

	Output = MC_frontend_callback_output;
;}
#line 1004 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("get_global_frontend_callback_output");
	MR_r2 = Output;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module5)
	MR_init_entry1(fn__gcc__void_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__void_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__void_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("void_type_node");
{
#line 947 "gcc.m"

	Type = (MR_Word) void_type_node;
;}
#line 1037 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("void_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module6)
	MR_init_entry1(fn__gcc__boolean_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__boolean_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__boolean_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("boolean_type_node");
{
#line 953 "gcc.m"

	Type = (MR_Word) boolean_type_node;
;}
#line 1069 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("boolean_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module7)
	MR_init_entry1(fn__gcc__char_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__char_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__char_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("char_type_node");
{
#line 959 "gcc.m"

	Type = (MR_Word) char_type_node;
;}
#line 1101 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("char_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module8)
	MR_init_entry1(fn__gcc__string_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__string_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__string_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("string_type_node");
{
#line 965 "gcc.m"

	/*
	** XXX we should consider using const when appropriate,
	** i.e. when the string doesn't have a unique mode
	*/
	Type = (MR_Word) string_type_node;
;}
#line 1137 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("string_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module9)
	MR_init_entry1(fn__gcc__double_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__double_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__double_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("double_type_node");
{
#line 975 "gcc.m"

	Type = (MR_Word) double_type_node;
;}
#line 1169 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("double_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module10)
	MR_init_entry1(fn__gcc__ptr_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__ptr_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__ptr_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("ptr_type_node");
{
#line 981 "gcc.m"

	Type = (MR_Word) ptr_type_node;
;}
#line 1201 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("ptr_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module11)
	MR_init_entry1(fn__gcc__integer_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__integer_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__integer_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("integer_type_node");
{
#line 987 "gcc.m"

	Type = (MR_Word) integer_type_node;
;}
#line 1233 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("integer_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module12)
	MR_init_entry1(fn__gcc__int8_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__int8_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__int8_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("int8_type_node");
{
#line 993 "gcc.m"

	Type = (MR_Word) merc_int8_type_node;
;}
#line 1265 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("int8_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module13)
	MR_init_entry1(fn__gcc__int16_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__int16_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__int16_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("int16_type_node");
{
#line 999 "gcc.m"

	Type = (MR_Word) merc_int16_type_node;
;}
#line 1297 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("int16_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module14)
	MR_init_entry1(fn__gcc__int32_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__int32_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__int32_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("int32_type_node");
{
#line 1005 "gcc.m"

	Type = (MR_Word) merc_int32_type_node;
;}
#line 1329 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("int32_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module15)
	MR_init_entry1(fn__gcc__int64_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__int64_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__int64_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("int64_type_node");
{
#line 1011 "gcc.m"

	Type = (MR_Word) merc_int64_type_node;
;}
#line 1361 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("int64_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module16)
	MR_init_entry1(fn__gcc__intptr_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__intptr_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__intptr_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("intptr_type_node");
{
#line 1017 "gcc.m"

	Type = (MR_Word) merc_intptr_type_node;
;}
#line 1393 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("intptr_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module17)
	MR_init_entry1(fn__gcc__jmpbuf_type_node_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__jmpbuf_type_node_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__jmpbuf_type_node_0_0
	MR_OBTAIN_GLOBAL_LOCK("jmpbuf_type_node");
{
#line 1023 "gcc.m"

	Type = (MR_Word) merc_jmpbuf_type_node;
;}
#line 1425 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("jmpbuf_type_node");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module18)
	MR_init_entry1(gcc__build_pointer_type_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_pointer_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
	MR_Word	PtrType;
#define	MR_PROC_LABEL	mercury__gcc__build_pointer_type_4_0
	Type = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("build_pointer_type");
{
#line 1030 "gcc.m"

	PtrType = (MR_Word) build_pointer_type((tree) Type);
;}
#line 1459 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_pointer_type");
	MR_r1 = PtrType;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module19)
	MR_init_entry1(gcc__build_array_type_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_array_type_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ElemType;
	MR_Integer	NumElems;
	MR_Word	ArrayType;
#define	MR_PROC_LABEL	mercury__gcc__build_array_type_5_0
	ElemType = MR_r1;
	NumElems = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_array_type");
{
#line 1038 "gcc.m"

	/* XXX Move this code to `mercury-gcc.c'. */
	/* XXX Do we need to check that NumElems fits in a HOST_WIDE_INT?  */
	HOST_WIDE_INT max = (HOST_WIDE_INT) NumElems - (HOST_WIDE_INT) 1;
	tree index_type = build_index_type (build_int_2 (max,
		(max < 0 ? -1 : 0)));
	ArrayType = (MR_Word) build_array_type((tree) ElemType, index_type);
;}
#line 1500 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_array_type");
	MR_r1 = ArrayType;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module20)
	MR_init_entry1(gcc__build_range_type_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_range_type_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
	MR_Integer	Min;
	MR_Integer	Max;
	MR_Word	RangeType;
#define	MR_PROC_LABEL	mercury__gcc__build_range_type_6_0
	Type = MR_r1;
	Min = MR_r2;
	Max = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("build_range_type");
{
#line 1051 "gcc.m"

	RangeType = (MR_Word) build_range_type((tree) Type,
			build_int_2 (Min, (Min < 0 ? -1 : 0)),
			build_int_2 (Max, (Max < 0 ? -1 : 0)));
;}
#line 1540 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_range_type");
	MR_r1 = RangeType;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module21)
	MR_init_entry1(fn__gcc__empty_param_types_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__empty_param_types_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ParamTypes;
#define	MR_PROC_LABEL	mercury__fn__gcc__empty_param_types_0_0
	MR_OBTAIN_GLOBAL_LOCK("empty_param_types");
{
#line 1062 "gcc.m"

	ParamTypes = (MR_Word) merc_empty_param_type_list();
;}
#line 1572 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("empty_param_types");
	MR_r1 = ParamTypes;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module22)
	MR_init_entry1(fn__gcc__cons_param_types_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__cons_param_types_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
	MR_Word	Types0;
	MR_Word	Types;
#define	MR_PROC_LABEL	mercury__fn__gcc__cons_param_types_2_0
	Type = MR_r1;
	Types0 = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("cons_param_types");
{
#line 1069 "gcc.m"

	Types = (MR_Word)
		merc_cons_param_type_list((tree) Type, (tree) Types0);
;}
#line 1609 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("cons_param_types");
	MR_r1 = Types;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module23)
	MR_init_entry1(gcc__build_function_type_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_function_type_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	RetType;
	MR_Word	ParamTypes;
	MR_Word	FunctionType;
#define	MR_PROC_LABEL	mercury__gcc__build_function_type_5_0
	RetType = MR_r1;
	ParamTypes = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_function_type");
{
#line 1078 "gcc.m"

	FunctionType = (MR_Word) build_function_type((tree) RetType,
		(tree) ParamTypes);
;}
#line 1646 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_function_type");
	MR_r1 = FunctionType;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module24)
	MR_init_entry1(fn__gcc__declared_type_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__declared_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeDecl;
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__fn__gcc__declared_type_1_0
	TypeDecl = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("declared_type");
{
#line 1086 "gcc.m"

	Type = (MR_Word) TREE_TYPE((tree) TypeDecl);
;}
#line 1680 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("declared_type");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module25)
	MR_init_entry1(gcc__get_array_elem_type_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__get_array_elem_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ArrayType;
	MR_Word	ElemType;
#define	MR_PROC_LABEL	mercury__gcc__get_array_elem_type_4_0
	ArrayType = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_array_elem_type");
{
#line 1093 "gcc.m"

	ElemType = (MR_Word) TREE_TYPE((tree) ArrayType);
;}
#line 1714 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("get_array_elem_type");
	MR_r1 = ElemType;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module26)
	MR_init_entry1(gcc__get_struct_field_decls_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__get_struct_field_decls_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	StructType;
	MR_Word	FieldDecls;
#define	MR_PROC_LABEL	mercury__gcc__get_struct_field_decls_4_0
	StructType = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("get_struct_field_decls");
{
#line 1101 "gcc.m"

	FieldDecls = (MR_Word) TYPE_FIELDS((tree) StructType);
;}
#line 1748 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("get_struct_field_decls");
	MR_r1 = FieldDecls;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module27)
	MR_init_entry1(gcc__build_extern_var_decl_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_extern_var_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_Word	Type;
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__build_extern_var_decl_5_0
	Name = (MR_String) MR_r1;
	Type = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_extern_var_decl");
{
#line 1120 "gcc.m"

	Decl = (MR_Word) merc_build_extern_var_decl(Name, (tree) Type);
;}
#line 1784 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_extern_var_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module28)
	MR_init_entry1(gcc__build_static_var_decl_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_static_var_decl_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_Word	Type;
	MR_Word	Init;
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__build_static_var_decl_6_0
	Name = (MR_String) MR_r1;
	Type = MR_r2;
	Init = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("build_static_var_decl");
{
#line 1128 "gcc.m"

	Decl = (MR_Word) merc_build_static_var_decl(Name, (tree) Type,
		(tree) Init);
;}
#line 1823 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_static_var_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module29)
	MR_init_entry1(gcc__finish_static_var_decl_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__finish_static_var_decl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__finish_static_var_decl_3_0
	Decl = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("finish_static_var_decl");
{
#line 1136 "gcc.m"

	merc_finish_static_var_decl((tree) Decl);
;}
#line 1856 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("finish_static_var_decl");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module30)
	MR_init_entry1(gcc__build_local_var_decl_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_local_var_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_Word	Type;
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__build_local_var_decl_5_0
	Name = (MR_String) MR_r1;
	Type = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_local_var_decl");
{
#line 1143 "gcc.m"

	Decl = (MR_Word) merc_build_local_var_decl(Name, (tree) Type);
;}
#line 1891 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_local_var_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module31)
	MR_init_entry1(gcc__set_var_decl_public_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__set_var_decl_public_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__set_var_decl_public_3_0
	Decl = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_var_decl_public");
{
#line 1150 "gcc.m"

	TREE_PUBLIC((tree) Decl) = 1;
;}
#line 1924 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("set_var_decl_public");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module32)
	MR_init_entry1(gcc__set_var_decl_readonly_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__set_var_decl_readonly_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__set_var_decl_readonly_3_0
	Decl = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_var_decl_readonly");
{
#line 1157 "gcc.m"

	TREE_READONLY((tree) Decl) = 1;
;}
#line 1956 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("set_var_decl_readonly");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module33)
	MR_init_entry1(gcc__set_var_decl_asm_name_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__set_var_decl_asm_name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
	MR_String	AsmName;
#define	MR_PROC_LABEL	mercury__gcc__set_var_decl_asm_name_4_0
	Decl = MR_r1;
	AsmName = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_var_decl_asm_name");
{
#line 1164 "gcc.m"

	SET_DECL_ASSEMBLER_NAME((tree) Decl, get_identifier(AsmName));
;}
#line 1990 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("set_var_decl_asm_name");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module34)
	MR_init_entry1(gcc__start_block_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__start_block_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__gcc__start_block_2_0
	MR_OBTAIN_GLOBAL_LOCK("start_block");
{
#line 1746 "gcc.m"

	pushlevel(0);
	expand_start_bindings(0);
;}
#line 2021 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("start_block");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module35)
	MR_init_entry1(gcc__end_block_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__end_block_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__gcc__end_block_2_0
	MR_OBTAIN_GLOBAL_LOCK("end_block");
{
#line 1754 "gcc.m"

	tree block = poplevel(/*keep=*/1, /*reverse=*/1, /*functionbody=*/0);
	expand_end_bindings(block, /*mark_ends=*/1, /*dont_jump_in=*/0);
;}
#line 2052 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("end_block");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module36)
	MR_init_entry1(gcc__build_param_decl_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_param_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_Word	Type;
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__build_param_decl_5_0
	Name = (MR_String) MR_r1;
	Type = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_param_decl");
{
#line 1177 "gcc.m"

	Decl = (MR_Word) merc_build_param_decl(Name, (tree) Type);
;}
#line 2087 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_param_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module37)
	MR_init_entry1(fn__gcc__empty_param_decls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__empty_param_decls_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__fn__gcc__empty_param_decls_0_0
	MR_OBTAIN_GLOBAL_LOCK("empty_param_decls");
{
#line 1184 "gcc.m"

	Decl = (MR_Word) merc_empty_param_list();
;}
#line 2119 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("empty_param_decls");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module38)
	MR_init_entry1(fn__gcc__cons_param_decls_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__cons_param_decls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
	MR_Word	Decls0;
	MR_Word	Decls;
#define	MR_PROC_LABEL	mercury__fn__gcc__cons_param_decls_2_0
	Decl = MR_r1;
	Decls0 = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("cons_param_decls");
{
#line 1191 "gcc.m"

	Decls = (MR_Word) merc_cons_param_list((tree) Decl, (tree) Decls0);
;}
#line 2155 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("cons_param_decls");
	MR_r1 = Decls;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module39)
	MR_init_entry1(gcc__build_function_decl_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_function_decl_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_String	AsmName;
	MR_Word	RetType;
	MR_Word	ParamTypes;
	MR_Word	Params;
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__build_function_decl_8_0
	Name = (MR_String) MR_r1;
	AsmName = (MR_String) MR_r2;
	RetType = MR_r3;
	ParamTypes = MR_r4;
	Params = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("build_function_decl");
{
#line 1199 "gcc.m"

	Decl = (MR_Word) merc_build_function_decl(Name, AsmName,
			(tree) RetType, (tree) ParamTypes, (tree) Params);
;}
#line 2198 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_function_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module40)
	MR_init_entry1(fn__gcc__alloc_func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__alloc_func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__fn__gcc__alloc_func_decl_0_0
	MR_OBTAIN_GLOBAL_LOCK("alloc_func_decl");
{
#line 1207 "gcc.m"

	Decl = (MR_Word) merc_alloc_function_node;
;}
#line 2230 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("alloc_func_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module41)
	MR_init_entry1(fn__gcc__strcmp_func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__strcmp_func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__fn__gcc__strcmp_func_decl_0_0
	MR_OBTAIN_GLOBAL_LOCK("strcmp_func_decl");
{
#line 1214 "gcc.m"

	Decl = (MR_Word) merc_strcmp_function_node;
;}
#line 2262 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("strcmp_func_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module42)
	MR_init_entry1(fn__gcc__hash_string_func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__hash_string_func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__fn__gcc__hash_string_func_decl_0_0
	MR_OBTAIN_GLOBAL_LOCK("hash_string_func_decl");
{
#line 1221 "gcc.m"

	Decl = (MR_Word) merc_hash_string_function_node;
;}
#line 2294 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("hash_string_func_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module43)
	MR_init_entry1(fn__gcc__box_float_func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__box_float_func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__fn__gcc__box_float_func_decl_0_0
	MR_OBTAIN_GLOBAL_LOCK("box_float_func_decl");
{
#line 1228 "gcc.m"

	Decl = (MR_Word) merc_box_float_function_node;
;}
#line 2326 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("box_float_func_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module44)
	MR_init_entry1(fn__gcc__setjmp_func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__setjmp_func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__fn__gcc__setjmp_func_decl_0_0
	MR_OBTAIN_GLOBAL_LOCK("setjmp_func_decl");
{
#line 1235 "gcc.m"

	Decl = (MR_Word) merc_setjmp_function_node;
;}
#line 2358 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("setjmp_func_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module45)
	MR_init_entry1(fn__gcc__longjmp_func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__longjmp_func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__fn__gcc__longjmp_func_decl_0_0
	MR_OBTAIN_GLOBAL_LOCK("longjmp_func_decl");
{
#line 1242 "gcc.m"

	Decl = (MR_Word) merc_longjmp_function_node;
;}
#line 2390 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("longjmp_func_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module46)
	MR_init_entry1(gcc__set_func_decl_public_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__set_func_decl_public_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__set_func_decl_public_3_0
	Decl = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("set_func_decl_public");
{
#line 1249 "gcc.m"

	TREE_PUBLIC((tree) Decl) = 1;
;}
#line 2423 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("set_func_decl_public");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module47)
	MR_init_entry1(gcc__build_field_decl_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_field_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_Word	Type;
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__build_field_decl_5_0
	Name = (MR_String) MR_r1;
	Type = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_field_decl");
{
#line 1262 "gcc.m"

	Decl = (MR_Word) merc_build_field_decl(Name, (tree) Type);
;}
#line 2458 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_field_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module48)
	MR_init_entry1(gcc__field_type_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__field_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__gcc__field_type_4_0
	Decl = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("field_type");
{
#line 1269 "gcc.m"

	Type = (MR_Word) TREE_TYPE((tree) Decl);
;}
#line 2492 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("field_type");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module49)
	MR_init_entry1(gcc__empty_field_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__empty_field_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__empty_field_list_3_0
	MR_OBTAIN_GLOBAL_LOCK("empty_field_list");
{
#line 1278 "gcc.m"

	Decl = (MR_Word) merc_empty_field_list();
;}
#line 2524 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("empty_field_list");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module50)
	MR_init_entry1(gcc__cons_field_list_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__cons_field_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decl;
	MR_Word	Decls0;
	MR_Word	Decls;
#define	MR_PROC_LABEL	mercury__gcc__cons_field_list_5_0
	Decl = MR_r1;
	Decls0 = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("cons_field_list");
{
#line 1285 "gcc.m"

	Decls = (MR_Word) merc_cons_field_list((tree) Decl, (tree) Decls0);
;}
#line 2560 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("cons_field_list");
	MR_r1 = Decls;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module51)
	MR_init_entry1(gcc__next_field_decl_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__next_field_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Decls;
	MR_Word	Decl;
	MR_Word	RemainingDecls;
#define	MR_PROC_LABEL	mercury__gcc__next_field_decl_5_0
	Decls = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("next_field_decl");
{
#line 1293 "gcc.m"

	assert((tree) Decls != NULL_TREE);
	Decl = (MR_Word) (tree) Decls;
	RemainingDecls = (MR_Word) TREE_CHAIN((tree) Decls);
;}
#line 2597 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("next_field_decl");
	MR_r1 = Decl;
	MR_r2 = RemainingDecls;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module52)
	MR_init_entry1(gcc__build_struct_type_decl_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_struct_type_decl_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_Word	FieldTypes;
	MR_Word	Decl;
#define	MR_PROC_LABEL	mercury__gcc__build_struct_type_decl_5_0
	Name = (MR_String) MR_r1;
	FieldTypes = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_struct_type_decl");
{
#line 1305 "gcc.m"

	Decl = (MR_Word) merc_build_struct_type_decl(Name, (tree) FieldTypes);
;}
#line 2634 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_struct_type_decl");
	MR_r1 = Decl;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module53)
	MR_init_entry1(fn__gcc__plus_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__plus_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__plus_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("plus_expr");
{
#line 1319 "gcc.m"

	Code = PLUS_EXPR;
;}
#line 2666 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("plus_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module54)
	MR_init_entry1(fn__gcc__minus_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__minus_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__minus_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("minus_expr");
{
#line 1325 "gcc.m"

	Code = MINUS_EXPR;
;}
#line 2698 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("minus_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module55)
	MR_init_entry1(fn__gcc__mult_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__mult_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__mult_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("mult_expr");
{
#line 1331 "gcc.m"

	Code = MULT_EXPR;
;}
#line 2730 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("mult_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module56)
	MR_init_entry1(fn__gcc__rdiv_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__rdiv_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__rdiv_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("rdiv_expr");
{
#line 1337 "gcc.m"

	Code = RDIV_EXPR;
;}
#line 2762 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("rdiv_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module57)
	MR_init_entry1(fn__gcc__trunc_div_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__trunc_div_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__trunc_div_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("trunc_div_expr");
{
#line 1343 "gcc.m"

	Code = TRUNC_DIV_EXPR;
;}
#line 2794 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("trunc_div_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module58)
	MR_init_entry1(fn__gcc__trunc_mod_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__trunc_mod_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__trunc_mod_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("trunc_mod_expr");
{
#line 1349 "gcc.m"

	Code = TRUNC_MOD_EXPR;
;}
#line 2826 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("trunc_mod_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module59)
	MR_init_entry1(fn__gcc__eq_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__eq_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__eq_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("eq_expr");
{
#line 1356 "gcc.m"

	Code = EQ_EXPR;
;}
#line 2858 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("eq_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module60)
	MR_init_entry1(fn__gcc__ne_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__ne_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__ne_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("ne_expr");
{
#line 1362 "gcc.m"

	Code = NE_EXPR;
;}
#line 2890 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("ne_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module61)
	MR_init_entry1(fn__gcc__lt_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__lt_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__lt_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("lt_expr");
{
#line 1368 "gcc.m"

	Code = LT_EXPR;
;}
#line 2922 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("lt_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module62)
	MR_init_entry1(fn__gcc__gt_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__gt_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__gt_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("gt_expr");
{
#line 1374 "gcc.m"

	Code = GT_EXPR;
;}
#line 2954 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gt_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module63)
	MR_init_entry1(fn__gcc__le_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__le_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__le_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("le_expr");
{
#line 1380 "gcc.m"

	Code = LE_EXPR;
;}
#line 2986 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("le_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module64)
	MR_init_entry1(fn__gcc__ge_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__ge_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__ge_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("ge_expr");
{
#line 1386 "gcc.m"

	Code = GE_EXPR;
;}
#line 3018 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("ge_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module65)
	MR_init_entry1(fn__gcc__truth_andif_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__truth_andif_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__truth_andif_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("truth_andif_expr");
{
#line 1393 "gcc.m"

	Code = TRUTH_ANDIF_EXPR;
;}
#line 3050 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("truth_andif_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module66)
	MR_init_entry1(fn__gcc__truth_orif_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__truth_orif_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__truth_orif_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("truth_orif_expr");
{
#line 1399 "gcc.m"

	Code = TRUTH_ORIF_EXPR;
;}
#line 3082 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("truth_orif_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module67)
	MR_init_entry1(fn__gcc__truth_not_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__truth_not_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__truth_not_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("truth_not_expr");
{
#line 1405 "gcc.m"

	Code = TRUTH_NOT_EXPR;
;}
#line 3114 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("truth_not_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module68)
	MR_init_entry1(fn__gcc__bit_ior_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__bit_ior_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__bit_ior_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("bit_ior_expr");
{
#line 1412 "gcc.m"

	Code = BIT_IOR_EXPR;
;}
#line 3146 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("bit_ior_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module69)
	MR_init_entry1(fn__gcc__bit_xor_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__bit_xor_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__bit_xor_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("bit_xor_expr");
{
#line 1418 "gcc.m"

	Code = BIT_XOR_EXPR;
;}
#line 3178 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("bit_xor_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module70)
	MR_init_entry1(fn__gcc__bit_and_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__bit_and_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__bit_and_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("bit_and_expr");
{
#line 1424 "gcc.m"

	Code = BIT_AND_EXPR;
;}
#line 3210 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("bit_and_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module71)
	MR_init_entry1(fn__gcc__bit_not_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__bit_not_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__bit_not_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("bit_not_expr");
{
#line 1430 "gcc.m"

	Code = BIT_NOT_EXPR;
;}
#line 3242 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("bit_not_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module72)
	MR_init_entry1(fn__gcc__lshift_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__lshift_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__lshift_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("lshift_expr");
{
#line 1437 "gcc.m"

	Code = LSHIFT_EXPR;
;}
#line 3274 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("lshift_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module73)
	MR_init_entry1(fn__gcc__rshift_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__rshift_expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__rshift_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("rshift_expr");
{
#line 1443 "gcc.m"

	Code = RSHIFT_EXPR;
;}
#line 3306 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("rshift_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module74)
	MR_init_entry1(fn__gcc__array_ref_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__array_ref_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__array_ref_0_0
	MR_OBTAIN_GLOBAL_LOCK("array_ref");
{
#line 1450 "gcc.m"

	Code = ARRAY_REF;
;}
#line 3338 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("array_ref");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module75)
	MR_init_entry1(gcc__expr_type_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__expr_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__gcc__expr_type_4_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("expr_type");
{
#line 1464 "gcc.m"

	Type = (MR_Word) TREE_TYPE((tree) Expr);
;}
#line 3372 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("expr_type");
	MR_r1 = Type;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module76)
	MR_init_entry1(gcc__build_int_2_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__build_int_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Low;
	MR_Integer	High;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_int_2_5_0
	Low = MR_r1;
	High = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_int_2");
{
#line 1486 "gcc.m"

	Expr = (MR_Word) build_int_2(Low, High);
;}
#line 3408 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_int_2");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module77)
	MR_init_entry1(gcc__build_int_4_0);
	MR_init_label2(gcc__build_int_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_int_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(gcc__build_int_4_0_i2);
	}
	MR_r2 = (MR_Integer) -1;
	MR_GOTO_LAB(gcc__build_int_4_0_i3);
MR_def_label(gcc__build_int_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
MR_def_label(gcc__build_int_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Low;
	MR_Integer	High;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_int_4_0
	Low = MR_r1;
	High = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_int_2");
{
#line 1486 "gcc.m"

	Expr = (MR_Word) build_int_2(Low, High);
;}
#line 3455 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_int_2");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module78)
	MR_init_entry1(gcc__build_real_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__build_real_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Type;
	MR_Float	Value;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_real_5_0
	Type = MR_r1;
	Value = MR_word_to_float(MR_r2);
	MR_OBTAIN_GLOBAL_LOCK("build_real");
{
#line 1501 "gcc.m"

	Expr = (MR_Word) merc_build_real((tree) Type, Value);
;}
#line 3491 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_real");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module79)
	MR_init_entry1(gcc__build_float_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_float_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__gcc__build_float_4_0
	MR_OBTAIN_GLOBAL_LOCK("double_type_node");
{
#line 975 "gcc.m"

	Type = (MR_Word) double_type_node;
;}
#line 3525 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("double_type_node");
	MR_tempr1 = Type;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Type;
	MR_Float	Value;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_float_4_0
	Type = MR_tempr1;
	Value = MR_word_to_float(MR_r1);
	MR_OBTAIN_GLOBAL_LOCK("build_real");
{
#line 1501 "gcc.m"

	Expr = (MR_Word) merc_build_real((tree) Type, Value);
;}
#line 3543 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_real");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module80)
	MR_init_entry1(gcc__build_string_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Len;
	MR_String	String;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_string_5_0
	Len = MR_r1;
	String = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_string");
{
#line 1511 "gcc.m"

	Expr = (MR_Word) merc_build_string(Len, String);
;}
#line 3580 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_string");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__length_1_0);

MR_BEGIN_MODULE(gcc_module81)
	MR_init_entry1(gcc__build_string_4_0);
	MR_init_label1(gcc__build_string_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		gcc__build_string_4_0_i2);
MR_def_label(gcc__build_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	{
	MR_Integer	Len;
	MR_String	String;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_string_4_0
	Len = MR_tempr1;
	String = (MR_String) MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("build_string");
{
#line 1511 "gcc.m"

	Expr = (MR_Word) merc_build_string(Len, String);
;}
#line 3628 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_string");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module82)
	MR_init_entry1(gcc__build_null_pointer_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_null_pointer_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	NullPointerExpr;
#define	MR_PROC_LABEL	mercury__gcc__build_null_pointer_3_0
	MR_OBTAIN_GLOBAL_LOCK("build_null_pointer");
{
#line 1518 "gcc.m"

	NullPointerExpr = (MR_Word) null_pointer_node;
;}
#line 3661 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_null_pointer");
	MR_r1 = NullPointerExpr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module83)
	MR_init_entry1(gcc__build_unop_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_unop_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Op;
	MR_Word	Type;
	MR_Word	Arg;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_unop_6_0
	Op = MR_r1;
	Type = MR_r2;
	Arg = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("build_unop");
{
#line 1530 "gcc.m"

	Expr = (MR_Word) fold(build1(Op, (tree) Type, (tree) Arg));
;}
#line 3699 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_unop");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module84)
	MR_init_entry1(gcc__build_binop_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_binop_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Op;
	MR_Word	Type;
	MR_Word	Arg1;
	MR_Word	Arg2;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_binop_7_0
	Op = MR_r1;
	Type = MR_r2;
	Arg1 = MR_r3;
	Arg2 = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("build_binop");
{
#line 1538 "gcc.m"

	Expr = (MR_Word) fold(build(Op, (tree) Type, (tree) Arg1, (tree) Arg2));
;}
#line 3739 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_binop");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module85)
	MR_init_entry1(fn__gcc__addr_expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__gcc__addr_expr_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__fn__gcc__addr_expr_0_0
	MR_OBTAIN_GLOBAL_LOCK("addr_expr");
{
#line 1596 "gcc.m"

	Code = ADDR_EXPR;
;}
#line 3771 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("addr_expr");
	MR_r1 = Code;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module86)
	MR_init_entry1(gcc__mark_addressable_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__mark_addressable_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__mark_addressable_3_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("mark_addressable");
{
#line 1604 "gcc.m"

	mark_addressable((tree) Expr);
;}
#line 3804 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("mark_addressable");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module87)
	MR_init_entry1(gcc__build_addr_expr_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_addr_expr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_addr_expr_4_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("mark_addressable");
{
#line 1604 "gcc.m"

	mark_addressable((tree) Expr);
;}
#line 3836 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("mark_addressable");
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Expr;
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__gcc__build_addr_expr_4_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("expr_type");
{
#line 1464 "gcc.m"

	Type = (MR_Word) TREE_TYPE((tree) Expr);
;}
#line 3853 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("expr_type");
	MR_tempr1 = Type;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Type;
	MR_Word	PtrType;
#define	MR_PROC_LABEL	mercury__gcc__build_addr_expr_4_0
	Type = MR_tempr1;
	MR_OBTAIN_GLOBAL_LOCK("build_pointer_type");
{
#line 1030 "gcc.m"

	PtrType = (MR_Word) build_pointer_type((tree) Type);
;}
#line 3869 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_pointer_type");
	MR_tempr1 = PtrType;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__gcc__build_addr_expr_4_0
	MR_OBTAIN_GLOBAL_LOCK("addr_expr");
{
#line 1596 "gcc.m"

	Code = ADDR_EXPR;
;}
#line 3883 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("addr_expr");
	MR_tempr2 = Code;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Op;
	MR_Word	Type;
	MR_Word	Arg;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_addr_expr_4_0
	Op = MR_tempr2;
	Type = MR_tempr1;
	Arg = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("build_unop");
{
#line 1530 "gcc.m"

	Expr = (MR_Word) fold(build1(Op, (tree) Type, (tree) Arg));
;}
#line 3903 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_unop");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module88)
	MR_init_entry1(gcc__build_pointer_deref_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_pointer_deref_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Pointer;
	MR_Word	DerefExpr;
#define	MR_PROC_LABEL	mercury__gcc__build_pointer_deref_4_0
	Pointer = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("build_pointer_deref");
{
#line 1545 "gcc.m"

	/* XXX should move to mercury-gcc.c */
	tree ptr = (tree) Pointer;
	tree ptr_type = TREE_TYPE (ptr);
	tree type = TREE_TYPE (ptr_type);
	DerefExpr = (MR_Word) build1 (INDIRECT_REF, type, ptr);
;}
#line 3942 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_pointer_deref");
	MR_r1 = DerefExpr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module89)
	MR_init_entry1(gcc__build_component_ref_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_component_ref_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ObjectExpr;
	MR_Word	FieldDecl;
	MR_Word	FieldExpr;
#define	MR_PROC_LABEL	mercury__gcc__build_component_ref_5_0
	ObjectExpr = MR_r1;
	FieldDecl = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_component_ref");
{
#line 1557 "gcc.m"

	/* XXX should move to mercury-gcc.c */
	tree field_type = TREE_TYPE ((tree) FieldDecl);
	FieldExpr = (MR_Word) build (COMPONENT_REF, field_type,
		(tree) ObjectExpr, (tree) FieldDecl);
;}
#line 3981 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_component_ref");
	MR_r1 = FieldExpr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module90)
	MR_init_entry1(gcc__convert_type_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__convert_type_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
	MR_Word	Type;
	MR_Word	ResultExpr;
#define	MR_PROC_LABEL	mercury__gcc__convert_type_5_0
	Expr = MR_r1;
	Type = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("convert_type");
{
#line 1567 "gcc.m"

	/*
	** XXX should we use convert() instead?
	** if not, should we expose the CONVERT_EXPR gcc__op
	** and just use gcc__build_binop?
	*/
	ResultExpr = (MR_Word) build1 (CONVERT_EXPR, (tree) Type, (tree) Expr);
;}
#line 4022 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("convert_type");
	MR_r1 = ResultExpr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module91)
	MR_init_entry1(fn__gcc__var_expr_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__gcc__var_expr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module92)
	MR_init_entry1(gcc__build_func_addr_expr_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_func_addr_expr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_func_addr_expr_4_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("mark_addressable");
{
#line 1604 "gcc.m"

	mark_addressable((tree) Expr);
;}
#line 4073 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("mark_addressable");
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	Expr;
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__gcc__build_func_addr_expr_4_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("expr_type");
{
#line 1464 "gcc.m"

	Type = (MR_Word) TREE_TYPE((tree) Expr);
;}
#line 4090 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("expr_type");
	MR_tempr1 = Type;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	Type;
	MR_Word	PtrType;
#define	MR_PROC_LABEL	mercury__gcc__build_func_addr_expr_4_0
	Type = MR_tempr1;
	MR_OBTAIN_GLOBAL_LOCK("build_pointer_type");
{
#line 1030 "gcc.m"

	PtrType = (MR_Word) build_pointer_type((tree) Type);
;}
#line 4106 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_pointer_type");
	MR_tempr1 = PtrType;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Code;
#define	MR_PROC_LABEL	mercury__gcc__build_func_addr_expr_4_0
	MR_OBTAIN_GLOBAL_LOCK("addr_expr");
{
#line 1596 "gcc.m"

	Code = ADDR_EXPR;
;}
#line 4120 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("addr_expr");
	MR_tempr2 = Code;
#undef	MR_PROC_LABEL
	}
	{
	MR_Integer	Op;
	MR_Word	Type;
	MR_Word	Arg;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_func_addr_expr_4_0
	Op = MR_tempr2;
	Type = MR_tempr1;
	Arg = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("build_unop");
{
#line 1530 "gcc.m"

	Expr = (MR_Word) fold(build1(Op, (tree) Type, (tree) Arg));
;}
#line 4140 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_unop");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module93)
	MR_init_entry1(gcc__empty_arg_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__empty_arg_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	ArgList;
#define	MR_PROC_LABEL	mercury__gcc__empty_arg_list_3_0
	MR_OBTAIN_GLOBAL_LOCK("empty_arg_list");
{
#line 1631 "gcc.m"

	ArgList = (MR_Word) merc_empty_arg_list();
;}
#line 4173 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("empty_arg_list");
	MR_r1 = ArgList;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module94)
	MR_init_entry1(gcc__cons_arg_list_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__cons_arg_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Arg;
	MR_Word	ArgList0;
	MR_Word	ArgList;
#define	MR_PROC_LABEL	mercury__gcc__cons_arg_list_5_0
	Arg = MR_r1;
	ArgList0 = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("cons_arg_list");
{
#line 1638 "gcc.m"

	ArgList = (MR_Word)
		merc_cons_arg_list((tree) Arg, (tree) ArgList0);
;}
#line 4210 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("cons_arg_list");
	MR_r1 = ArgList;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module95)
	MR_init_entry1(gcc__build_call_expr_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_call_expr_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Func;
	MR_Word	Args;
	MR_Word	IsTailCall;
	MR_Word	CallExpr;
#define	MR_PROC_LABEL	mercury__gcc__build_call_expr_6_0
	Func = MR_r1;
	Args = MR_r2;
	IsTailCall = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("build_call_expr");
{
#line 1647 "gcc.m"

	CallExpr = (MR_Word) merc_build_call_expr((tree) Func, (tree) Args,
		(int) IsTailCall);
;}
#line 4249 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_call_expr");
	MR_r1 = CallExpr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module96)
	MR_init_entry1(gcc__array_elem_initializer_4_0);
	MR_init_label2(gcc__array_elem_initializer_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__array_elem_initializer_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(gcc__array_elem_initializer_4_0_i2);
	}
	MR_r3 = (MR_Integer) -1;
	MR_GOTO_LAB(gcc__array_elem_initializer_4_0_i3);
MR_def_label(gcc__array_elem_initializer_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 0;
MR_def_label(gcc__array_elem_initializer_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Low;
	MR_Integer	High;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__array_elem_initializer_4_0
	Low = MR_r1;
	High = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("build_int_2");
{
#line 1486 "gcc.m"

	Expr = (MR_Word) build_int_2(Low, High);
;}
#line 4296 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_int_2");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module97)
	MR_init_entry1(gcc__struct_field_initializer_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__struct_field_initializer_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module98)
	MR_init_entry1(gcc__empty_init_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__empty_init_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	InitList;
#define	MR_PROC_LABEL	mercury__gcc__empty_init_list_3_0
	MR_OBTAIN_GLOBAL_LOCK("empty_init_list");
{
#line 1668 "gcc.m"

	InitList = (MR_Word) merc_empty_init_list();
;}
#line 4346 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("empty_init_list");
	MR_r1 = InitList;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module99)
	MR_init_entry1(gcc__cons_init_list_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__cons_init_list_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Elem;
	MR_Word	Init;
	MR_Word	InitList0;
	MR_Word	InitList;
#define	MR_PROC_LABEL	mercury__gcc__cons_init_list_6_0
	Elem = MR_r1;
	Init = MR_r2;
	InitList0 = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("cons_init_list");
{
#line 1676 "gcc.m"

	InitList = (MR_Word)
		merc_cons_init_list((tree) Elem, (tree) Init, (tree) InitList0);
;}
#line 4385 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("cons_init_list");
	MR_r1 = InitList;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module100)
	MR_init_entry1(gcc__build_initializer_expr_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_initializer_expr_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	InitList;
	MR_Word	Type;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__build_initializer_expr_5_0
	InitList = MR_r1;
	Type = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("build_initializer_expr");
{
#line 1685 "gcc.m"

	Expr = (MR_Word) build(CONSTRUCTOR, (tree) Type, NULL_TREE,
		(tree) InitList);
;}
#line 4422 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_initializer_expr");
	MR_r1 = Expr;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module101)
	MR_init_entry1(gcc__push_gc_context_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__push_gc_context_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Arg1;
	MR_Word	Arg2;
#define	MR_PROC_LABEL	mercury__gcc__push_gc_context_2_0
	MR_OBTAIN_GLOBAL_LOCK("push_gc_context");
{
#line 1696 "gcc.m"
 ggc_push_context();;}
#line 4453 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("push_gc_context");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module102)
	MR_init_entry1(gcc__pop_gc_context_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__pop_gc_context_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Arg1;
	MR_Word	Arg2;
#define	MR_PROC_LABEL	mercury__gcc__pop_gc_context_2_0
	MR_OBTAIN_GLOBAL_LOCK("pop_gc_context");
{
#line 1700 "gcc.m"
 ggc_pop_context();;}
#line 4483 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("pop_gc_context");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module103)
	MR_init_entry1(gcc__start_function_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__start_function_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	FuncDecl;
#define	MR_PROC_LABEL	mercury__gcc__start_function_3_0
	FuncDecl = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("start_function");
{
#line 1712 "gcc.m"

	merc_start_function((tree) FuncDecl);
;}
#line 4515 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("start_function");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module104)
	MR_init_entry1(gcc__end_function_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__end_function_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Arg1;
	MR_Word	Arg2;
#define	MR_PROC_LABEL	mercury__gcc__end_function_2_0
	MR_OBTAIN_GLOBAL_LOCK("end_function");
{
#line 1716 "gcc.m"
 merc_end_function();;}
#line 4545 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("end_function");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module105)
	MR_init_entry1(gcc__set_context_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__set_context_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	FileName;
	MR_Integer	LineNumber;
#define	MR_PROC_LABEL	mercury__gcc__set_context_4_0
	FileName = (MR_String) MR_r1;
	LineNumber = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("set_context");
{
#line 1723 "gcc.m"

	merc_set_context(FileName, LineNumber);
;}
#line 4579 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("set_context");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module106)
	MR_init_entry1(gcc__gen_line_note_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_line_note_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	FileName;
	MR_Integer	LineNumber;
#define	MR_PROC_LABEL	mercury__gcc__gen_line_note_4_0
	FileName = (MR_String) MR_r1;
	LineNumber = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("gen_line_note");
{
#line 1730 "gcc.m"

	emit_line_note(FileName, LineNumber);
;}
#line 4613 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_line_note");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module107)
	MR_init_entry1(gcc__gen_start_cond_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_start_cond_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Cond;
#define	MR_PROC_LABEL	mercury__gcc__gen_start_cond_3_0
	Cond = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("gen_start_cond");
{
#line 1766 "gcc.m"

	expand_start_cond((tree) Cond, 0);
;}
#line 4645 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_start_cond");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module108)
	MR_init_entry1(gcc__gen_start_else_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_start_else_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Arg1;
	MR_Word	Arg2;
#define	MR_PROC_LABEL	mercury__gcc__gen_start_else_2_0
	MR_OBTAIN_GLOBAL_LOCK("gen_start_else");
{
#line 1770 "gcc.m"
 expand_start_else();;}
#line 4675 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_start_else");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module109)
	MR_init_entry1(gcc__gen_end_cond_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_end_cond_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Arg1;
	MR_Word	Arg2;
#define	MR_PROC_LABEL	mercury__gcc__gen_end_cond_2_0
	MR_OBTAIN_GLOBAL_LOCK("gen_end_cond");
{
#line 1774 "gcc.m"
 expand_end_cond();;}
#line 4705 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_end_cond");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module110)
	MR_init_entry1(gcc__gen_start_switch_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_start_switch_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
	MR_Word	Type;
#define	MR_PROC_LABEL	mercury__gcc__gen_start_switch_4_0
	Expr = MR_r1;
	Type = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("gen_start_switch");
{
#line 1785 "gcc.m"

	expand_start_case(1, (tree) Expr, (tree) Type, "switch");
;}
#line 4739 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_start_switch");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module111)
	MR_init_entry1(gcc__gen_case_label_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_case_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Value;
	MR_Word	Label;
#define	MR_PROC_LABEL	mercury__gcc__gen_case_label_4_0
	Value = MR_r1;
	Label = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("gen_case_label");
{
#line 1792 "gcc.m"

	merc_gen_switch_case_label((tree) Value, (tree) Label);
;}
#line 4773 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_case_label");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module112)
	MR_init_entry1(gcc__gen_default_case_label_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_default_case_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Label;
#define	MR_PROC_LABEL	mercury__gcc__gen_default_case_label_3_0
	Label = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("gen_default_case_label");
{
#line 1799 "gcc.m"

	merc_gen_switch_case_label(NULL_TREE, (tree) Label);
;}
#line 4805 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_default_case_label");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module113)
	MR_init_entry1(gcc__gen_break_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_break_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__gcc__gen_break_2_0
	MR_OBTAIN_GLOBAL_LOCK("gen_break");
{
#line 1806 "gcc.m"

	int result = expand_exit_something();
	assert(result != 0);
;}
#line 4836 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_break");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module114)
	MR_init_entry1(gcc__gen_end_switch_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_end_switch_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__gen_end_switch_3_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("gen_end_switch");
{
#line 1814 "gcc.m"

	expand_end_case((tree) Expr);
;}
#line 4868 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_end_switch");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module115)
	MR_init_entry1(gcc__gen_start_loop_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_start_loop_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Loop;
#define	MR_PROC_LABEL	mercury__gcc__gen_start_loop_3_0
	MR_OBTAIN_GLOBAL_LOCK("gen_start_loop");
{
#line 1829 "gcc.m"

	Loop = (MR_Word) expand_start_loop(0);
;}
#line 4899 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_start_loop");
	MR_r1 = Loop;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module116)
	MR_init_entry1(gcc__gen_exit_loop_if_false_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_exit_loop_if_false_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Loop;
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__gen_exit_loop_if_false_4_0
	Loop = MR_r1;
	Expr = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("gen_exit_loop_if_false");
{
#line 1836 "gcc.m"

	int res = expand_exit_loop_if_false((struct nesting *) Loop,
			(tree) Expr);
	assert(res != 0);
;}
#line 4936 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_exit_loop_if_false");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module117)
	MR_init_entry1(gcc__gen_end_loop_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_end_loop_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__gcc__gen_end_loop_2_0
	MR_OBTAIN_GLOBAL_LOCK("gen_end_loop");
{
#line 1845 "gcc.m"

	expand_end_loop();
;}
#line 4966 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_end_loop");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module118)
	MR_init_entry1(gcc__gen_expr_stmt_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_expr_stmt_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__gen_expr_stmt_3_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("gen_expr_stmt");
{
#line 1856 "gcc.m"

	merc_gen_expr_stmt((tree) Expr);
;}
#line 4998 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_expr_stmt");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module119)
	MR_init_entry1(gcc__gen_return_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_return_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Expr;
#define	MR_PROC_LABEL	mercury__gcc__gen_return_3_0
	Expr = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("gen_return");
{
#line 1863 "gcc.m"

	merc_gen_return((tree) Expr);
;}
#line 5030 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_return");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module120)
	MR_init_entry1(gcc__gen_assign_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_assign_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	LHS;
	MR_Word	RHS;
#define	MR_PROC_LABEL	mercury__gcc__gen_assign_4_0
	LHS = MR_r1;
	RHS = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("gen_assign");
{
#line 1874 "gcc.m"

	merc_gen_assign((tree) LHS, (tree) RHS);
;}
#line 5064 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_assign");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module121)
	MR_init_entry1(gcc__build_label_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_label_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Name;
	MR_Word	Label;
#define	MR_PROC_LABEL	mercury__gcc__build_label_4_0
	Name = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("build_label");
{
#line 1887 "gcc.m"

	Label = (MR_Word) merc_build_label(Name);
;}
#line 5097 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_label");
	MR_r1 = Label;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module122)
	MR_init_entry1(gcc__build_unnamed_label_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__build_unnamed_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Label;
#define	MR_PROC_LABEL	mercury__gcc__build_unnamed_label_3_0
	MR_OBTAIN_GLOBAL_LOCK("build_unnamed_label");
{
#line 1894 "gcc.m"

	Label = (MR_Word) merc_build_label(NULL);
;}
#line 5129 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("build_unnamed_label");
	MR_r1 = Label;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module123)
	MR_init_entry1(gcc__gen_label_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_label_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Label;
#define	MR_PROC_LABEL	mercury__gcc__gen_label_3_0
	Label = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("gen_label");
{
#line 1901 "gcc.m"

	expand_label((tree) Label);
;}
#line 5162 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_label");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module124)
	MR_init_entry1(gcc__gen_goto_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__gcc__gen_goto_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Label;
#define	MR_PROC_LABEL	mercury__gcc__gen_goto_3_0
	Label = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("gen_goto");
{
#line 1908 "gcc.m"

	expand_goto((tree) Label);
;}
#line 5194 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("gen_goto");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module125)
	MR_init_entry1(gcc__call_frontend_callback_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(gcc__call_frontend_callback_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module126)
	MR_init_entry1(__Unify___gcc__arg_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__arg_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module127)
	MR_init_entry1(__Compare___gcc__arg_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__arg_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module128)
	MR_init_entry1(__Unify___gcc__expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module129)
	MR_init_entry1(__Compare___gcc__expr_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__expr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module130)
	MR_init_entry1(__Unify___gcc__field_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__field_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module131)
	MR_init_entry1(__Compare___gcc__field_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__field_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module132)
	MR_init_entry1(__Unify___gcc__field_decls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__field_decls_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module133)
	MR_init_entry1(__Compare___gcc__field_decls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__field_decls_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module134)
	MR_init_entry1(__Unify___gcc__field_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__field_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(gcc_module135)
	MR_init_entry1(__Compare___gcc__field_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__field_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(gcc_module136)
	MR_init_entry1(__Unify___gcc__frontend_callback_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__frontend_callback_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(gcc_module137)
	MR_init_entry1(__Compare___gcc__frontend_callback_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__frontend_callback_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module138)
	MR_init_entry1(__Unify___gcc__func_asm_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__func_asm_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module139)
	MR_init_entry1(__Compare___gcc__func_asm_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__func_asm_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module140)
	MR_init_entry1(__Unify___gcc__func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module141)
	MR_init_entry1(__Compare___gcc__func_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__func_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module142)
	MR_init_entry1(__Unify___gcc__func_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__func_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module143)
	MR_init_entry1(__Compare___gcc__func_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__func_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module144)
	MR_init_entry1(__Unify___gcc__init_elem_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__init_elem_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module145)
	MR_init_entry1(__Compare___gcc__init_elem_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__init_elem_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module146)
	MR_init_entry1(__Unify___gcc__init_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__init_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module147)
	MR_init_entry1(__Compare___gcc__init_list_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__init_list_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module148)
	MR_init_entry1(__Unify___gcc__label_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module149)
	MR_init_entry1(__Compare___gcc__label_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__label_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module150)
	MR_init_entry1(__Unify___gcc__label_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__label_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module151)
	MR_init_entry1(__Compare___gcc__label_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__label_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(gcc_module152)
	MR_init_entry1(__Unify___gcc__loop_0_0);
	MR_init_label1(__Unify___gcc__loop_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__loop_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___gcc__loop_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_def_label(__Unify___gcc__loop_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(gcc_module153)
	MR_init_entry1(__Compare___gcc__loop_0_0);
	MR_init_label2(__Compare___gcc__loop_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__loop_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___gcc__loop_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___gcc__loop_0_0_i2);
MR_def_label(__Compare___gcc__loop_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___gcc__loop_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module154)
	MR_init_entry1(__Unify___gcc__op_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(gcc_module155)
	MR_init_entry1(__Compare___gcc__op_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module156)
	MR_init_entry1(__Unify___gcc__param_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__param_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module157)
	MR_init_entry1(__Compare___gcc__param_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__param_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module158)
	MR_init_entry1(__Unify___gcc__param_decls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__param_decls_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module159)
	MR_init_entry1(__Compare___gcc__param_decls_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__param_decls_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module160)
	MR_init_entry1(__Unify___gcc__param_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__param_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module161)
	MR_init_entry1(__Compare___gcc__param_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__param_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module162)
	MR_init_entry1(__Unify___gcc__param_types_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__param_types_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module163)
	MR_init_entry1(__Compare___gcc__param_types_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__param_types_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module164)
	MR_init_entry1(__Unify___gcc__struct_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__struct_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module165)
	MR_init_entry1(__Compare___gcc__struct_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__struct_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module166)
	MR_init_entry1(__Unify___gcc__tree_0_0);
	MR_init_label1(__Unify___gcc__tree_0_0,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__tree_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___gcc__tree_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
MR_def_label(__Unify___gcc__tree_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module167)
	MR_init_entry1(__Compare___gcc__tree_0_0);
	MR_init_label2(__Compare___gcc__tree_0_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__tree_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___gcc__tree_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___gcc__tree_0_0_i2);
MR_def_label(__Compare___gcc__tree_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___gcc__tree_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module168)
	MR_init_entry1(__Unify___gcc__tree_code_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__tree_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module169)
	MR_init_entry1(__Compare___gcc__tree_code_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__tree_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module170)
	MR_init_entry1(__Unify___gcc__type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module171)
	MR_init_entry1(__Compare___gcc__type_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module172)
	MR_init_entry1(__Unify___gcc__type_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__type_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module173)
	MR_init_entry1(__Compare___gcc__type_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__type_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module174)
	MR_init_entry1(__Unify___gcc__var_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__var_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module175)
	MR_init_entry1(__Compare___gcc__var_decl_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__var_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___gcc__tree_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module176)
	MR_init_entry1(__Unify___gcc__var_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___gcc__var_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module177)
	MR_init_entry1(__Compare___gcc__var_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___gcc__var_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module178)
	MR_init_entry1(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_95_91_49_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_95_91_49_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_95_91_49_93_95_48_4_0));
	MR_np_tailcall_ent(do_call_closure_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(gcc_module179)
	MR_init_entry1(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_103_108_111_98_97_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_111_117_116_112_117_116_95_95_91_49_93_95_48_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_103_108_111_98_97_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_111_117_116_112_117_116_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	Output;
#define	MR_PROC_LABEL	mercury__f_103_99_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_103_108_111_98_97_108_95_102_114_111_110_116_101_110_100_95_99_97_108_108_98_97_99_107_95_111_117_116_112_117_116_95_95_91_49_93_95_48_3_0
	MR_OBTAIN_GLOBAL_LOCK("get_global_frontend_callback_output");
{
#line 920 "gcc.m"

	Output = MC_frontend_callback_output;
;}
#line 6282 "gcc.c"
	MR_RELEASE_GLOBAL_LOCK("get_global_frontend_callback_output");
	MR_r1 = Output;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 797 "gcc.m"


/* We use an `MC_' prefix for C code in the mercury/compiler directory. */
MR_Word MC_frontend_callback;
MR_Word MC_frontend_callback_output;
MR_Word MC_frontend_callback_type;

extern int toplev_main(int argc, char **argv);

void
MC_in_gcc(MR_Word *result)
{
	/* If we've already entered gcc, then gcc will have set progname. */
	*result = (progname != NULL);
}

void
MC_call_gcc_backend(MR_String all_args, MR_Integer *result)
{
	char *args;
	char **argv;
	int argc;
	const char *error_msg;
	static int num_calls = 0;

	/*
	** The gcc back-end cannot be called more than once.
	** If you try, it uses up all available memory.
	** So we need to abort nicely in that case.
	**
	** That case will happen if (a) there were nested
	** sub-modules or (b) the user specified more than
	** one module on the command line.
	*/
	num_calls++;
	if (num_calls > 1) {
		fprintf(stderr, "Sorry, not implemented: "
			"calling GCC back-end multiple times.\n"
			"This can occur if you are trying to "
			"compile more than one module\n"
			"at a time with `--target asm'.\n"
			"Please use separate sub-modules "
			"rather than nested sub-modules,\n"
			"i.e. put each sub-module in its own file, "
			"and don't specify more\n"
			"than one module on the command line "
			"(use Mmake instead).\n"
			"Or alternatively, just use `--target c'.\n");
		exit(EXIT_FAILURE);
	}

	error_msg = MR_make_argv(all_args, &args, &argv, &argc);
	if (error_msg) {
		fprintf(stderr,
			"Error parsing GCC back-end arguments:
%s
",
			error_msg);
		exit(EXIT_FAILURE);
	}

	merc_continue_frontend = &MC_continue_frontend;
	*result = toplev_main(argc, argv);

	/*
	** Reset GCC's progname after we return from toplev_main(),
	** so that MC_in_gcc() knows that we're no longer in GCC.
	*/
	progname = NULL;

	MR_GC_free(args);
	MR_GC_free(argv);
}

/*
** This is called from yyparse() in mercury/mercury-gcc.c
** in the gcc back-end.
*/
void
MC_continue_frontend(void)
{
	MC_call_frontend_callback(MC_frontend_callback_type,
		MC_frontend_callback, &MC_frontend_callback_output);
}

#line 6379 "gcc.c"

MR_declare_static(mercury__gcc__call_frontend_callback_4_0);

void
MC_call_frontend_callback(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
MC_call_frontend_callback(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__gcc__call_frontend_callback_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__gcc__call_frontend_callback_4_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__gcc_maybe_bunch_0(void)
{
	gcc_module0();
	gcc_module1();
	gcc_module2();
	gcc_module3();
	gcc_module4();
	gcc_module5();
	gcc_module6();
	gcc_module7();
	gcc_module8();
	gcc_module9();
	gcc_module10();
	gcc_module11();
	gcc_module12();
	gcc_module13();
	gcc_module14();
	gcc_module15();
	gcc_module16();
	gcc_module17();
	gcc_module18();
	gcc_module19();
	gcc_module20();
	gcc_module21();
	gcc_module22();
	gcc_module23();
	gcc_module24();
	gcc_module25();
	gcc_module26();
	gcc_module27();
	gcc_module28();
	gcc_module29();
	gcc_module30();
	gcc_module31();
	gcc_module32();
	gcc_module33();
	gcc_module34();
	gcc_module35();
	gcc_module36();
	gcc_module37();
	gcc_module38();
	gcc_module39();
}

static void mercury__gcc_maybe_bunch_1(void)
{
	gcc_module40();
	gcc_module41();
	gcc_module42();
	gcc_module43();
	gcc_module44();
	gcc_module45();
	gcc_module46();
	gcc_module47();
	gcc_module48();
	gcc_module49();
	gcc_module50();
	gcc_module51();
	gcc_module52();
	gcc_module53();
	gcc_module54();
	gcc_module55();
	gcc_module56();
	gcc_module57();
	gcc_module58();
	gcc_module59();
	gcc_module60();
	gcc_module61();
	gcc_module62();
	gcc_module63();
	gcc_module64();
	gcc_module65();
	gcc_module66();
	gcc_module67();
	gcc_module68();
	gcc_module69();
	gcc_module70();
	gcc_module71();
	gcc_module72();
	gcc_module73();
	gcc_module74();
	gcc_module75();
	gcc_module76();
	gcc_module77();
	gcc_module78();
	gcc_module79();
}

static void mercury__gcc_maybe_bunch_2(void)
{
	gcc_module80();
	gcc_module81();
	gcc_module82();
	gcc_module83();
	gcc_module84();
	gcc_module85();
	gcc_module86();
	gcc_module87();
	gcc_module88();
	gcc_module89();
	gcc_module90();
	gcc_module91();
	gcc_module92();
	gcc_module93();
	gcc_module94();
	gcc_module95();
	gcc_module96();
	gcc_module97();
	gcc_module98();
	gcc_module99();
	gcc_module100();
	gcc_module101();
	gcc_module102();
	gcc_module103();
	gcc_module104();
	gcc_module105();
	gcc_module106();
	gcc_module107();
	gcc_module108();
	gcc_module109();
	gcc_module110();
	gcc_module111();
	gcc_module112();
	gcc_module113();
	gcc_module114();
	gcc_module115();
	gcc_module116();
	gcc_module117();
	gcc_module118();
	gcc_module119();
}

static void mercury__gcc_maybe_bunch_3(void)
{
	gcc_module120();
	gcc_module121();
	gcc_module122();
	gcc_module123();
	gcc_module124();
	gcc_module125();
	gcc_module126();
	gcc_module127();
	gcc_module128();
	gcc_module129();
	gcc_module130();
	gcc_module131();
	gcc_module132();
	gcc_module133();
	gcc_module134();
	gcc_module135();
	gcc_module136();
	gcc_module137();
	gcc_module138();
	gcc_module139();
	gcc_module140();
	gcc_module141();
	gcc_module142();
	gcc_module143();
	gcc_module144();
	gcc_module145();
	gcc_module146();
	gcc_module147();
	gcc_module148();
	gcc_module149();
	gcc_module150();
	gcc_module151();
	gcc_module152();
	gcc_module153();
	gcc_module154();
	gcc_module155();
	gcc_module156();
	gcc_module157();
	gcc_module158();
	gcc_module159();
}

static void mercury__gcc_maybe_bunch_4(void)
{
	gcc_module160();
	gcc_module161();
	gcc_module162();
	gcc_module163();
	gcc_module164();
	gcc_module165();
	gcc_module166();
	gcc_module167();
	gcc_module168();
	gcc_module169();
	gcc_module170();
	gcc_module171();
	gcc_module172();
	gcc_module173();
	gcc_module174();
	gcc_module175();
	gcc_module176();
	gcc_module177();
	gcc_module178();
	gcc_module179();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__gcc__init(void);
void mercury__gcc__init_type_tables(void);
void mercury__gcc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__gcc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__gcc__init_complexity_procs(void);
#endif

void mercury__gcc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__gcc_maybe_bunch_0();
	mercury__gcc_maybe_bunch_1();
	mercury__gcc_maybe_bunch_2();
	mercury__gcc_maybe_bunch_3();
	mercury__gcc_maybe_bunch_4();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_var_name_0,
		gcc__var_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_var_decl_0,
		gcc__var_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_type_decl_0,
		gcc__type_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_type_0,
		gcc__type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_tree_code_0,
		gcc__tree_code_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_tree_0,
		gcc__tree_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_struct_name_0,
		gcc__struct_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_param_types_0,
		gcc__param_types_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_param_name_0,
		gcc__param_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_param_decls_0,
		gcc__param_decls_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_param_decl_0,
		gcc__param_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_op_0,
		gcc__op_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_loop_0,
		gcc__loop_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_label_name_0,
		gcc__label_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_label_0,
		gcc__label_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_init_list_0,
		gcc__init_list_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_init_elem_0,
		gcc__init_elem_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_func_name_0,
		gcc__func_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_func_decl_0,
		gcc__func_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_func_asm_name_0,
		gcc__func_asm_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_frontend_callback_1,
		gcc__frontend_callback_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_field_name_0,
		gcc__field_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_field_decls_0,
		gcc__field_decls_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_field_decl_0,
		gcc__field_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_expr_0,
		gcc__expr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_gcc__type_ctor_info_arg_list_0,
		gcc__arg_list_0_0);
	mercury__gcc__init_debugger();
}

void mercury__gcc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_var_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_var_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_type_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_tree_code_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_tree_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_struct_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_param_types_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_param_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_param_decls_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_param_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_op_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_loop_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_label_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_label_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_init_list_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_init_elem_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_func_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_func_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_func_asm_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_frontend_callback_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_field_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_field_decls_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_field_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_expr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_gcc__type_ctor_info_arg_list_0);
	}
}


void mercury__gcc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__gcc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__gcc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__gcc__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
