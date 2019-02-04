/*
** Automatically generated from `library.m'
** by the Mercury compiler,
** version rotd-2012-02-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__library__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "library.c"
#include "library.mh"

#line 28 "library.c"
#line 250 "array.int"
#include "array.mh"

#line 32 "library.c"
#line 20 "bit_buffer.int"
#include "bit_buffer.mh"

#line 36 "library.c"
#line 151 "bitmap.int"
#include "bitmap.mh"

#line 40 "library.c"
#line 56 "dir.int"
#include "dir.mh"

#line 44 "library.c"
#line 526 "io.int"
#include "io.mh"

#line 48 "library.c"
#line 536 "io.int"
#include "time.mh"

#line 52 "library.c"
#line 537 "io.int"
#include "string.mh"

#line 56 "library.c"
#line 42 "par_builtin.int"
#include "par_builtin.mh"

#line 60 "library.c"
#line 151 "profiling_builtin.int"
#include "profiling_builtin.mh"

#line 64 "library.c"
#line 16 "region_builtin.int"
#include "region_builtin.mh"

#line 68 "library.c"
#line 57 "stm_builtin.int"
#include "stm_builtin.mh"

#line 72 "library.c"
#line 72 "store.int"
#include "store.mh"

#line 76 "library.c"
#line 218 "table_builtin.int"
#include "table_builtin.mh"

#line 80 "library.c"
#line 40 "table_statistics.int"
#include "table_statistics.mh"

#line 84 "library.c"
#line 70 "version_array.int"
#include "version_array.mh"

#line 88 "library.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 92 "library.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 96 "library.c"
#line 4 "char.opt"
#include "char.mh"

#line 100 "library.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 104 "library.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 108 "library.c"
#line 3 "float.opt"
#include "float.mh"

#line 112 "library.c"
#line 7 "hash_table.opt"
#include "hash_table.mh"

#line 116 "library.c"
#line 4 "int.opt"
#include "int.mh"

#line 120 "library.c"
#line 3 "math.opt"
#include "math.mh"

#line 124 "library.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 128 "library.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 132 "library.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 136 "library.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 140 "library.c"
#line 9 "version_hash_table.opt"
#include "version_hash_table.mh"

#line 144 "library.c"
#line 145 "library.c"
#ifndef LIBRARY_DECL_GUARD
#define LIBRARY_DECL_GUARD

#line 149 "library.c"
#line 150 "library.c"

#endif
#line 153 "library.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(library__mercury_std_library_module_1_0, 2)
MR_def_extern_entry(library__version_1_0)
MR_def_extern_entry(library__mercury_std_library_module_1_0)
MR_decl_static(fn__f_108_105_98_114_97_114_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)




MR_BEGIN_MODULE(library_module0)
	MR_init_entry1(library__version_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__library__version_1_0);
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
#line 172 "library.m"

    MR_ConstString version_string =
        MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;
;}
#line 196 "library.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__library__mercury_std_library_module_1_0);
	MR_init_label1(library__mercury_std_library_module_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_std_library_module'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__library__mercury_std_library_module_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gc", 2)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("io", 2)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bag", 3)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("dir", 3)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("int", 3)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("map", 3)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("ops", 3)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("set", 3)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bool", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("char", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cord", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("enum", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lazy", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("list", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("math", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pair", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("time", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unit", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("univ", 4)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("array", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bimap", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("float", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lexer", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("maybe", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("queue", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("robdd", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rtree", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stack", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("store", 5)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bitmap", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("getopt", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("mutvar", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("parser", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pprint", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pqueue", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("prolog", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("random", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rbtree", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stream", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("string", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("svlist", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("thread", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("varset", 6)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("array2d", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("builtin", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("counter", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("digraph", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("integer", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("library", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("require", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("svstack", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term_io", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tree234", 7)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("backjump", 8)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bt_array", 8)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("calendar", 8)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("eqvclass", 8)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rational", 8)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("std_util", 8)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("svpqueue", 8)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("construct", 9)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("exception", 9)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("getopt_io", 9)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("injection", 9)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("multi_map", 9)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("solutions", 9)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("type_desc", 9)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("assoc_list", 10)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bit_buffer", 10)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("hash_table", 10)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("deconstruct", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("par_builtin", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("set_bbbtree", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("set_ordlist", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("set_tree234", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stm_builtin", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term_to_xml", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("thread.mvar", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("tree_bitset", 11)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("benchmarking", 12)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("set_ctree234", 12)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("parsing_utils", 13)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("set_unordlist", 13)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("sparse_bitset", 13)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("table_builtin", 13)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version_array", 13)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version_store", 13)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang_builtin", 14)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("pretty_printer", 14)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("region_builtin", 14)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("string.builder", 14)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("thread.channel", 14)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version_bitmap", 14)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bit_buffer.read", 15)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("private_builtin", 15)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version_array2d", 15)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("bit_buffer.write", 16)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("table_statistics", 16)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("thread.semaphore", 16)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("fat_sparse_bitset", 17)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("profiling_builtin", 17)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("version_hash_table", 18)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("rtti_implementation", 19)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("stream.string_writer", 20)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term_size_prof_builtin", 22)) == 0)) {
		MR_GOTO_LAB(library__mercury_std_library_module_1_0_i2);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang_rtti_implementation", 26)) == 0);
	MR_proceed();
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_108_105_98_114_97_114_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
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
#ifdef MR_THREADSCOPE
void mercury__library__init_threadscope_string_table(void);
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

#ifdef MR_THREADSCOPE

void mercury__library__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
