/*
** Automatically generated from `check_libgrades.m'
** by the Mercury compiler,
** version rotd-2025-08-21
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
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_inputs_0_0[6];

static const MR_ConstString libs__check_libgrades__libs__check_libgrades__field_names_check_libraries_inputs_0_0[6];

static const MR_DuArgLocn libs__check_libgrades__libs__check_libgrades__field_locns_check_libraries_inputs_0_0[6];

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_inputs_0_0;

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_inputs_0_0[1];

static const MR_DuPtagLayout libs__check_libgrades__libs__check_libgrades__du_ptag_ordered_check_libraries_inputs_0[1];

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_name_ordered_check_libraries_inputs_0[1];

static const MR_Integer libs__check_libgrades__libs__check_libgrades__functor_number_map_check_libraries_inputs_0[1];

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_0;

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_maybe_done_0_1[2];

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_1;

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_0[1];

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_maybe_done_0_1[1];

static const MR_DuPtagLayout libs__check_libgrades__libs__check_libgrades__du_ptag_ordered_check_libraries_maybe_done_0[2];

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_name_ordered_check_libraries_maybe_done_0[2];

static const MR_Integer libs__check_libgrades__libs__check_libgrades__functor_number_map_check_libraries_maybe_done_0[2];

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
libs__check_libgrades____Compare____check_libraries_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_inputs_0_0(
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
libs__check_libgrades__check_named_libraries_are_installed_7_p_0(
  MR_Word Globals_1,
  MR_Word Inputs_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
libs__check_libgrades__check_stdlib_is_installed_4_p_0(
  MR_Word Inputs_5,
  MR_Word * Specs_6);

static void MR_CALL 
libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0_2(
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
libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0_1(
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
libs__check_libgrades____Unify____check_libraries_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_maybe_done_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_maybe_done_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[15][2];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[1][1];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[1][11];

static /* final */ const MR_Box libs__check_libgrades_scalar_common_4[2][3];




static /* final */ const MR_Box libs__check_libgrades_scalar_common_1[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the Mercury standard library cannot be found"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in grade"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the library"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be found"))
  },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box libs__check_libgrades_scalar_common_3[1][11] = {
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

static /* final */ const MR_Box libs__check_libgrades_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__check_libgrades_scalar_common_3[0])),
    ((MR_Box) (libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__check_libgrades_scalar_common_3[0])),
    ((MR_Box) (libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
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
#line 298 "check_libgrades.m"
MR_Unsigned libs__check_libgrades__mutable_variable_has_check_libraries_been_done;


#line 298 "check_libgrades.m"
void 
libs__check_libgrades__user_init_pred_34_0(void)
#line 298 "check_libgrades.m"
{
#line 298 "check_libgrades.m"
	libs__check_libgrades__initialise_mutable_has_check_libraries_been_done_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 libs__check_libgrades__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_inputs_0_0[6] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString libs__check_libgrades__libs__check_libgrades__field_names_check_libraries_inputs_0_0[6] = {
  (MR_String) "cli_target",
  (MR_String) "cli_grade_dir_name",
  (MR_String) "cli_chosen_stdlib_dir",
  (MR_String) "cli_mercury_lib_dirs",
  (MR_String) "cli_init_file_dirs",
  (MR_String) "cli_named_libs"
};

static const MR_DuArgLocn libs__check_libgrades__libs__check_libgrades__field_locns_check_libraries_inputs_0_0[6] = {
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
  }
};

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_inputs_0_0 = {
  (MR_String) "check_libraries_inputs",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_inputs_0_0,
  libs__check_libgrades__libs__check_libgrades__field_names_check_libraries_inputs_0_0,
  libs__check_libgrades__libs__check_libgrades__field_locns_check_libraries_inputs_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_inputs_0_0[1] = { &libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_inputs_0_0 };

static const MR_DuPtagLayout libs__check_libgrades__libs__check_libgrades__du_ptag_ordered_check_libraries_inputs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__check_libgrades__libs__check_libgrades__du_stag_ordered_check_libraries_inputs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__check_libgrades__libs__check_libgrades__du_name_ordered_check_libraries_inputs_0[1] = { &libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_inputs_0_0 };

static const MR_Integer libs__check_libgrades__libs__check_libgrades__functor_number_map_check_libraries_inputs_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__check_libgrades__libs__check_libgrades__type_ctor_info_check_libraries_inputs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__check_libgrades____Unify____check_libraries_inputs_0_0_10001)),
  ((MR_Box) (libs__check_libgrades____Compare____check_libraries_inputs_0_0_10001)),
  (MR_String) "libs.check_libgrades",
  (MR_String) "check_libraries_inputs",
  { libs__check_libgrades__libs__check_libgrades__du_name_ordered_check_libraries_inputs_0 },
  { libs__check_libgrades__libs__check_libgrades__du_ptag_ordered_check_libraries_inputs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__check_libgrades__libs__check_libgrades__functor_number_map_check_libraries_inputs_0,

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

static const MR_FA_TypeInfo_Struct1 libs__check_libgrades__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_maybe_done_0_1[2] = {
  (MR_PseudoTypeInfo) (&libs__check_libgrades__libs__check_libgrades__type_ctor_info_check_libraries_inputs_0),
  (MR_PseudoTypeInfo) (&libs__check_libgrades__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc libs__check_libgrades__libs__check_libgrades__du_functor_desc_check_libraries_maybe_done_0_1 = {
  (MR_String) "check_libraries_done",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__check_libgrades__libs__check_libgrades__field_types_check_libraries_maybe_done_0_1,
  NULL,
  NULL,
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

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_maybe_done_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    libs__check_libgrades____Compare____check_libraries_inputs_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_maybe_done_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Integer CastX_24;
    MR_Integer CastY_25;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      CastX_24 = (MR_Integer) (ArgX1_3);
      CastY_25 = (MR_Integer) (ArgY1_4);
      succeeded = (CastX_24 == CastY_25);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_17_26;
        MR_Word TypeInfo_18_27;
        MR_Word TypeInfo_19_28;
        MR_Word TypeInfo_20_29;
        MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(0, ArgX1_3, 0))) & (MR_Integer) 3);
        MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(0, ArgY1_4, 0))) & (MR_Integer) 3);
        MR_String ArgX2_14 = ((MR_String) ((MR_hl_field(0, ArgX1_3, 1))));
        MR_String ArgY2_15 = ((MR_String) ((MR_hl_field(0, ArgY1_4, 1))));
        MR_Word ArgX3_16 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 2))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 2))));
        MR_Word ArgX4_18 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 3))));
        MR_Word ArgY4_19 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 3))));
        MR_Word ArgX5_20 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 4))));
        MR_Word ArgY5_21 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 4))));
        MR_Word ArgX6_22 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, 5))));
        MR_Word ArgY6_23 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, 5))));

        succeeded = (ArgX1_12 == ArgY1_13);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX2_14, ArgY2_15) == 0);
          if (succeeded)
          {
            TypeInfo_17_26 = (MR_Word) (&libs__check_libgrades_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_26, ((MR_Box) (ArgX3_16)), ((MR_Box) (ArgY3_17)));
            if (succeeded)
            {
              TypeInfo_18_27 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_27, ((MR_Box) (ArgX4_18)), ((MR_Box) (ArgY4_19)));
              if (succeeded)
              {
                TypeInfo_19_28 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_28, ((MR_Box) (ArgX5_20)), ((MR_Box) (ArgY5_21)));
                if (succeeded)
                {
                  TypeInfo_20_29 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_29, ((MR_Box) (ArgX6_22)), ((MR_Box) (ArgY6_23)));
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&libs__check_libgrades_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_inputs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;
    MR_Integer Var_29 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_30 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_29 < Var_30);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_29 > Var_30);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_inputs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&libs__check_libgrades_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
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
          mercury__io__file__check_file_accessibility_5_p_0(TargetFile_16, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[4])), &Result_17);
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
        mercury__io__file__check_file_accessibility_5_p_0(InitFile_15, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[4])), &Result_16);
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

void MR_CALL 
libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0(
  MR_Word Globals_5,
  MR_Word * Specs_6)
{
  MR_bool succeeded;
  MR_Word LibgradeCheck_8;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 579, &LibgradeCheck_8);
  switch (LibgradeCheck_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Target_9;
        MR_String GradeDirName_10;
        MR_Word MaybeChosenStdLibDir_11;
        MR_Word MercuryLibDirs_12;
        MR_Word InitFileDirs_13;
        MR_Word NamedLibs_14;
        MR_Word Inputs_15;
        MR_Word Cache0_16;
        MR_Word CacheSpecs_18;
        MR_Word CacheInputs_17;
        MR_Integer CastX_43;
        MR_Integer CastY_44;

        libs__globals__get_target_2_p_0(Globals_5, &Target_9);
        libs__globals__get_grade_dir_2_p_0(Globals_5, &GradeDirName_10);
        libs__globals__lookup_maybe_string_option_3_p_0(Globals_5, (MR_Integer) 785, &MaybeChosenStdLibDir_11);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 510, &MercuryLibDirs_12);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 528, &InitFileDirs_13);
        libs__globals__lookup_accumulating_option_3_p_0(Globals_5, (MR_Integer) 514, &NamedLibs_14);
        {
          Inputs_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Inputs_15, 0) = (MR_Box) ((MR_Unsigned) (Target_9));
          MR_hl_field(0, Inputs_15, 1) = ((MR_Box) (GradeDirName_10));
          MR_hl_field(0, Inputs_15, 2) = ((MR_Box) (MaybeChosenStdLibDir_11));
          MR_hl_field(0, Inputs_15, 3) = ((MR_Box) (MercuryLibDirs_12));
          MR_hl_field(0, Inputs_15, 4) = ((MR_Box) (InitFileDirs_13));
          MR_hl_field(0, Inputs_15, 5) = ((MR_Box) (NamedLibs_14));
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

		{
MR_get_thread_local_mutable(MR_Word, X, libs__check_libgrades__mutable_variable_has_check_libraries_been_done);


		;}
#undef MR_PROC_LABEL
	Cache0_16  = X;
}
{
#define MR_PROC_LABEL libs__check_libgrades__maybe_check_libraries_are_installed_4_p_0


		{


		;}
#undef MR_PROC_LABEL
}
        succeeded = (Cache0_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          CacheInputs_17 = ((MR_Word) ((MR_hl_field(1, Cache0_16, 0))));
          CacheSpecs_18 = ((MR_Word) ((MR_hl_field(1, Cache0_16, 1))));
          CastX_43 = (MR_Integer) (Inputs_15);
          CastY_44 = (MR_Integer) (CacheInputs_17);
          succeeded = (CastX_43 == CastY_44);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word TypeInfo_17_45;
            MR_Word TypeInfo_18_46;
            MR_Word TypeInfo_19_47;
            MR_Word TypeInfo_20_48;
            MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(0, Inputs_15, 0))) & (MR_Integer) 3);
            MR_Word ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(0, CacheInputs_17, 0))) & (MR_Integer) 3);
            MR_String ArgX2_33 = ((MR_String) ((MR_hl_field(0, Inputs_15, 1))));
            MR_String ArgY2_34 = ((MR_String) ((MR_hl_field(0, CacheInputs_17, 1))));
            MR_Word ArgX3_35 = ((MR_Word) ((MR_hl_field(0, Inputs_15, 2))));
            MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(0, CacheInputs_17, 2))));
            MR_Word ArgX4_37 = ((MR_Word) ((MR_hl_field(0, Inputs_15, 3))));
            MR_Word ArgY4_38 = ((MR_Word) ((MR_hl_field(0, CacheInputs_17, 3))));
            MR_Word ArgX5_39 = ((MR_Word) ((MR_hl_field(0, Inputs_15, 4))));
            MR_Word ArgY5_40 = ((MR_Word) ((MR_hl_field(0, CacheInputs_17, 4))));
            MR_Word ArgX6_41 = ((MR_Word) ((MR_hl_field(0, Inputs_15, 5))));
            MR_Word ArgY6_42 = ((MR_Word) ((MR_hl_field(0, CacheInputs_17, 5))));

            succeeded = (ArgX1_31 == ArgY1_32);
            if (succeeded)
            {
              succeeded = (strcmp(ArgX2_33, ArgY2_34) == 0);
              if (succeeded)
              {
                TypeInfo_17_45 = (MR_Word) (&libs__check_libgrades_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_45, ((MR_Box) (ArgX3_35)), ((MR_Box) (ArgY3_36)));
                if (succeeded)
                {
                  TypeInfo_18_46 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_46, ((MR_Box) (ArgX4_37)), ((MR_Box) (ArgY4_38)));
                  if (succeeded)
                  {
                    TypeInfo_19_47 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_47, ((MR_Box) (ArgX5_39)), ((MR_Box) (ArgY5_40)));
                    if (succeeded)
                    {
                      TypeInfo_20_48 = (MR_Word) (&libs__check_libgrades_scalar_common_1[2]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_48, ((MR_Box) (ArgX6_41)), ((MR_Box) (ArgY6_42)));
                    }
                  }
                }
              }
            }
          }
        }
        if (succeeded)
          *Specs_6 = CacheSpecs_18;
        else
        {
          MR_Word Specs0_19;
          MR_Word Cache_20;

          libs__check_libgrades__check_stdlib_is_installed_4_p_0(Inputs_15, &Specs0_19);
          libs__check_libgrades__check_named_libraries_are_installed_7_p_0(Globals_5, Inputs_15, NamedLibs_14, Specs0_19, Specs_6);
          {
            Cache_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Cache_20, 0) = ((MR_Box) (Inputs_15));
            MR_hl_field(1, Cache_20, 1) = ((MR_Box) (*Specs_6));
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

	X = Cache_20 ;
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

static void MR_CALL 
libs__check_libgrades__check_named_libraries_are_installed_7_p_0(
  MR_Word Globals_1,
  MR_Word Inputs_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_String LibName_18 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word LibNames_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Specs_1_26;
      MR_Word Target_28;
      MR_String TestFileName_29;
      MR_Word StdLibExt_30;
      MR_Word SearchAuthDirs_31;
      MR_Word MaybeDirName_33;
      MR_Word _SearchDirs_32;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      libs__globals__get_target_2_p_0(Globals_1, &Target_28);
      switch (Target_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            TestFileName_29 = mercury__string__f_43_43_2_f_0(LibName_18, (MR_String) ".init");
            StdLibExt_30 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            TestFileName_29 = mercury__string__f_43_43_2_f_0(LibName_18, (MR_String) ".dll");
            StdLibExt_30 = (MR_Integer) 2;
          }
          break;
        case (MR_Integer) 2:
          {
            TestFileName_29 = mercury__string__f_43_43_2_f_0(LibName_18, (MR_String) ".jar");
            StdLibExt_30 = (MR_Integer) 1;
          }
          break;
      }
      SearchAuthDirs_31 = parse_tree__find_module__get_search_auth_stdlib_dirs_2_f_0(StdLibExt_30, Globals_1);
      parse_tree__find_module__search_for_file_returning_dir_6_p_0(SearchAuthDirs_31, TestFileName_29, &_SearchDirs_32, &MaybeDirName_33);
      if (((MR_tag((MR_Word) MaybeDirName_33)) == (MR_Integer) 1))
      {
        MR_String ProgName_36;
        MR_String GradeDirName_37;
        MR_Word Pieces_38;
        MR_Word Spec_39;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_64;

        mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_36);
        GradeDirName_37 = ((MR_String) ((MR_hl_field(0, Inputs_2, 1))));
        {
          Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_45, 0) = ((MR_Box) (ProgName_36));
        }
        {
          Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_56, 1) = ((MR_Box) (LibName_18));
        }
        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_64, 1) = ((MR_Box) (GradeDirName_37));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[9])));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[12])));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[14])));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[13])));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[10])));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[6])));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Pieces_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_38, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Pieces_38, 1) = ((MR_Box) (Var_46));
        }
        {
          Spec_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_named_library_is_installed\'/7"));
          MR_hl_field(1, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(1, Spec_39, 3) = ((MR_Box) (Pieces_38));
        }
        {
          STATE_VARIABLE_Specs_1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_26, 0) = ((MR_Box) (Spec_39));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_26, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      else
        STATE_VARIABLE_Specs_1_26 = STATE_VARIABLE_Specs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = LibNames_19;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_26;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__check_libgrades__check_stdlib_is_installed_4_p_0(
  MR_Word Inputs_5,
  MR_Word * Specs_6)
{
  MR_Word MaybeChosenStdLibDir_8 = ((MR_Word) ((MR_hl_field(0, Inputs_5, 2))));
  MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(0, Inputs_5, 0))) & (MR_Integer) 3);
  MR_String Var_65 = ((MR_String) ((MR_hl_field(0, Inputs_5, 1))));

  if ((MaybeChosenStdLibDir_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_6 = ((MR_Word) ((MR_hl_field(0, (MR_Word) (&libs__check_libgrades_scalar_common_2[0]), 0))));
  else
  {
    MR_String ChosenStdLibDir_79 = ((MR_String) ((MR_hl_field(1, MaybeChosenStdLibDir_8, 0))));
    MR_Word CanRead_81;

    mercury__io__file__check_file_accessibility_5_p_0(ChosenStdLibDir_79, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[4])), &CanRead_81);
    if ((CanRead_81 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String StdLibCheckFile_13;
      MR_Word StdLibCheckFileResult_14;

      switch (Var_64) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_23;
            MR_String Var_24;

            Var_24 = mercury__dir__f_slash_2_f_0(ChosenStdLibDir_79, (MR_String) "modules");
            Var_23 = mercury__dir__f_slash_2_f_0(Var_24, Var_65);
            StdLibCheckFile_13 = mercury__dir__f_slash_2_f_0(Var_23, (MR_String) "mer_std.init");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_31;
            MR_String Var_32;

            Var_32 = mercury__dir__f_slash_2_f_0(ChosenStdLibDir_79, (MR_String) "lib");
            Var_31 = mercury__dir__f_slash_2_f_0(Var_32, Var_65);
            StdLibCheckFile_13 = mercury__dir__f_slash_2_f_0(Var_31, (MR_String) "mer_std.dll");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_27;
            MR_String Var_28;

            Var_28 = mercury__dir__f_slash_2_f_0(ChosenStdLibDir_79, (MR_String) "lib");
            Var_27 = mercury__dir__f_slash_2_f_0(Var_28, Var_65);
            StdLibCheckFile_13 = mercury__dir__f_slash_2_f_0(Var_27, (MR_String) "mer_std.jar");
          }
          break;
      }
      mercury__io__open_input_4_p_0(StdLibCheckFile_13, &StdLibCheckFileResult_14);
      if (((MR_tag((MR_Word) StdLibCheckFileResult_14)) == (MR_Integer) 1))
      {
        MR_String ProgName_17;
        MR_Word Pieces_18;
        MR_Word Spec_19;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_52;
        MR_Word Var_53;

        mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_17);
        {
          Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_39, 0) = ((MR_Box) (ProgName_17));
        }
        {
          Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_53, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[9])));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[12])));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[11])));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[10])));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[6])));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (Var_39));
          MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_40));
        }
        {
          Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.check_stdlib_is_installed\'/4"));
          MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Pieces_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word StdLibCheckFileStream_15 = ((MR_Word) ((MR_hl_field(0, StdLibCheckFileResult_14, 0))));

        mercury__io__close_input_3_p_0(StdLibCheckFileStream_15);
        *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MR_Word ReadError_82 = ((MR_Word) ((MR_hl_field(1, CanRead_81, 0))));
      MR_String ReadErrorMsg_83;
      MR_Word Pieces_84;
      MR_Word Spec_85;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_96;
      MR_Word Var_98;
      MR_Word Var_99;

      mercury__io__error_message_2_p_0(ReadError_82, &ReadErrorMsg_83);
      {
        Var_92 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_92, 0) = ((MR_Box) (ChosenStdLibDir_79));
      }
      {
        Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_99, 1) = ((MR_Box) (ReadErrorMsg_83));
      }
      {
        Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
        MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[9])));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_98));
      }
      {
        Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[6])));
        MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_93));
      }
      {
        Pieces_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_84, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[5])));
        MR_hl_field(1, Pieces_84, 1) = ((MR_Box) (Var_91));
      }
      {
        Spec_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_85, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.can_you_read_dir\'/4"));
        MR_hl_field(1, Spec_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_85, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_85, 3) = ((MR_Box) (Pieces_84));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Specs_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_85));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

void MR_CALL 
libs__check_libgrades__detect_stdlib_grades_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_Word * MaybeStdLibGrades_8)
{
  libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0(Globals_7, MaybeStdLibGrades_8);
}

static void MR_CALL 
libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0_2(
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
libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0_1(
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
libs__check_libgrades__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_101_99_116_95_115_116_100_108_105_98_95_103_114_97_100_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word Globals_7,
  MR_Word * MaybeStdLibGrades_8)
{
  MR_Word MaybeChosenStdLibDir_12;
  MR_Word Verbose_10;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 131, &Verbose_10);
  libs__globals__lookup_maybe_string_option_3_p_0(Globals_7, (MR_Integer) 785, &MaybeChosenStdLibDir_12);
  if ((MaybeChosenStdLibDir_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeStdLibGrades_8 = (MR_Word) ((MR_Word) (&libs__check_libgrades_scalar_common_2[0]));
  else
  {
    MR_String ChosenStdLibDir_39 = ((MR_String) ((MR_hl_field(1, MaybeChosenStdLibDir_12, 0))));
    MR_Word CanRead_41;

    mercury__io__file__check_file_accessibility_5_p_0(ChosenStdLibDir_39, (MR_Word) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[4])), &CanRead_41);
    if ((CanRead_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word StdLibGrades_15;
      MR_String ModulesDir_66;
      MR_Word MaybeGrades0_67;
      MR_Word Var_73;

      ModulesDir_66 = mercury__dir__f_slash_2_f_0(ChosenStdLibDir_39, (MR_String) "modules");
      Var_73 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      mercury__dir__foldl2_6_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[0]), (MR_Word) (&libs__check_libgrades_scalar_common_4[0]), ModulesDir_66, ((MR_Box) (Var_73)), &MaybeGrades0_67);
      if (((MR_tag((MR_Word) MaybeGrades0_67)) == (MR_Integer) 1))
        mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &StdLibGrades_15);
      else
      {
        MR_Word Grades0_68 = ((MR_Word) ((MR_hl_field(0, MaybeGrades0_67, 0))));
        MR_String LibsDir_69;
        MR_Word MaybeGrades_70;

        LibsDir_69 = mercury__dir__f_slash_2_f_0(ChosenStdLibDir_39, (MR_String) "lib");
        mercury__dir__foldl2_6_p_0((MR_Word) (&libs__check_libgrades_scalar_common_1[0]), (MR_Word) (&libs__check_libgrades_scalar_common_4[1]), LibsDir_69, ((MR_Box) (Grades0_68)), &MaybeGrades_70);
        if (((MR_tag((MR_Word) MaybeGrades_70)) == (MR_Integer) 1))
          mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &StdLibGrades_15);
        else
          StdLibGrades_15 = ((MR_Word) ((MR_hl_field(0, MaybeGrades_70, 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeStdLibGrades_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (StdLibGrades_15));
      }
    }
    else
    {
      MR_Word ReadError_42 = ((MR_Word) ((MR_hl_field(1, CanRead_41, 0))));
      MR_String ReadErrorMsg_43;
      MR_Word Pieces_44;
      MR_Word Spec_45;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_64;
      MR_Word MaybeMerStdLibDir_79;

      mercury__io__error_message_2_p_0(ReadError_42, &ReadErrorMsg_43);
      {
        Var_52 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_52, 0) = ((MR_Box) (ChosenStdLibDir_39));
      }
      {
        Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_59, 1) = ((MR_Box) (ReadErrorMsg_43));
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &libs__check_libgrades_scalar_common_1[9])));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[6])));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_53));
      }
      {
        Pieces_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_44, 0) = ((MR_Box) (MR_mkword(3, &libs__check_libgrades_scalar_common_1[5])));
        MR_hl_field(1, Pieces_44, 1) = ((MR_Box) (Var_51));
      }
      {
        Spec_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140libs.check_libgrades.can_you_read_dir\'/4"));
        MR_hl_field(1, Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_45, 3) = ((MR_Box) (Pieces_44));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_45));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MaybeMerStdLibDir_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeMerStdLibDir_79, 0) = ((MR_Box) (Var_64));
      }
      *MaybeStdLibGrades_8 = (MR_Word) (MaybeMerStdLibDir_79);
    }
  }
}

static MR_bool MR_CALL 
libs__check_libgrades____Unify____check_libraries_inputs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__check_libgrades____Unify____check_libraries_inputs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__check_libgrades____Compare____check_libraries_inputs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__check_libgrades____Compare____check_libraries_inputs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

  MR_register_type_ctor_info(&libs__check_libgrades__libs__check_libgrades__type_ctor_info_check_libraries_inputs_0);
  MR_register_type_ctor_info(&libs__check_libgrades__libs__check_libgrades__type_ctor_info_check_libraries_maybe_done_0);
}

void mercury__libs__check_libgrades__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__check_libgrades__required_init(void)
{
  libs__check_libgrades__user_init_pred_34_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__check_libgrades__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.check_libgrades.
