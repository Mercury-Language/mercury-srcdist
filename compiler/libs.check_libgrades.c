/*
** Automatically generated from `check_libgrades.m'
** by the Mercury compiler,
** version rotd-2024-05-23
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
REQUIRED_INIT mercury__libs__check_libgrades__required_init
ENDINIT
*/

#include "libs.check_libgrades.mih"
#include "libs.check_libgrades.mh"


#include "array.mih"
#include "assoc_list.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_0;

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_maybe_done_0_1[7];

static const MR_DuArgLocn libs__check_libgrades__libs__check_libgrades__field_locns_check_libraries_maybe_done_0_1[7];

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_1;

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_0[1];

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_1[1];

static const MR_DuPtagLayout libs__check_libgrades__libs__check_libgrades__du_ptag_ordered_check_libraries_maybe_done_0[2];

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_name_ordered_check_libraries_maybe_done_0[2];

static const MR_Integer libs__check_libgrades__libs__check_libgrades__functor_number_map_check_libraries_maybe_done_0[2];

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__451__2_2_f_0(
  MR_String GradeDirName_11,
  MR_String LambdaHeadVar__1_73);

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__451__1_2_f_0(
  MR_String GradeDirName_11,
  MR_String LambdaHeadVar__1_34);

static MR_Word MR_CALL 
libs__check_libgrades__IntroducedFrom__func__maybe_detect_stdlib_grades__122__1_1_f_0(
  MR_String LambdaHeadVar__1_38);

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_maybe_done_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_maybe_done_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__check_libgrades__unsafe_set_has_check_libraries_been_done_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__check_libgrades__unsafe_get_has_check_libraries_been_done_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__check_libgrades__unlock_has_check_libraries_been_done_0_p_0(void);

static void MR_CALL 
libs__check_libgrades__lock_has_check_libraries_been_done_0_p_0(void);

static void MR_CALL 
libs__check_libgrades__pre_initialise_mutable_has_check_libraries_been_done_0_p_0(void);

static void MR_CALL 
libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0(void);

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__check_libgrades__check_library_is_installed_9_p_0(
  MR_Word Target_10,
  MR_String GradeDirName_11,
  MR_Word MercuryLibDirs_12,
  MR_Word InitFileDirs_13,
  MR_String LibName_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

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

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_maybe_done_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_maybe_done_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[46][2];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[2][4];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[2][1];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_4[1][11];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_5[3][3];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_6[1][5];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_7[1][12];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_8[1][6];




static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[46][2] = {
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
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "file."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Mercury.config"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable in the"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MERCURY_STDLIB_DIR"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the compiler, nor by any definition of the"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not specified either by the value of any"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that holds the Mercury standard library"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the location of the directory"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains more than one string."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[4])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "file"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the definition of the"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[4])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the Mercury standard library cannot be found"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in grade"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the library"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be found"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_2[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.find_mercury_stdlib\'/5")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[24])))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.find_mercury_stdlib\'/5")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[33])))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[44]))) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[45]))) },
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

static /* final */ const MR_Box libs__check_libgrades_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
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
#include "io.stream_ops.mh"
#include "libs.check_libgrades.mh"
#line 377 "check_libgrades.m"
MR_Unsigned libs__check_libgrades__mutable_variable_has_check_libraries_been_done;


#line 377 "check_libgrades.m"
void 
libs__check_libgrades__user_init_pred_44_0(void)
#line 377 "check_libgrades.m"
{
#line 377 "check_libgrades.m"
	libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_0 = {
  (MR_String) "check_libraries_not_done",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_maybe_done_0_1[7] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuArgLocn libs__check_libgrades__libs__check_libgrades__field_locns_check_libraries_maybe_done_0_1[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_1 = {
  (MR_String) "check_libraries_done",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_maybe_done_0_1,
  NULL,
  libs__check_libgrades__libs__check_libgrades__field_locns_check_libraries_maybe_done_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_0[1] = { &libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_0 };

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_1[1] = { &libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_1 };

static const MR_DuPtagLayout libs__check_libgrades__libs__check_libgrades__du_ptag_ordered_check_libraries_maybe_done_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_name_ordered_check_libraries_maybe_done_0[2] = {
  &libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_1,
  &libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_0
};

static const MR_Integer libs__check_libgrades__libs__check_libgrades__functor_number_map_check_libraries_maybe_done_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__check_libgrades__libs__check_libgrades__type_ctor_info_check_libraries_maybe_done_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__check_libgrades____Unify____check_libraries_maybe_done_0_0_10001)),
  ((MR_Box) (libs__check_libgrades____Compare____check_libraries_maybe_done_0_0_10001)),
  (MR_String) "libs.check_libgrades",
  (MR_String) "check_libraries_maybe_done",
  { libs__check_libgrades__libs__check_libgrades__du_name_ordered_check_libraries_maybe_done_0 },
  { libs__check_libgrades__libs__check_libgrades__du_ptag_ordered_check_libraries_maybe_done_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__check_libgrades__libs__check_libgrades__functor_number_map_check_libraries_maybe_done_0,

};

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__451__2_2_f_0(
  MR_String GradeDirName_11,
  MR_String LambdaHeadVar__1_73)
{
  MR_String LambdaHeadVar__2_74;
  MR_String Var_75;

  Var_75 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_73, (MR_String) "lib");
  LambdaHeadVar__2_74 = mercury__dir__f_slash_2_f_0(Var_75, GradeDirName_11);
  return LambdaHeadVar__2_74;
}

static MR_String MR_CALL 
libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__451__1_2_f_0(
  MR_String GradeDirName_11,
  MR_String LambdaHeadVar__1_34)
{
  MR_String LambdaHeadVar__2_35;
  MR_String Var_36;

  Var_36 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_34, (MR_String) "lib");
  LambdaHeadVar__2_35 = mercury__dir__f_slash_2_f_0(Var_36, GradeDirName_11);
  return LambdaHeadVar__2_35;
}

static MR_Word MR_CALL 
libs__check_libgrades__IntroducedFrom__func__maybe_detect_stdlib_grades__122__1_1_f_0(
  MR_String LambdaHeadVar__1_38)
{
  MR_Word LambdaHeadVar__2_39;
  MR_Word Var_41;

  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (LambdaHeadVar__1_38));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    LambdaHeadVar__2_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_39, 0) = ((MR_Box) ((MR_String) "--libgrade"));
    MR_hl_field(1, LambdaHeadVar__2_39, 1) = ((MR_Box) (Var_41));
  }
  return LambdaHeadVar__2_39;
}

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_maybe_done_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;
    MR_Integer Var_33 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_34 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_33 < Var_34);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_33 > Var_34);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[0]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_maybe_done_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_6;
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;
    MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_12;
    MR_Word ArgX5_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_14;
    MR_Word ArgX6_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_16;
    MR_Word ArgX7_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_18;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      ArgY5_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
      ArgY6_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 5))));
      ArgY7_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 6))));
      succeeded = (ArgX1_5 == ArgY1_6);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&libs__check_libgrades_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&libs__check_libgrades_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&libs__check_libgrades_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_13)), ((MR_Box) (ArgY5_14)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&libs__check_libgrades_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_15)), ((MR_Box) (ArgY6_16)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX7_17)), ((MR_Box) (ArgY7_18)));
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__check_libgrades__unsafe_set_has_check_libraries_been_done_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__check_libgrades__unsafe_set_has_check_libraries_been_done_1_p_0

	MR_Word X;

	X = X_1 ;
		{
MR_set_thread_local_mutable(MR_Word, X, libs__check_libgrades__mutable_variable_has_check_libraries_been_done);


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__check_libgrades__unsafe_get_has_check_libraries_been_done_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL libs__check_libgrades__unsafe_get_has_check_libraries_been_done_1_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, libs__check_libgrades__mutable_variable_has_check_libraries_been_done);


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
libs__check_libgrades__unlock_has_check_libraries_been_done_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__check_libgrades__unlock_has_check_libraries_been_done_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__check_libgrades__lock_has_check_libraries_been_done_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__check_libgrades__lock_has_check_libraries_been_done_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__check_libgrades__pre_initialise_mutable_has_check_libraries_been_done_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__check_libgrades__pre_initialise_mutable_has_check_libraries_been_done_0_p_0


		{
libs__check_libgrades__mutable_variable_has_check_libraries_been_done = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0


		{
libs__check_libgrades__mutable_variable_has_check_libraries_been_done = MR_new_thread_local_mutable_index();


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0

	MR_Word X;

	X = (MR_Word) ((MR_Unsigned) 0U) ;
		{
MR_set_thread_local_mutable(MR_Word, X, libs__check_libgrades__mutable_variable_has_check_libraries_been_done);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0


		{


		;}
#undef MR_PROC_LABEL
}
}

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_74;

  conv1_LambdaHeadVar__2_74 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__451__2_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_74));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__check_libgrades__check_library_is_installed_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_35;

  conv0_LambdaHeadVar__2_35 = libs__check_libgrades__IntroducedFrom__func__check_library_is_installed__451__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_35));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__check_libgrades__check_library_is_installed_9_p_0(
  MR_Word Target_10,
  MR_String GradeDirName_11,
  MR_Word MercuryLibDirs_12,
  MR_Word InitFileDirs_13,
  MR_String LibName_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_String TestFileName_17;
  MR_Word SearchDirs_18;
  MR_Word MaybeDirName_20;

  switch (Target_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TestFileName_17 = mercury__string__f_43_43_2_f_0(LibName_14, (MR_String) ".init");
        SearchDirs_18 = InitFileDirs_13;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_33;

        TestFileName_17 = mercury__string__f_43_43_2_f_0(LibName_14, (MR_String) ".dll");
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_8[0]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_9_p_0_1));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (GradeDirName_11));
        }
        SearchDirs_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, MercuryLibDirs_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_84;

        TestFileName_17 = mercury__string__f_43_43_2_f_0(LibName_14, (MR_String) ".jar");
        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_84, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_8[0]));
          MR_hl_field(0, Var_84, 1) = ((MR_Box) (libs__check_libgrades__check_library_is_installed_9_p_0_2));
          MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_84, 3) = ((MR_Box) (GradeDirName_11));
        }
        SearchDirs_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84, MercuryLibDirs_12);
      }
      break;
  }
  parse_tree__find_module__search_for_file_returning_dir_5_p_0(SearchDirs_18, TestFileName_17, &MaybeDirName_20);
  if (((MR_tag((MR_Word) MaybeDirName_20)) == (MR_Integer) 1))
  {
    MR_String ProgName_23;
    MR_Word Pieces_24;
    MR_Word Spec_25;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_23);
    {
      Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_41, 0) = ((MR_Box) (ProgName_23));
    }
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (LibName_14));
    }
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (GradeDirName_11));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[38])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[41])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[43])));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[42])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[39])));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[36])));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Pieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_24, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Pieces_24, 1) = ((MR_Box) (Var_42));
    }
    {
      Spec_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_library_is_installed\'/9"));
      MR_hl_field(1, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(1, Spec_25, 3) = ((MR_Box) (Pieces_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_27 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
    }
  }
  else
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
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
          mercury__io__file__check_file_accessibility_5_p_0(TargetFile_16, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[34])), &Result_17);
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
        mercury__io__file__check_file_accessibility_5_p_0(InitFile_15, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[34])), &Result_16);
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
  MR_Word conv0_STATE_VARIABLE_Specs_27;

  libs__check_libgrades__check_library_is_installed_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_27));
}

void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(
  MR_Word Globals_5,
  MR_Word * Specs_6)
{
  MR_bool succeeded;
  MR_Word LibgradeCheck_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 703, &LibgradeCheck_8);
  switch (LibgradeCheck_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Target_9;
        MR_String GradeDirName_10;
        MR_Word MercuryLibDirs_11;
        MR_Word InitFileDirs_12;
        MR_Word Libs_13;
        MR_Word MaybeStdLibDir_14;
        MR_Word Cache0_15;
        MR_Word CacheSpecs_22;
        MR_Word TypeInfo_33_33;
        MR_Word TypeInfo_34_34;
        MR_Word TypeInfo_35_35;
        MR_Word TypeInfo_36_36;
        MR_Word CacheTarget_16;
        MR_String CacheGradeDirName_17;
        MR_Word CacheMaybeStdLibDir_18;
        MR_Word CacheMercuryLibDirs_19;
        MR_Word CacheInitFileDirs_20;
        MR_Word CacheLibs_21;

        libs__globals__get_target_2_p_0(Globals_5, &Target_9);
        libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &GradeDirName_10);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 596, &MercuryLibDirs_11);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 604, &InitFileDirs_12);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 600, &Libs_13);
        libs__globals__lookup_maybe_string_option_3_p_0(Globals_5, (MR_Integer) 602, &MaybeStdLibDir_14);
{
#define MR_PROC_LABEL libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0

	MR_Word X;

		{
MR_get_thread_local_mutable(MR_Word, X, libs__check_libgrades__mutable_variable_has_check_libraries_been_done);


		;}
#undef MR_PROC_LABEL
	Cache0_15  = X;
}
{
#define MR_PROC_LABEL libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
        succeeded = (Cache0_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CacheTarget_16 = ((MR_Unsigned) ((MR_hl_field(1, Cache0_15, (MR_Integer) 0))) & (MR_Integer) 3);
          CacheGradeDirName_17 = ((MR_String) ((MR_hl_field(1, Cache0_15, (MR_Integer) 1))));
          CacheMaybeStdLibDir_18 = ((MR_Word) ((MR_hl_field(1, Cache0_15, (MR_Integer) 2))));
          CacheMercuryLibDirs_19 = ((MR_Word) ((MR_hl_field(1, Cache0_15, (MR_Integer) 3))));
          CacheInitFileDirs_20 = ((MR_Word) ((MR_hl_field(1, Cache0_15, (MR_Integer) 4))));
          CacheLibs_21 = ((MR_Word) ((MR_hl_field(1, Cache0_15, (MR_Integer) 5))));
          CacheSpecs_22 = ((MR_Word) ((MR_hl_field(1, Cache0_15, (MR_Integer) 6))));
          succeeded = (Target_9 == CacheTarget_16);
          if (succeeded)
          {
            succeeded = (strcmp(GradeDirName_10, CacheGradeDirName_17) == 0);
            if (succeeded)
            {
              TypeInfo_33_33 = (MR_Word) (&libs__check_libgrades_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (MaybeStdLibDir_14)), ((MR_Box) (CacheMaybeStdLibDir_18)));
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&libs__check_libgrades_scalar_common_1[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (MercuryLibDirs_11)), ((MR_Box) (CacheMercuryLibDirs_19)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&libs__check_libgrades_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (InitFileDirs_12)), ((MR_Box) (CacheInitFileDirs_20)));
                  if (succeeded)
                  {
                    TypeInfo_36_36 = (MR_Word) (&libs__check_libgrades_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (Libs_13)), ((MR_Box) (CacheLibs_21)));
                  }
                }
              }
            }
          }
        }
        if (succeeded)
          *Specs_6 = CacheSpecs_22;
        else
        {
          MR_Word Cache_23;
          MR_Word STATE_VARIABLE_Specs_22_38;
          MR_Word Var_40;
          MR_Box conv2_Specs_6;
          MR_Box conv1_STATE_VARIABLE_IO_32_32;

          if ((MaybeStdLibDir_14 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Specs_22_38 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_String StdLibDir_44 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_14, (MR_Integer) 0))));
            MR_String StdLibCheckFile_45;
            MR_Word StdLibCheckFileResult_46;

            switch (Target_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_52;
                  MR_String Var_53;

                  Var_53 = mercury__dir__f_slash_2_f_0(StdLibDir_44, (MR_String) "modules");
                  Var_52 = mercury__dir__f_slash_2_f_0(Var_53, GradeDirName_10);
                  StdLibCheckFile_45 = mercury__dir__f_slash_2_f_0(Var_52, (MR_String) "mer_std.init");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_60;
                  MR_String Var_61;

                  Var_61 = mercury__dir__f_slash_2_f_0(StdLibDir_44, (MR_String) "lib");
                  Var_60 = mercury__dir__f_slash_2_f_0(Var_61, GradeDirName_10);
                  StdLibCheckFile_45 = mercury__dir__f_slash_2_f_0(Var_60, (MR_String) "mer_std.dll");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_56;
                  MR_String Var_57;

                  Var_57 = mercury__dir__f_slash_2_f_0(StdLibDir_44, (MR_String) "lib");
                  Var_56 = mercury__dir__f_slash_2_f_0(Var_57, GradeDirName_10);
                  StdLibCheckFile_45 = mercury__dir__f_slash_2_f_0(Var_56, (MR_String) "mer_std.jar");
                }
                break;
            }
            mercury__io__open_input_4_p_0(StdLibCheckFile_45, &StdLibCheckFileResult_46);
            if (((MR_tag((MR_Word) StdLibCheckFileResult_46)) == (MR_Integer) 1))
            {
              MR_String ProgName_49;
              MR_Word Pieces_50;
              MR_Word Spec_51;
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Word Var_70;
              MR_Word Var_73;
              MR_Word Var_76;
              MR_Word Var_79;
              MR_Word Var_80;

              mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_49);
              {
                Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_66, 0) = ((MR_Box) (ProgName_49));
              }
              {
                Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_80, 1) = ((MR_Box) (GradeDirName_10));
              }
              {
                Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
                MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[38])));
              }
              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[41])));
                MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[40])));
                MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
              }
              {
                Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_70, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[39])));
                MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_73));
              }
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[36])));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
              }
              {
                Pieces_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_50, 0) = ((MR_Box) (Var_66));
                MR_hl_field(1, Pieces_50, 1) = ((MR_Box) (Var_67));
              }
              {
                Spec_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_stdlib_is_installed\'/7"));
                MR_hl_field(1, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(1, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(1, Spec_51, 3) = ((MR_Box) (Pieces_50));
              }
              {
                STATE_VARIABLE_Specs_22_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_Specs_22_38, 0) = ((MR_Box) (Spec_51));
                MR_hl_field(1, STATE_VARIABLE_Specs_22_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              MR_Word StdLibCheckFileStream_47 = ((MR_Word) ((MR_hl_field(0, StdLibCheckFileResult_46, (MR_Integer) 0))));

              mercury__io__close_input_3_p_0(StdLibCheckFileStream_47);
              STATE_VARIABLE_Specs_22_38 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_40, 0) = ((MR_Box) (&libs__check_libgrades_scalar_common_7[0]));
            MR_hl_field(0, Var_40, 1) = ((MR_Box) (libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0_1));
            MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_40, 3) = ((MR_Box) (Target_9));
            MR_hl_field(0, Var_40, 4) = ((MR_Box) (GradeDirName_10));
            MR_hl_field(0, Var_40, 5) = ((MR_Box) (MercuryLibDirs_11));
            MR_hl_field(0, Var_40, 6) = ((MR_Box) (InitFileDirs_12));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__check_libgrades_scalar_common_1[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, Libs_13, ((MR_Box) (STATE_VARIABLE_Specs_22_38)), &conv2_Specs_6, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_32_32);
          *Specs_6 = ((MR_Word) (conv2_Specs_6));
          {
            Cache_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Cache_23, 0) = (MR_Box) ((MR_Unsigned) (Target_9));
            MR_hl_field(1, Cache_23, 1) = ((MR_Box) (GradeDirName_10));
            MR_hl_field(1, Cache_23, 2) = ((MR_Box) (MaybeStdLibDir_14));
            MR_hl_field(1, Cache_23, 3) = ((MR_Box) (MercuryLibDirs_11));
            MR_hl_field(1, Cache_23, 4) = ((MR_Box) (InitFileDirs_12));
            MR_hl_field(1, Cache_23, 5) = ((MR_Box) (Libs_13));
            MR_hl_field(1, Cache_23, 6) = ((MR_Box) (*Specs_6));
          }
{
#define MR_PROC_LABEL libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0

	MR_Word X;

	X = Cache_23 ;
		{
MR_set_thread_local_mutable(MR_Word, X, libs__check_libgrades__mutable_variable_has_check_libraries_been_done);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
        }
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
  MR_Word OptionTable_7,
  MR_Word Variables_8,
  MR_Word * MaybeStdlibGrades_9,
  MR_Word * StdlibGradeOpts_10)
{
  MR_Word Detect_12;
  MR_Word StdlibGrades_18;
  MR_Word StdlibGradeOptionPairs_22;
  MR_Word Var_43;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 688)), &Detect_12);
  switch (Detect_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &StdlibGrades_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeStdlibGrades_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (StdlibGrades_18));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeMerStdLibDir_16;
        MR_Word StdOut_13;
        MR_Word Verbose_14;

        mercury__io__stdout_stream_3_p_0(&StdOut_13);
        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 73)), &Verbose_14);
        libs__check_libgrades__find_mercury_stdlib_5_p_0(OptionTable_7, Variables_8, &MaybeMerStdLibDir_16);
        if (((MR_tag((MR_Word) MaybeMerStdLibDir_16)) == (MR_Integer) 0))
        {
          *MaybeStdlibGrades_9 = (MR_Word) (MaybeMerStdLibDir_16);
          mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &StdlibGrades_18);
        }
        else
        {
          MR_String MerStdLibDir_17 = ((MR_String) ((MR_hl_field(1, MaybeMerStdLibDir_16, (MR_Integer) 0))));

          libs__check_libgrades__do_detect_libgrades_4_p_0(MerStdLibDir_17, &StdlibGrades_18);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeStdlibGrades_9 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (StdlibGrades_18));
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
    MR_Word Grades0_10 = ((MR_Word) ((MR_hl_field(0, MaybeGrades0_9, (MR_Integer) 0))));
    MR_String LibsDir_11;
    MR_Word MaybeGrades_12;

    LibsDir_11 = mercury__dir__f_slash_2_f_0(StdLibDir_5, (MR_String) "lib");
    mercury__dir__foldl2_6_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[1]), (MR_Word) (&libs__check_libgrades_scalar_common_5[1]), LibsDir_11, ((MR_Box) (Grades0_10)), &MaybeGrades_12);
    if (((MR_tag((MR_Word) MaybeGrades_12)) == (MR_Integer) 1))
      mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Grades_6);
    else
      *Grades_6 = ((MR_Word) ((MR_hl_field(0, MaybeGrades_12, (MR_Integer) 0))));
  }
}

void MR_CALL 
libs__check_libgrades__find_mercury_stdlib_5_p_0(
  MR_Word OptionTable_6,
  MR_Word Variables_7,
  MR_Word * MaybeMerStdLibDir_8)
{
  MR_bool succeeded;
  MR_String MerStdLibDir_11;
  MR_Word MaybeStdLibDir_10;

  mercury__getopt__lookup_maybe_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_6, ((MR_Box) ((MR_Integer) 602)), &MaybeStdLibDir_10);
  succeeded = (MaybeStdLibDir_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MerStdLibDir_11 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_10, (MR_Integer) 0))));
    {
      MR_Word CanRead_95;

      mercury__io__file__check_file_accessibility_5_p_0(MerStdLibDir_11, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[34])), &CanRead_95);
      if ((CanRead_95 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMerStdLibDir_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MerStdLibDir_11));
        }
      else
      {
        MR_Word ReadError_96 = ((MR_Word) ((MR_hl_field(1, CanRead_95, (MR_Integer) 0))));
        MR_String ReadErrorMsg_97;
        MR_Word Pieces_98;
        MR_Word Spec_99;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_110;
        MR_Word Var_112;
        MR_Word Var_113;
        MR_Word Var_118;

        mercury__io__error_message_2_p_0(ReadError_96, &ReadErrorMsg_97);
        {
          Var_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_106, 0) = ((MR_Box) (MerStdLibDir_11));
        }
        {
          Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_113, 1) = ((MR_Box) (ReadErrorMsg_97));
        }
        {
          Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
          MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[38])));
        }
        {
          Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_112));
        }
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[36])));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_110));
        }
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_107));
        }
        {
          Pieces_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_98, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[35])));
          MR_hl_field(1, Pieces_98, 1) = ((MR_Box) (Var_105));
        }
        {
          Spec_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_99, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.can_you_read_dir\'/4"));
          MR_hl_field(1, Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_99, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_99, 3) = ((MR_Box) (Pieces_98));
        }
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (Spec_99));
          MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMerStdLibDir_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_118));
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
      MR_Word MerStdLibDirs_13 = ((MR_Word) ((MR_hl_field(1, MaybeConfigMerStdLibDir_12, (MR_Integer) 0))));

      if ((MerStdLibDirs_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeMerStdLibDir_8 = (MR_Word) (&libs__check_libgrades_scalar_common_3[0]);
      else
      {
        MR_Word Var_93 = ((MR_Word) ((MR_hl_field(1, MerStdLibDirs_13, (MR_Integer) 1))));
        MR_String Var_94 = ((MR_String) ((MR_hl_field(1, MerStdLibDirs_13, (MR_Integer) 0))));

        if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word CanRead_120;

          mercury__io__file__check_file_accessibility_5_p_0(Var_94, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[34])), &CanRead_120);
          if ((CanRead_120 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMerStdLibDir_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_94));
            }
          else
          {
            MR_Word ReadError_121 = ((MR_Word) ((MR_hl_field(1, CanRead_120, (MR_Integer) 0))));
            MR_String ReadErrorMsg_122;
            MR_Word Pieces_123;
            MR_Word Spec_124;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_132;
            MR_Word Var_135;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_143;

            mercury__io__error_message_2_p_0(ReadError_121, &ReadErrorMsg_122);
            {
              Var_131 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_131, 0) = ((MR_Box) (Var_94));
            }
            {
              Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_138, 1) = ((MR_Box) (ReadErrorMsg_122));
            }
            {
              Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
              MR_hl_field(1, Var_137, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[38])));
            }
            {
              Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_137));
            }
            {
              Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_132, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[36])));
              MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_135));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_132));
            }
            {
              Pieces_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_123, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[35])));
              MR_hl_field(1, Pieces_123, 1) = ((MR_Box) (Var_130));
            }
            {
              Spec_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Spec_124, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.can_you_read_dir\'/4"));
              MR_hl_field(1, Spec_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_124, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(1, Spec_124, 3) = ((MR_Box) (Pieces_123));
            }
            {
              Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_143, 0) = ((MR_Box) (Spec_124));
              MR_hl_field(1, Var_143, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeMerStdLibDir_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_143));
            }
          }
        }
        else
          *MaybeMerStdLibDir_8 = (MR_Word) (&libs__check_libgrades_scalar_common_3[1]);
      }
    }
  }
}

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_maybe_done_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__check_libgrades____Unify____check_libraries_maybe_done_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_maybe_done_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__check_libgrades____Compare____check_libraries_maybe_done_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__check_libgrades__init(void)
{
}

void mercury__libs__check_libgrades__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__check_libgrades__libs__check_libgrades__type_ctor_info_check_libraries_maybe_done_0);
}

void mercury__libs__check_libgrades__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__check_libgrades__required_init(void)
{
	libs__check_libgrades__user_init_pred_44_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__check_libgrades__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.check_libgrades.
