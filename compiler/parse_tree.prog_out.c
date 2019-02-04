/*
** Automatically generated from `prog_out.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__parse_tree__prog_out__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "parse_tree.prog_out.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "parse_tree.prog_out.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_out.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_out.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "parse_tree.prog_out.c"
#line 44 "parse_tree.prog_out.c"
#include "parse_tree.prog_out.mh"

#line 47 "parse_tree.prog_out.c"
#line 48 "parse_tree.prog_out.c"
#ifndef PARSE_TREE__PROG_OUT_DECL_GUARD
#define PARSE_TREE__PROG_OUT_DECL_GUARD

#line 52 "parse_tree.prog_out.c"
#line 53 "parse_tree.prog_out.c"

#endif
#line 56 "parse_tree.prog_out.c"

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
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_2[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];
MR_decl_label4(parse_tree__prog_out__builtin_type_to_string_2_1, 3,4,5,1)
MR_decl_label3(parse_tree__prog_out__context_to_string_2_0, 2,3,4)
MR_decl_label1(parse_tree__prog_out__maybe_flush_output_3_0, 12)
MR_decl_label1(parse_tree__prog_out__maybe_report_stats_3_0, 12)
MR_decl_label1(parse_tree__prog_out__maybe_write_string_4_0, 12)
MR_decl_label2(parse_tree__prog_out__purity_name_2_0, 3,4)
MR_decl_label3(parse_tree__prog_out__purity_name_2_1, 3,4,1)
MR_decl_label3(parse_tree__prog_out__report_error_3_0, 2,3,4)
MR_decl_label5(parse_tree__prog_out__report_error_4_0, 2,3,4,5,6)
MR_decl_label1(parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_0, 2)
MR_decl_label1(parse_tree__prog_out__write_context_3_0, 2)
MR_decl_label8(parse_tree__prog_out__write_messages_3_0, 52,6,4,9,10,16,17,18)
MR_decl_label1(parse_tree__prog_out__write_messages_3_0, 54)
MR_decl_label1(parse_tree__prog_out__write_pred_or_func_3_0, 3)
MR_decl_label2(parse_tree__prog_out__write_purity_3_0, 3,4)
MR_decl_label4(parse_tree__prog_out__write_purity_prefix_3_0, 5,6,7,23)
MR_decl_label2(parse_tree__prog_out__write_quoted_sym_name_3_0, 2,3)
MR_decl_label1(parse_tree__prog_out__write_simple_call_id_3_0, 2)
MR_decl_label1(parse_tree__prog_out__write_simple_call_id_4_0, 2)
MR_decl_label1(parse_tree__prog_out__write_simple_call_id_5_0, 2)
MR_decl_label8(parse_tree__prog_out__write_string_list_3_0, 28,5,7,8,11,12,10,32)
MR_decl_label3(parse_tree__prog_out__write_sym_name_3_0, 16,5,6)
MR_decl_label2(parse_tree__prog_out__write_sym_name_and_arity_3_0, 2,3)
MR_decl_label2(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0, 3,4)
MR_decl_label6(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0, 10,12,6,8,9,4)
MR_decl_label8(fn__parse_tree__prog_out__eval_method_to_string_1_0, 16,17,12,14,15,59,6,5)
MR_decl_label3(fn__parse_tree__prog_out__eval_method_to_string_1_0, 8,9,10)
MR_decl_label3(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0, 3,5,6)
MR_decl_label1(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0, 3)
MR_decl_label1(fn__parse_tree__prog_out__pred_or_func_to_str_1_0, 3)
MR_decl_label4(fn__parse_tree__prog_out__promise_to_string_1_1, 3,4,5,1)
MR_decl_label3(fn__parse_tree__prog_out__promise_to_string_1_2, 2,3,4)
MR_decl_label3(fn__parse_tree__prog_out__purity_prefix_to_string_1_0, 2,5,6)
MR_decl_label8(fn__parse_tree__prog_out__simple_call_id_to_string_3_0, 2,4,3,7,6,10,9,13)
MR_decl_label2(fn__parse_tree__prog_out__simple_call_id_to_string_3_0, 12,15)
MR_decl_label2(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0, 2,3)
MR_decl_label4(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0, 17,5,6,7)
MR_def_extern_entry(parse_tree__prog_out__maybe_report_stats_3_0)
MR_def_extern_entry(parse_tree__prog_out__maybe_write_string_4_0)
MR_def_extern_entry(parse_tree__prog_out__maybe_flush_output_3_0)
MR_def_extern_entry(parse_tree__prog_out__report_error_3_0)
MR_def_extern_entry(parse_tree__prog_out__report_error_4_0)
MR_def_extern_entry(parse_tree__prog_out__context_to_string_2_0)
MR_def_extern_entry(parse_tree__prog_out__write_context_3_0)
MR_def_extern_entry(parse_tree__prog_out__write_messages_3_0)
MR_def_extern_entry(parse_tree__prog_out__write_sym_name_3_0)
MR_def_extern_entry(parse_tree__prog_out__write_module_spec_3_0)
MR_def_extern_entry(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0)
MR_def_extern_entry(fn__parse_tree__prog_out__module_spec_to_escaped_string_1_0)
MR_def_extern_entry(parse_tree__prog_out__write_sym_name_and_arity_3_0)
MR_def_extern_entry(parse_tree__prog_out__write_quoted_sym_name_3_0)
MR_def_extern_entry(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0)
MR_def_extern_entry(parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_0)
MR_def_extern_entry(fn__parse_tree__prog_out__promise_to_string_1_0)
MR_def_extern_entry(fn__parse_tree__prog_out__promise_to_string_1_1)
MR_def_extern_entry(fn__parse_tree__prog_out__promise_to_string_1_2)
MR_def_extern_entry(fn__parse_tree__prog_out__simple_call_id_to_string_3_0)
MR_def_extern_entry(parse_tree__prog_out__write_simple_call_id_3_0)
MR_def_extern_entry(fn__parse_tree__prog_out__simple_call_id_to_string_1_0)
MR_def_extern_entry(parse_tree__prog_out__write_simple_call_id_4_0)
MR_def_extern_entry(fn__parse_tree__prog_out__simple_call_id_to_string_2_0)
MR_def_extern_entry(parse_tree__prog_out__write_simple_call_id_5_0)
MR_def_extern_entry(parse_tree__prog_out__write_string_list_3_0)
MR_def_extern_entry(parse_tree__prog_out__write_promise_type_3_0)
MR_def_extern_entry(parse_tree__prog_out__builtin_type_to_string_2_0)
MR_def_extern_entry(parse_tree__prog_out__builtin_type_to_string_2_1)
MR_def_extern_entry(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0)
MR_def_extern_entry(parse_tree__prog_out__write_pred_or_func_3_0)
MR_def_extern_entry(fn__parse_tree__prog_out__pred_or_func_to_str_1_0)
MR_def_extern_entry(parse_tree__prog_out__purity_name_2_0)
MR_def_extern_entry(parse_tree__prog_out__purity_name_2_1)
MR_def_extern_entry(parse_tree__prog_out__write_purity_3_0)
MR_def_extern_entry(parse_tree__prog_out__write_purity_prefix_3_0)
MR_def_extern_entry(fn__parse_tree__prog_out__purity_prefix_to_string_1_0)
MR_def_extern_entry(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0)
MR_def_extern_entry(fn__parse_tree__prog_out__eval_method_to_string_1_0)
MR_def_extern_entry(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0)
MR_def_extern_entry(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
MR_string_const("promise", 7)
},
{
MR_string_const("promise_exclusive", 17)
},
{
MR_string_const("promise_exhaustive", 18)
},
{
MR_string_const("promise_exclusive_exhaustive", 28)
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
3,
MR_string_const("declaration", 11)
},
};

static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
MR_TAG_COMMON(3,1,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,0,0),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(2,0,1),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(2,0,2),
MR_TAG_COMMON(1,2,0)
}
},
{
{
MR_TAG_COMMON(2,0,3),
MR_TAG_COMMON(1,2,0)
}
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[4] =
{
{
MR_string_const("promise_exclusive", 17)
},
{
MR_string_const("promise_exhaustive", 18)
},
{
MR_string_const("promise_exclusive_exhaustive", 28)
},
{
MR_string_const("promise", 7)
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[4] =
{
{
MR_string_const("promise_exclusive", 17)
},
{
MR_string_const("promise_exhaustive", 18)
},
{
MR_string_const("promise_exclusive_exhaustive", 28)
},
{
MR_string_const("promise", 7)
},
};

static const struct mercury_type_0 mercury_vector_common_0_2[4] =
{
{
MR_string_const("int", 3)
},
{
MR_string_const("float", 5)
},
{
MR_string_const("string", 6)
},
{
MR_string_const("character", 9)
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[4] =
{
{
3,
MR_string_const("promise", 7)
},
{
0,
MR_string_const("promise_exclusive", 17)
},
{
1,
MR_string_const("promise_exhaustive", 18)
},
{
2,
MR_string_const("promise_exclusive_exhaustive", 28)
},
};

MR_decl_entry(io__report_stats_2_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module0)
	MR_init_entry1(parse_tree__prog_out__maybe_report_stats_3_0);
	MR_init_label1(parse_tree__prog_out__maybe_report_stats_3_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__maybe_report_stats_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__maybe_report_stats_3_0_i12);
	}
	MR_np_tailcall_ent(io__report_stats_2_0);
MR_def_label(parse_tree__prog_out__maybe_report_stats_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module1)
	MR_init_entry1(parse_tree__prog_out__maybe_write_string_4_0);
	MR_init_label1(parse_tree__prog_out__maybe_write_string_4_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__maybe_write_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__maybe_write_string_4_0_i12);
	}
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_out__maybe_write_string_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module2)
	MR_init_entry1(parse_tree__prog_out__maybe_flush_output_3_0);
	MR_init_label1(parse_tree__prog_out__maybe_flush_output_3_0,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__maybe_flush_output_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__maybe_flush_output_3_0_i12);
	}
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(parse_tree__prog_out__maybe_flush_output_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module3)
	MR_init_entry1(parse_tree__prog_out__report_error_3_0);
	MR_init_label3(parse_tree__prog_out__report_error_3_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__report_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__report_error_3_0_i2);
MR_def_label(parse_tree__prog_out__report_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__report_error_3_0_i3);
MR_def_label(parse_tree__prog_out__report_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__report_error_3_0_i4);
MR_def_label(parse_tree__prog_out__report_error_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_output_stream_4_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module4)
	MR_init_entry1(parse_tree__prog_out__report_error_4_0);
	MR_init_label5(parse_tree__prog_out__report_error_4_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__report_error_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		parse_tree__prog_out__report_error_4_0_i2);
MR_def_label(parse_tree__prog_out__report_error_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__report_error_4_0_i3);
MR_def_label(parse_tree__prog_out__report_error_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__report_error_4_0_i4);
MR_def_label(parse_tree__prog_out__report_error_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__report_error_4_0_i5);
MR_def_label(parse_tree__prog_out__report_error_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		parse_tree__prog_out__report_error_4_0_i6);
MR_def_label(parse_tree__prog_out__report_error_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module5)
	MR_init_entry1(parse_tree__prog_out__context_to_string_2_0);
	MR_init_label3(parse_tree__prog_out__context_to_string_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__context_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		parse_tree__prog_out__context_to_string_2_0_i2);
MR_def_label(parse_tree__prog_out__context_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		parse_tree__prog_out__context_to_string_2_0_i3);
MR_def_label(parse_tree__prog_out__context_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(1), (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__context_to_string_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(2);
MR_def_label(parse_tree__prog_out__context_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%s:%03d: ", 9);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__format_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module6)
	MR_init_entry1(parse_tree__prog_out__write_context_3_0);
	MR_init_label1(parse_tree__prog_out__write_context_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_context_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		parse_tree__prog_out__write_context_3_0_i2);
MR_def_label(parse_tree__prog_out__write_context_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(term_io__write_term_nl_4_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module7)
	MR_init_entry1(parse_tree__prog_out__write_messages_3_0);
	MR_init_label8(parse_tree__prog_out__write_messages_3_0,52,6,4,9,10,16,17,18)
	MR_init_label1(parse_tree__prog_out__write_messages_3_0,54)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_messages_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_out__write_messages_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_messages_3_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_messages_3_0_i4);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_out__context_to_string_2_0,
		parse_tree__prog_out__write_messages_3_0_i6);
MR_def_label(parse_tree__prog_out__write_messages_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_messages_3_0_i4);
MR_def_label(parse_tree__prog_out__write_messages_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_messages_3_0_i9);
MR_def_label(parse_tree__prog_out__write_messages_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_messages_3_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_messages_3_0_i10);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_messages_3_0_i10);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_tempr2, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_messages_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_messages_3_0_i18);
MR_def_label(parse_tree__prog_out__write_messages_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_messages_3_0_i16);
MR_def_label(parse_tree__prog_out__write_messages_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(varset__init_1_0,
		parse_tree__prog_out__write_messages_3_0_i17);
MR_def_label(parse_tree__prog_out__write_messages_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_term_nl_4_0,
		parse_tree__prog_out__write_messages_3_0_i18);
MR_def_label(parse_tree__prog_out__write_messages_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(parse_tree__prog_out__write_messages_3_0_i52);
MR_def_label(parse_tree__prog_out__write_messages_3_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term_io__write_escaped_string_3_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module8)
	MR_init_entry1(parse_tree__prog_out__write_sym_name_3_0);
	MR_init_label3(parse_tree__prog_out__write_sym_name_3_0,16,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_sym_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_sym_name_3_0_i16);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(term_io__write_escaped_string_3_0);
MR_def_label(parse_tree__prog_out__write_sym_name_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_out__write_module_spec_3_0,
		parse_tree__prog_out__write_sym_name_3_0_i5);
MR_def_label(parse_tree__prog_out__write_sym_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_sym_name_3_0_i6);
MR_def_label(parse_tree__prog_out__write_sym_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(term_io__write_escaped_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module9)
	MR_init_entry1(parse_tree__prog_out__write_module_spec_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_module_spec_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(parse_tree__prog_out__write_sym_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term_io__escaped_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module10)
	MR_init_entry1(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0);
	MR_init_label4(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,17,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0_i17);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__term_io__escaped_string_1_0);
MR_def_label(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__parse_tree__prog_out__module_spec_to_escaped_string_1_0,
		fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0_i5);
MR_def_label(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__term_io__escaped_string_1_0,
		fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0_i6);
MR_def_label(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0_i7);
MR_def_label(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module11)
	MR_init_entry1(fn__parse_tree__prog_out__module_spec_to_escaped_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__module_spec_to_escaped_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__parse_tree__prog_out__sym_name_to_escaped_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module12)
	MR_init_entry1(parse_tree__prog_out__write_sym_name_and_arity_3_0);
	MR_init_label2(parse_tree__prog_out__write_sym_name_and_arity_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_sym_name_and_arity_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		parse_tree__prog_out__write_sym_name_and_arity_3_0_i2);
MR_def_label(parse_tree__prog_out__write_sym_name_and_arity_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_sym_name_and_arity_3_0_i3);
MR_def_label(parse_tree__prog_out__write_sym_name_and_arity_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module13)
	MR_init_entry1(parse_tree__prog_out__write_quoted_sym_name_3_0);
	MR_init_label2(parse_tree__prog_out__write_quoted_sym_name_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_quoted_sym_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_quoted_sym_name_3_0_i2);
MR_def_label(parse_tree__prog_out__write_quoted_sym_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		parse_tree__prog_out__write_quoted_sym_name_3_0_i3);
MR_def_label(parse_tree__prog_out__write_quoted_sym_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module14)
	MR_init_entry1(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0);
	MR_init_label2(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0_i2);
MR_def_label(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0_i3);
MR_def_label(fn__parse_tree__prog_out__sym_name_and_arity_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("/", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__adjust_func_arity_3_1);

MR_BEGIN_MODULE(parse_tree__prog_out_module15)
	MR_init_entry1(parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_0);
	MR_init_label1(parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_0_i2);
MR_def_label(parse_tree__prog_out__simple_call_id_to_sym_name_and_arity_2_0,2)
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


MR_BEGIN_MODULE(parse_tree__prog_out_module16)
	MR_init_entry1(fn__parse_tree__prog_out__promise_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__promise_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module17)
	MR_init_entry1(fn__parse_tree__prog_out__promise_to_string_1_1);
	MR_init_label4(fn__parse_tree__prog_out__promise_to_string_1_1,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__promise_to_string_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("promise", 7)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__promise_to_string_1_1_i3);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__promise_to_string_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("promise_exclusive", 17)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__promise_to_string_1_1_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__promise_to_string_1_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("promise_exclusive_exhaustive", 28)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__promise_to_string_1_1_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__promise_to_string_1_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("promise_exhaustive", 18)) != 0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__promise_to_string_1_1_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__promise_to_string_1_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(parse_tree__prog_out_module18)
	MR_init_entry1(fn__parse_tree__prog_out__promise_to_string_1_2);
	MR_init_label3(fn__parse_tree__prog_out__promise_to_string_1_2,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__promise_to_string_1_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("func parse_tree.prog_out.promise_to_string/2-2", 1,
		MR_LABEL_AP(fn__parse_tree__prog_out__promise_to_string_1_2_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) 0);
	MR_fv(1) = (MR_Integer) 2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
MR_def_label(fn__parse_tree__prog_out__promise_to_string_1_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_fv(1);
	if (MR_INT_GE(MR_r3,6)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__promise_to_string_1_2_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 2);
	MR_GOTO_LAB(fn__parse_tree__prog_out__promise_to_string_1_2_i4);
MR_def_label(fn__parse_tree__prog_out__promise_to_string_1_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(fn__parse_tree__prog_out__promise_to_string_1_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, MR_r3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__unqualify_name_1_0);
MR_decl_entry(string__prefix_2_0);
MR_decl_entry(fn__parse_tree__error_util__error_pieces_to_string_1_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module19)
	MR_init_entry1(fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
	MR_init_label8(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,2,4,3,7,6,10,9,13)
	MR_init_label2(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,12,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__unqualify_name_1_0,
		fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i2);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("promise__", 9);
	MR_np_call_localret_ent(string__prefix_2_0,
		fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i4);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__parse_tree__error_util__error_pieces_to_string_1_0);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("promise_exclusive__", 19);
	MR_np_call_localret_ent(string__prefix_2_0,
		fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i7);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__parse_tree__error_util__error_pieces_to_string_1_0);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("promise_exhaustive__", 20);
	MR_np_call_localret_ent(string__prefix_2_0,
		fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i10);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__parse_tree__error_util__error_pieces_to_string_1_0);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("promise_exclusive_exhaustive__", 30);
	MR_np_call_localret_ent(string__prefix_2_0,
		fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i13);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__parse_tree__error_util__error_pieces_to_string_1_0);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(parse_tree__prog_util__adjust_func_arity_3_1,
		fn__parse_tree__prog_out__simple_call_id_to_string_3_0_i15);
MR_def_label(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__parse_tree__error_util__error_pieces_to_string_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module20)
	MR_init_entry1(parse_tree__prog_out__write_simple_call_id_3_0);
	MR_init_label1(parse_tree__prog_out__write_simple_call_id_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_simple_call_id_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,
		parse_tree__prog_out__write_simple_call_id_3_0_i2);
MR_def_label(parse_tree__prog_out__write_simple_call_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module21)
	MR_init_entry1(fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__simple_call_id_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module22)
	MR_init_entry1(parse_tree__prog_out__write_simple_call_id_4_0);
	MR_init_label1(parse_tree__prog_out__write_simple_call_id_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_simple_call_id_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,
		parse_tree__prog_out__write_simple_call_id_4_0_i2);
MR_def_label(parse_tree__prog_out__write_simple_call_id_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module23)
	MR_init_entry1(fn__parse_tree__prog_out__simple_call_id_to_string_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__simple_call_id_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module24)
	MR_init_entry1(parse_tree__prog_out__write_simple_call_id_5_0);
	MR_init_label1(parse_tree__prog_out__write_simple_call_id_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_simple_call_id_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_out__simple_call_id_to_string_3_0,
		parse_tree__prog_out__write_simple_call_id_5_0_i2);
MR_def_label(parse_tree__prog_out__write_simple_call_id_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module25)
	MR_init_entry1(parse_tree__prog_out__write_string_list_3_0);
	MR_init_label8(parse_tree__prog_out__write_string_list_3_0,28,5,7,8,11,12,10,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_string_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(parse_tree__prog_out__write_string_list_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_string_list_3_0_i32);
	}
	MR_r3 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_string_list_3_0_i5);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_out__write_string_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_string_list_3_0_i7);
MR_def_label(parse_tree__prog_out__write_string_list_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_string_list_3_0_i8);
MR_def_label(parse_tree__prog_out__write_string_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_string_list_3_0_i10);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_string_list_3_0_i11);
MR_def_label(parse_tree__prog_out__write_string_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_string_list_3_0_i12);
MR_def_label(parse_tree__prog_out__write_string_list_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(parse_tree__prog_out__write_string_list_3_0_i28);
MR_def_label(parse_tree__prog_out__write_string_list_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_out__write_string_list_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module26)
	MR_init_entry1(parse_tree__prog_out__write_promise_type_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_promise_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module27)
	MR_init_entry1(parse_tree__prog_out__builtin_type_to_string_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__builtin_type_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module28)
	MR_init_entry1(parse_tree__prog_out__builtin_type_to_string_2_1);
	MR_init_label4(parse_tree__prog_out__builtin_type_to_string_2_1,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__builtin_type_to_string_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("character", 9)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__builtin_type_to_string_2_1_i3);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_out__builtin_type_to_string_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__builtin_type_to_string_2_1_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_out__builtin_type_to_string_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__builtin_type_to_string_2_1_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_out__builtin_type_to_string_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__builtin_type_to_string_2_1_i1);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_out__builtin_type_to_string_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module29)
	MR_init_entry1(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);
	MR_init_label1(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("predicate", 9);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__pred_or_func_to_full_str_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("function", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module30)
	MR_init_entry1(parse_tree__prog_out__write_pred_or_func_3_0);
	MR_init_label1(parse_tree__prog_out__write_pred_or_func_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_pred_or_func_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_pred_or_func_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("predicate", 9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_out__write_pred_or_func_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("function", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module31)
	MR_init_entry1(fn__parse_tree__prog_out__pred_or_func_to_str_1_0);
	MR_init_label1(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__pred_or_func_to_str_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__pred_or_func_to_str_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("pred", 4);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__pred_or_func_to_str_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("func", 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module32)
	MR_init_entry1(parse_tree__prog_out__purity_name_2_0);
	MR_init_label2(parse_tree__prog_out__purity_name_2_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__purity_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__purity_name_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("pure", 4);
	MR_proceed();
MR_def_label(parse_tree__prog_out__purity_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_out__purity_name_2_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("semipure", 8);
	MR_proceed();
MR_def_label(parse_tree__prog_out__purity_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("impure", 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module33)
	MR_init_entry1(parse_tree__prog_out__purity_name_2_1);
	MR_init_label3(parse_tree__prog_out__purity_name_2_1,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__purity_name_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("impure", 6)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__purity_name_2_1_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_out__purity_name_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("pure", 4)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__purity_name_2_1_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_out__purity_name_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("semipure", 8)) != 0)) {
		MR_GOTO_LAB(parse_tree__prog_out__purity_name_2_1_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(parse_tree__prog_out__purity_name_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module34)
	MR_init_entry1(parse_tree__prog_out__write_purity_3_0);
	MR_init_label2(parse_tree__prog_out__write_purity_3_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_purity_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_purity_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("pure", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_out__write_purity_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_purity_3_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("semipure", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_out__write_purity_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("impure", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module35)
	MR_init_entry1(parse_tree__prog_out__write_purity_prefix_3_0);
	MR_init_label4(parse_tree__prog_out__write_purity_prefix_3_0,5,6,7,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__prog_out__write_purity_prefix_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_purity_prefix_3_0_i23);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_purity_prefix_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("pure", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_purity_prefix_3_0_i7);
MR_def_label(parse_tree__prog_out__write_purity_prefix_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(parse_tree__prog_out__write_purity_prefix_3_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("semipure", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_purity_prefix_3_0_i7);
MR_def_label(parse_tree__prog_out__write_purity_prefix_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("impure", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__prog_out__write_purity_prefix_3_0_i7);
MR_def_label(parse_tree__prog_out__write_purity_prefix_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(parse_tree__prog_out__write_purity_prefix_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__append_2_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module36)
	MR_init_entry1(fn__parse_tree__prog_out__purity_prefix_to_string_1_0);
	MR_init_label3(fn__parse_tree__prog_out__purity_prefix_to_string_1_0,2,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__purity_prefix_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__purity_prefix_to_string_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__purity_prefix_to_string_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__purity_prefix_to_string_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("pure", 4);
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_tailcall_ent(fn__string__append_2_0);
MR_def_label(fn__parse_tree__prog_out__purity_prefix_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__purity_prefix_to_string_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("semipure", 8);
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_tailcall_ent(fn__string__append_2_0);
MR_def_label(fn__parse_tree__prog_out__purity_prefix_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("impure", 6);
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_tailcall_ent(fn__string__append_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(parse_tree__prog_out_module37)
	MR_init_entry1(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0);
	MR_init_label6(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,10,12,6,8,9,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0_i6);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("prog_out.m", 10);
	MR_r2 = (MR_Word) MR_string_const("eval_method_to_pragma_name: normal", 34);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const("loop_check", 10);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("memo", 4);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal_model", 13);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal_model_own_stacks", 24);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("minimal_model_own_stacks_generator", 34);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_pragma_name_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("prog_out.m", 10);
	MR_r2 = (MR_Word) MR_string_const("eval_method_to_pragma_name: io", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module38)
	MR_init_entry1(fn__parse_tree__prog_out__eval_method_to_string_1_0);
	MR_init_label8(fn__parse_tree__prog_out__eval_method_to_string_1_0,16,17,12,14,15,59,6,5)
	MR_init_label3(fn__parse_tree__prog_out__eval_method_to_string_1_0,8,9,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__eval_method_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i59);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i12);
	}
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("normal", 6);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("loop_check", 10);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("memo", 4);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal_model_stack_copy", 24);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("minimal_model_own_stacks_consumer", 33);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("minimal_model_own_stacks_generator", 34);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i6);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("decl, ", 6);
	MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i5);
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = (MR_Word) MR_string_const("proc, ", 6);
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__eval_method_to_string_1_0_i8);
	}
	MR_r1 = (MR_Word) MR_string_const("unitize", 7);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_out__eval_method_to_string_1_0_i9);
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("alone", 5);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_out__eval_method_to_string_1_0_i9);
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_out__eval_method_to_string_1_0_i10);
MR_def_label(fn__parse_tree__prog_out__eval_method_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("table_io(", 9);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module39)
	MR_init_entry1(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0);
	MR_init_label2(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("value", 5);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const("addr", 4);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__arg_tabling_method_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("promise_implied", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_out_module40)
	MR_init_entry1(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0);
	MR_init_label3(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0,3,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("output", 6);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("value", 5);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("addr", 4);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_out__maybe_arg_tabling_method_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("promise_implied", 15);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_out_maybe_bunch_0(void)
{
	parse_tree__prog_out_module0();
	parse_tree__prog_out_module1();
	parse_tree__prog_out_module2();
	parse_tree__prog_out_module3();
	parse_tree__prog_out_module4();
	parse_tree__prog_out_module5();
	parse_tree__prog_out_module6();
	parse_tree__prog_out_module7();
	parse_tree__prog_out_module8();
	parse_tree__prog_out_module9();
	parse_tree__prog_out_module10();
	parse_tree__prog_out_module11();
	parse_tree__prog_out_module12();
	parse_tree__prog_out_module13();
	parse_tree__prog_out_module14();
	parse_tree__prog_out_module15();
	parse_tree__prog_out_module16();
	parse_tree__prog_out_module17();
	parse_tree__prog_out_module18();
	parse_tree__prog_out_module19();
	parse_tree__prog_out_module20();
	parse_tree__prog_out_module21();
	parse_tree__prog_out_module22();
	parse_tree__prog_out_module23();
	parse_tree__prog_out_module24();
	parse_tree__prog_out_module25();
	parse_tree__prog_out_module26();
	parse_tree__prog_out_module27();
	parse_tree__prog_out_module28();
	parse_tree__prog_out_module29();
	parse_tree__prog_out_module30();
	parse_tree__prog_out_module31();
	parse_tree__prog_out_module32();
	parse_tree__prog_out_module33();
	parse_tree__prog_out_module34();
	parse_tree__prog_out_module35();
	parse_tree__prog_out_module36();
	parse_tree__prog_out_module37();
	parse_tree__prog_out_module38();
	parse_tree__prog_out_module39();
}

static void mercury__parse_tree__prog_out_maybe_bunch_1(void)
{
	parse_tree__prog_out_module40();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_out__init(void);
void mercury__parse_tree__prog_out__init_type_tables(void);
void mercury__parse_tree__prog_out__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_out__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_out__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_out__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_out_maybe_bunch_0();
	mercury__parse_tree__prog_out_maybe_bunch_1();
	mercury__parse_tree__prog_out__init_debugger();
}

void mercury__parse_tree__prog_out__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__parse_tree__prog_out__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_out__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_out__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
