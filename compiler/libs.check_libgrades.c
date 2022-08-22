/*
** Automatically generated from `check_libgrades.m'
** by the Mercury compiler,
** version rotd-2022-08-22
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


// :- module libs.check_libgrades.
// :- implementation.

/*
INIT mercury__libs__check_libgrades__init
ENDINIT
*/

#include "libs.check_libgrades.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__395__2_2_f_0(
  MR_String GradeDirNameDir_86,
  MR_String LambdaHeadVar__1_74);

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__395__1_2_f_0(
  MR_String GradeDirNameDir_17,
  MR_String LambdaHeadVar__1_35);

static MR_Word MR_CALL 
libs__check_libgrades__IntroducedFrom__func__maybe_detect_stdlib_grades__122__1_1_f_0(
  MR_String LambdaHeadVar__1_38);

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0(
  MR_Word Globals_8,
  MR_String GradeDirName_9,
  MR_String LibName_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
libs__check_libgrades__do_detect_libgrade_using_lib_file_8_p_0(
  MR_String DirName_9,
  MR_String GradeFileName_10,
  MR_Word GradeFileType_11,
  MR_Word * Continue_12,
  MR_Word STATE_VARIABLE_Grades_0_19,
  MR_Word * STATE_VARIABLE_Grades_20);

static void MR_CALL 
libs__check_libgrades__do_detect_libgrade_using_init_file_8_p_0(
  MR_String DirName_9,
  MR_String GradeFileName_10,
  MR_Word GradeFileType_11,
  MR_Word * Continue_12,
  MR_Word STATE_VARIABLE_Grades_0_18,
  MR_Word * STATE_VARIABLE_Grades_19);

static void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
libs__check_libgrades__maybe_detect_stdlib_grades_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__check_libgrades__do_detect_libgrades_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
libs__check_libgrades__do_detect_libgrades_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);


static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[45][2];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[2][4];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[2][1];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_4[1][11];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_5[3][3];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_6[1][5];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_7[1][10];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_8[1][6];




static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[45][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "file."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Mercury.config"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "variable in the"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MERCURY_STDLIB_DIR"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the compiler, nor by any definition of the"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not specified either by the value of any"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that holds the Mercury standard library"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the location of the directory"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains more than one string."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[3])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "file"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the definition of the"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[3])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the Mercury standard library cannot be found"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in grade"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the library"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be found"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__check_libgrades_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__check_libgrades_scalar_common_2[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.find_mercury_stdlib\'/5")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[23])))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.find_mercury_stdlib\'/5")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[32])))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[2][1] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[43])))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[44])))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_5[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__check_libgrades_scalar_common_4[0])),
    ((MR_Box) (libs__check_libgrades__do_detect_libgrades_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__check_libgrades_scalar_common_4[0])),
    ((MR_Box) (libs__check_libgrades__do_detect_libgrades_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__check_libgrades_scalar_common_6[0])),
    ((MR_Box) (libs__check_libgrades__maybe_detect_stdlib_grades_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_8[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__395__2_2_f_0(
  MR_String GradeDirNameDir_86,
  MR_String LambdaHeadVar__1_74)
{
  MR_String LambdaHeadVar__2_75;
  MR_String Var_76;

  Var_76 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_74, (MR_String) "lib");
  LambdaHeadVar__2_75 = mercury__dir__f_slash_2_f_0(Var_76, GradeDirNameDir_86);
  return LambdaHeadVar__2_75;
}

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__395__1_2_f_0(
  MR_String GradeDirNameDir_17,
  MR_String LambdaHeadVar__1_35)
{
  MR_String LambdaHeadVar__2_36;
  MR_String Var_37;

  Var_37 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_35, (MR_String) "lib");
  LambdaHeadVar__2_36 = mercury__dir__f_slash_2_f_0(Var_37, GradeDirNameDir_17);
  return LambdaHeadVar__2_36;
}

static MR_Word MR_CALL 
libs__check_libgrades__IntroducedFrom__func__maybe_detect_stdlib_grades__122__1_1_f_0(
  MR_String LambdaHeadVar__1_38)
{
  MR_Word LambdaHeadVar__2_39;
  MR_Word Var_41;

  {
    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (LambdaHeadVar__1_38));
    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LambdaHeadVar__2_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__2_39, 0) = ((MR_Box) ((MR_String) "--libgrade"));
    MR_hl_field(MR_mktag(1), LambdaHeadVar__2_39, 1) = ((MR_Box) (Var_41));
  }
  return LambdaHeadVar__2_39;
}

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_75;

  conv1_LambdaHeadVar__2_75 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__395__2_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_75));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_36;

  conv0_LambdaHeadVar__2_36 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__395__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_36));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__check_libgrades__check_library_is_installed_7_p_0(
  MR_Word Globals_8,
  MR_String GradeDirName_9,
  MR_String LibName_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word Target_13;
  MR_String CheckFileName_14;
  MR_Word SearchDirs_15;
  MR_Word MaybeDirName_19;

  libs__globals__get_target_2_p_0(Globals_8, &Target_13);
  switch (Target_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".init");
        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 589, &SearchDirs_15);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MercuryLibDirs_16;
        MR_String GradeDirNameDir_17;
        MR_Word Var_34;

        CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".dll");
        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 581, &MercuryLibDirs_16);
        libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &GradeDirNameDir_17);
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_7_p_0_1));
          MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (GradeDirNameDir_17));
        }
        SearchDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, MercuryLibDirs_16);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MercuryLibDirs_85;
        MR_String GradeDirNameDir_86;
        MR_Word Var_88;

        CheckFileName_14 = mercury__string__f_43_43_2_f_0(LibName_10, (MR_String) ".jar");
        libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 581, &MercuryLibDirs_85);
        libs__compute_grade__grade_directory_component_2_p_0(Globals_8, &GradeDirNameDir_86);
        {
          Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_88, 3) = ((MR_Box) (GradeDirNameDir_86));
        }
        SearchDirs_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_88, MercuryLibDirs_85);
      }
      break;
  }
  parse_tree__find_module__search_for_file_returning_dir_5_p_0(SearchDirs_15, CheckFileName_14, &MaybeDirName_19);
  if (((MR_tag((MR_Word) MaybeDirName_19)) == (MR_Integer) 1))
  {
    MR_String ProgName_22;
    MR_Word Pieces_23;
    MR_Word Spec_24;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_61;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_22);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_42, 0) = ((MR_Box) (ProgName_22));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (LibName_10));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (GradeDirName_9));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[37])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[35])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_43));
    }
    {
      Spec_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_library_is_installed\'/7"));
      MR_hl_field(MR_mktag(2), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(2), Spec_24, 3) = ((MR_Box) (Pieces_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
    }
  }
  else
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
}

static void MR_CALL 
libs__check_libgrades__do_detect_libgrade_using_lib_file_8_p_0(
  MR_String DirName_9,
  MR_String GradeFileName_10,
  MR_Word GradeFileType_11,
  MR_Word * Continue_12,
  MR_Word STATE_VARIABLE_Grades_0_19,
  MR_Word * STATE_VARIABLE_Grades_20)
{
  MR_bool succeeded;

  switch (GradeFileType_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 5:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 1:
      {
        MR_String LibFile_15;

        succeeded = mercury__string__prefix_2_p_0(GradeFileName_10, (MR_String) "csharp");
        if (succeeded)
        {
          LibFile_15 = (MR_String) "mer_std.dll";
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = mercury__string__prefix_2_p_0(GradeFileName_10, (MR_String) "java");
          if (succeeded)
          {
            LibFile_15 = (MR_String) "mer_std.jar";
            succeeded = MR_TRUE;
          }
          else
            succeeded = mercury__builtin__false_0_p_0();
        }
        if (succeeded)
        {
          MR_String TargetFile_16;
          MR_Word Result_17;
          MR_String Var_23;

          Var_23 = mercury__dir__f_slash_2_f_0(DirName_9, GradeFileName_10);
          TargetFile_16 = mercury__dir__f_slash_2_f_0(Var_23, LibFile_15);
          mercury__io__file__check_file_accessibility_5_p_0(TargetFile_16, (MR_Word) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[33])), &Result_17);
          if ((Result_17 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (GradeFileName_10)), STATE_VARIABLE_Grades_0_19, STATE_VARIABLE_Grades_20);
          else
            *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
        }
        else
          *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      }
      break;
    case (MR_Integer) 7:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 8:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 9:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
    case (MR_Integer) 10:
      *STATE_VARIABLE_Grades_20 = STATE_VARIABLE_Grades_0_19;
      break;
  }
  *Continue_12 = (MR_Integer) 1;
}

static void MR_CALL 
libs__check_libgrades__do_detect_libgrade_using_init_file_8_p_0(
  MR_String DirName_9,
  MR_String GradeFileName_10,
  MR_Word GradeFileType_11,
  MR_Word * Continue_12,
  MR_Word STATE_VARIABLE_Grades_0_18,
  MR_Word * STATE_VARIABLE_Grades_19)
{
  switch (GradeFileType_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 5:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 1:
      {
        MR_String InitFile_15;
        MR_Word Result_16;
        MR_String Var_22;

        Var_22 = mercury__dir__f_slash_2_f_0(DirName_9, GradeFileName_10);
        InitFile_15 = mercury__dir__f_slash_2_f_0(Var_22, (MR_String) "mer_std.init");
        mercury__io__file__check_file_accessibility_5_p_0(InitFile_15, (MR_Word) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[33])), &Result_16);
        if ((Result_16 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (GradeFileName_10)), STATE_VARIABLE_Grades_0_18, STATE_VARIABLE_Grades_19);
        else
          *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      }
      break;
    case (MR_Integer) 7:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 3:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 8:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 9:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 4:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
    case (MR_Integer) 10:
      *STATE_VARIABLE_Grades_19 = STATE_VARIABLE_Grades_0_18;
      break;
  }
  *Continue_12 = (MR_Integer) 1;
}

static void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_26;

  libs__check_libgrades__check_library_is_installed_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_26));
}

void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(
  MR_Word Globals_5,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_Word LibgradeCheck_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 686, &LibgradeCheck_8);
  switch (LibgradeCheck_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_11 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Libs_9;
        MR_String GradeDirName_10;
        MR_Word STATE_VARIABLE_Specs_17_17;
        MR_Word Var_19;
        MR_Word MaybeStdLibDir_28;
        MR_Box conv2_STATE_VARIABLE_Specs_11;
        MR_Box conv1_STATE_VARIABLE_IO_13;

        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 585, &Libs_9);
        libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &GradeDirName_10);
        libs__globals__lookup_maybe_string_option_3_p_0(Globals_5, (MR_Integer) 587, &MaybeStdLibDir_28);
        if ((MaybeStdLibDir_28 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_17_17 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_String StdLibDir_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_28, (MR_Integer) 0))));
          MR_Word Target_30;
          MR_String StdLibCheckFile_31;
          MR_Word StdLibCheckFileResult_32;

          libs__globals__get_target_2_p_0(Globals_5, &Target_30);
          switch (Target_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_39;
                MR_String Var_40;

                Var_40 = mercury__dir__f_slash_2_f_0(StdLibDir_29, (MR_String) "modules");
                Var_39 = mercury__dir__f_slash_2_f_0(Var_40, GradeDirName_10);
                StdLibCheckFile_31 = mercury__dir__f_slash_2_f_0(Var_39, (MR_String) "mer_std.init");
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_47;
                MR_String Var_48;

                Var_48 = mercury__dir__f_slash_2_f_0(StdLibDir_29, (MR_String) "lib");
                Var_47 = mercury__dir__f_slash_2_f_0(Var_48, GradeDirName_10);
                StdLibCheckFile_31 = mercury__dir__f_slash_2_f_0(Var_47, (MR_String) "mer_std.dll");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_43;
                MR_String Var_44;

                Var_44 = mercury__dir__f_slash_2_f_0(StdLibDir_29, (MR_String) "lib");
                Var_43 = mercury__dir__f_slash_2_f_0(Var_44, GradeDirName_10);
                StdLibCheckFile_31 = mercury__dir__f_slash_2_f_0(Var_43, (MR_String) "mer_std.jar");
              }
              break;
          }
          mercury__io__open_input_4_p_0(StdLibCheckFile_31, &StdLibCheckFileResult_32);
          if (((MR_tag((MR_Word) StdLibCheckFileResult_32)) == (MR_Integer) 1))
          {
            MR_String ProgName_35;
            MR_Word Pieces_36;
            MR_Word Spec_37;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_57;
            MR_Word Var_60;
            MR_Word Var_63;
            MR_Word Var_66;
            MR_Word Var_67;

            mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_35);
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (ProgName_35));
            }
            {
              Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (GradeDirName_10));
            }
            {
              Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[37])));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[40])));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[39])));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[38])));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[35])));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
            }
            {
              Pieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_36, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Pieces_36, 1) = ((MR_Box) (Var_54));
            }
            {
              Spec_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_stdlib_is_installed\'/6"));
              MR_hl_field(MR_mktag(2), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(2), Spec_37, 3) = ((MR_Box) (Pieces_36));
            }
            {
              STATE_VARIABLE_Specs_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_17_17, 0) = ((MR_Box) (Spec_37));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_17_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word StdLibCheckFileStream_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdLibCheckFileResult_32, (MR_Integer) 0))));

            mercury__io__close_input_3_p_0(StdLibCheckFileStream_33);
            STATE_VARIABLE_Specs_17_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Globals_5));
          MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (GradeDirName_10));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__check_libgrades_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Libs_9, ((MR_Box) (STATE_VARIABLE_Specs_17_17)), &conv2_STATE_VARIABLE_Specs_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
        *STATE_VARIABLE_Specs_11 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_11));
      }
      break;
  }
}

static MR_Box MR_CALL 
libs__check_libgrades__maybe_detect_stdlib_grades_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_39;

  conv0_LambdaHeadVar__2_39 = libs__check_libgrades__IntroducedFrom__func__maybe_detect_stdlib_grades__122__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_39));
  return wrapper_arg_2;
}

void MR_CALL 
libs__check_libgrades__maybe_detect_stdlib_grades_6_p_0(
  MR_Word Globals_7,
  MR_Word Variables_8,
  MR_Word * MaybeStdlibGrades_9,
  MR_Word * StdlibGradeOpts_10)
{
  MR_Word Detect_12;
  MR_Word StdlibGrades_18;
  MR_Word StdlibGradeOptionPairs_22;
  MR_Word Var_43;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 672, &Detect_12);
  switch (Detect_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &StdlibGrades_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeStdlibGrades_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdlibGrades_18));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeMerStdLibDir_16;
        MR_Word StdOut_13;
        MR_Word Verbose_14;

        mercury__io__stdout_stream_3_p_0(&StdOut_13);
        libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 72, &Verbose_14);
        libs__check_libgrades__find_mercury_stdlib_5_p_0(Globals_7, Variables_8, &MaybeMerStdLibDir_16);
        if (((MR_tag((MR_Word) MaybeMerStdLibDir_16)) == (MR_Integer) 0))
        {
          *MaybeStdlibGrades_9 = (MR_Word) (MaybeMerStdLibDir_16);
          mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &StdlibGrades_18);
        }
        else
        {
          MR_String MerStdLibDir_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMerStdLibDir_16, (MR_Integer) 0))));

          libs__check_libgrades__do_detect_libgrades_4_p_0(MerStdLibDir_17, &StdlibGrades_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeStdlibGrades_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdlibGrades_18));
          }
        }
      }
      break;
  }
  Var_43 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdlibGrades_18);
  StdlibGradeOptionPairs_22 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__check_libgrades_scalar_common_1[0]), (MR_Word) (&libs__check_libgrades_scalar_common_5[2]), Var_43);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdlibGradeOptionPairs_22, StdlibGradeOpts_10);
}

static void MR_CALL 
libs__check_libgrades__do_detect_libgrades_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Continue_12;
  MR_Word conv2_STATE_VARIABLE_Grades_20;

  libs__check_libgrades__do_detect_libgrade_using_lib_file_8_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_Continue_12, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Grades_20);
  *wrapper_arg_4 = ((MR_Box) (conv3_Continue_12));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Grades_20));
}

static void MR_CALL 
libs__check_libgrades__do_detect_libgrades_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Continue_12;
  MR_Word conv0_STATE_VARIABLE_Grades_19;

  libs__check_libgrades__do_detect_libgrade_using_init_file_8_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_Continue_12, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Grades_19);
  *wrapper_arg_4 = ((MR_Box) (conv1_Continue_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Grades_19));
}

void MR_CALL 
libs__check_libgrades__do_detect_libgrades_4_p_0(
  MR_String StdLibDir_5,
  MR_Word * Grades_6)
{
  MR_String ModulesDir_8;
  MR_Word MaybeGrades0_9;
  MR_Word Var_21;

  ModulesDir_8 = mercury__dir__f_slash_2_f_0(StdLibDir_5, (MR_String) "modules");
  Var_21 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__dir__foldl2_6_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[1]), (MR_Word) (&libs__check_libgrades_scalar_common_5[0]), ModulesDir_8, ((MR_Box) (Var_21)), &MaybeGrades0_9);
  if (((MR_tag((MR_Word) MaybeGrades0_9)) == (MR_Integer) 1))
    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Grades_6);
  else
  {
    MR_Word Grades0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGrades0_9, (MR_Integer) 0))));
    MR_String LibsDir_11;
    MR_Word MaybeGrades_12;

    LibsDir_11 = mercury__dir__f_slash_2_f_0(StdLibDir_5, (MR_String) "lib");
    mercury__dir__foldl2_6_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[1]), (MR_Word) (&libs__check_libgrades_scalar_common_5[1]), LibsDir_11, ((MR_Box) (Grades0_10)), &MaybeGrades_12);
    if (((MR_tag((MR_Word) MaybeGrades_12)) == (MR_Integer) 1))
      mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Grades_6);
    else
      *Grades_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeGrades_12, (MR_Integer) 0))));
  }
}

void MR_CALL 
libs__check_libgrades__find_mercury_stdlib_5_p_0(
  MR_Word Globals_6,
  MR_Word Variables_7,
  MR_Word * MaybeMerStdLibDir_8)
{
  MR_bool succeeded;
  MR_String MerStdLibDir_11;
  MR_Word MaybeStdLibDir_10;

  libs__globals__lookup_maybe_string_option_3_p_0(Globals_6, (MR_Integer) 587, &MaybeStdLibDir_10);
  succeeded = (MaybeStdLibDir_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MerStdLibDir_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_10, (MR_Integer) 0))));
    {
      MR_Word CanRead_94;

      mercury__io__file__check_file_accessibility_5_p_0(MerStdLibDir_11, (MR_Word) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[33])), &CanRead_94);
      if ((CanRead_94 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMerStdLibDir_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MerStdLibDir_11));
        }
      else
      {
        MR_Word ReadError_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CanRead_94, (MR_Integer) 0))));
        MR_String ReadErrorMsg_96;
        MR_Word Pieces_97;
        MR_Word Spec_98;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_109;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_117;

        mercury__io__error_message_2_p_0(ReadError_95, &ReadErrorMsg_96);
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_105, 0) = ((MR_Box) (MerStdLibDir_11));
        }
        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (ReadErrorMsg_96));
        }
        {
          Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[37])));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[35])));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
        }
        {
          Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_106));
        }
        {
          Pieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[34])));
          MR_hl_field(MR_mktag(1), Pieces_97, 1) = ((MR_Box) (Var_104));
        }
        {
          Spec_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Spec_98, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.can_you_read_dir\'/4"));
          MR_hl_field(MR_mktag(2), Spec_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Spec_98, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Spec_98, 3) = ((MR_Box) (Pieces_97));
        }
        {
          Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Spec_98));
          MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMerStdLibDir_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_117));
        }
      }
    }
  }
  else
  {
    MR_Word MaybeConfigMerStdLibDir_12;

    make__options_file__lookup_mercury_stdlib_dir_2_p_0(Variables_7, &MaybeConfigMerStdLibDir_12);
    if (((MR_tag((MR_Word) MaybeConfigMerStdLibDir_12)) == (MR_Integer) 0))
      *MaybeMerStdLibDir_8 = (MR_Word) (MaybeConfigMerStdLibDir_12);
    else
    {
      MR_Word MerStdLibDirs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConfigMerStdLibDir_12, (MR_Integer) 0))));

      if ((MerStdLibDirs_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeMerStdLibDir_8 = (MR_Word) (&libs__check_libgrades_scalar_common_3[0]);
      else
      {
        MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MerStdLibDirs_13, (MR_Integer) 1))));
        MR_String Var_93 = ((MR_String) ((MR_hl_field(MR_mktag(1), MerStdLibDirs_13, (MR_Integer) 0))));

        if ((Var_92 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CanRead_119;

          mercury__io__file__check_file_accessibility_5_p_0(Var_93, (MR_Word) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[33])), &CanRead_119);
          if ((CanRead_119 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMerStdLibDir_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_93));
            }
          else
          {
            MR_Word ReadError_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CanRead_119, (MR_Integer) 0))));
            MR_String ReadErrorMsg_121;
            MR_Word Pieces_122;
            MR_Word Spec_123;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_134;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_142;

            mercury__io__error_message_2_p_0(ReadError_120, &ReadErrorMsg_121);
            {
              Var_130 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_130, 0) = ((MR_Box) (Var_93));
            }
            {
              Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (ReadErrorMsg_121));
            }
            {
              Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
              MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__check_libgrades_scalar_common_1[37])));
            }
            {
              Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[35])));
              MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_134));
            }
            {
              Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
            }
            {
              Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__check_libgrades_scalar_common_1[34])));
              MR_hl_field(MR_mktag(1), Pieces_122, 1) = ((MR_Box) (Var_129));
            }
            {
              Spec_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Spec_123, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.can_you_read_dir\'/4"));
              MR_hl_field(MR_mktag(2), Spec_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Spec_123, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Spec_123, 3) = ((MR_Box) (Pieces_122));
            }
            {
              Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Spec_123));
              MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeMerStdLibDir_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_142));
            }
          }
        }
        else
          *MaybeMerStdLibDir_8 = (MR_Word) (&libs__check_libgrades_scalar_common_3[1]);
      }
    }
  }
}

void mercury__libs__check_libgrades__init(void)
{
}

void mercury__libs__check_libgrades__init_type_tables(void)
{
}

void mercury__libs__check_libgrades__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__check_libgrades__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.check_libgrades.
