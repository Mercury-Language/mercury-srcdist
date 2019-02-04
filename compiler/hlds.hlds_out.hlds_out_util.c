/*
** Automatically generated from `hlds_out_util.m'
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
INIT mercury__hlds__hlds_out__hlds_out_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "hlds.hlds_out.hlds_out_util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "hlds.hlds_out.hlds_out_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.hlds_out.hlds_out_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.hlds_out.hlds_out_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.hlds_out.hlds_out_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 48 "hlds.hlds_out.hlds_out_util.c"
#line 49 "hlds.hlds_out.hlds_out_util.c"
#include "hlds.hlds_out.hlds_out_util.mh"

#line 52 "hlds.hlds_out.hlds_out_util.c"
#line 53 "hlds.hlds_out.hlds_out_util.c"
#ifndef HLDS__HLDS_OUT__HLDS_OUT_UTIL_DECL_GUARD
#define HLDS__HLDS_OUT__HLDS_OUT_UTIL_DECL_GUARD

#line 57 "hlds.hlds_out.hlds_out_util.c"
#line 58 "hlds.hlds_out.hlds_out_util.c"

#endif
#line 61 "hlds.hlds_out.hlds_out_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0,
	mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0,
	mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0;
MR_decl_label2(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0, 16,5)
MR_decl_label6(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0, 58,8,6,5,26,1)
MR_decl_label4(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0, 3,9,10,11)
MR_decl_label1(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0, 3)
MR_decl_label2(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0, 2,3)
MR_decl_label3(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0, 2,3,4)
MR_decl_label10(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0, 46,67,33,64,22,23,65,5,11,12)
MR_decl_label7(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0, 13,19,66,39,40,41,45)
MR_decl_label9(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0, 43,3,5,8,14,15,25,4,27)
MR_decl_label1(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0, 2)
MR_decl_label7(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0, 2,3,4,5,8,7,10)
MR_decl_label3(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0, 2,3,4)
MR_decl_label3(hlds__hlds_out__hlds_out_util__write_functor_6_0, 2,3,5)
MR_decl_label1(hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0, 2)
MR_decl_label3(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0, 2,3,5)
MR_decl_label3(hlds__hlds_out__hlds_out_util__write_indent_3_0, 11,4,13)
MR_decl_label3(hlds__hlds_out__hlds_out_util__write_intlist_3_0, 16,5,6)
MR_decl_label4(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0, 11,2,5,13)
MR_decl_label1(hlds__hlds_out__hlds_out_util__write_pred_id_4_0, 2)
MR_decl_label5(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0, 2,3,4,5,6)
MR_decl_label5(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0, 2,3,4,5,6)
MR_decl_label1(hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0, 2)
MR_decl_label1(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0, 2)
MR_decl_label4(hlds__hlds_out__hlds_out_util__write_var_mode_6_0, 2,3,4,5)
MR_decl_label1(hlds__hlds_out__hlds_out_util__write_var_modes_7_0, 2)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0, 2,10,12,13,14,17,15,19,20,21)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0, 22,24,25,6,7,4,32,34,35,37)
MR_decl_label7(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0, 38,42,46,41,39,48,50)
MR_decl_label9(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0, 33,12,13,14,15,7,9,5,3)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0, 69,95,14,16,15,20,21,22,96,57)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0, 73,3,4,98,7,8,9,10,11,102)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0, 28,29,30,31,32,34,36,38,40,101)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0, 43,44,45,46,47,100,50,51,52,53)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0, 54,99,60,61,62,63,64,65,66,68)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0, 91,31,33,76,97,3,4,5,6,7)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0, 8,9,10,11,12,13,14,16,17,18)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0, 20,21,22,23,24,27,28,38,39,40)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0, 41,42,43,44,45,47,50,52,55,58)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0, 59,60,61,62,63,64,65,67,68,69)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0, 70,71,72,73,74,79,80,81,82,83)
MR_decl_label4(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0, 84,85,86,88)
MR_decl_label2(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0, 2,3)
MR_decl_label2(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0, 2,3)
MR_decl_label4(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0, 2,3,4,5)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0, 2,4,6,7,8,9,10,35,36,37)
MR_decl_label10(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0, 40,41,22,23,24,25,26,12,13,16)
MR_decl_label5(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0, 17,14,3,47,48)
MR_decl_label4(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0, 2,3,4,5)
MR_decl_label4(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0, 2,3,4,5)
MR_decl_label5(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0, 2,3,4,6,7)
MR_decl_label4(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0, 2,3,5,6)
MR_decl_label3(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0, 2,3,4)
MR_decl_label2(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0, 3,6)
MR_decl_label4(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0, 4,6,10,1)
MR_decl_label6(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0, 3,2,5,9,13,37)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_type_ctor_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_class_id_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_pred_id_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__cast_type_to_string_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_functor_6_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_indent_3_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_var_modes_7_0)
MR_def_extern_entry(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_var_mode_6_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0)
MR_def_extern_entry(hlds__hlds_out__hlds_out_util__write_intlist_3_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0)
MR_def_extern_entry(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_out__hlds_out_util__is_first_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_out__hlds_out_util__is_first_0_0)
MR_def_extern_entry(__Unify___hlds__hlds_out__hlds_out_util__is_last_0_0)
MR_def_extern_entry(__Compare___hlds__hlds_out__hlds_out_util__is_last_0_0)
MR_decl_static(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const(")\'", 2),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
MR_string_const("{}", 2)
},
{
MR_string_const("type_info_cell_constructor", 26)
},
{
MR_string_const("typeclass_info_cell_constructor", 31)
},
};

static const struct mercury_type_2 mercury_common_2[9] =
{
{
4,
MR_string_const("In", 2)
},
{
4,
MR_string_const("in", 2)
},
{
3,
MR_string_const(":", 1)
},
{
4,
MR_string_const("argument", 8)
},
{
4,
MR_string_const("of clause head:", 15)
},
{
4,
MR_string_const("function result term of clause head:", 36)
},
{
4,
MR_string_const("of functor", 10)
},
{
4,
MR_string_const("list element", 12)
},
{
2,
MR_string_const("#", 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
static const struct mercury_type_3 mercury_common_3[11] =
{
{
{
MR_TAG_COMMON(3,2,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,2,1),
MR_tbmkword(0, 0)
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
MR_TAG_COMMON(3,2,2),
MR_TAG_COMMON(1,3,2)
}
},
{
{
MR_TAG_COMMON(3,2,4),
MR_TAG_COMMON(1,3,2)
}
},
{
{
MR_TAG_COMMON(3,2,5),
MR_TAG_COMMON(1,3,2)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
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
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
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
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,3,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_COMMON(3,10),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_INT_CTOR_ADDR,
MR_COMMON(3,7),
MR_BOOL_CTOR_ADDR,
MR_COMMON(6,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0_1;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(3,8),
MR_COMMON(3,9),
MR_BOOL_CTOR_ADDR,
MR_COMMON(6,3),
MR_STRING_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[4] =
{
{
MR_string_const("unsafe_type_cast", 16)
},
{
MR_string_const("unsafe_type_inst_cast", 21)
},
{
MR_string_const("equiv_type_cast", 15)
},
{
MR_string_const("exists_cast", 11)
},
};

static const struct mercury_type_1 mercury_vector_common_1_1[4] =
{
{
MR_string_const("unsafe_type_cast", 16)
},
{
MR_string_const("unsafe_type_inst_cast", 21)
},
{
MR_string_const("equiv_type_cast", 15)
},
{
MR_string_const("exists_cast", 11)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__mercury_to_mercury__type_ctor_info_merc_out_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__mercury_to_mercury__type_ctor_info_merc_out_info_0;

const MR_PseudoTypeInfo mercury_data_hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__mercury_to_mercury__type_ctor_info_merc_out_info_0
};

const MR_ConstString mercury_data_hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0[] = {
	"hoi_dump_hlds_options",
	"hoi_dump_hlds_pred_ids",
	"hoi_dump_hlds_pred_names",
	"hoi_mercury_to_mercury"
};

static const MR_DuFunctorDesc mercury_data_hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0 = {
	"hlds_out_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__hlds_out__hlds_out_util__field_types_hlds_out_info_0_0,
	mercury_data_hlds__hlds_out__hlds_out_util__field_names_hlds_out_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0

};

const MR_DuPtagLayout mercury_data_hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__hlds_out__hlds_out_util__du_stag_ordered_hlds_out_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_util__du_functor_desc_hlds_out_info_0_0
};

const MR_Integer mercury_data_hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0)),
	"hlds.hlds_out.hlds_out_util",
	"hlds_out_info",
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_util__du_name_ordered_hlds_out_info_0 },
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_util__du_ptag_ordered_hlds_out_info_0 },
	1,
	4,
	mercury_data_hlds__hlds_out__hlds_out_util__functor_number_map_hlds_out_info_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0 = {
	"is_first",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1 = {
	"is_not_first",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_0,
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_first_0_1
};

const MR_Integer mercury_data_hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_out__hlds_out_util__is_first_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_out__hlds_out_util__is_first_0_0)),
	"hlds.hlds_out.hlds_out_util",
	"is_first",
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_util__enum_name_ordered_is_first_0 },
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_util__enum_value_ordered_is_first_0 },
	2,
	4,
	mercury_data_hlds__hlds_out__hlds_out_util__functor_number_map_is_first_0
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0 = {
	"is_last",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1 = {
	"is_not_last",
	1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

const MR_EnumFunctorDescPtr mercury_data_hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0[] = {
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_0,
	&mercury_data_hlds__hlds_out__hlds_out_util__enum_functor_desc_is_last_0_1
};

const MR_Integer mercury_data_hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__hlds_out__hlds_out_util__is_last_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__hlds_out__hlds_out_util__is_last_0_0)),
	"hlds.hlds_out.hlds_out_util",
	"is_last",
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_util__enum_name_ordered_is_last_0 },
	{ (void *)mercury_data_hlds__hlds_out__hlds_out_util__enum_value_ordered_is_last_0 },
	2,
	4,
	mercury_data_hlds__hlds_out__hlds_out_util__functor_number_map_is_last_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_out.hlds_out_util",
"hlds.hlds_out.hlds_out_util",
"var_mode_to_string",
5,
0
},
"hlds.hlds_out.hlds_out_util",
"hlds_out_util.m",
827,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_util",
"hlds.hlds_out.hlds_out_util",
"write_constraint_proof",
6,
0
},
"hlds.hlds_out.hlds_out_util",
"hlds_out_util.m",
794,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_out.hlds_out_util",
"hlds.hlds_out.hlds_out_util",
"lambda_hlds_out_util_m_715",
3,
0
},
"hlds.hlds_out.hlds_out_util",
"hlds_out_util.m",
712,
"d1;c3;d1;c3;t;c1;"
};


MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__init_merc_out_info_for_hlds_dump_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module0)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
	MR_init_label4(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_hlds_out_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 131;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 128;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 129;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0_i4);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__init_merc_out_info_for_hlds_dump_1_0,
		fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0_i5);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__write_sym_name_and_arity_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module1)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_type_ctor_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_type_ctor_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_type_ctor'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_type_ctor_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module2)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_ctor_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module3)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_class_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_class_id_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_class_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_class_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(parse_tree__prog_out__write_sym_name_and_arity_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_origin_2_0);
MR_decl_entry(hlds__special_pred__special_pred_description_2_0);
MR_decl_entry(fn__parse_tree__prog_out__type_name_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(fn__varset__init_0_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);
MR_decl_entry(fn__parse_tree__prog_out__promise_to_string_1_0);
MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module4)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,2,4,6,7,8,9,10,35,36,37)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,40,41,22,23,24,25,26,12,13,16)
	MR_init_label5(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,17,14,3,47,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_id_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i4);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i6);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i7);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i9);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_origin_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i10);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i35) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i22) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i12) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i12));
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__special_pred__special_pred_description_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i36);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i37);
	}
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_string_const(" for type ", 10);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__type_name_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i40);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_string_const(" for type constructor ", 22);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__type_name_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i40);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i41);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,41)
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
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i23);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i24);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_np_call_localret_ent(fn__varset__init_0_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i25);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_type_list_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i26);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" for \140", 6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("instance method ", 16);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__append_list_1_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i13);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i14);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__promise_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i16);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\' declaration", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i17);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\140", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i47);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0_i48);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deleted predicate ", 18);
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

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module5)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
	MR_init_label1(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_pred_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_pred_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_id_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module6)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0);
	MR_init_label4(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_proc_id_pair_to_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0_i4);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0_i5);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_pair_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module7)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0);
	MR_init_label5(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_pred_proc_id_pair'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module8)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
	MR_init_label5(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,2,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_pred_proc_id'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module9)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0);
	MR_init_label4(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_proc_id_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0_i4);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" mode ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0_i5);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module10)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__cast_type_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__cast_type_to_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cast_type_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__cast_type_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__purity_prefix_to_string_1_0);
MR_decl_entry(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);
MR_decl_entry(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module11)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0);
	MR_init_label9(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,33,12,13,14,15,7,9,5,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_id_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i33) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i7) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i9) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i5));
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__purity_prefix_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i12);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i13);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" call", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i14);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("higher-order ", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0_i15);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r2, 1);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("event ", 6);
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 0);
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_1, (MR_Integer) MR_tempr1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__check_marker_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module12)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,2,10,12,13,14,17,15,19,20,21)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,22,24,25,6,7,4,32,34,35,37)
	MR_init_label7(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,38,42,46,41,39,48,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'call_arg_id_to_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i2);
	}
	MR_sv(3) = MR_r3;
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i38);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i6);
	}
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i10);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((MR_r2 != MR_tempr2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i10);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("the return value", 16);
	MR_r2 = (MR_Word) MR_string_const(" of ", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i12);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i13);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i14);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i15);
	}
	MR_r2 = (MR_Word) MR_string_const(" term", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i17);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("the ", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i22);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i19);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" of the called ", 15);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i20);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i21);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i22);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i24);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (i.e. ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i25);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i35);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i7);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i35);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i32);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 2);
	if ((MR_tempr2 != MR_r2)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i32);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("the return value", 16);
	MR_r2 = (MR_Word) MR_string_const(" of ", 4);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i34);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("argument ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i35);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" of ", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i37);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i42);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i41);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i46);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i39);
	}
	MR_r1 = MR_sv(1);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i50);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("call to ", 8);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i48);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__call_id_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0_i50);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module13)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0);
	MR_init_label1(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'start_in_message_to_pieces'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_def_label(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__init_markers_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module14)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0);
	MR_init_label10(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,46,67,33,64,22,23,65,5,11,12)
	MR_init_label7(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,13,19,66,39,40,41,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_main_context_to_pieces'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i46) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i64) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i65) MR_AND
		MR_LABEL_AP(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i66));
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i67);
	}
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i33);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,5);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i22);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i23);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i5);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i12);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__call_arg_id_to_string_3_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i13);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i19);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__start_in_message_to_pieces_3_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i39);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" unification:\n", 14);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i40);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("implicit ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i41);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0_i45);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__prim_data__is_std_lib_module_name_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module15)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0);
	MR_init_label6(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,58,8,6,5,26,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'contexts_describe_list_element'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	MR_r5 = MR_tfield(1, MR_tempr2, 1);
	if (MR_INT_NE(MR_r5,2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i6);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	if ((strcmp(MR_string_const("list", 4), (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r5, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
MR_def_label(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(3),1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i26);
	}
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i1);
	}
	MR_r1 = MR_r3;
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0_i58);
MR_def_label(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__contains_char_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(string__foldl_4_1);
MR_decl_entry(fn__term_io__escaped_string_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(fn__term_io__quoted_char_1_0);
MR_decl_entry(fn__string__float_to_string_1_0);
MR_decl_entry(fn__term_io__quoted_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module16)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,69,95,14,16,15,20,21,22,96,57)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,73,3,4,98,7,8,9,10,11,102)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,28,29,30,31,32,34,36,38,40,101)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,43,44,45,46,47,100,50,51,52,53)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,54,99,60,61,62,63,64,65,66,68)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_and_arity_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i69) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i95) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i96) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i73));
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<typeclass_info_cell_constructor>", 33);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i14);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(string__contains_char_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i16);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(string__foldl_4_1,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i20);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__term_io__escaped_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i21);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i22);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i57);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("{}/", 3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i98) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i38) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i34) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i4) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i40) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i36) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i99) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i3) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i68) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i100) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i101) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i102));
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<base_typeclass_info>", 21);
	MR_proceed();
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__term_io__quoted_char_1_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i7);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i9);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" proc ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i10);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i11);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<pred ", 6);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i28);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i29);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i30);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i31);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i32);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<deep_profiling_proc_layout ", 28);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__string__float_to_string_1_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(string__int_to_string_2_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(fn__term_io__quoted_string_1_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i43);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i44);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i45);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i46);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i47);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<table_io_decl ", 15);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i50);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i51);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i52);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i53);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i54);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<tabling_info ", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i60);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i61);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i62);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i63);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i64);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i65);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0_i66);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<type_ctor_info ", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("<type_info_cell_constructor>", 28);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module17)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0);
	MR_init_label4(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0,3,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'in_argument_to_pieces'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0_i9);
MR_def_label(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,
		hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,6);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_TAG_COMMON(3,2,3);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module18)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0);
	MR_init_label9(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,43,3,5,8,14,15,25,4,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_sub_contexts_to_pieces'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i3);
	}
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(5);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__contexts_describe_list_element_4_0,
		hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i4);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i8);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i14);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i15);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,2,8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(3,2,7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i25);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i43);
	}
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__in_argument_to_pieces_4_0,
		hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i27);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0_i43);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_unify_sub_context_0;
MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module19)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0);
	MR_init_label2(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_context_first_to_pieces'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, unify_sub_context);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,
		hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module20)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0);
	MR_init_label3(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unify_context_to_pieces'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, unify_sub_context);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__unify_main_context_to_pieces_5_0,
		hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__unify_sub_contexts_to_pieces_5_0,
		hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_util__unify_context_to_pieces_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_init_1_0);
MR_decl_entry(term__var_list_to_term_list_2_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module21)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0);
	MR_init_label2(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'functor_to_string_maybe_needs_quotes'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(term__context_init_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module22)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0);
	MR_init_label3(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_functor_maybe_needs_quotes'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module23)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_functor_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_functor_6_0);
	MR_init_label3(hlds__hlds_out__hlds_out_util__write_functor_6_0,2,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_functor'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_functor_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(term__context_init_1_0,
		hlds__hlds_out__hlds_out_util__write_functor_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_functor_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		hlds__hlds_out__hlds_out_util__write_functor_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__write_functor_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		hlds__hlds_out__hlds_out_util__write_functor_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_functor_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module24)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0);
	MR_init_label2(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'functor_to_string'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(term__context_init_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module25)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0);
	MR_init_label5(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0,2,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qualified_functor_to_string'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__var_list_to_term_list_2_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0_i4);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0_i6);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0_i7);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module26)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0);
	MR_init_label1(hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_qualified_functor'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0,
		hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_qualified_functor_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module27)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0);
	MR_init_label4(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0,2,3,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qualified_functor_with_term_args_to_string'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_bracketed_sym_name_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(term__context_init_1_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_nq_to_string_4_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0_i5);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0_i6);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
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


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module28)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0);
	MR_init_label1(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_qualified_functor_with_term_args'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__qualified_functor_with_term_args_to_string_5_0,
		hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_qualified_functor_with_term_args_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0);
MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module29)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0);
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,91,31,33,76,97,3,4,5,6,7)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,8,9,10,11,12,13,14,16,17,18)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,20,21,22,23,24,27,28,38,39,40)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,41,42,43,44,45,47,50,52,55,58)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,59,60,61,62,63,64,65,67,68,69)
	MR_init_label10(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,70,71,72,73,74,79,80,81,82,83)
	MR_init_label4(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,84,85,86,88)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'functor_cons_id_to_string'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i91) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i31) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i76) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i97));
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i33);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr4 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr4;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_r6, 0);
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i20) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i52) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i47) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i16) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i55) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i50) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i79) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i3) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i88) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i67) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i58) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i38));
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 4);
	MR_r2 = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i4);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i5);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i6);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i7);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("), ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i8);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i9);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i10);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i11);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("class_id(", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i12);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i13);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i14);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("base_typeclass_info(\"", 21);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__term_io__quoted_char_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i17);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i18);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i21);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i22);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i23);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i24);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i27);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__cons_id_dummy_type_ctor_0_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i28);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i91) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i31) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i76) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i97));
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i39);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i40);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i41);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i42);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("))", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i43);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (mode ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i44);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i45);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("deep_profiling_proc_layout(", 27);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\044", 1);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_to_string_4_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i59);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i60);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i61);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i62);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("))", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i63);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" (mode ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i64);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i65);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("table_io_decl(", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i68);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i69);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__pred_id_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i70);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i71);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i72);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i73);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i74);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("tabling_info_const(", 19);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i80);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i81);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i82);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\", ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i83);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i84);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\", \"", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i85);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0_i86);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_ctor_info(\"", 16);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module30)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0);
	MR_init_label1(hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_functor_cons_id'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_0,
		hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module31)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);
	MR_init_label1(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_cons_id_and_arity'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__cons_id_and_arity_to_string_1_0,
		hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_cons_id_and_arity_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module32)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_indent_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_indent_3_0);
	MR_init_label3(hlds__hlds_out__hlds_out_util__write_indent_3_0,11,4,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_indent'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_indent_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_util__write_indent_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__write_indent_3_0_i13);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_indent_3_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_util__write_indent_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__write_indent_3_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_util__write_indent_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module33)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0);
	MR_init_label3(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constraint_proofs'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Proofs: \n", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proofs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__string__join_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module34)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0);
	MR_init_label2(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_modes_to_string'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0_i6);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__string__join_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module35)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_var_modes_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_var_modes_7_0);
	MR_init_label1(hlds__hlds_out__hlds_out_util__write_var_modes_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_modes'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_var_modes_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_out__hlds_out_util__var_modes_to_string_5_0,
		hlds__hlds_out__hlds_out_util__write_var_modes_7_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_var_modes_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0);
MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module36)
	MR_init_entry1(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0);
	MR_init_label3(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_mode_to_string'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0_i2);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0,
		fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0_i3);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("::", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0_i4);
MR_def_label(fn__hlds__hlds_out__hlds_out_util__var_mode_to_string_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module37)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_var_mode_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_var_mode_6_0);
	MR_init_label4(hlds__hlds_out__hlds_out_util__write_var_mode_6_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_var_mode'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_var_mode_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r4, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_r4, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_var_to_string_3_0,
		hlds__hlds_out__hlds_out_util__write_var_mode_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_var_mode_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_mode_to_string_2_0,
		hlds__hlds_out__hlds_out_util__write_var_mode_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__write_var_mode_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("::", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__write_var_mode_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_util__write_var_mode_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_out__hlds_out_util__write_var_mode_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_var_mode_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module38)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_intlist_2_4_0);
	MR_init_label4(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0,11,2,5,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_intlist_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__write_int_3_0,
		hlds__hlds_out__hlds_out_util__write_intlist_2_4_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_intlist_2_4_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0_i11);
MR_def_label(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module39)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_intlist_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_intlist_3_0);
	MR_init_label3(hlds__hlds_out__hlds_out_util__write_intlist_3_0,16,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_intlist'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_out__hlds_out_util__write_intlist_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__write_intlist_3_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(hlds__hlds_out__hlds_out_util__write_intlist_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_intlist_3_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_intlist_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_intlist_2_4_0,
		hlds__hlds_out__hlds_out_util__write_intlist_3_0_i6);
MR_def_label(hlds__hlds_out__hlds_out_util__write_intlist_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module40)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0);
	MR_init_label7(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,2,3,4,5,8,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_constraint_proof'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_out__hlds_out_util__write_indent_3_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0_i2);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0_i3);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0_i4);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0_i7);
	}
	MR_sv(1) = MR_tfield(0, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const("apply instance decl #", 21);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0_i8);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const("super class of ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0_i10);
MR_def_label(hlds__hlds_out__hlds_out_util__write_constraint_proof_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__mercury_to_mercury__mercury_output_constraint_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___parse_tree__mercury_to_mercury__merc_out_info_0_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module41)
	MR_init_entry1(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0);
	MR_init_label4(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i10);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(5) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i4);
MR_def_label(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i6);
MR_def_label(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___parse_tree__mercury_to_mercury__merc_out_info_0_0);
MR_def_label(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___parse_tree__mercury_to_mercury__merc_out_info_0_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module42)
	MR_init_entry1(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0);
	MR_init_label6(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i2);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,2)
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
		__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i5);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i9);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i13);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___parse_tree__mercury_to_mercury__merc_out_info_0_0);
MR_def_label(__Compare___hlds__hlds_out__hlds_out_util__hlds_out_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module43)
	MR_init_entry1(__Unify___hlds__hlds_out__hlds_out_util__is_first_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_out__hlds_out_util__is_first_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_out__hlds_out_util__is_first_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module44)
	MR_init_entry1(__Compare___hlds__hlds_out__hlds_out_util__is_first_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_out__hlds_out_util__is_first_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_out__hlds_out_util__is_first_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module45)
	MR_init_entry1(__Unify___hlds__hlds_out__hlds_out_util__is_last_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__hlds_out__hlds_out_util__is_last_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__hlds_out__hlds_out_util__is_last_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module46)
	MR_init_entry1(__Compare___hlds__hlds_out__hlds_out_util__is_last_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__hlds_out__hlds_out_util__is_last_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__hlds_out__hlds_out_util__is_last_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_3_2);
MR_decl_entry(string__char_to_string_2_0);

MR_BEGIN_MODULE(hlds__hlds_out__hlds_out_util_module47)
	MR_init_entry1(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0);
	MR_init_label2(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0,16,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__cons_id_and_arity_to_string__715__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,42)) {
		MR_GOTO_LAB(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0_i16);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("star", 4);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(string__char_to_string_2_0,
		hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0_i5);
MR_def_label(hlds__hlds_out__hlds_out_util__IntroducedFrom__pred__cons_id_and_arity_to_string__715__1_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_out__hlds_out_util_maybe_bunch_0(void)
{
	hlds__hlds_out__hlds_out_util_module0();
	hlds__hlds_out__hlds_out_util_module1();
	hlds__hlds_out__hlds_out_util_module2();
	hlds__hlds_out__hlds_out_util_module3();
	hlds__hlds_out__hlds_out_util_module4();
	hlds__hlds_out__hlds_out_util_module5();
	hlds__hlds_out__hlds_out_util_module6();
	hlds__hlds_out__hlds_out_util_module7();
	hlds__hlds_out__hlds_out_util_module8();
	hlds__hlds_out__hlds_out_util_module9();
	hlds__hlds_out__hlds_out_util_module10();
	hlds__hlds_out__hlds_out_util_module11();
	hlds__hlds_out__hlds_out_util_module12();
	hlds__hlds_out__hlds_out_util_module13();
	hlds__hlds_out__hlds_out_util_module14();
	hlds__hlds_out__hlds_out_util_module15();
	hlds__hlds_out__hlds_out_util_module16();
	hlds__hlds_out__hlds_out_util_module17();
	hlds__hlds_out__hlds_out_util_module18();
	hlds__hlds_out__hlds_out_util_module19();
	hlds__hlds_out__hlds_out_util_module20();
	hlds__hlds_out__hlds_out_util_module21();
	hlds__hlds_out__hlds_out_util_module22();
	hlds__hlds_out__hlds_out_util_module23();
	hlds__hlds_out__hlds_out_util_module24();
	hlds__hlds_out__hlds_out_util_module25();
	hlds__hlds_out__hlds_out_util_module26();
	hlds__hlds_out__hlds_out_util_module27();
	hlds__hlds_out__hlds_out_util_module28();
	hlds__hlds_out__hlds_out_util_module29();
	hlds__hlds_out__hlds_out_util_module30();
	hlds__hlds_out__hlds_out_util_module31();
	hlds__hlds_out__hlds_out_util_module32();
	hlds__hlds_out__hlds_out_util_module33();
	hlds__hlds_out__hlds_out_util_module34();
	hlds__hlds_out__hlds_out_util_module35();
	hlds__hlds_out__hlds_out_util_module36();
	hlds__hlds_out__hlds_out_util_module37();
	hlds__hlds_out__hlds_out_util_module38();
	hlds__hlds_out__hlds_out_util_module39();
}

static void mercury__hlds__hlds_out__hlds_out_util_maybe_bunch_1(void)
{
	hlds__hlds_out__hlds_out_util_module40();
	hlds__hlds_out__hlds_out_util_module41();
	hlds__hlds_out__hlds_out_util_module42();
	hlds__hlds_out__hlds_out_util_module43();
	hlds__hlds_out__hlds_out_util_module44();
	hlds__hlds_out__hlds_out_util_module45();
	hlds__hlds_out__hlds_out_util_module46();
	hlds__hlds_out__hlds_out_util_module47();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_out__hlds_out_util__init(void);
void mercury__hlds__hlds_out__hlds_out_util__init_type_tables(void);
void mercury__hlds__hlds_out__hlds_out_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_out__hlds_out_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_out__hlds_out_util__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_out__hlds_out_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_out__hlds_out_util_maybe_bunch_0();
	mercury__hlds__hlds_out__hlds_out_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0,
		hlds__hlds_out__hlds_out_util__hlds_out_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0,
		hlds__hlds_out__hlds_out_util__is_first_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0,
		hlds__hlds_out__hlds_out_util__is_last_0_0);
	mercury__hlds__hlds_out__hlds_out_util__init_debugger();
}

void mercury__hlds__hlds_out__hlds_out_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_first_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__hlds_out__hlds_out_util__type_ctor_info_is_last_0);
	}
}


void mercury__hlds__hlds_out__hlds_out_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_out__hlds_out_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__hlds_out__hlds_out_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_out__hlds_out_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
