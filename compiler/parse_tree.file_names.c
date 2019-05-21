/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2017-08-07
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.file_names. */
/* :- implementation. */

/*
INIT mercury__parse_tree__file_names__init
ENDINIT
*/

#include "parse_tree.file_names.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s {
  MR_Word parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11;
  MR_bool parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58;
  jmp_buf parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67;
};

struct parse_tree__file_names__make_file_name_9_p_0_env_0_s {
  MR_Word parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10;
  MR_bool parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded;
  MR_String parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46;
  jmp_buf parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1;
  MR_String parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55;
};


static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2];

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(
  void * parse_tree__file_names__env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(
  void * parse_tree__file_names__env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(
  void * parse_tree__file_names__env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
  MR_Word parse_tree__file_names__Globals_11,
  MR_Word parse_tree__file_names__BaseParentDirs_13,
  MR_String parse_tree__file_names__BaseName_14,
  MR_String parse_tree__file_names__Ext_15,
  MR_Word parse_tree__file_names__Search_16,
  MR_Word parse_tree__file_names__MkDir_17,
  MR_String * parse_tree__file_names__FileName_18);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_1(
  void * parse_tree__file_names__env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_2(
  void * parse_tree__file_names__env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_3(
  void * parse_tree__file_names__env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
  MR_Word parse_tree__file_names__Globals_10,
  MR_Word parse_tree__file_names__SubDirNames_11,
  MR_Word parse_tree__file_names__Search_12,
  MR_Word parse_tree__file_names__MkDir_13,
  MR_String parse_tree__file_names__BaseName_14,
  MR_String parse_tree__file_names__Ext_15,
  MR_String * parse_tree__file_names__FileName_16);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2,
  MR_Box parse_tree__file_names__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2,
  MR_Box parse_tree__file_names__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[1][2];


/* sealed */ struct parse_tree__file_names__vector_common_type_1_0_s {
  const MR_String parse_tree__file_names__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_1_0_s parse_tree__file_names_vector_common_1[41];



static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct parse_tree__file_names__vector_common_type_1_0_s parse_tree__file_names_vector_common_1[41] = {
  /* row 0 */   {     (MR_String) ".analysis" },
  /* row 1 */   {     (MR_String) ".imdg" },
  /* row 2 */   {     (MR_String) ".opt" },
  /* row 3 */   {     (MR_String) ".request" },
  /* row 4 */   {     (MR_String) ".trans_opt" },
  /* row 5 */   {     (MR_String) ".hrl" },
  /* row 6 */   {     (MR_String) ".hrl.tmp" },
  /* row 7 */   {     (MR_String) ".mih" },
  /* row 8 */   {     (MR_String) ".mih.tmp" },
  /* row 9 */   {     (MR_String) "_init.pic_o" },
  /* row 10 */   {     NULL },
  /* row 11 */   {     (MR_String) ".\044O" },
  /* row 12 */   {     (MR_String) ".lpic_o" },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "_init.lpic_o" },
  /* row 21 */   {     (MR_String) "_init.\044O" },
  /* row 22 */   {     (MR_String) "_init.\044(EXT_FOR_PIC_OBJECTS)" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "\044(EXT_FOR_PIC_OBJECTS)" },
  /* row 32 */   {     (MR_String) "_init.o" },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     (MR_String) ".pic_o" },
  /* row 40 */   {     (MR_String) ".o" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0 = {
  (MR_String) "do_create_dirs",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1 = {
  (MR_String) "do_not_create_dirs",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_create_dirs",
  {     parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0 },
  {     parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0 = {
  (MR_String) "do_search",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1 = {
  (MR_String) "do_not_search",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_search_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_search_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_search",
  {     parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0 },
  {     parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0
};

void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0(
  MR_Word * parse_tree__file_names__HeadVar__1_1,
  MR_Word parse_tree__file_names__HeadVar__2_2,
  MR_Word parse_tree__file_names__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__file_names__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_names__HeadVar__2_2;
    MR_Integer parse_tree__file_names__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_names__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_names__HeadVar__1_1, parse_tree__file_names__Cast_HeadVar1_4, parse_tree__file_names__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0(
  MR_Word parse_tree__file_names__HeadVar__2_1,
  MR_Word parse_tree__file_names__HeadVar__2_2)
{
  {
    MR_bool parse_tree__file_names__succeeded = (parse_tree__file_names__HeadVar__2_1 == parse_tree__file_names__HeadVar__2_2);

    return parse_tree__file_names__succeeded;
  }
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0(
  MR_Word * parse_tree__file_names__HeadVar__1_1,
  MR_Word parse_tree__file_names__HeadVar__2_2,
  MR_Word parse_tree__file_names__HeadVar__3_3)
{
  {
    MR_Integer parse_tree__file_names__Cast_HeadVar1_4 = (MR_Integer) parse_tree__file_names__HeadVar__2_2;
    MR_Integer parse_tree__file_names__Cast_HeadVar2_5 = (MR_Integer) parse_tree__file_names__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__file_names__HeadVar__1_1, parse_tree__file_names__Cast_HeadVar1_4, parse_tree__file_names__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0(
  MR_Word parse_tree__file_names__HeadVar__2_1,
  MR_Word parse_tree__file_names__HeadVar__2_2)
{
  {
    MR_bool parse_tree__file_names__succeeded = (parse_tree__file_names__HeadVar__2_1 == parse_tree__file_names__HeadVar__2_2);

    return parse_tree__file_names__succeeded;
  }
}

void MR_CALL 
parse_tree__file_names__make_include_file_path_3_p_0(
  MR_String parse_tree__file_names__ModuleSourceFileName_4,
  MR_String parse_tree__file_names__OrigFileName_5,
  MR_String * parse_tree__file_names__Path_6)
{
  {
    MR_bool parse_tree__file_names__succeeded;

    parse_tree__file_names__succeeded = mercury__dir__path_name_is_absolute_1_p_0(parse_tree__file_names__OrigFileName_5);
    if (parse_tree__file_names__succeeded)
      *parse_tree__file_names__Path_6 = parse_tree__file_names__OrigFileName_5;
    else
    {
      MR_String parse_tree__file_names__Var_7;

      parse_tree__file_names__Var_7 = mercury__dir__dirname_1_f_0(parse_tree__file_names__ModuleSourceFileName_4);
      *parse_tree__file_names__Path_6 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__Var_7, parse_tree__file_names__OrigFileName_5);
    }
  }
}

void MR_CALL 
parse_tree__file_names__get_class_dir_name_2_p_0(
  MR_Word parse_tree__file_names__Globals_3,
  MR_String * parse_tree__file_names__ClassDirName_4)
{
  {
    MR_Word parse_tree__file_names__UseGradeSubdirs_5;
    MR_Word parse_tree__file_names__UseSubdirs_6;

    libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 650, &parse_tree__file_names__UseGradeSubdirs_5);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 649, &parse_tree__file_names__UseSubdirs_6);
    switch (parse_tree__file_names__UseGradeSubdirs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (parse_tree__file_names__UseSubdirs_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *parse_tree__file_names__ClassDirName_4 = (MR_String) ".";
            break;
          case (MR_Integer) 1:
            {
              *parse_tree__file_names__ClassDirName_4 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__file_names__Grade_7;
          MR_String parse_tree__file_names__TargetArch_8;
          MR_String parse_tree__file_names__Var_14;
          MR_String parse_tree__file_names__Var_15;
          MR_String parse_tree__file_names__Var_16;

          libs__compute_grade__grade_directory_component_2_p_0(parse_tree__file_names__Globals_3, &parse_tree__file_names__Grade_7);
          libs__globals__lookup_string_option_3_p_0(parse_tree__file_names__Globals_3, (MR_Integer) 668, &parse_tree__file_names__TargetArch_8);
          parse_tree__file_names__Var_16 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", parse_tree__file_names__Grade_7);
          parse_tree__file_names__Var_15 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__Var_16, parse_tree__file_names__TargetArch_8);
          parse_tree__file_names__Var_14 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__Var_15, (MR_String) "Mercury");
          *parse_tree__file_names__ClassDirName_4 = mercury__dir__f_slash_2_f_0(parse_tree__file_names__Var_14, (MR_String) "classs");
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_make_var_name_2_p_0(
  MR_Word parse_tree__file_names__ModuleName_3,
  MR_String * parse_tree__file_names__MakeVarName_4)
{
  *parse_tree__file_names__MakeVarName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_3);
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_stem_2_p_0(
  MR_Word parse_tree__file_names__ModuleName_3,
  MR_String * parse_tree__file_names__FileName_4)
{
  *parse_tree__file_names__FileName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_3);
}

void MR_CALL 
parse_tree__file_names__file_name_to_module_name_2_p_0(
  MR_String parse_tree__file_names__FileName_3,
  MR_Word * parse_tree__file_names__ModuleName_4)
{
  *parse_tree__file_names__ModuleName_4 = mdbcomp__sym_name__string_to_sym_name_1_f_0(parse_tree__file_names__FileName_3);
}

void MR_CALL 
parse_tree__file_names__extra_link_obj_file_name_8_p_0(
  MR_Word parse_tree__file_names__Globals_9,
  MR_Word parse_tree__file_names__ModuleName_10,
  MR_String parse_tree__file_names__ExtraLinkObjName_11,
  MR_String parse_tree__file_names__Ext_12,
  MR_Word parse_tree__file_names__MkDir_13,
  MR_String * parse_tree__file_names__FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(parse_tree__file_names__Globals_9, parse_tree__file_names__ExtraLinkObjName_11, parse_tree__file_names__Ext_12, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word parse_tree__file_names__Globals_9,
  MR_String parse_tree__file_names__ExtraLinkObjName_11,
  MR_String parse_tree__file_names__Ext_12,
  MR_Word parse_tree__file_names__MkDir_13,
  MR_String * parse_tree__file_names__FileName_14)
{
  {
    MR_String parse_tree__file_names__BaseName_16;

    parse_tree__file_names__BaseName_16 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__ExtraLinkObjName_11, parse_tree__file_names__Ext_12);
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_16, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
  }
}

void MR_CALL 
parse_tree__file_names__fact_table_file_name_8_p_0(
  MR_Word parse_tree__file_names__Globals_9,
  MR_Word parse_tree__file_names__ModuleName_10,
  MR_String parse_tree__file_names__FactTableFileName_11,
  MR_String parse_tree__file_names__Ext_12,
  MR_Word parse_tree__file_names__MkDir_13,
  MR_String * parse_tree__file_names__FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(parse_tree__file_names__Globals_9, parse_tree__file_names__FactTableFileName_11, parse_tree__file_names__Ext_12, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word parse_tree__file_names__Globals_9,
  MR_String parse_tree__file_names__FactTableFileName_11,
  MR_String parse_tree__file_names__Ext_12,
  MR_Word parse_tree__file_names__MkDir_13,
  MR_String * parse_tree__file_names__FileName_14)
{
  {
    MR_String parse_tree__file_names__BaseName_28;

    parse_tree__file_names__BaseName_28 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__FactTableFileName_11, parse_tree__file_names__Ext_12);
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_28, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_8_p_0(
  MR_Word parse_tree__file_names__Globals_9,
  MR_String parse_tree__file_names__Prefix_10,
  MR_Word parse_tree__file_names__ModuleName_11,
  MR_String parse_tree__file_names__Ext_12,
  MR_Word parse_tree__file_names__MkDir_13,
  MR_String * parse_tree__file_names__FileName_14)
{
  {
    MR_String parse_tree__file_names__BaseFileName_16;
    MR_String parse_tree__file_names__BaseName_17;
    MR_String parse_tree__file_names__Var_20;

    parse_tree__file_names__BaseFileName_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_11);
    parse_tree__file_names__Var_20 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__BaseFileName_16, parse_tree__file_names__Ext_12);
    parse_tree__file_names__BaseName_17 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Prefix_10, parse_tree__file_names__Var_20);
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_17, parse_tree__file_names__Ext_12, (MR_Integer) 1, parse_tree__file_names__MkDir_13, parse_tree__file_names__FileName_14);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_6_p_0(
  MR_Word parse_tree__file_names__Globals_7,
  MR_String parse_tree__file_names__Ext_8,
  MR_Word parse_tree__file_names__ModuleName_9,
  MR_String * parse_tree__file_names__FileName_10)
{
  {
    MR_bool parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_8, (MR_String) ".m") == 0);

    if (parse_tree__file_names__succeeded)
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(parse_tree__file_names__ModuleName_9, parse_tree__file_names__FileName_10);
    else
    {
      parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_8, (MR_String) ".java");
      if (!(parse_tree__file_names__succeeded))
      {
        parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_8, (MR_String) ".class");
      }
      if (parse_tree__file_names__succeeded)
      {
        MR_String parse_tree__file_names__MangledModuleName_27;
        MR_String parse_tree__file_names__BaseName_28;

        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__file_names__ModuleName_9, (MR_Integer) 0, (MR_String) "__", &parse_tree__file_names__MangledModuleName_27);
        parse_tree__file_names__BaseName_28 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__MangledModuleName_27, parse_tree__file_names__Ext_8);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_2[0]), parse_tree__file_names__BaseName_28, parse_tree__file_names__Ext_8, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
      }
      else
      {
        parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_8, (MR_String) ".erl");
        if (!(parse_tree__file_names__succeeded))
        {
          parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_8, (MR_String) ".hrl");
          if (!(parse_tree__file_names__succeeded))
          {
            parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_8, (MR_String) ".beam");
          }
        }
        if (parse_tree__file_names__succeeded)
        {
          MR_Word parse_tree__file_names__ErlangModuleName_29;
          MR_String parse_tree__file_names__Var_41;
          MR_String parse_tree__file_names__BaseName_49;

          parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_9);
          if (parse_tree__file_names__succeeded)
          {
            parse_tree__file_names__ErlangModuleName_29 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_9);
          }
          else
            parse_tree__file_names__ErlangModuleName_29 = parse_tree__file_names__ModuleName_9;
          parse_tree__file_names__Var_41 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ErlangModuleName_29, (MR_String) "__");
          parse_tree__file_names__BaseName_49 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Var_41, parse_tree__file_names__Ext_8);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_49, parse_tree__file_names__Ext_8, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
        }
        else
        {
          MR_String parse_tree__file_names__Var_45;
          MR_String parse_tree__file_names__BaseName_50;

          parse_tree__file_names__Var_45 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ModuleName_9, (MR_String) ".");
          parse_tree__file_names__BaseName_50 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Var_45, parse_tree__file_names__Ext_8);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_50, parse_tree__file_names__Ext_8, (MR_Integer) 0, (MR_Integer) 1, parse_tree__file_names__FileName_10);
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_source_filename_5_p_0(
  MR_Word parse_tree__file_names__Globals_6,
  MR_Word parse_tree__file_names__ModuleName_7,
  MR_String * parse_tree__file_names__SourceFileName_8)
{
  {
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__file_names__Globals_6, (MR_Integer) 1, (MR_String) ".m", parse_tree__file_names__ModuleName_7, parse_tree__file_names__SourceFileName_8);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_7_p_0(
  MR_Word parse_tree__file_names__Globals_8,
  MR_Word parse_tree__file_names__MkDir_9,
  MR_String parse_tree__file_names__Ext_10,
  MR_Word parse_tree__file_names__ModuleName_11,
  MR_String * parse_tree__file_names__FileName_12)
{
  {
    MR_bool parse_tree__file_names__succeeded = (strcmp(parse_tree__file_names__Ext_10, (MR_String) ".m") == 0);

    if (parse_tree__file_names__succeeded)
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(parse_tree__file_names__ModuleName_11, parse_tree__file_names__FileName_12);
    else
    {
      parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".java");
      if (!(parse_tree__file_names__succeeded))
      {
        parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".class");
      }
      if (parse_tree__file_names__succeeded)
      {
        MR_String parse_tree__file_names__MangledModuleName_28;
        MR_String parse_tree__file_names__BaseName_29;

        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(parse_tree__file_names__ModuleName_11, (MR_Integer) 0, (MR_String) "__", &parse_tree__file_names__MangledModuleName_28);
        parse_tree__file_names__BaseName_29 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__MangledModuleName_28, parse_tree__file_names__Ext_10);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_2[0]), parse_tree__file_names__BaseName_29, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_9, parse_tree__file_names__FileName_12);
      }
      else
      {
        parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".erl");
        if (!(parse_tree__file_names__succeeded))
        {
          parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".hrl");
          if (!(parse_tree__file_names__succeeded))
          {
            parse_tree__file_names__succeeded = mercury__string__suffix_2_p_0(parse_tree__file_names__Ext_10, (MR_String) ".beam");
          }
        }
        if (parse_tree__file_names__succeeded)
        {
          MR_Word parse_tree__file_names__ErlangModuleName_30;
          MR_String parse_tree__file_names__Var_42;
          MR_String parse_tree__file_names__BaseName_50;

          parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_11);
          if (parse_tree__file_names__succeeded)
          {
            parse_tree__file_names__ErlangModuleName_30 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_11);
          }
          else
            parse_tree__file_names__ErlangModuleName_30 = parse_tree__file_names__ModuleName_11;
          parse_tree__file_names__Var_42 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ErlangModuleName_30, (MR_String) "__");
          parse_tree__file_names__BaseName_50 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Var_42, parse_tree__file_names__Ext_10);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_50, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_9, parse_tree__file_names__FileName_12);
        }
        else
        {
          MR_String parse_tree__file_names__Var_46;
          MR_String parse_tree__file_names__BaseName_51;

          parse_tree__file_names__Var_46 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(parse_tree__file_names__ModuleName_11, (MR_String) ".");
          parse_tree__file_names__BaseName_51 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Var_46, parse_tree__file_names__Ext_10);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(parse_tree__file_names__Globals_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__file_names__BaseName_51, parse_tree__file_names__Ext_10, (MR_Integer) 1, parse_tree__file_names__MkDir_9, parse_tree__file_names__FileName_12);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(
  void * parse_tree__file_names__env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) parse_tree__file_names__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5, 1);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(
  void * parse_tree__file_names__env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) parse_tree__file_names__env_ptr_arg;

    (parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67) == 0);
    if (!((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
    {
      MR_String parse_tree__file_names__Var_72;

      parse_tree__file_names__Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67);
      (parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, parse_tree__file_names__Var_72) == 0);
    }
    if ((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(parse_tree__file_names__env_ptr);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(
  void * parse_tree__file_names__env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) parse_tree__file_names__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5) == 0)
      {
        {
          libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 518, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(parse_tree__file_names__env_ptr);
        }
        {
          libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 519, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(parse_tree__file_names__env_ptr);
        }
        (parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (parse_tree__file_names__env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
  MR_Word parse_tree__file_names__Globals_11,
  MR_Word parse_tree__file_names__BaseParentDirs_13,
  MR_String parse_tree__file_names__BaseName_14,
  MR_String parse_tree__file_names__Ext_15,
  MR_Word parse_tree__file_names__Search_16,
  MR_Word parse_tree__file_names__MkDir_17,
  MR_String * parse_tree__file_names__FileName_18)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s parse_tree__file_names__env;

    (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11 = parse_tree__file_names__Globals_11;
    {
      MR_Word parse_tree__file_names__UseSubdirs_20;
      MR_Word parse_tree__file_names__UseGradeSubdirs_21;
      MR_String parse_tree__file_names__LibExt_22;
      MR_String parse_tree__file_names__SharedLibExt_23;
      MR_Integer parse_tree__file_names__lo_0;
      MR_Integer parse_tree__file_names__hi_1;
      MR_Integer parse_tree__file_names__mid_2;
      MR_Integer parse_tree__file_names__result_3;

      libs__globals__lookup_bool_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 649, &parse_tree__file_names__UseSubdirs_20);
      libs__globals__lookup_bool_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 650, &parse_tree__file_names__UseGradeSubdirs_21);
      libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 577, &parse_tree__file_names__LibExt_22);
      libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 576, &parse_tree__file_names__SharedLibExt_23);
      (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (parse_tree__file_names__Search_16 == (MR_Integer) 0);
      if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        /* binary string simple lookup switch */
        parse_tree__file_names__lo_0 = (MR_Integer) 0;
        parse_tree__file_names__hi_1 = (MR_Integer) 3;
        do
        {
          parse_tree__file_names__mid_2 = (((parse_tree__file_names__lo_0 + parse_tree__file_names__hi_1)) / (MR_Integer) 2);
          parse_tree__file_names__result_3 = MR_strcmp(parse_tree__file_names__Ext_15, ((&parse_tree__file_names_vector_common_1[5 + parse_tree__file_names__mid_2]))->parse_tree__file_names__vector_common_type_1_0__vct_1_f_0);
          if ((parse_tree__file_names__result_3 == (MR_Integer) 0))
          {
            (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            /* jump out of search loop */
            goto label_0;
          }
          else
          if ((parse_tree__file_names__result_3 < (MR_Integer) 0))
            parse_tree__file_names__hi_1 = (parse_tree__file_names__mid_2 - (MR_Integer) 1);
          else
            parse_tree__file_names__lo_0 = (parse_tree__file_names__mid_2 + (MR_Integer) 1);
        }
        while ((parse_tree__file_names__lo_0 <= parse_tree__file_names__hi_1));
        (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      label_0:;
      }
      if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
      else
      {
        (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (parse_tree__file_names__UseSubdirs_20 == (MR_Integer) 0);
        if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          parse_tree__file_names__make_file_name_9_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, parse_tree__file_names__BaseParentDirs_13, parse_tree__file_names__Search_16, parse_tree__file_names__MkDir_17, parse_tree__file_names__BaseName_14, parse_tree__file_names__Ext_15, parse_tree__file_names__FileName_18);
        else
        {
          MR_String parse_tree__file_names__BaseExt_57;
          MR_String parse_tree__file_names__Var_60;

          (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (parse_tree__file_names__UseGradeSubdirs_21 == (MR_Integer) 1);
          if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            parse_tree__file_names__Var_60 = (MR_String) ".tmp";
            (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__file_names__Ext_15, parse_tree__file_names__Var_60, &parse_tree__file_names__BaseExt_57);
            if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
              (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58 = parse_tree__file_names__BaseExt_57;
            else
              (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58 = parse_tree__file_names__Ext_15;
            {
              MR_Integer parse_tree__file_names__case_num_4 = (MR_Integer) -1;

              switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 0)) {
                case (MR_Integer) 0:
                  parse_tree__file_names__case_num_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 1)) {
                    case (MR_Integer) 36:
                      if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".\044A"))
                        parse_tree__file_names__case_num_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 0:
                          parse_tree__file_names__case_num_4 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 110:
                          if (((((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 8)) == (MR_Integer) 115))))
                            switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 9)) {
                              case (MR_Integer) 0:
                                parse_tree__file_names__case_num_4 = (MR_Integer) 3;
                                break;
                              case (MR_Integer) 95:
                                switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 10)) {
                                  case (MR_Integer) 100:
                                    if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".analysis_date"))
                                      parse_tree__file_names__case_num_4 = (MR_Integer) 4;
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".analysis_status"))
                                      parse_tree__file_names__case_num_4 = (MR_Integer) 5;
                                    break;
                                }
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".bat"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 101:
                          if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 109))))
                            switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) {
                              case (MR_Integer) 0:
                                parse_tree__file_names__case_num_4 = (MR_Integer) 7;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(6, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".beams"))
                                  parse_tree__file_names__case_num_4 = (MR_Integer) 8;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 0:
                          parse_tree__file_names__case_num_4 = (MR_Integer) 9;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".c_date"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".class"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 11;
                          break;
                        case (MR_Integer) 115:
                          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) {
                            case (MR_Integer) 0:
                              parse_tree__file_names__case_num_4 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".cs_date"))
                                parse_tree__file_names__case_num_4 = (MR_Integer) 13;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 105:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".dir"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 14;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".dll"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 15;
                          break;
                      }
                      break;
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 108))))
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) {
                          case (MR_Integer) 0:
                            parse_tree__file_names__case_num_4 = (MR_Integer) 16;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".erl_date"))
                              parse_tree__file_names__case_num_4 = (MR_Integer) 17;
                            break;
                        }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".hrl"))
                        parse_tree__file_names__case_num_4 = (MR_Integer) 18;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) {
                            case (MR_Integer) 0:
                              parse_tree__file_names__case_num_4 = (MR_Integer) 19;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".il_date"))
                                parse_tree__file_names__case_num_4 = (MR_Integer) 20;
                              break;
                          }
                          break;
                        case (MR_Integer) 109:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".imdg"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".init"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 22;
                          break;
                      }
                      break;
                    case (MR_Integer) 106:
                      if (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 97))
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) {
                          case (MR_Integer) 114:
                            if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".jar"))
                              parse_tree__file_names__case_num_4 = (MR_Integer) 23;
                            break;
                          case (MR_Integer) 118:
                            if (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 97))
                              switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) {
                                case (MR_Integer) 0:
                                  parse_tree__file_names__case_num_4 = (MR_Integer) 24;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(6, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".java_date"))
                                    parse_tree__file_names__case_num_4 = (MR_Integer) 25;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".mih"))
                        parse_tree__file_names__case_num_4 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 111:
                      if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 116))))
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) {
                          case (MR_Integer) 0:
                            parse_tree__file_names__case_num_4 = (MR_Integer) 27;
                            break;
                          case (MR_Integer) 100:
                            if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".optdate"))
                              parse_tree__file_names__case_num_4 = (MR_Integer) 28;
                            break;
                        }
                      break;
                    case (MR_Integer) 112:
                      if (((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 115))))
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) {
                          case (MR_Integer) 0:
                            parse_tree__file_names__case_num_4 = (MR_Integer) 29;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".pic_s_date"))
                              parse_tree__file_names__case_num_4 = (MR_Integer) 30;
                            break;
                        }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".request"))
                        parse_tree__file_names__case_num_4 = (MR_Integer) 31;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 0:
                          parse_tree__file_names__case_num_4 = (MR_Integer) 32;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".s_date"))
                            parse_tree__file_names__case_num_4 = (MR_Integer) 33;
                          break;
                      }
                      break;
                    case (MR_Integer) 116:
                      if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 97))))
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".track_flags"))
                              parse_tree__file_names__case_num_4 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 110:
                            if (((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 9)) == (MR_Integer) 116))))
                              switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 10)) {
                                case (MR_Integer) 0:
                                  parse_tree__file_names__case_num_4 = (MR_Integer) 35;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".trans_opt_date"))
                                    parse_tree__file_names__case_num_4 = (MR_Integer) 36;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".used"))
                        parse_tree__file_names__case_num_4 = (MR_Integer) 37;
                      break;
                  }
                  break;
                case (MR_Integer) 95:
                  if (((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 46))))
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) {
                      case (MR_Integer) 36:
                        if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.\044O"))
                          parse_tree__file_names__case_num_4 = (MR_Integer) 38;
                        break;
                      case (MR_Integer) 98:
                        if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.beam"))
                          parse_tree__file_names__case_num_4 = (MR_Integer) 39;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.c"))
                          parse_tree__file_names__case_num_4 = (MR_Integer) 40;
                        break;
                      case (MR_Integer) 101:
                        if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.erl"))
                          parse_tree__file_names__case_num_4 = (MR_Integer) 41;
                        break;
                    }
                  break;
              }
              if ((parse_tree__file_names__case_num_4 < (MR_Integer) 0))
                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              else
              {
                /* we found a match; look up the results */
                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              }
            }
            if (!((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
            {
              {
                MR_String parse_tree__file_names__Var_68;

                libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 578, &parse_tree__file_names__Var_68);
                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, parse_tree__file_names__Var_68) == 0);
              }
              if (!((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
              {
                {
                  MR_String parse_tree__file_names__Var_69;

                  libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 577, &parse_tree__file_names__Var_69);
                  (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, parse_tree__file_names__Var_69) == 0);
                }
                if (!((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                {
                  {
                    MR_String parse_tree__file_names__Var_70;

                    libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 576, &parse_tree__file_names__Var_70);
                    (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, parse_tree__file_names__Var_70) == 0);
                  }
                  if (!((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                  {
                    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(&parse_tree__file_names__env);
                  }
                }
              }
            }
          }
          (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
          if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            {
              MR_Integer parse_tree__file_names__case_num_6 = (MR_Integer) -1;

              switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 0)) {
                case (MR_Integer) 0:
                  parse_tree__file_names__case_num_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 1)) {
                    case (MR_Integer) 36:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 40:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".\044(EXT_FOR_SHARED_LIB)"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 65:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".\044A"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 2;
                          break;
                      }
                      break;
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 0:
                          parse_tree__file_names__case_num_6 = (MR_Integer) 3;
                          break;
                        case (MR_Integer) 108:
                          if (((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) {
                              case (MR_Integer) 105:
                                if (((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 6)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 7)) == (MR_Integer) 116))))
                                  switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 8)) {
                                    case (MR_Integer) 51:
                                      if (MR_offset_streq(9, parse_tree__file_names__Ext_15, (MR_String) ".all_int3s"))
                                        parse_tree__file_names__case_num_6 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(9, parse_tree__file_names__Ext_15, (MR_String) ".all_ints"))
                                        parse_tree__file_names__case_num_6 = (MR_Integer) 5;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 111:
                                if (MR_offset_streq(6, parse_tree__file_names__Ext_15, (MR_String) ".all_opts"))
                                  parse_tree__file_names__case_num_6 = (MR_Integer) 6;
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(6, parse_tree__file_names__Ext_15, (MR_String) ".all_trans_opts"))
                                  parse_tree__file_names__case_num_6 = (MR_Integer) 7;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".bat"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 8;
                          break;
                        case (MR_Integer) 101:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".beams"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 9;
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 104:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".check"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".classes"))
                                parse_tree__file_names__case_num_6 = (MR_Integer) 11;
                              break;
                            case (MR_Integer) 101:
                              if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".clean"))
                                parse_tree__file_names__case_num_6 = (MR_Integer) 12;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 101:
                          if (((((((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) == (MR_Integer) 112)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 6)) == (MR_Integer) 100))))
                            switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 7)) {
                              case (MR_Integer) 0:
                                parse_tree__file_names__case_num_6 = (MR_Integer) 13;
                                break;
                              case (MR_Integer) 101:
                                if (MR_offset_streq(8, parse_tree__file_names__Ext_15, (MR_String) ".dependency_graph"))
                                  parse_tree__file_names__case_num_6 = (MR_Integer) 14;
                                break;
                            }
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".dll"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 15;
                          break;
                        case (MR_Integer) 121:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".dylib"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 16;
                          break;
                      }
                      break;
                    case (MR_Integer) 101:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 114:
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
                            case (MR_Integer) 108:
                              if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".erls"))
                                parse_tree__file_names__case_num_6 = (MR_Integer) 17;
                              break;
                            case (MR_Integer) 114:
                              if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".err"))
                                parse_tree__file_names__case_num_6 = (MR_Integer) 18;
                              break;
                          }
                          break;
                        case (MR_Integer) 120:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".exe"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 19;
                          break;
                      }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".hlds_dump"))
                        parse_tree__file_names__case_num_6 = (MR_Integer) 20;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".ils"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 110:
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
                            case (MR_Integer) 105:
                              if (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 116))
                                switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) {
                                  case (MR_Integer) 0:
                                    parse_tree__file_names__case_num_6 = (MR_Integer) 22;
                                    break;
                                  case (MR_Integer) 46:
                                    if (MR_offset_streq(6, parse_tree__file_names__Ext_15, (MR_String) ".init.tmp"))
                                      parse_tree__file_names__case_num_6 = (MR_Integer) 23;
                                    break;
                                }
                              break;
                            case (MR_Integer) 115:
                              if (((((((((((MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 7)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 8)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 9)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_grade_hdrs"))
                                      parse_tree__file_names__case_num_6 = (MR_Integer) 24;
                                    break;
                                  case (MR_Integer) 104:
                                    if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_hdrs"))
                                      parse_tree__file_names__case_num_6 = (MR_Integer) 25;
                                    break;
                                  case (MR_Integer) 105:
                                    if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_ints"))
                                      parse_tree__file_names__case_num_6 = (MR_Integer) 26;
                                    break;
                                  case (MR_Integer) 111:
                                    if (MR_offset_streq(10, parse_tree__file_names__Ext_15, (MR_String) ".install_opts"))
                                      parse_tree__file_names__case_num_6 = (MR_Integer) 27;
                                    break;
                                }
                              break;
                            case (MR_Integer) 116:
                              switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 4)) {
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(5, parse_tree__file_names__Ext_15, (MR_String) ".int3s"))
                                    parse_tree__file_names__case_num_6 = (MR_Integer) 28;
                                  break;
                                case (MR_Integer) 115:
                                  if (MR_offset_streq(5, parse_tree__file_names__Ext_15, (MR_String) ".ints"))
                                    parse_tree__file_names__case_num_6 = (MR_Integer) 29;
                                  break;
                              }
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 106:
                      if (((MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) == (MR_Integer) 97))
                        switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
                          case (MR_Integer) 114:
                            if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".jar"))
                              parse_tree__file_names__case_num_6 = (MR_Integer) 30;
                            break;
                          case (MR_Integer) 118:
                            if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".javas"))
                              parse_tree__file_names__case_num_6 = (MR_Integer) 31;
                            break;
                        }
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".lib"))
                        parse_tree__file_names__case_num_6 = (MR_Integer) 32;
                      break;
                    case (MR_Integer) 109:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 104:
                          switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 3)) {
                            case (MR_Integer) 0:
                              parse_tree__file_names__case_num_6 = (MR_Integer) 33;
                              break;
                            case (MR_Integer) 46:
                              if (MR_offset_streq(4, parse_tree__file_names__Ext_15, (MR_String) ".mh.tmp"))
                                parse_tree__file_names__case_num_6 = (MR_Integer) 34;
                              break;
                          }
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".mlds_dump"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 35;
                          break;
                      }
                      break;
                    case (MR_Integer) 111:
                      switch (MR_nth_code_unit(parse_tree__file_names__Ext_15, 2)) {
                        case (MR_Integer) 112:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".opts"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 36;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(3, parse_tree__file_names__Ext_15, (MR_String) ".order"))
                            parse_tree__file_names__case_num_6 = (MR_Integer) 37;
                          break;
                      }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".realclean"))
                        parse_tree__file_names__case_num_6 = (MR_Integer) 38;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".so"))
                        parse_tree__file_names__case_num_6 = (MR_Integer) 39;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".trans_opts"))
                        parse_tree__file_names__case_num_6 = (MR_Integer) 40;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(2, parse_tree__file_names__Ext_15, (MR_String) ".ugly"))
                        parse_tree__file_names__case_num_6 = (MR_Integer) 41;
                      break;
                  }
                  break;
              }
              if ((parse_tree__file_names__case_num_6 < (MR_Integer) 0))
                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              else
              {
                /* we found a match; look up the results */
                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              }
            }
            if (!((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
            {
              (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0(parse_tree__file_names__Ext_15, (MR_String) ".mih_dump");
              if (!((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
              {
                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0(parse_tree__file_names__Ext_15, (MR_String) ".c_dump");
              }
            }
          }
          if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
            *parse_tree__file_names__FileName_18 = parse_tree__file_names__BaseName_14;
          else
          {
            MR_String parse_tree__file_names__SubDirName_24;
            MR_Word parse_tree__file_names__Var_49;

            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dir/*.o") == 0))
              (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            else
            if ((strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dir/*.\044O") == 0))
              (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            else
              (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
            if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
              parse_tree__file_names__SubDirName_24 = (MR_String) "dirs";
            else
            {
              MR_Integer parse_tree__file_names__slot_7;
              MR_String parse_tree__file_names__str_8;

              /* hashed string simple lookup switch */
              /* compute the hash value of the input string */
              parse_tree__file_names__slot_7 = ((MR_hash_string6(parse_tree__file_names__Ext_15)) & (MR_Integer) 31);
              /* no collisions; no hash chain loop */
              /* lookup the string for this hash slot */
              parse_tree__file_names__str_8 = ((&parse_tree__file_names_vector_common_1[9 + parse_tree__file_names__slot_7]))->parse_tree__file_names__vector_common_type_1_0__vct_1_f_0;
              /* did we find a match? */
              if ((((parse_tree__file_names__str_8 != NULL)) && ((strcmp(parse_tree__file_names__str_8, parse_tree__file_names__Ext_15) == 0))))
              {
                /* we found a match; look up the results */
                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_1;
              }
              (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
            label_1:;
              if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                parse_tree__file_names__SubDirName_24 = (MR_String) "os";
              else
              {
                MR_String parse_tree__file_names__ExtName_25;

                (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) "_init.", &parse_tree__file_names__ExtName_25, parse_tree__file_names__Ext_15);
                if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                {
                  mercury__string__append_3_p_2(parse_tree__file_names__ExtName_25, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                }
                else
                {
                  MR_String parse_tree__file_names__ExtName_54;
                  MR_String parse_tree__file_names__ExtName0_26;
                  MR_String parse_tree__file_names__Var_39;

                  (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) ".", &parse_tree__file_names__ExtName0_26, parse_tree__file_names__Ext_15);
                  if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                  {
                    parse_tree__file_names__Var_39 = (MR_String) ".tmp";
                    (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__file_names__ExtName0_26, parse_tree__file_names__Var_39, &parse_tree__file_names__ExtName_54);
                  }
                  if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                  {
                    mercury__string__append_3_p_2(parse_tree__file_names__ExtName_54, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                  }
                  else
                  {
                    (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(parse_tree__file_names__Ext_15, (MR_String) ".dv") == 0);
                    if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                      parse_tree__file_names__SubDirName_24 = (MR_String) "deps";
                    else
                    {
                      (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(parse_tree__file_names__Ext_15, parse_tree__file_names__LibExt_22) == 0);
                      if (!((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                        (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(parse_tree__file_names__Ext_15, parse_tree__file_names__SharedLibExt_23) == 0);
                      if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                        parse_tree__file_names__SubDirName_24 = (MR_String) "lib";
                      else
                      {
                        MR_String parse_tree__file_names__ExtName_51;

                        (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) ".", &parse_tree__file_names__ExtName_51, parse_tree__file_names__Ext_15);
                        if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                        {
                          mercury__string__append_3_p_2(parse_tree__file_names__ExtName_51, (MR_String) "s", &parse_tree__file_names__SubDirName_24);
                        }
                        else
                        {
                          (parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(parse_tree__file_names__Ext_15, (MR_String) "") == 0);
                          if ((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                            parse_tree__file_names__SubDirName_24 = (MR_String) "bin";
                          else
                          {
                            MR_String parse_tree__file_names__Var_45;
                            MR_String parse_tree__file_names__Var_47;

                            parse_tree__file_names__Var_47 = mercury__string__f_43_43_2_f_0(parse_tree__file_names__Ext_15, (MR_String) "\'");
                            parse_tree__file_names__Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "unknown extension \140", parse_tree__file_names__Var_47);
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.file_names", (MR_String) "predicate \140parse_tree.file_names.choose_file_name\'/10", parse_tree__file_names__Var_45);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            {
              parse_tree__file_names__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_49, 0) = ((MR_Box) (parse_tree__file_names__SubDirName_24));
              MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_49, 1) = ((MR_Box) (parse_tree__file_names__BaseParentDirs_13));
            }
            parse_tree__file_names__make_file_name_9_p_0((parse_tree__file_names__env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, parse_tree__file_names__Var_49, parse_tree__file_names__Search_16, parse_tree__file_names__MkDir_17, parse_tree__file_names__BaseName_14, parse_tree__file_names__Ext_15, parse_tree__file_names__FileName_18);
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_1(
  void * parse_tree__file_names__env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_2(
  void * parse_tree__file_names__env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

    (parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55) == 0);
    if (!((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
    {
      MR_String parse_tree__file_names__Var_60;

      parse_tree__file_names__Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55);
      (parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, parse_tree__file_names__Var_60) == 0);
    }
    if ((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      parse_tree__file_names__make_file_name_9_p_0_1(parse_tree__file_names__env_ptr);
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_3(
  void * parse_tree__file_names__env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * parse_tree__file_names__env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) parse_tree__file_names__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1) == 0)
      {
        {
          libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 518, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55);
          parse_tree__file_names__make_file_name_9_p_0_2(parse_tree__file_names__env_ptr);
        }
        {
          libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 519, &(parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55);
          parse_tree__file_names__make_file_name_9_p_0_2(parse_tree__file_names__env_ptr);
        }
        (parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__file_names__env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
  MR_Word parse_tree__file_names__Globals_10,
  MR_Word parse_tree__file_names__SubDirNames_11,
  MR_Word parse_tree__file_names__Search_12,
  MR_Word parse_tree__file_names__MkDir_13,
  MR_String parse_tree__file_names__BaseName_14,
  MR_String parse_tree__file_names__Ext_15,
  MR_String * parse_tree__file_names__FileName_16)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s parse_tree__file_names__env;

    (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10 = parse_tree__file_names__Globals_10;
    {
      MR_Word parse_tree__file_names__UseGradeSubdirs_18;
      MR_Word parse_tree__file_names__UseSubdirs_19;
      MR_Word parse_tree__file_names__DirComponents_22;
      MR_String parse_tree__file_names__BaseExt_45;
      MR_String parse_tree__file_names__Var_48;
      MR_Integer parse_tree__file_names__lo_2;
      MR_Integer parse_tree__file_names__hi_3;
      MR_Integer parse_tree__file_names__mid_4;
      MR_Integer parse_tree__file_names__result_5;

      libs__globals__lookup_bool_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 650, &parse_tree__file_names__UseGradeSubdirs_18);
      libs__globals__lookup_bool_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 649, &parse_tree__file_names__UseSubdirs_19);
      (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (parse_tree__file_names__UseGradeSubdirs_18 == (MR_Integer) 1);
      if ((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      {
        parse_tree__file_names__Var_48 = (MR_String) ".tmp";
        (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__file_names__Ext_15, parse_tree__file_names__Var_48, &parse_tree__file_names__BaseExt_45);
        if ((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
          (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46 = parse_tree__file_names__BaseExt_45;
        else
          (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46 = parse_tree__file_names__Ext_15;
        {
          MR_Integer parse_tree__file_names__case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 0)) {
            case (MR_Integer) 0:
              parse_tree__file_names__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 46:
              switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 1)) {
                case (MR_Integer) 36:
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".\044A"))
                    parse_tree__file_names__case_num_0 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 97:
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 0:
                      parse_tree__file_names__case_num_0 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 110:
                      if (((((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 8)) == (MR_Integer) 115))))
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 9)) {
                          case (MR_Integer) 0:
                            parse_tree__file_names__case_num_0 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 95:
                            switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 10)) {
                              case (MR_Integer) 100:
                                if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".analysis_date"))
                                  parse_tree__file_names__case_num_0 = (MR_Integer) 4;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".analysis_status"))
                                  parse_tree__file_names__case_num_0 = (MR_Integer) 5;
                                break;
                            }
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 98:
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".bat"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 6;
                      break;
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 109))))
                        switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) {
                          case (MR_Integer) 0:
                            parse_tree__file_names__case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(6, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".beams"))
                              parse_tree__file_names__case_num_0 = (MR_Integer) 8;
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 99:
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 0:
                      parse_tree__file_names__case_num_0 = (MR_Integer) 9;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".c_date"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 10;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".class"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 11;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) {
                        case (MR_Integer) 0:
                          parse_tree__file_names__case_num_0 = (MR_Integer) 12;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".cs_date"))
                            parse_tree__file_names__case_num_0 = (MR_Integer) 13;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 100:
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".dir"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 14;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".dll"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 15;
                      break;
                  }
                  break;
                case (MR_Integer) 101:
                  if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 108))))
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) {
                      case (MR_Integer) 0:
                        parse_tree__file_names__case_num_0 = (MR_Integer) 16;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".erl_date"))
                          parse_tree__file_names__case_num_0 = (MR_Integer) 17;
                        break;
                    }
                  break;
                case (MR_Integer) 104:
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".hrl"))
                    parse_tree__file_names__case_num_0 = (MR_Integer) 18;
                  break;
                case (MR_Integer) 105:
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 108:
                      switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) {
                        case (MR_Integer) 0:
                          parse_tree__file_names__case_num_0 = (MR_Integer) 19;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".il_date"))
                            parse_tree__file_names__case_num_0 = (MR_Integer) 20;
                          break;
                      }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".imdg"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 21;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".init"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 22;
                      break;
                  }
                  break;
                case (MR_Integer) 106:
                  if (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 97))
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) {
                      case (MR_Integer) 114:
                        if (MR_offset_streq(4, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".jar"))
                          parse_tree__file_names__case_num_0 = (MR_Integer) 23;
                        break;
                      case (MR_Integer) 118:
                        if (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 97))
                          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) {
                            case (MR_Integer) 0:
                              parse_tree__file_names__case_num_0 = (MR_Integer) 24;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(6, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".java_date"))
                                parse_tree__file_names__case_num_0 = (MR_Integer) 25;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".mih"))
                    parse_tree__file_names__case_num_0 = (MR_Integer) 26;
                  break;
                case (MR_Integer) 111:
                  if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 116))))
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) {
                      case (MR_Integer) 0:
                        parse_tree__file_names__case_num_0 = (MR_Integer) 27;
                        break;
                      case (MR_Integer) 100:
                        if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".optdate"))
                          parse_tree__file_names__case_num_0 = (MR_Integer) 28;
                        break;
                    }
                  break;
                case (MR_Integer) 112:
                  if (((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 115))))
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) {
                      case (MR_Integer) 0:
                        parse_tree__file_names__case_num_0 = (MR_Integer) 29;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".pic_s_date"))
                          parse_tree__file_names__case_num_0 = (MR_Integer) 30;
                        break;
                    }
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".request"))
                    parse_tree__file_names__case_num_0 = (MR_Integer) 31;
                  break;
                case (MR_Integer) 115:
                  switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 0:
                      parse_tree__file_names__case_num_0 = (MR_Integer) 32;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(3, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".s_date"))
                        parse_tree__file_names__case_num_0 = (MR_Integer) 33;
                      break;
                  }
                  break;
                case (MR_Integer) 116:
                  if (((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 97))))
                    switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(5, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".track_flags"))
                          parse_tree__file_names__case_num_0 = (MR_Integer) 34;
                        break;
                      case (MR_Integer) 110:
                        if (((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 9)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 10)) {
                            case (MR_Integer) 0:
                              parse_tree__file_names__case_num_0 = (MR_Integer) 35;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(11, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".trans_opt_date"))
                                parse_tree__file_names__case_num_0 = (MR_Integer) 36;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".used"))
                    parse_tree__file_names__case_num_0 = (MR_Integer) 37;
                  break;
              }
              break;
            case (MR_Integer) 95:
              if (((((((((((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 46))))
                switch (MR_nth_code_unit(((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) {
                  case (MR_Integer) 36:
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.\044O"))
                      parse_tree__file_names__case_num_0 = (MR_Integer) 38;
                    break;
                  case (MR_Integer) 98:
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.beam"))
                      parse_tree__file_names__case_num_0 = (MR_Integer) 39;
                    break;
                  case (MR_Integer) 99:
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.c"))
                      parse_tree__file_names__case_num_0 = (MR_Integer) 40;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(7, (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.erl"))
                      parse_tree__file_names__case_num_0 = (MR_Integer) 41;
                    break;
                }
              break;
          }
          if ((parse_tree__file_names__case_num_0 < (MR_Integer) 0))
            (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
          else
          {
            /* we found a match; look up the results */
            (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
          }
        }
        if (!((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
        {
          {
            MR_String parse_tree__file_names__Var_56;

            libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 578, &parse_tree__file_names__Var_56);
            (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, parse_tree__file_names__Var_56) == 0);
          }
          if (!((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
          {
            {
              MR_String parse_tree__file_names__Var_57;

              libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 577, &parse_tree__file_names__Var_57);
              (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, parse_tree__file_names__Var_57) == 0);
            }
            if (!((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
            {
              {
                MR_String parse_tree__file_names__Var_58;

                libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 576, &parse_tree__file_names__Var_58);
                (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, parse_tree__file_names__Var_58) == 0);
              }
              if (!((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
              {
                parse_tree__file_names__make_file_name_9_p_0_3(&parse_tree__file_names__env);
              }
            }
          }
        }
        if ((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
        {
          (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (parse_tree__file_names__Search_12 == (MR_Integer) 0);
          if ((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
          {
            /* binary string simple lookup switch */
            parse_tree__file_names__lo_2 = (MR_Integer) 0;
            parse_tree__file_names__hi_3 = (MR_Integer) 4;
            do
            {
              parse_tree__file_names__mid_4 = (((parse_tree__file_names__lo_2 + parse_tree__file_names__hi_3)) / (MR_Integer) 2);
              parse_tree__file_names__result_5 = MR_strcmp(parse_tree__file_names__Ext_15, ((&parse_tree__file_names_vector_common_1[0 + parse_tree__file_names__mid_4]))->parse_tree__file_names__vector_common_type_1_0__vct_1_f_0);
              if ((parse_tree__file_names__result_5 == (MR_Integer) 0))
              {
                (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_0;
              }
              else
              if ((parse_tree__file_names__result_5 < (MR_Integer) 0))
                parse_tree__file_names__hi_3 = (parse_tree__file_names__mid_4 - (MR_Integer) 1);
              else
                parse_tree__file_names__lo_2 = (parse_tree__file_names__mid_4 + (MR_Integer) 1);
            }
            while ((parse_tree__file_names__lo_2 <= parse_tree__file_names__hi_3));
            (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
          label_0:;
          }
          (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = !((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded);
        }
      }
      if ((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      {
        MR_String parse_tree__file_names__Grade_20;
        MR_String parse_tree__file_names__TargetArch_21;
        MR_Word parse_tree__file_names__Var_34;
        MR_Word parse_tree__file_names__Var_35;
        MR_Word parse_tree__file_names__Var_36;

        libs__compute_grade__grade_directory_component_2_p_0((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, &parse_tree__file_names__Grade_20);
        libs__globals__lookup_string_option_3_p_0((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 668, &parse_tree__file_names__TargetArch_21);
        {
          parse_tree__file_names__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_36, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_36, 1) = ((MR_Box) (parse_tree__file_names__SubDirNames_11));
        }
        {
          parse_tree__file_names__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_35, 0) = ((MR_Box) (parse_tree__file_names__TargetArch_21));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_35, 1) = ((MR_Box) (parse_tree__file_names__Var_36));
        }
        {
          parse_tree__file_names__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_34, 0) = ((MR_Box) (parse_tree__file_names__Grade_20));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_34, 1) = ((MR_Box) (parse_tree__file_names__Var_35));
        }
        {
          parse_tree__file_names__DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 1) = ((MR_Box) (parse_tree__file_names__Var_34));
        }
      }
      else
      {
        (parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (parse_tree__file_names__UseSubdirs_19 == (MR_Integer) 1);
        if ((parse_tree__file_names__env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
        {
          {
            parse_tree__file_names__DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(MR_mktag(1), parse_tree__file_names__DirComponents_22, 1) = ((MR_Box) (parse_tree__file_names__SubDirNames_11));
          }
        }
        else
          parse_tree__file_names__DirComponents_22 = parse_tree__file_names__SubDirNames_11;
      }
      if ((parse_tree__file_names__DirComponents_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__file_names__FileName_16 = parse_tree__file_names__BaseName_14;
      else
      {
        MR_Word parse_tree__file_names__Components_27;
        MR_Word parse_tree__file_names__Var_40;

        switch (parse_tree__file_names__MkDir_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__file_names__DirName_25;
              MR_Word parse_tree__file_names__Var_26;

              parse_tree__file_names__DirName_25 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__DirComponents_22);
              mercury__dir__make_directory_4_p_0(parse_tree__file_names__DirName_25, &parse_tree__file_names__Var_26);
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        {
          parse_tree__file_names__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_40, 0) = ((MR_Box) (parse_tree__file_names__BaseName_14));
          MR_hl_field(MR_mktag(1), parse_tree__file_names__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        parse_tree__file_names__Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__file_names__DirComponents_22, parse_tree__file_names__Var_40);
        *parse_tree__file_names__FileName_16 = mercury__dir__relative_path_name_from_components_1_f_0(parse_tree__file_names__Components_27);
      }
    }
  }
}

MR_Word MR_CALL 
parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(
  MR_Word parse_tree__file_names__ModuleName_3)
{
  {
    MR_bool parse_tree__file_names__succeeded;
    MR_Word parse_tree__file_names__QualModuleName_4;

    parse_tree__file_names__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__file_names__ModuleName_3);
    if (parse_tree__file_names__succeeded)
    {
      parse_tree__file_names__QualModuleName_4 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", parse_tree__file_names__ModuleName_3);
    }
    else
      parse_tree__file_names__QualModuleName_4 = parse_tree__file_names__ModuleName_3;
    return parse_tree__file_names__QualModuleName_4;
  }
}

MR_bool MR_CALL 
parse_tree__file_names__mercury_std_library_module_name_1_p_0(
  MR_Word parse_tree__file_names__ModuleName_2)
{
  {
    MR_bool parse_tree__file_names__succeeded;

    if (((MR_tag((MR_Word) parse_tree__file_names__ModuleName_2)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        MR_String parse_tree__file_names__ModuleNameStr_6;

        parse_tree__file_names__ModuleNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__ModuleName_2);
        parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__ModuleNameStr_6);
      }
      if (!(parse_tree__file_names__succeeded))
      {
        MR_Word parse_tree__file_names__StrippedModuleName_7;
        MR_String parse_tree__file_names__StrippedModuleNameStr_8;
        MR_String parse_tree__file_names__Var_10;

        parse_tree__file_names__succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(parse_tree__file_names__ModuleName_2, &parse_tree__file_names__Var_10, &parse_tree__file_names__StrippedModuleName_7);
        if (parse_tree__file_names__succeeded)
        {
          parse_tree__file_names__succeeded = (strcmp((MR_String) "mercury", parse_tree__file_names__Var_10) == 0);
          if (parse_tree__file_names__succeeded)
          {
            parse_tree__file_names__StrippedModuleNameStr_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__file_names__StrippedModuleName_7);
            parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__StrippedModuleNameStr_8);
          }
        }
      }
    }
    else
    {
      MR_String parse_tree__file_names__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__file_names__ModuleName_2, (MR_Integer) 0)));

      parse_tree__file_names__succeeded = mercury__library__mercury_std_library_module_1_p_0(parse_tree__file_names__Name_3);
    }
    return parse_tree__file_names__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2)
{
  {
    MR_bool parse_tree__file_names__succeeded;

    parse_tree__file_names__succeeded = parse_tree__file_names____Unify____maybe_create_dirs_0_0(((MR_Word) parse_tree__file_names__wrapper_arg_1), ((MR_Word) parse_tree__file_names__wrapper_arg_2));
    return parse_tree__file_names__succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2,
  MR_Box parse_tree__file_names__wrapper_arg_3)
{
  {
    MR_Word parse_tree__file_names__conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____maybe_create_dirs_0_0(&parse_tree__file_names__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_names__wrapper_arg_2), ((MR_Word) parse_tree__file_names__wrapper_arg_3));
    *parse_tree__file_names__wrapper_arg_1 = ((MR_Box) (parse_tree__file_names__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2)
{
  {
    MR_bool parse_tree__file_names__succeeded;

    parse_tree__file_names__succeeded = parse_tree__file_names____Unify____maybe_search_0_0(((MR_Word) parse_tree__file_names__wrapper_arg_1), ((MR_Word) parse_tree__file_names__wrapper_arg_2));
    return parse_tree__file_names__succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * parse_tree__file_names__wrapper_arg_1,
  MR_Box parse_tree__file_names__wrapper_arg_2,
  MR_Box parse_tree__file_names__wrapper_arg_3)
{
  {
    MR_Word parse_tree__file_names__conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____maybe_search_0_0(&parse_tree__file_names__conv0_HeadVar__1_1, ((MR_Word) parse_tree__file_names__wrapper_arg_2), ((MR_Word) parse_tree__file_names__wrapper_arg_3));
    *parse_tree__file_names__wrapper_arg_1 = ((MR_Box) (parse_tree__file_names__conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__file_names__init(void)
{
}

void mercury__parse_tree__file_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0);
}

void mercury__parse_tree__file_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__file_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.file_names. */
