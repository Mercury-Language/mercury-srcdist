/*
** Automatically generated from `library.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__library__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "library.c"
#include "library.mh"

#line 27 "library.c"
#line 149 "array.int"
#include "array.mh"

#line 31 "library.c"
#line 20 "bit_buffer.int"
#include "bit_buffer.mh"

#line 35 "library.c"
#line 149 "bitmap.int"
#include "bitmap.mh"

#line 39 "library.c"
#line 56 "dir.int"
#include "dir.mh"

#line 43 "library.c"
#line 534 "io.int"
#include "io.mh"

#line 47 "library.c"
#line 542 "io.int"
#include "string.mh"

#line 51 "library.c"
#line 27 "par_builtin.int"
#include "par_builtin.mh"

#line 55 "library.c"
#line 149 "profiling_builtin.int"
#include "profiling_builtin.mh"

#line 59 "library.c"
#line 15 "region_builtin.int"
#include "region_builtin.mh"

#line 63 "library.c"
#line 57 "stm_builtin.int"
#include "stm_builtin.mh"

#line 67 "library.c"
#line 218 "table_builtin.int"
#include "table_builtin.mh"

#line 71 "library.c"
#line 40 "table_statistics.int"
#include "table_statistics.mh"

#line 75 "library.c"
#line 43 "time.int"
#include "time.mh"

#line 79 "library.c"
#line 39 "version_array.int"
#include "version_array.mh"

#line 83 "library.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 87 "library.c"
#line 4 "char.opt"
#include "char.mh"

#line 91 "library.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 95 "library.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 99 "library.c"
#line 3 "float.opt"
#include "float.mh"

#line 103 "library.c"
#line 3 "hash_table.opt"
#include "hash_table.mh"

#line 107 "library.c"
#line 4 "int.opt"
#include "int.mh"

#line 111 "library.c"
#line 3 "math.opt"
#include "math.mh"

#line 115 "library.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 119 "library.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 123 "library.c"
#line 112 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 127 "library.c"
#line 20 "store.opt"
#include "store.mh"

#line 131 "library.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 135 "library.c"
#line 5 "version_hash_table.opt"
#include "version_hash_table.mh"

#line 139 "library.c"
#line 140 "library.c"
#ifndef LIBRARY_DECL_GUARD
#define LIBRARY_DECL_GUARD

#line 144 "library.c"
#line 145 "library.c"

#endif
#line 148 "library.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[256];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2[46];
	MR_Integer f3[2];
	MR_String f4;
	MR_Integer f5[2];
	MR_String f6[2];
	MR_Integer f7[8];
	MR_String f8[2];
	MR_Integer f9[4];
	MR_String f10;
	MR_Integer f11[2];
	MR_String f12;
	MR_Integer f13[2];
	MR_String f14;
	MR_Integer f15[5];
	MR_String f16[2];
	MR_Integer f17[5];
	MR_String f18[2];
	MR_Integer f19[3];
	MR_String f20;
	MR_Integer f21[2];
	MR_String f22[3];
	MR_Integer f23;
	MR_String f24[2];
	MR_Integer f25;
	MR_String f26;
	MR_Integer f27[8];
	MR_String f28[2];
	MR_Integer f29;
	MR_String f30;
	MR_Integer f31;
	MR_String f32;
	MR_Integer f33[6];
	MR_String f34;
	MR_Integer f35;
	MR_String f36[4];
	MR_Integer f37;
	MR_String f38[3];
	MR_Integer f39[2];
	MR_String f40[2];
	MR_Integer f41[2];
	MR_String f42;
	MR_Integer f43[7];
	MR_String f44;
	MR_Integer f45[2];
	MR_String f46;
	MR_Integer f47[3];
	MR_String f48;
	MR_Integer f49;
	MR_String f50;
	MR_Integer f51[4];
	MR_String f52;
	MR_Integer f53;
	MR_String f54;
	MR_Integer f55[3];
	MR_String f56[2];
	MR_Integer f57;
	MR_String f58;
	MR_Integer f59[2];
	MR_String f60[2];
	MR_Integer f61;
	MR_String f62;
	MR_Integer f63[2];
	MR_String f64[3];
	MR_Integer f65[4];
	MR_String f66;
	MR_Integer f67;
	MR_String f68;
	MR_Integer f69;
	MR_String f70;
	MR_Integer f71[2];
	MR_String f72;
	MR_Integer f73;
	MR_String f74;
	MR_Integer f75;
	MR_String f76;
	MR_Integer f77[3];
	MR_String f78[2];
	MR_Integer f79[4];
	MR_String f80;
	MR_Integer f81[4];
	MR_String f82[2];
	MR_Integer f83[5];
	MR_String f84[2];
	MR_Integer f85[4];
	MR_String f86;
	MR_Integer f87;
	MR_String f88;
	MR_Integer f89;
	MR_String f90[2];
	MR_Integer f91;
	MR_String f92;
	MR_Integer f93[8];
	MR_String f94;
	MR_Integer f95;
	MR_String f96[2];
	MR_Integer f97[3];
	MR_String f98;
	MR_Integer f99;
	MR_String f100;
	MR_Integer f101[5];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];
MR_decl_label4(library__mercury_std_library_module_1_0, 3,125,5,2)
MR_def_extern_entry(library__version_1_0)
MR_def_extern_entry(library__mercury_std_library_module_1_0)
MR_decl_static(fn__f_108_105_98_114_97_114_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
-2,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
11,
-1,
-1,
-1,
1,
-1,
4,
-1,
-1,
19,
-1,
-1,
-1,
24,
5,
-1,
-1,
9,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
39,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-1,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
12,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
14,
-2,
-2,
-1,
-1,
16,
-2,
-1,
17,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
18,
-2,
20,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-1,
-1,
-1,
-2,
-1,
22,
29,
-2,
-2,
-1,
30,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-1,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-1,
-1,
-2,
31,
-2,
-2,
32,
-1,
-2,
-1,
-2,
-2,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-1,
-2,
-2,
34,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
38,
40,
-2,
-2,
-2,
-2,
-1,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
43,
44,
-2,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
45,
-1,
-2,
-2,
-2,
-1,
-2,
-1,
-2,
-2,
-2,
-2,
-2
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0,
{
MR_string_const("table_builtin", 13),
MR_string_const("svset", 5),
MR_string_const("version_types", 13),
MR_string_const("mutvar", 6),
MR_string_const("enum", 4),
MR_string_const("digraph", 7),
MR_string_const("pqueue", 6),
MR_string_const("array2d", 7),
MR_string_const("robdd", 5),
MR_string_const("rational", 8),
MR_string_const("calendar", 8),
MR_string_const("stm_builtin", 11),
MR_string_const("thread.channel", 14),
MR_string_const("char", 4),
MR_string_const("prolog", 6),
MR_string_const("profiling_builtin", 17),
MR_string_const("bintree", 7),
MR_string_const("set_unordlist", 13),
MR_string_const("rbtree", 6),
MR_string_const("bimap", 5),
MR_string_const("bintree_set", 11),
MR_string_const("stream.string_writer", 20),
MR_string_const("maybe", 5),
MR_string_const("bit_buffer.write", 16),
MR_string_const("hash_table", 10),
MR_string_const("stream", 6),
MR_string_const("benchmarking", 12),
MR_string_const("array", 5),
MR_string_const("eqvclass", 8),
MR_string_const("region_builtin", 14),
MR_string_const("bool", 4),
MR_string_const("getopt_io", 9),
MR_string_const("varset", 6),
MR_string_const("backjump", 8),
MR_string_const("erlang_builtin", 14),
MR_string_const("io", 2),
MR_string_const("rtti_implementation", 19),
MR_string_const("sparse_bitset", 13),
MR_string_const("pretty_printer", 14),
MR_string_const("bit_buffer", 10),
MR_string_const("graph", 5),
MR_string_const("require", 7),
MR_string_const("bitmap", 6),
MR_string_const("gc", 2),
MR_string_const("counter", 7),
MR_string_const("pair", 4)
},
{
0,
0
},
MR_string_const("time", 4),
{
0,
0
},
{
MR_string_const("math", 4),
MR_string_const("parsing_utils", 13)
},
{
0,
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("cord", 4),
MR_string_const("type_desc", 9)
},
{
0,
0,
0,
0
},
MR_string_const("version_hash_table", 18),
{
0,
0
},
MR_string_const("bag", 3),
{
0,
0
},
MR_string_const("svvarset", 8),
{
0,
0,
0,
0,
0
},
{
MR_string_const("std_util", 8),
MR_string_const("rtree", 5)
},
{
0,
0,
0,
0,
0
},
{
MR_string_const("version_store", 13),
MR_string_const("library", 7)
},
{
0,
0,
0
},
MR_string_const("dir", 3),
{
0,
0
},
{
MR_string_const("map", 3),
MR_string_const("erlang_rtti_implementation", 26),
MR_string_const("set_ctree234", 12)
},
0,
{
MR_string_const("lexer", 5),
MR_string_const("svmulti_map", 11)
},
0,
MR_string_const("builtin", 7),
{
0,
0,
0,
0,
0,
0,
0,
0
},
{
MR_string_const("ops", 3),
MR_string_const("term_io", 7)
},
0,
MR_string_const("set_bbbtree", 11),
0,
MR_string_const("queue", 5),
{
0,
0,
0,
0,
0,
0
},
MR_string_const("getopt", 6),
0,
{
MR_string_const("random", 6),
MR_string_const("injection", 9),
MR_string_const("deconstruct", 11),
MR_string_const("univ", 4)
},
0,
{
MR_string_const("unit", 4),
MR_string_const("thread.mvar", 11),
MR_string_const("svbag", 5)
},
{
0,
0
},
{
MR_string_const("pprint", 6),
MR_string_const("term_size_prof_builtin", 22)
},
{
0,
0
},
MR_string_const("stack", 5),
{
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("bit_buffer.read", 15),
{
0,
0
},
MR_string_const("par_builtin", 11),
{
0,
0,
0
},
MR_string_const("group", 5),
0,
MR_string_const("svmap", 5),
{
0,
0,
0,
0
},
MR_string_const("integer", 7),
0,
MR_string_const("multi_map", 9),
{
0,
0,
0
},
{
MR_string_const("term_to_xml", 11),
MR_string_const("version_bitmap", 14)
},
0,
MR_string_const("thread.semaphore", 16),
{
0,
0
},
{
MR_string_const("set_ordlist", 11),
MR_string_const("relation", 8)
},
0,
MR_string_const("int", 3),
{
0,
0
},
{
MR_string_const("svqueue", 7),
MR_string_const("tree234", 7),
MR_string_const("svbimap", 7)
},
{
0,
0,
0,
0
},
MR_string_const("store", 5),
0,
MR_string_const("private_builtin", 15),
0,
MR_string_const("exception", 9),
{
0,
0
},
MR_string_const("set", 3),
0,
MR_string_const("solutions", 9),
0,
MR_string_const("set_tree234", 11),
{
0,
0,
0
},
{
MR_string_const("svrelation", 10),
MR_string_const("term", 4)
},
{
0,
0,
0,
0
},
MR_string_const("tree_bitset", 11),
{
0,
0,
0,
0
},
{
MR_string_const("table_statistics", 16),
MR_string_const("float", 5)
},
{
0,
0,
0,
0,
0
},
{
MR_string_const("svarray", 7),
MR_string_const("construct", 9)
},
{
0,
0,
0,
0
},
MR_string_const("parser", 6),
0,
MR_string_const("sveqvclass", 10),
0,
{
MR_string_const("version_array2d", 15),
MR_string_const("list", 4)
},
0,
MR_string_const("thread", 6),
{
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const("version_array", 13),
0,
{
MR_string_const("string", 6),
MR_string_const("string.builder", 14)
},
{
0,
0,
0
},
MR_string_const("bt_array", 8),
0,
MR_string_const("assoc_list", 10),
{
0,
0,
0,
0,
0
}
},
};


MR_BEGIN_MODULE(library_module0)
	MR_init_entry1(library__version_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'version'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__library__version_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	Version;
#define	MR_PROC_LABEL	mercury__library__version_1_0
	MR_OBTAIN_GLOBAL_LOCK("version");
{
#line 183 "library.m"

    MR_ConstString version_string =
        MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;
;}
#line 925 "library.c"
	MR_RELEASE_GLOBAL_LOCK("version");
	MR_r1 = (MR_Word) Version;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(library_module1)
	MR_init_entry1(library__mercury_std_library_module_1_0);
	MR_init_label4(library__mercury_std_library_module_1_0,3,125,5,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'mercury_std_library_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__library__mercury_std_library_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 255);
MR_def_label(library__mercury_std_library_module_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(1,0))[(MR_Integer) MR_r2];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i5);
	}
	MR_r2 = (MR_COMMON(0,0))[(MR_Integer) MR_r2];
	if (MR_INT_GE(MR_r2,0))
		continue;
	}
	break; } /* end while */
MR_def_label(library__mercury_std_library_module_1_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(library__mercury_std_library_module_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i2) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125) MR_AND
		MR_LABEL_AP(library__mercury_std_library_module_1_0_i125));
MR_def_label(library__mercury_std_library_module_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(library_module2)
	MR_init_entry1(fn__f_108_105_98_114_97_114_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_108_105_98_114_97_114_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__library_maybe_bunch_0(void)
{
	library_module0();
	library_module1();
	library_module2();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__library__init(void);
void mercury__library__init_type_tables(void);
void mercury__library__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__library__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__library__init_complexity_procs(void);
#endif

void mercury__library__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__library_maybe_bunch_0();
	mercury__library__init_debugger();
}

void mercury__library__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__library__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__library__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__library);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__library__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
