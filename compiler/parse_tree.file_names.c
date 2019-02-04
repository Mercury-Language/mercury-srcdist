/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2018-09-16
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.file_names.
// :- implementation.

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
#include "multi_map.mih"
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
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word BaseParentDirs_13,
  MR_String BaseName_14,
  MR_String Ext_15,
  MR_Word Search_16,
  MR_Word MkDir_17,
  MR_String * FileName_18);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
  MR_Word Globals_10,
  MR_Word SubDirNames_11,
  MR_Word Search_12,
  MR_Word MkDir_13,
  MR_String BaseName_14,
  MR_String Ext_15,
  MR_String * FileName_16);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[1][2];


/* sealed */ struct parse_tree__file_names__vector_common_type_1_0_s {
  const MR_String parse_tree__file_names__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_1_0_s parse_tree__file_names_vector_common_1[41];



static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) ((MR_Unsigned) 0U))
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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__file_names__make_include_file_path_3_p_0(
  MR_String ModuleSourceFileName_4,
  MR_String OrigFileName_5,
  MR_String * Path_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir__path_name_is_absolute_1_p_0(OrigFileName_5);
    if (succeeded)
      *Path_6 = OrigFileName_5;
    else
    {
      MR_String Var_7;

      Var_7 = mercury__dir__dirname_1_f_0(ModuleSourceFileName_4);
      *Path_6 = mercury__dir__f_slash_2_f_0(Var_7, OrigFileName_5);
    }
  }
}

void MR_CALL 
parse_tree__file_names__get_class_dir_name_2_p_0(
  MR_Word Globals_3,
  MR_String * ClassDirName_4)
{
  {
    MR_Word UseGradeSubdirs_5;
    MR_Word UseSubdirs_6;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 662, &UseGradeSubdirs_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 661, &UseSubdirs_6);
    switch (UseGradeSubdirs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (UseSubdirs_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ClassDirName_4 = (MR_String) ".";
            break;
          case (MR_Integer) 1:
            {
              *ClassDirName_4 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Grade_7;
          MR_String TargetArch_8;
          MR_String Var_14;
          MR_String Var_15;
          MR_String Var_16;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_3, &Grade_7);
          libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 680, &TargetArch_8);
          Var_16 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_7);
          Var_15 = mercury__dir__f_slash_2_f_0(Var_16, TargetArch_8);
          Var_14 = mercury__dir__f_slash_2_f_0(Var_15, (MR_String) "Mercury");
          *ClassDirName_4 = mercury__dir__f_slash_2_f_0(Var_14, (MR_String) "classs");
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_make_var_name_2_p_0(
  MR_Word ModuleName_3,
  MR_String * MakeVarName_4)
{
  *MakeVarName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_stem_2_p_0(
  MR_Word ModuleName_3,
  MR_String * FileName_4)
{
  *FileName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
}

void MR_CALL 
parse_tree__file_names__file_name_to_module_name_2_p_0(
  MR_String FileName_3,
  MR_Word * ModuleName_4)
{
  *ModuleName_4 = mdbcomp__sym_name__string_to_sym_name_1_f_0(FileName_3);
}

void MR_CALL 
parse_tree__file_names__extra_link_obj_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String ExtraLinkObjName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, ExtraLinkObjName_11, Ext_12, MkDir_13, FileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_String ExtraLinkObjName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  {
    MR_String BaseName_16;

    BaseName_16 = mercury__string__f_43_43_2_f_0(ExtraLinkObjName_11, Ext_12);
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 0U), BaseName_16, Ext_12, (MR_Integer) 1, MkDir_13, FileName_14);
  }
}

void MR_CALL 
parse_tree__file_names__fact_table_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String FactTableFileName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, FactTableFileName_11, Ext_12, MkDir_13, FileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_String FactTableFileName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  {
    MR_String BaseName_28;

    BaseName_28 = mercury__string__f_43_43_2_f_0(FactTableFileName_11, Ext_12);
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 0U), BaseName_28, Ext_12, (MR_Integer) 1, MkDir_13, FileName_14);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_8_p_0(
  MR_Word Globals_9,
  MR_String Prefix_10,
  MR_Word ModuleName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  {
    MR_String BaseFileName_16;
    MR_String BaseName_17;
    MR_String Var_20;

    BaseFileName_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
    Var_20 = mercury__string__f_43_43_2_f_0(BaseFileName_16, Ext_12);
    BaseName_17 = mercury__string__f_43_43_2_f_0(Prefix_10, Var_20);
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 0U), BaseName_17, Ext_12, (MR_Integer) 1, MkDir_13, FileName_14);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_6_p_0(
  MR_Word Globals_7,
  MR_String Ext_8,
  MR_Word ModuleName_9,
  MR_String * FileName_10)
{
  {
    MR_bool succeeded = (strcmp(Ext_8, (MR_String) ".m") == 0);

    if (succeeded)
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_9, FileName_10);
    else
    {
      succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".java");
      if (!(succeeded))
      {
        succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".class");
      }
      if (succeeded)
      {
        MR_String MangledModuleName_27;
        MR_String BaseName_28;

        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_9, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_27);
        BaseName_28 = mercury__string__f_43_43_2_f_0(MangledModuleName_27, Ext_8);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_7, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_2[0])), BaseName_28, Ext_8, (MR_Integer) 0, (MR_Integer) 1, FileName_10);
      }
      else
      {
        succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".erl");
        if (!(succeeded))
        {
          succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".hrl");
          if (!(succeeded))
          {
            succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".beam");
          }
        }
        if (succeeded)
        {
          MR_Word ErlangModuleName_29;
          MR_String Var_41;
          MR_String BaseName_49;

          succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_9);
          if (succeeded)
          {
            ErlangModuleName_29 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName_9);
          }
          else
            ErlangModuleName_29 = ModuleName_9;
          Var_41 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_29, (MR_String) "__");
          BaseName_49 = mercury__string__f_43_43_2_f_0(Var_41, Ext_8);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_7, (MR_Word) ((MR_Unsigned) 0U), BaseName_49, Ext_8, (MR_Integer) 0, (MR_Integer) 1, FileName_10);
        }
        else
        {
          MR_String Var_45;
          MR_String BaseName_50;

          Var_45 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_9, (MR_String) ".");
          BaseName_50 = mercury__string__f_43_43_2_f_0(Var_45, Ext_8);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_7, (MR_Word) ((MR_Unsigned) 0U), BaseName_50, Ext_8, (MR_Integer) 0, (MR_Integer) 1, FileName_10);
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_source_filename_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_String * SourceFileName_8)
{
  {
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 1, (MR_String) ".m", ModuleName_7, SourceFileName_8);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_7_p_0(
  MR_Word Globals_8,
  MR_Word MkDir_9,
  MR_String Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  {
    MR_bool succeeded = (strcmp(Ext_10, (MR_String) ".m") == 0);

    if (succeeded)
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_11, FileName_12);
    else
    {
      succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".java");
      if (!(succeeded))
      {
        succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".class");
      }
      if (succeeded)
      {
        MR_String MangledModuleName_28;
        MR_String BaseName_29;

        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_11, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_28);
        BaseName_29 = mercury__string__f_43_43_2_f_0(MangledModuleName_28, Ext_10);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_8, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_2[0])), BaseName_29, Ext_10, (MR_Integer) 1, MkDir_9, FileName_12);
      }
      else
      {
        succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".erl");
        if (!(succeeded))
        {
          succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".hrl");
          if (!(succeeded))
          {
            succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".beam");
          }
        }
        if (succeeded)
        {
          MR_Word ErlangModuleName_30;
          MR_String Var_42;
          MR_String BaseName_50;

          succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_11);
          if (succeeded)
          {
            ErlangModuleName_30 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName_11);
          }
          else
            ErlangModuleName_30 = ModuleName_11;
          Var_42 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ErlangModuleName_30, (MR_String) "__");
          BaseName_50 = mercury__string__f_43_43_2_f_0(Var_42, Ext_10);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_8, (MR_Word) ((MR_Unsigned) 0U), BaseName_50, Ext_10, (MR_Integer) 1, MkDir_9, FileName_12);
        }
        else
        {
          MR_String Var_46;
          MR_String BaseName_51;

          Var_46 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_11, (MR_String) ".");
          BaseName_51 = mercury__string__f_43_43_2_f_0(Var_46, Ext_10);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_8, (MR_Word) ((MR_Unsigned) 0U), BaseName_51, Ext_10, (MR_Integer) 1, MkDir_9, FileName_12);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5, 1);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67) == 0);
    if (!((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
    {
      MR_String Var_72;

      Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67);
      (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, Var_72) == 0);
    }
    if ((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5) == 0)
      {
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 530, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(env_ptr);
        }
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 531, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_67);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(env_ptr);
        }
        (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word BaseParentDirs_13,
  MR_String BaseName_14,
  MR_String Ext_15,
  MR_Word Search_16,
  MR_Word MkDir_17,
  MR_String * FileName_18)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s env;

    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11 = Globals_11;
    {
      MR_Word UseSubdirs_20;
      MR_Word UseGradeSubdirs_21;
      MR_String LibExt_22;
      MR_String SharedLibExt_23;
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;

      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 661, &UseSubdirs_20);
      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 662, &UseGradeSubdirs_21);
      libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 589, &LibExt_22);
      libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 588, &SharedLibExt_23);
      (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (Search_16 == (MR_Integer) 0);
      if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Ext_15, ((&parse_tree__file_names_vector_common_1[5 + mid_2]))->parse_tree__file_names__vector_common_type_1_0__vct_1_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
        }
        while ((lo_0 <= hi_1));
        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      label_0:;
      }
      if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        *FileName_18 = BaseName_14;
      else
      {
        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (UseSubdirs_20 == (MR_Integer) 0);
        if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          parse_tree__file_names__make_file_name_9_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, BaseParentDirs_13, Search_16, MkDir_17, BaseName_14, Ext_15, FileName_18);
        else
        {
          MR_String BaseExt_57;
          MR_String Var_60;

          (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (UseGradeSubdirs_21 == (MR_Integer) 1);
          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            Var_60 = (MR_String) ".tmp";
            (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_suffix_3_p_0(Ext_15, Var_60, &BaseExt_57);
            if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58 = BaseExt_57;
            else
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58 = Ext_15;
            {
              MR_Integer case_num_4 = (MR_Integer) -1;

              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 0)) {
                case (MR_Integer) 0:
                  case_num_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 1)) {
                    case (MR_Integer) 36:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".\044A"))
                        case_num_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 0:
                          case_num_4 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 110:
                          if (((((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 8)) == (MR_Integer) 115))))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 9)) {
                              case (MR_Integer) 0:
                                case_num_4 = (MR_Integer) 3;
                                break;
                              case (MR_Integer) 95:
                                switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 10)) {
                                  case (MR_Integer) 100:
                                    if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".analysis_date"))
                                      case_num_4 = (MR_Integer) 4;
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".analysis_status"))
                                      case_num_4 = (MR_Integer) 5;
                                    break;
                                }
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".bat"))
                            case_num_4 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 101:
                          if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 109))))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) {
                              case (MR_Integer) 0:
                                case_num_4 = (MR_Integer) 7;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(6, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".beams"))
                                  case_num_4 = (MR_Integer) 8;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 0:
                          case_num_4 = (MR_Integer) 9;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".c_date"))
                            case_num_4 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".class"))
                            case_num_4 = (MR_Integer) 11;
                          break;
                        case (MR_Integer) 115:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) {
                            case (MR_Integer) 0:
                              case_num_4 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".cs_date"))
                                case_num_4 = (MR_Integer) 13;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 105:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".dir"))
                            case_num_4 = (MR_Integer) 14;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".dll"))
                            case_num_4 = (MR_Integer) 15;
                          break;
                      }
                      break;
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 108))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) {
                          case (MR_Integer) 0:
                            case_num_4 = (MR_Integer) 16;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".erl_date"))
                              case_num_4 = (MR_Integer) 17;
                            break;
                        }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".hrl"))
                        case_num_4 = (MR_Integer) 18;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) {
                            case (MR_Integer) 0:
                              case_num_4 = (MR_Integer) 19;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".il_date"))
                                case_num_4 = (MR_Integer) 20;
                              break;
                          }
                          break;
                        case (MR_Integer) 109:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".imdg"))
                            case_num_4 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".init"))
                            case_num_4 = (MR_Integer) 22;
                          break;
                      }
                      break;
                    case (MR_Integer) 106:
                      if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 97))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) {
                          case (MR_Integer) 114:
                            if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".jar"))
                              case_num_4 = (MR_Integer) 23;
                            break;
                          case (MR_Integer) 118:
                            if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 97))
                              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) {
                                case (MR_Integer) 0:
                                  case_num_4 = (MR_Integer) 24;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(6, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".java_date"))
                                    case_num_4 = (MR_Integer) 25;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".mih"))
                        case_num_4 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 111:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 116))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) {
                          case (MR_Integer) 0:
                            case_num_4 = (MR_Integer) 27;
                            break;
                          case (MR_Integer) 100:
                            if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".optdate"))
                              case_num_4 = (MR_Integer) 28;
                            break;
                        }
                      break;
                    case (MR_Integer) 112:
                      if (((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 115))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) {
                          case (MR_Integer) 0:
                            case_num_4 = (MR_Integer) 29;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".pic_s_date"))
                              case_num_4 = (MR_Integer) 30;
                            break;
                        }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".request"))
                        case_num_4 = (MR_Integer) 31;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) {
                        case (MR_Integer) 0:
                          case_num_4 = (MR_Integer) 32;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".s_date"))
                            case_num_4 = (MR_Integer) 33;
                          break;
                      }
                      break;
                    case (MR_Integer) 116:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 97))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".track_flags"))
                              case_num_4 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 110:
                            if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 9)) == (MR_Integer) 116))))
                              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 10)) {
                                case (MR_Integer) 0:
                                  case_num_4 = (MR_Integer) 35;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".trans_opt_date"))
                                    case_num_4 = (MR_Integer) 36;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) ".used"))
                        case_num_4 = (MR_Integer) 37;
                      break;
                  }
                  break;
                case (MR_Integer) 95:
                  if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 5)) == (MR_Integer) 46))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58), 6)) {
                      case (MR_Integer) 36:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.\044O"))
                          case_num_4 = (MR_Integer) 38;
                        break;
                      case (MR_Integer) 98:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.beam"))
                          case_num_4 = (MR_Integer) 39;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.c"))
                          case_num_4 = (MR_Integer) 40;
                        break;
                      case (MR_Integer) 101:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, (MR_String) "_init.erl"))
                          case_num_4 = (MR_Integer) 41;
                        break;
                    }
                  break;
              }
              if ((case_num_4 < (MR_Integer) 0))
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              }
            }
            if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
            {
              {
                MR_String Var_68;

                libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 590, &Var_68);
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, Var_68) == 0);
              }
              if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
              {
                {
                  MR_String Var_69;

                  libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 589, &Var_69);
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, Var_69) == 0);
                }
                if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                {
                  {
                    MR_String Var_70;

                    libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 588, &Var_70);
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_58, Var_70) == 0);
                  }
                  if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                  {
                    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(&env);
                  }
                }
              }
            }
          }
          (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            {
              MR_Integer case_num_6 = (MR_Integer) -1;

              switch (MR_nth_code_unit(Ext_15, 0)) {
                case (MR_Integer) 0:
                  case_num_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(Ext_15, 1)) {
                    case (MR_Integer) 36:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 40:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".\044(EXT_FOR_SHARED_LIB)"))
                            case_num_6 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 65:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".\044A"))
                            case_num_6 = (MR_Integer) 2;
                          break;
                      }
                      break;
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 0:
                          case_num_6 = (MR_Integer) 3;
                          break;
                        case (MR_Integer) 108:
                          if (((((MR_nth_code_unit(Ext_15, 3)) == (MR_Integer) 108)) && (((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(Ext_15, 5)) {
                              case (MR_Integer) 105:
                                if (((((MR_nth_code_unit(Ext_15, 6)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Ext_15, 7)) == (MR_Integer) 116))))
                                  switch (MR_nth_code_unit(Ext_15, 8)) {
                                    case (MR_Integer) 51:
                                      if (MR_offset_streq(9, Ext_15, (MR_String) ".all_int3s"))
                                        case_num_6 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(9, Ext_15, (MR_String) ".all_ints"))
                                        case_num_6 = (MR_Integer) 5;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 111:
                                if (MR_offset_streq(6, Ext_15, (MR_String) ".all_opts"))
                                  case_num_6 = (MR_Integer) 6;
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(6, Ext_15, (MR_String) ".all_trans_opts"))
                                  case_num_6 = (MR_Integer) 7;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".bat"))
                            case_num_6 = (MR_Integer) 8;
                          break;
                        case (MR_Integer) 101:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".beams"))
                            case_num_6 = (MR_Integer) 9;
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 104:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".check"))
                            case_num_6 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".classes"))
                                case_num_6 = (MR_Integer) 11;
                              break;
                            case (MR_Integer) 101:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".clean"))
                                case_num_6 = (MR_Integer) 12;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 101:
                          if (((((((((MR_nth_code_unit(Ext_15, 3)) == (MR_Integer) 112)) && (((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Ext_15, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Ext_15, 6)) == (MR_Integer) 100))))
                            switch (MR_nth_code_unit(Ext_15, 7)) {
                              case (MR_Integer) 0:
                                case_num_6 = (MR_Integer) 13;
                                break;
                              case (MR_Integer) 101:
                                if (MR_offset_streq(8, Ext_15, (MR_String) ".dependency_graph"))
                                  case_num_6 = (MR_Integer) 14;
                                break;
                            }
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".dll"))
                            case_num_6 = (MR_Integer) 15;
                          break;
                        case (MR_Integer) 121:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".dylib"))
                            case_num_6 = (MR_Integer) 16;
                          break;
                      }
                      break;
                    case (MR_Integer) 101:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 114:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 108:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".erls"))
                                case_num_6 = (MR_Integer) 17;
                              break;
                            case (MR_Integer) 114:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".err"))
                                case_num_6 = (MR_Integer) 18;
                              break;
                          }
                          break;
                        case (MR_Integer) 120:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".exe"))
                            case_num_6 = (MR_Integer) 19;
                          break;
                      }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".hlds_dump"))
                        case_num_6 = (MR_Integer) 20;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".ils"))
                            case_num_6 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 110:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 105:
                              if (((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 116))
                                switch (MR_nth_code_unit(Ext_15, 5)) {
                                  case (MR_Integer) 0:
                                    case_num_6 = (MR_Integer) 22;
                                    break;
                                  case (MR_Integer) 46:
                                    if (MR_offset_streq(6, Ext_15, (MR_String) ".init.tmp"))
                                      case_num_6 = (MR_Integer) 23;
                                    break;
                                }
                              break;
                            case (MR_Integer) 115:
                              if (((((((((((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 116)) && (((MR_nth_code_unit(Ext_15, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Ext_15, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Ext_15, 7)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Ext_15, 8)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(Ext_15, 9)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_grade_hdrs"))
                                      case_num_6 = (MR_Integer) 24;
                                    break;
                                  case (MR_Integer) 104:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_hdrs"))
                                      case_num_6 = (MR_Integer) 25;
                                    break;
                                  case (MR_Integer) 105:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_ints"))
                                      case_num_6 = (MR_Integer) 26;
                                    break;
                                  case (MR_Integer) 111:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_opts"))
                                      case_num_6 = (MR_Integer) 27;
                                    break;
                                }
                              break;
                            case (MR_Integer) 116:
                              switch (MR_nth_code_unit(Ext_15, 4)) {
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(5, Ext_15, (MR_String) ".int3s"))
                                    case_num_6 = (MR_Integer) 28;
                                  break;
                                case (MR_Integer) 115:
                                  if (MR_offset_streq(5, Ext_15, (MR_String) ".ints"))
                                    case_num_6 = (MR_Integer) 29;
                                  break;
                              }
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 106:
                      if (((MR_nth_code_unit(Ext_15, 2)) == (MR_Integer) 97))
                        switch (MR_nth_code_unit(Ext_15, 3)) {
                          case (MR_Integer) 114:
                            if (MR_offset_streq(4, Ext_15, (MR_String) ".jar"))
                              case_num_6 = (MR_Integer) 30;
                            break;
                          case (MR_Integer) 118:
                            if (MR_offset_streq(4, Ext_15, (MR_String) ".javas"))
                              case_num_6 = (MR_Integer) 31;
                            break;
                        }
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".lib"))
                        case_num_6 = (MR_Integer) 32;
                      break;
                    case (MR_Integer) 109:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 104:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 0:
                              case_num_6 = (MR_Integer) 33;
                              break;
                            case (MR_Integer) 46:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".mh.tmp"))
                                case_num_6 = (MR_Integer) 34;
                              break;
                          }
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".mlds_dump"))
                            case_num_6 = (MR_Integer) 35;
                          break;
                      }
                      break;
                    case (MR_Integer) 111:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 112:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".opts"))
                            case_num_6 = (MR_Integer) 36;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".order"))
                            case_num_6 = (MR_Integer) 37;
                          break;
                      }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".realclean"))
                        case_num_6 = (MR_Integer) 38;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".so"))
                        case_num_6 = (MR_Integer) 39;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".trans_opts"))
                        case_num_6 = (MR_Integer) 40;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".ugly"))
                        case_num_6 = (MR_Integer) 41;
                      break;
                  }
                  break;
              }
              if ((case_num_6 < (MR_Integer) 0))
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              }
            }
            if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
            {
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0(Ext_15, (MR_String) ".mih_dump");
              if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
              {
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0(Ext_15, (MR_String) ".c_dump");
              }
            }
          }
          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
            *FileName_18 = BaseName_14;
          else
          {
            MR_String SubDirName_24;
            MR_Word Var_49;

            if ((strcmp(Ext_15, (MR_String) ".dir/*.o") == 0))
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            else
            if ((strcmp(Ext_15, (MR_String) ".dir/*.\044O") == 0))
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            else
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
            if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
              SubDirName_24 = (MR_String) "dirs";
            else
            {
              MR_Integer slot_7 = ((MR_hash_string6(Ext_15)) & (MR_Integer) 31);
              MR_String str_8 = ((&parse_tree__file_names_vector_common_1[9 + slot_7]))->parse_tree__file_names__vector_common_type_1_0__vct_1_f_0;

              // hashed string simple lookup switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_8 != NULL)) && ((strcmp(str_8, Ext_15) == 0))))
              {
                // we found a match; look up the results
                ;
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_1;
              }
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
            label_1:;
              if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                SubDirName_24 = (MR_String) "os";
              else
              {
                MR_String ExtName_25;

                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) "_init.", &ExtName_25, Ext_15);
                if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                {
                  mercury__string__append_3_p_2(ExtName_25, (MR_String) "s", &SubDirName_24);
                }
                else
                {
                  MR_String ExtName_54;
                  MR_String ExtName0_26;
                  MR_String Var_39;

                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) ".", &ExtName0_26, Ext_15);
                  if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                  {
                    Var_39 = (MR_String) ".tmp";
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_suffix_3_p_0(ExtName0_26, Var_39, &ExtName_54);
                  }
                  if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                  {
                    mercury__string__append_3_p_2(ExtName_54, (MR_String) "s", &SubDirName_24);
                  }
                  else
                  {
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, (MR_String) ".dv") == 0);
                    if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                      SubDirName_24 = (MR_String) "deps";
                    else
                    {
                      (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, LibExt_22) == 0);
                      if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, SharedLibExt_23) == 0);
                      if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                        SubDirName_24 = (MR_String) "lib";
                      else
                      {
                        MR_String ExtName_51;

                        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) ".", &ExtName_51, Ext_15);
                        if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                        {
                          mercury__string__append_3_p_2(ExtName_51, (MR_String) "s", &SubDirName_24);
                        }
                        else
                        {
                          (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, (MR_String) "") == 0);
                          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                            SubDirName_24 = (MR_String) "bin";
                          else
                          {
                            MR_String Var_45;
                            MR_String Var_47;

                            Var_47 = mercury__string__f_43_43_2_f_0(Ext_15, (MR_String) "\'");
                            Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "unknown extension \140", Var_47);
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.file_names", (MR_String) "predicate \140parse_tree.file_names.choose_file_name\'/10", Var_45);
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
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (SubDirName_24));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (BaseParentDirs_13));
            }
            parse_tree__file_names__make_file_name_9_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, Var_49, Search_16, MkDir_17, BaseName_14, Ext_15, FileName_18);
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55) == 0);
    if (!((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
    {
      MR_String Var_60;

      Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55);
      (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, Var_60) == 0);
    }
    if ((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      parse_tree__file_names__make_file_name_9_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1) == 0)
      {
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 530, &(env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55);
          parse_tree__file_names__make_file_name_9_p_0_2(env_ptr);
        }
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 531, &(env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_55);
          parse_tree__file_names__make_file_name_9_p_0_2(env_ptr);
        }
        (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
  MR_Word Globals_10,
  MR_Word SubDirNames_11,
  MR_Word Search_12,
  MR_Word MkDir_13,
  MR_String BaseName_14,
  MR_String Ext_15,
  MR_String * FileName_16)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s env;

    (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10 = Globals_10;
    {
      MR_Word UseGradeSubdirs_18;
      MR_Word UseSubdirs_19;
      MR_Word DirComponents_22;
      MR_String BaseExt_45;
      MR_String Var_48;
      MR_Integer lo_2;
      MR_Integer hi_3;
      MR_Integer mid_4;
      MR_Integer result_5;

      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 662, &UseGradeSubdirs_18);
      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 661, &UseSubdirs_19);
      (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (UseGradeSubdirs_18 == (MR_Integer) 1);
      if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      {
        Var_48 = (MR_String) ".tmp";
        (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = mercury__string__remove_suffix_3_p_0(Ext_15, Var_48, &BaseExt_45);
        if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46 = BaseExt_45;
        else
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46 = Ext_15;
        {
          MR_Integer case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 0)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 46:
              switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 1)) {
                case (MR_Integer) 36:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".\044A"))
                    case_num_0 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 97:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 110:
                      if (((((((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 8)) == (MR_Integer) 115))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 9)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 95:
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 10)) {
                              case (MR_Integer) 100:
                                if (MR_offset_streq(11, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".analysis_date"))
                                  case_num_0 = (MR_Integer) 4;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(11, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".analysis_status"))
                                  case_num_0 = (MR_Integer) 5;
                                break;
                            }
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 98:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".bat"))
                        case_num_0 = (MR_Integer) 6;
                      break;
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 109))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(6, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".beams"))
                              case_num_0 = (MR_Integer) 8;
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 99:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 9;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".c_date"))
                        case_num_0 = (MR_Integer) 10;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".class"))
                        case_num_0 = (MR_Integer) 11;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 12;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(4, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".cs_date"))
                            case_num_0 = (MR_Integer) 13;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 100:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".dir"))
                        case_num_0 = (MR_Integer) 14;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".dll"))
                        case_num_0 = (MR_Integer) 15;
                      break;
                  }
                  break;
                case (MR_Integer) 101:
                  if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 108))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 16;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(5, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".erl_date"))
                          case_num_0 = (MR_Integer) 17;
                        break;
                    }
                  break;
                case (MR_Integer) 104:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".hrl"))
                    case_num_0 = (MR_Integer) 18;
                  break;
                case (MR_Integer) 105:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 108:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 19;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(4, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".il_date"))
                            case_num_0 = (MR_Integer) 20;
                          break;
                      }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".imdg"))
                        case_num_0 = (MR_Integer) 21;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".init"))
                        case_num_0 = (MR_Integer) 22;
                      break;
                  }
                  break;
                case (MR_Integer) 106:
                  if (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 97))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) {
                      case (MR_Integer) 114:
                        if (MR_offset_streq(4, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".jar"))
                          case_num_0 = (MR_Integer) 23;
                        break;
                      case (MR_Integer) 118:
                        if (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 97))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 24;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(6, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".java_date"))
                                case_num_0 = (MR_Integer) 25;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".mih"))
                    case_num_0 = (MR_Integer) 26;
                  break;
                case (MR_Integer) 111:
                  if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 116))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 27;
                        break;
                      case (MR_Integer) 100:
                        if (MR_offset_streq(5, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".optdate"))
                          case_num_0 = (MR_Integer) 28;
                        break;
                    }
                  break;
                case (MR_Integer) 112:
                  if (((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 115))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 29;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".pic_s_date"))
                          case_num_0 = (MR_Integer) 30;
                        break;
                    }
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".request"))
                    case_num_0 = (MR_Integer) 31;
                  break;
                case (MR_Integer) 115:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 32;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".s_date"))
                        case_num_0 = (MR_Integer) 33;
                      break;
                  }
                  break;
                case (MR_Integer) 116:
                  if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 97))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(5, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".track_flags"))
                          case_num_0 = (MR_Integer) 34;
                        break;
                      case (MR_Integer) 110:
                        if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 9)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 10)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 35;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(11, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".trans_opt_date"))
                                case_num_0 = (MR_Integer) 36;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) ".used"))
                    case_num_0 = (MR_Integer) 37;
                  break;
              }
              break;
            case (MR_Integer) 95:
              if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 5)) == (MR_Integer) 46))))
                switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46), 6)) {
                  case (MR_Integer) 36:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.\044O"))
                      case_num_0 = (MR_Integer) 38;
                    break;
                  case (MR_Integer) 98:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.beam"))
                      case_num_0 = (MR_Integer) 39;
                    break;
                  case (MR_Integer) 99:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.c"))
                      case_num_0 = (MR_Integer) 40;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, (MR_String) "_init.erl"))
                      case_num_0 = (MR_Integer) 41;
                    break;
                }
              break;
          }
          if ((case_num_0 < (MR_Integer) 0))
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            ;
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
          }
        }
        if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
        {
          {
            MR_String Var_56;

            libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 590, &Var_56);
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, Var_56) == 0);
          }
          if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
          {
            {
              MR_String Var_57;

              libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 589, &Var_57);
              (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, Var_57) == 0);
            }
            if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
            {
              {
                MR_String Var_58;

                libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 588, &Var_58);
                (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_46, Var_58) == 0);
              }
              if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
              {
                parse_tree__file_names__make_file_name_9_p_0_3(&env);
              }
            }
          }
        }
        if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
        {
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (Search_12 == (MR_Integer) 0);
          if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
          {
            // binary string simple lookup switch
            ;
            lo_2 = (MR_Integer) 0;
            hi_3 = (MR_Integer) 4;
            do
            {
              mid_4 = (((MR_Integer) ((MR_Unsigned) lo_2 + (MR_Unsigned) hi_3)) / (MR_Integer) 2);
              result_5 = MR_strcmp(Ext_15, ((&parse_tree__file_names_vector_common_1[0 + mid_4]))->parse_tree__file_names__vector_common_type_1_0__vct_1_f_0);
              if ((result_5 == (MR_Integer) 0))
              {
                (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_5 < (MR_Integer) 0))
                hi_3 = (MR_Integer) ((MR_Unsigned) mid_4 - (MR_Unsigned) (MR_Integer) 1);
              else
                lo_2 = (MR_Integer) ((MR_Unsigned) mid_4 + (MR_Unsigned) (MR_Integer) 1);
            }
            while ((lo_2 <= hi_3));
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
          label_0:;
          }
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = !((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded);
        }
      }
      if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      {
        MR_String Grade_20;
        MR_String TargetArch_21;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;

        libs__compute_grade__grade_directory_component_2_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, &Grade_20);
        libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 680, &TargetArch_21);
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (SubDirNames_11));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (TargetArch_21));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Grade_20));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
        }
        {
          DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(MR_mktag(1), DirComponents_22, 1) = ((MR_Box) (Var_34));
        }
      }
      else
      {
        (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (UseSubdirs_19 == (MR_Integer) 1);
        if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
        {
          {
            DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(MR_mktag(1), DirComponents_22, 1) = ((MR_Box) (SubDirNames_11));
          }
        }
        else
          DirComponents_22 = SubDirNames_11;
      }
      if ((DirComponents_22 == (MR_Word) ((MR_Unsigned) 0U)))
        *FileName_16 = BaseName_14;
      else
      {
        MR_Word Components_27;
        MR_Word Var_40;

        switch (MkDir_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String DirName_25;
              MR_Word Var_26;

              DirName_25 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_22);
              mercury__dir__make_directory_4_p_0(DirName_25, &Var_26);
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (BaseName_14));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirComponents_22, Var_40);
        *FileName_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_27);
      }
    }
  }
}

MR_Word MR_CALL 
parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_bool succeeded;
    MR_Word QualModuleName_4;

    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_3);
    if (succeeded)
    {
      QualModuleName_4 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName_3);
    }
    else
      QualModuleName_4 = ModuleName_3;
    return QualModuleName_4;
  }
}

MR_bool MR_CALL 
parse_tree__file_names__mercury_std_library_module_name_1_p_0(
  MR_Word ModuleName_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) ModuleName_2)) == (MR_Integer) 1))
    {
      {
        MR_String ModuleNameStr_6;

        ModuleNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_2);
        succeeded = mercury__library__mercury_std_library_module_1_p_0(ModuleNameStr_6);
      }
      if (!(succeeded))
      {
        MR_Word StrippedModuleName_7;
        MR_String StrippedModuleNameStr_8;
        MR_String Var_10;

        succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ModuleName_2, &Var_10, &StrippedModuleName_7);
        if (succeeded)
        {
          succeeded = (strcmp((MR_String) "mercury", Var_10) == 0);
          if (succeeded)
          {
            StrippedModuleNameStr_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(StrippedModuleName_7);
            succeeded = mercury__library__mercury_std_library_module_1_p_0(StrippedModuleNameStr_8);
          }
        }
      }
    }
    else
    {
      MR_String Name_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_2, (MR_Integer) 0))));

      succeeded = mercury__library__mercury_std_library_module_1_p_0(Name_3);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____maybe_create_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____maybe_create_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____maybe_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____maybe_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.file_names.
