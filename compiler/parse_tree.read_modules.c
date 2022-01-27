/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version rotd-2021-05-07
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


// :- module parse_tree.read_modules.
// :- implementation.

/*
INIT mercury__parse_tree__read_modules__init
ENDINIT
*/

#include "parse_tree.read_modules.mih"


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
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "recompilation.mih"
#include "require.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0;

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[2];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0;

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[9];

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[9];

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0;

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1];

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1];

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1];

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0;

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1;

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_maybe_ignore_errors_0[2];

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2];

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2];

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__782__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__747__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__712__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__677__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_13_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_13_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_13_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__read_modules__read_module_end_file_10_p_0(
  MR_Word Globals_11,
  MR_Word VeryVerbose_12,
  MR_String FileName_13,
  MR_Word MaybeTimestampRes_14,
  MR_Word * MaybeTimestamp_15,
  MR_Word ModuleSpecs_16,
  MR_Word * Specs_17,
  MR_Word Errors_18);

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word Globals_8,
  MR_Word VeryVerbose_9,
  MR_Word Errors_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_13_p_0(
  MR_Word Globals_14,
  MR_Word IgnoreErrors_15,
  MR_Word VeryVerbose_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_String FileName0_18,
  MR_String * FileName_19,
  MR_Word MaybeTimestampRes_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word ModuleSpecs_22,
  MR_Word * Specs_23,
  MR_Word Errors_24);

static void MR_CALL 
parse_tree__read_modules__check_timestamp_report_if_needed_and_missing_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_Word MaybeTimestampRes_9,
  MR_Word * MaybeTimestamp_10);

static void MR_CALL 
parse_tree__read_modules__read_module_begin_10_p_0(
  MR_Word Globals_11,
  MR_String Descr_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word FileKind_15,
  MR_String * FileName0_16,
  MR_Word * VeryVerbose_17,
  MR_Word * SearchDirs_18);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_rcu_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_rcu_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[12][2];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][5];




static /* final */ const MR_Box parse_tree__read_modules_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[6]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[7]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__read_modules_scalar_common_1[8]))
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_3[4][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__read_modules_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__set_ordlist__ti_set_ordlist_1parse_tree__parse_error__type_ctor_info_read_module_error_0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0 = {
  (MR_String) "have_successfully_read_module",
  INT16_C(5),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1 = {
  (MR_String) "tried_to_read_module_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_0,
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_1_1
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_1,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int0_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int0_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int0_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int0_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int1_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int1_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int1_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int1_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int2_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int2_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int2_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int2_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int3_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_int3_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_int3_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_int3_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0 = {
  (MR_String) "have_read_module_key",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_key_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_key_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_key_1_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_key_1_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_key_1_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_key",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_key_1 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_key_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_key_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__read_modules__tree234__pti_tree234_2__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__pti_have_read_module_1__pseudo_2)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_map_2_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_map_2_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__pti_tree234_2__pseudo_1__pseudo_parse_tree__read_modules__pti_have_read_module_1__pseudo_2) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1,
  {
    (MR_TypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0 = {
  &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0[9] = {
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int0_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int1_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int2_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_int3_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)
};

static const MR_ConstString parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0[9] = {
  (MR_String) "hrmm_src",
  (MR_String) "hrmm_opt",
  (MR_String) "hrmm_rcu",
  (MR_String) "hrmm_int0",
  (MR_String) "hrmm_int1",
  (MR_String) "hrmm_int2",
  (MR_String) "hrmm_int3",
  (MR_String) "hrmm_plain_opt",
  (MR_String) "hrmm_trans_opt"
};

static const MR_DuFunctorDesc parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0 = {
  (MR_String) "have_read_module_maps",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__read_modules__parse_tree__read_modules__field_types_have_read_module_maps_0_0,
  parse_tree__read_modules__parse_tree__read_modules__field_names_have_read_module_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

static const MR_DuPtagLayout parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__read_modules__parse_tree__read_modules__du_stag_ordered_have_read_module_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0[1] = {
  &parse_tree__read_modules__parse_tree__read_modules__du_functor_desc_have_read_module_maps_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_maps",
  {     parse_tree__read_modules__parse_tree__read_modules__du_name_ordered_have_read_module_maps_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__du_ptag_ordered_have_read_module_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_have_read_module_maps_0,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_opt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_opt_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2parse_tree__read_modules__ti_have_read_module_key_1parse_tree__file_kind__type_ctor_info_opt_file_kind_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_plain_opt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_plain_opt_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_rcu_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_rcu_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_rcu_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_rcu_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_src_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_src_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_trans_opt_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "have_read_module_trans_opt_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__read_modules__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__read_modules__ti_have_read_module_1parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
  (MR_String) "ignore_errors",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
  (MR_String) "do_not_ignore_errors",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[2] = {
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
  &parse_tree__read_modules__parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

static const MR_Integer parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001)),
  ((MR_Box) (parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001)),
  (MR_String) "parse_tree.read_modules",
  (MR_String) "maybe_ignore_errors",
  {     parse_tree__read_modules__parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0 },
  {     parse_tree__read_modules__parse_tree__read_modules__enum_ordinal_ordered_maybe_ignore_errors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__read_modules__parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0,

};

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__782__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__747__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__712__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__677__1_2_p_0(
  MR_Word ModuleName_16,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_16, HeadVar__2_45);
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_rcu_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_rcu_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[7]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_24_24 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_25_25 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_26_26 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_29_29 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_30_30 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_31_31 = (MR_Word) (&parse_tree__read_modules_scalar_common_2[8]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
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
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0(
  MR_Word TypeInfo_for_Key_6,
  MR_Word TypeInfo_for_PT_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_PT_7));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_Key_6, TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0(
  MR_Word TypeInfo_for_Key_5,
  MR_Word TypeInfo_for_PT_6,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_PT_6));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_Key_5, TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0(
  MR_Word TypeInfo_for_Kind_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Box ArgY2_8 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_Kind_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0(
  MR_Word TypeInfo_for_Kind_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Kind_9, ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0(
  MR_Word TypeInfo_for_PT_30,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_28 == CastY_29);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      MR_Box Var_37 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_39 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Box ArgY3_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
        MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
        MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 4))));
        MR_Word SubResult1_6;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_39, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[9]), &SubResult2_9, ((MR_Box) (Var_38)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
          {
            MR_Word SubResult3_12;

            mercury__builtin__compare_3_p_0(TypeInfo_for_PT_30, &SubResult3_12, Var_37, ArgY3_11);
            succeeded = (SubResult3_12 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult3_12;
            else
            {
              MR_Word SubResult4_15;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[10]), &SubResult4_15, ((MR_Box) (Var_36)), ((MR_Box) (ArgY4_14)));
              succeeded = (SubResult4_15 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult4_15;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (Var_35)), ((MR_Box) (ArgY5_17)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0(
  MR_Word TypeInfo_for_PT_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_14 == CastX_13);
    }
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Box ArgX3_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_8;
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10;
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 4))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[9]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
          {
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_PT_17, ArgX3_7, ArgY3_8);
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[10]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) (&parse_tree__read_modules_scalar_common_1[11]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_some_int_9_p_0(
  MR_Word HaveReadModuleMaps_10,
  MR_Word ModuleName_11,
  MR_Word IntFileKind_12,
  MR_Word ReturnTimestamp_13,
  MR_String * FileName_14,
  MR_Word * MaybeTimestamp_15,
  MR_Word * ParseTreeSomeInt_16,
  MR_Word * Specs_17,
  MR_Word * Errors_18)
{
  {
    MR_bool succeeded;
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 6))));
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 5))));
    MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 4))));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_10, (MR_Integer) 3))));

    switch (IntFileKind_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ParseTreeInt0_19;

          succeeded = parse_tree__read_modules__find_read_module_int0_8_p_0(Var_64, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt0_19, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) ((MR_Word) (ParseTreeInt0_19));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ParseTreeInt1_20;

          succeeded = parse_tree__read_modules__find_read_module_int1_8_p_0(Var_63, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt1_20, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ParseTreeInt1_20)));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ParseTreeInt2_21;

          succeeded = parse_tree__read_modules__find_read_module_int2_8_p_0(Var_62, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt2_21, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ParseTreeInt2_21)));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ParseTreeInt3_22;

          succeeded = parse_tree__read_modules__find_read_module_int3_8_p_0(Var_61, ModuleName_11, ReturnTimestamp_13, FileName_14, MaybeTimestamp_15, &ParseTreeInt3_22, Specs_17, Errors_18);
          if (succeeded)
          {
            *ParseTreeSomeInt_16 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (ParseTreeInt3_22)));
            succeeded = MR_TRUE;
          }
        }
        break;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_src_8_p_0(
  MR_Word HaveReadModuleMapSrc_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeSrc_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[0]), HaveReadModuleMapSrc_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeSrc_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int3__782__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int3_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt3_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt3_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 6))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt3Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int3_8_p_0(OrigHaveReadModuleMapInt3_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt3Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt3_20 = ParseTreeInt3Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
    }
    else
    {
      MR_Word HaveReadModuleMapInt3_33;
      MR_Word Var_39;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_Word Var_75;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int3_13_p_0(Globals_14, (MR_String) "Reading .int3 interface for module", (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt3_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[6]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt3_25, &HaveReadModuleMapInt3_33);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt3_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int3_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int3\'/13", (MR_String) "ModuleName != module name in ParseTreeInt3");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt3_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[6]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt3_25, &HaveReadModuleMapInt3_33);
      }
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 1))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 2))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 3))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 4))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 5))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 7))));
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 8))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_35 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (HaveReadModuleMapInt3_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_75));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int3_8_p_0(
  MR_Word HaveReadModuleMapInt3_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt3_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[6]), HaveReadModuleMapInt3_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int2__747__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int2_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt2_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 5))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt2Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int2_8_p_0(OrigHaveReadModuleMapInt2_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt2Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt2_20 = ParseTreeInt2Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
    }
    else
    {
      MR_Word HaveReadModuleMapInt2_33;
      MR_Word Var_39;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int2_13_p_0(Globals_14, (MR_String) "Reading .int2 interface for module", (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt2_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[5]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt2_25, &HaveReadModuleMapInt2_33);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt2_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int2_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int2\'/13", (MR_String) "ModuleName != module name in ParseTreeInt2");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt2_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[5]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt2_25, &HaveReadModuleMapInt2_33);
      }
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 0))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 1))));
      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 2))));
      Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 3))));
      Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 4))));
      Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 6))));
      Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 7))));
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 8))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_35 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (HaveReadModuleMapInt2_33));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_79));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int2_8_p_0(
  MR_Word HaveReadModuleMapInt2_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt2_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[5]), HaveReadModuleMapInt2_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int1__712__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int1_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt1_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 4))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt1Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int1_8_p_0(OrigHaveReadModuleMapInt1_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt1Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt1_20 = ParseTreeInt1Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
    }
    else
    {
      MR_Word HaveReadModuleMapInt1_33;
      MR_Word Var_39;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int1_13_p_0(Globals_14, (MR_String) "Reading .int interface for module", (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt1_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt1_25, &HaveReadModuleMapInt1_33);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt1_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int1_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int1\'/13", (MR_String) "ModuleName != module name in ParseTreeInt1");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt1_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt1_25, &HaveReadModuleMapInt1_33);
      }
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 0))));
      Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 1))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 2))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 3))));
      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 5))));
      Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 6))));
      Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 7))));
      Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 8))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_35 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (HaveReadModuleMapInt1_33));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_88));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int1_8_p_0(
  MR_Word HaveReadModuleMapInt1_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt1_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]), HaveReadModuleMapInt1_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__read_modules__IntroducedFrom__pred__maybe_read_module_int0__677__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__maybe_read_module_int0_13_p_0(
  MR_Word Globals_14,
  MR_Word Search_15,
  MR_Word ModuleName_16,
  MR_String * FileName_17,
  MR_Word ReturnTimestamp_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeInt0_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22,
  MR_Word STATE_VARIABLE_HaveReadModuleMaps_0_34,
  MR_Word * STATE_VARIABLE_HaveReadModuleMaps_35)
{
  {
    MR_bool succeeded;
    MR_Word OrigHaveReadModuleMapInt0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 3))));
    MR_String FileNamePrime_26;
    MR_Word MaybeTimestampPrime_27;
    MR_Word ParseTreeInt0Prime_28;
    MR_Word SpecsPrime_29;
    MR_Word ErrorsPrime_30;

    succeeded = parse_tree__read_modules__find_read_module_int0_8_p_0(OrigHaveReadModuleMapInt0_25, ModuleName_16, ReturnTimestamp_18, &FileNamePrime_26, &MaybeTimestampPrime_27, &ParseTreeInt0Prime_28, &SpecsPrime_29, &ErrorsPrime_30);
    if (succeeded)
    {
      *FileName_17 = FileNamePrime_26;
      *MaybeTimestamp_19 = MaybeTimestampPrime_27;
      *ParseTreeInt0_20 = ParseTreeInt0Prime_28;
      *Specs_21 = SpecsPrime_29;
      *Errors_22 = ErrorsPrime_30;
      *STATE_VARIABLE_HaveReadModuleMaps_35 = STATE_VARIABLE_HaveReadModuleMaps_0_34;
    }
    else
    {
      MR_Word HaveReadModuleMapInt0_33;
      MR_Word Var_39;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = (MR_Box) ((MR_Unsigned) (ReturnTimestamp_18));
      }
      parse_tree__read_modules__read_module_int0_13_p_0(Globals_14, (MR_String) "Reading .int0 interface for module", (MR_Integer) 1, Search_15, ModuleName_16, FileName_17, Var_39, MaybeTimestamp_19, ParseTreeInt0_20, Specs_21, Errors_22);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), ((MR_Box) ((MR_Integer) 0)), *Errors_22);
      if (succeeded)
        mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_16)), ((MR_Box) ((MR_Unsigned) 0U)), OrigHaveReadModuleMapInt0_25, &HaveReadModuleMapInt0_33);
      else
      {
        MR_Word Var_42;
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *ParseTreeInt0_20, (MR_Integer) 0))));
        MR_Word HaveReadModule_47;

        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&parse_tree__read_modules_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (parse_tree__read_modules__maybe_read_module_int0_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ModuleName_16));
          MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
        }
        mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140parse_tree.read_modules.maybe_read_module_int0\'/13", (MR_String) "ModuleName != module name in ParseTreeInt0");
        {
          HaveReadModule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 0) = ((MR_Box) (*FileName_17));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 1) = ((MR_Box) (*MaybeTimestamp_19));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 2) = ((MR_Box) (*ParseTreeInt0_20));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 3) = ((MR_Box) (*Specs_21));
          MR_hl_field(MR_mktag(1), HaveReadModule_47, 4) = ((MR_Box) (*Errors_22));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), ((MR_Box) (ModuleName_16)), ((MR_Box) (HaveReadModule_47)), OrigHaveReadModuleMapInt0_25, &HaveReadModuleMapInt0_33);
      }
      Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 0))));
      Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 1))));
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 2))));
      Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 4))));
      Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 5))));
      Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 6))));
      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 7))));
      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_HaveReadModuleMaps_0_34, (MR_Integer) 8))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_HaveReadModuleMaps_35 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (HaveReadModuleMapInt0_33));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_96));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__read_modules__find_read_module_int0_8_p_0(
  MR_Word HaveReadModuleMapInt0_9,
  MR_Word ModuleName_10,
  MR_Word ReturnTimestamp_11,
  MR_String * FileName_12,
  MR_Word * MaybeTimestamp_13,
  MR_Word * ParseTreeInt0_14,
  MR_Word * Specs_15,
  MR_Word * Errors_16)
{
  {
    MR_bool succeeded;
    MR_Word HaveReadModule_17;
    MR_Word MaybeTimestamp0_18;
    MR_Box conv0_HaveReadModule_17;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]), HaveReadModuleMapInt0_9, ((MR_Box) (ModuleName_10)), &conv0_HaveReadModule_17);
    if (succeeded)
    {
      HaveReadModule_17 = ((MR_Word) (conv0_HaveReadModule_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (HaveReadModule_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 0))));
        MaybeTimestamp0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 1))));
        *ParseTreeInt0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 2))));
        *Specs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 3))));
        *Errors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HaveReadModule_17, (MR_Integer) 4))));
        switch (ReturnTimestamp_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if ((MaybeTimestamp0_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.read_modules.return_timestamp_if_needed\'/3", (MR_String) "do_return_timestamp but no timestamp");
            else
              *MaybeTimestamp_13 = MaybeTimestamp0_18;
            break;
          case (MR_Integer) 1:
            *MaybeTimestamp_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int0_13_p_0(
  MR_Word Globals_14,
  MR_String Descr_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt0_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word VeryVerbose_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, Descr_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[3])), &FileName0_26, &VeryVerbose_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int0_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt0_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_13_p_0(Globals_14, IgnoreErrors_16, VeryVerbose_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_some_int_14_p_0(
  MR_Word Globals_15,
  MR_String Descr_16,
  MR_Word IgnoreErrors_17,
  MR_Word Search_18,
  MR_Word ModuleName_19,
  MR_Word IntFileKind_20,
  MR_String * FileName_21,
  MR_Word ReadModuleAndTimestamps_22,
  MR_Word * MaybeTimestamp_23,
  MR_Word * ParseTreeSomeInt_24,
  MR_Word * Specs_25,
  MR_Word * Errors_26)
{
  switch (IntFileKind_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_28;
        MR_String FileName0_52;
        MR_Word VeryVerbose_53;
        MR_Word SearchDirs_54;
        MR_Word MaybeFileNameAndStream_55;
        MR_Word MaybeTimestampRes_56;
        MR_Word ModuleSpecs_57;

        parse_tree__read_modules__read_module_begin_10_p_0(Globals_15, Descr_16, Search_18, ModuleName_19, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[3])), &FileName0_52, &VeryVerbose_53, &SearchDirs_54);
        libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_54, FileName0_52, &MaybeFileNameAndStream_55);
        parse_tree__parse_module__actually_read_module_int0_11_p_0(Globals_15, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_55, ReadModuleAndTimestamps_22, &MaybeTimestampRes_56, &ParseTreeInt0_28, &ModuleSpecs_57, Errors_26);
        parse_tree__read_modules__read_module_end_module_13_p_0(Globals_15, IgnoreErrors_17, VeryVerbose_53, MaybeFileNameAndStream_55, FileName0_52, FileName_21, MaybeTimestampRes_56, MaybeTimestamp_23, ModuleSpecs_57, Specs_25, *Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) ((MR_Word) (ParseTreeInt0_28));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_29;

        parse_tree__read_modules__read_module_int1_13_p_0(Globals_15, Descr_16, IgnoreErrors_17, Search_18, ModuleName_19, FileName_21, ReadModuleAndTimestamps_22, MaybeTimestamp_23, &ParseTreeInt1_29, Specs_25, Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ParseTreeInt1_29)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_30;

        parse_tree__read_modules__read_module_int2_13_p_0(Globals_15, Descr_16, IgnoreErrors_17, Search_18, ModuleName_19, FileName_21, ReadModuleAndTimestamps_22, MaybeTimestamp_23, &ParseTreeInt2_30, Specs_25, Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ParseTreeInt2_30)));
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ParseTreeInt3_31;

        parse_tree__read_modules__read_module_int3_13_p_0(Globals_15, Descr_16, IgnoreErrors_17, Search_18, ModuleName_19, FileName_21, ReadModuleAndTimestamps_22, MaybeTimestamp_23, &ParseTreeInt3_31, Specs_25, Errors_26);
        *ParseTreeSomeInt_24 = (MR_Word) (MR_mkword(MR_mktag(3), (MR_Word) (ParseTreeInt3_31)));
      }
      break;
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int3_13_p_0(
  MR_Word Globals_14,
  MR_String Descr_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt3_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word VeryVerbose_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, Descr_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[2])), &FileName0_26, &VeryVerbose_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int3_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt3_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_13_p_0(Globals_14, IgnoreErrors_16, VeryVerbose_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int2_13_p_0(
  MR_Word Globals_14,
  MR_String Descr_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt2_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word VeryVerbose_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, Descr_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[1])), &FileName0_26, &VeryVerbose_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int2_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt2_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_13_p_0(Globals_14, IgnoreErrors_16, VeryVerbose_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int1_13_p_0(
  MR_Word Globals_14,
  MR_String Descr_15,
  MR_Word IgnoreErrors_16,
  MR_Word Search_17,
  MR_Word ModuleName_18,
  MR_String * FileName_19,
  MR_Word ReadModuleAndTimestamps_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word * ParseTreeInt1_22,
  MR_Word * Specs_23,
  MR_Word * Errors_24)
{
  {
    MR_String FileName0_26;
    MR_Word VeryVerbose_27;
    MR_Word SearchDirs_28;
    MR_Word MaybeFileNameAndStream_29;
    MR_Word MaybeTimestampRes_30;
    MR_Word ModuleSpecs_31;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_14, Descr_15, Search_17, ModuleName_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__read_modules_scalar_common_3[0])), &FileName0_26, &VeryVerbose_27, &SearchDirs_28);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_28, FileName0_26, &MaybeFileNameAndStream_29);
    parse_tree__parse_module__actually_read_module_int1_11_p_0(Globals_14, ModuleName_18, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_29, ReadModuleAndTimestamps_20, &MaybeTimestampRes_30, ParseTreeInt1_22, &ModuleSpecs_31, Errors_24);
    parse_tree__read_modules__read_module_end_module_13_p_0(Globals_14, IgnoreErrors_16, VeryVerbose_27, MaybeFileNameAndStream_29, FileName0_26, FileName_19, MaybeTimestampRes_30, MaybeTimestamp_21, ModuleSpecs_31, Specs_23, *Errors_24);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_int_14_p_0(
  MR_Word Globals_15,
  MR_String Descr_16,
  MR_Word IgnoreErrors_17,
  MR_Word Search_18,
  MR_Word ModuleName_19,
  MR_Word IntFileKind_20,
  MR_String * FileName_21,
  MR_Word ReadModuleAndTimestamps_22,
  MR_Word * MaybeTimestamp_23,
  MR_Word * ParseTreeInt_24,
  MR_Word * Specs_25,
  MR_Word * Errors_26)
{
  {
    MR_String FileName0_28;
    MR_Word VeryVerbose_29;
    MR_Word SearchDirs_30;
    MR_Word MaybeFileNameAndStream_31;
    MR_Word MaybeTimestampRes_32;
    MR_Word ModuleSpecs_33;
    MR_Word Var_36;

    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = (MR_Box) ((MR_Unsigned) (IntFileKind_20));
    }
    parse_tree__read_modules__read_module_begin_10_p_0(Globals_15, Descr_16, Search_18, ModuleName_19, Var_36, &FileName0_28, &VeryVerbose_29, &SearchDirs_30);
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_30, FileName0_28, &MaybeFileNameAndStream_31);
    parse_tree__parse_module__actually_read_module_int_12_p_0(IntFileKind_20, Globals_15, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_31, ReadModuleAndTimestamps_22, &MaybeTimestampRes_32, ParseTreeInt_24, &ModuleSpecs_33, Errors_26);
    parse_tree__read_modules__read_module_end_module_13_p_0(Globals_15, IgnoreErrors_17, VeryVerbose_29, MaybeFileNameAndStream_31, FileName0_28, FileName_21, MaybeTimestampRes_32, MaybeTimestamp_23, ModuleSpecs_33, Specs_25, *Errors_26);
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_from_file_12_p_0(
  MR_Word Globals_13,
  MR_String FileName_14,
  MR_String FileNameDotM_15,
  MR_String Descr_16,
  MR_Word Search_17,
  MR_Word ReadModuleAndTimestamps_18,
  MR_Word * MaybeTimestamp_19,
  MR_Word * ParseTreeSrc_20,
  MR_Word * Specs_21,
  MR_Word * Errors_22)
{
  {
    MR_bool succeeded;
    MR_Word DefaultModuleName_24;
    MR_Word VeryVerbose_25;
    MR_Word SearchDirs_26;
    MR_Word MaybeFileNameAndStream_27;
    MR_Word MaybeTimestampRes_28;
    MR_Word ModuleSpecs_29;
    MR_String BaseFileName_49;
    MR_Word HaveMap_50;
    MR_String BaseFileNamePrime_48;

    succeeded = mercury__dir__basename_2_p_0(FileName_14, &BaseFileNamePrime_48);
    if (succeeded)
      BaseFileName_49 = BaseFileNamePrime_48;
    else
      BaseFileName_49 = (MR_String) "";
    parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_50);
    switch (HaveMap_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_49, &DefaultModuleName_24);
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeModuleName_51;

          parse_tree__source_file_map__lookup_source_file_module_4_p_0(FileNameDotM_15, &MaybeModuleName_51);
          if ((MaybeModuleName_51 == (MR_Word) ((MR_Unsigned) 0U)))
            parse_tree__file_names__file_name_to_module_name_2_p_0(BaseFileName_49, &DefaultModuleName_24);
          else
            DefaultModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModuleName_51, (MR_Integer) 0))));
        }
        break;
    }
    switch (Search_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_54;

          Var_54 = mercury__dir__this_directory_0_f_0();
          {
            SearchDirs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SearchDirs_26, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), SearchDirs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        libs__globals__lookup_accumulating_option_3_p_0(Globals_13, (MR_Integer) 680, &SearchDirs_26);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 66, &VeryVerbose_25);
    switch (VeryVerbose_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "% Reading ");
          mercury__io__write_string_3_p_0(Descr_16);
          mercury__io__write_string_3_p_0((MR_String) " \140");
          mercury__io__write_string_3_p_0(FileNameDotM_15);
          mercury__io__write_string_3_p_0((MR_String) "\'... ");
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
    libs__file_util__search_for_file_and_stream_5_p_0(SearchDirs_26, FileNameDotM_15, &MaybeFileNameAndStream_27);
    parse_tree__parse_module__actually_read_module_src_11_p_0(Globals_13, DefaultModuleName_24, (MR_Word) ((MR_Unsigned) 0U), MaybeFileNameAndStream_27, ReadModuleAndTimestamps_18, &MaybeTimestampRes_28, ParseTreeSrc_20, &ModuleSpecs_29, Errors_22);
    parse_tree__read_modules__read_module_end_file_10_p_0(Globals_13, VeryVerbose_25, FileNameDotM_15, MaybeTimestampRes_28, MaybeTimestamp_19, ModuleSpecs_29, Specs_21, *Errors_22);
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_file_10_p_0(
  MR_Word Globals_11,
  MR_Word VeryVerbose_12,
  MR_String FileName_13,
  MR_Word MaybeTimestampRes_14,
  MR_Word * MaybeTimestamp_15,
  MR_Word ModuleSpecs_16,
  MR_Word * Specs_17,
  MR_Word Errors_18)
{
  {
    if ((MaybeTimestampRes_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeTimestamp_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampRes_14, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Var_38)) == (MR_Integer) 1))
      {
        MR_Word IOError_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
        MR_Word SmartRecompilation_33;

        *MaybeTimestamp_15 = (MR_Word) ((MR_Unsigned) 0U);
        libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 140, &SmartRecompilation_33);
        switch (SmartRecompilation_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Warn_45;

              libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
              libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
              libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 31, &Warn_45);
              switch (Warn_45) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Msg_46;
                    MR_Word HaltAtWarn_47;

                    mercury__io__error_message_2_p_0(IOError_32, &Msg_46);
                    mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                    mercury__io__write_string_3_p_0(FileName_13);
                    mercury__io__write_string_3_p_0((MR_String) ":\n");
                    mercury__io__write_string_3_p_0((MR_String) "  ");
                    mercury__io__write_string_3_p_0(Msg_46);
                    mercury__io__write_string_3_p_0((MR_String) ".\n");
                    mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 3, &HaltAtWarn_47);
                    switch (HaltAtWarn_47) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                        }
                        break;
                      case (MR_Integer) 1:
                        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                        break;
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
      else
      {
        MR_Word Timestamp_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_38, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTimestamp_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Timestamp_31));
        }
      }
    }
    parse_tree__read_modules__handle_any_read_module_errors_7_p_0(Globals_11, VeryVerbose_12, Errors_18, ModuleSpecs_16, Specs_17);
  }
}

static void MR_CALL 
parse_tree__read_modules__handle_any_read_module_errors_7_p_0(
  MR_Word Globals_8,
  MR_Word VeryVerbose_9,
  MR_Word Errors_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_10);
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(VeryVerbose_9, (MR_String) "successful parse.\n");
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
    }
    else
    {
      MR_Word FatalErrors_13;
      MR_Word Var_20;

      Var_20 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_10, Var_20, &FatalErrors_13);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_13);
      if (succeeded)
        libs__file_util__maybe_write_string_4_p_0(VeryVerbose_9, (MR_String) "parse error(s).\n");
      else
        libs__file_util__maybe_write_string_4_p_0(VeryVerbose_9, (MR_String) "fatal error(s).\n");
      parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(VeryVerbose_9, Globals_8, STATE_VARIABLE_Specs_0_14, STATE_VARIABLE_Specs_15);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
  }
}

void MR_CALL 
parse_tree__read_modules__read_module_src_14_p_0(
  MR_Word Globals_15,
  MR_String Descr_16,
  MR_Word IgnoreErrors_17,
  MR_Word Search_18,
  MR_Word ModuleName_19,
  MR_Word ExpectationContexts_20,
  MR_String * FileName_21,
  MR_Word ReadModuleAndTimestamps_22,
  MR_Word * MaybeTimestamp_23,
  MR_Word * ParseTreeSrc_24,
  MR_Word * Specs_25,
  MR_Word * Errors_26)
{
  {
    MR_String FileName0_28;
    MR_Word VeryVerbose_29;
    MR_Word SearchDirs_30;
    MR_Word MaybeFileNameAndStream_31;
    MR_Word MaybeTimestampRes_32;
    MR_Word ParseTreeSrc0_33;
    MR_Word ModuleSpecs_34;
    MR_Word ActualModuleNameContext_36;
    MR_Word ComponentsCord_37;

    parse_tree__read_modules__read_module_begin_10_p_0(Globals_15, Descr_16, Search_18, ModuleName_19, (MR_Word) ((MR_Unsigned) 0U), &FileName0_28, &VeryVerbose_29, &SearchDirs_30);
    parse_tree__find_module__search_for_module_source_and_stream_5_p_0(SearchDirs_30, ModuleName_19, &MaybeFileNameAndStream_31);
    parse_tree__parse_module__actually_read_module_src_11_p_0(Globals_15, ModuleName_19, ExpectationContexts_20, MaybeFileNameAndStream_31, ReadModuleAndTimestamps_22, &MaybeTimestampRes_32, &ParseTreeSrc0_33, &ModuleSpecs_34, Errors_26);
    ActualModuleNameContext_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc0_33, (MR_Integer) 1))));
    ComponentsCord_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeSrc0_33, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeSrc_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ActualModuleNameContext_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ComponentsCord_37));
    }
    parse_tree__read_modules__read_module_end_module_13_p_0(Globals_15, IgnoreErrors_17, VeryVerbose_29, MaybeFileNameAndStream_31, FileName0_28, FileName_21, MaybeTimestampRes_32, MaybeTimestamp_23, ModuleSpecs_34, Specs_25, *Errors_26);
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_end_module_13_p_0(
  MR_Word Globals_14,
  MR_Word IgnoreErrors_15,
  MR_Word VeryVerbose_16,
  MR_Word MaybeFileNameAndStream_17,
  MR_String FileName0_18,
  MR_String * FileName_19,
  MR_Word MaybeTimestampRes_20,
  MR_Word * MaybeTimestamp_21,
  MR_Word ModuleSpecs_22,
  MR_Word * Specs_23,
  MR_Word Errors_24)
{
  {
    MR_bool succeeded;
    MR_Word Statistics_28;

    if (((MR_tag((MR_Word) MaybeFileNameAndStream_17)) == (MR_Integer) 1))
      *FileName_19 = FileName0_18;
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFileNameAndStream_17, (MR_Integer) 0))));

      *FileName_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
    }
    parse_tree__read_modules__check_timestamp_report_if_needed_and_missing_6_p_0(Globals_14, FileName0_18, MaybeTimestampRes_20, MaybeTimestamp_21);
    switch (IgnoreErrors_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_24);
          if (succeeded)
          {
            libs__file_util__maybe_write_string_4_p_0(VeryVerbose_16, (MR_String) "successful parse.\n");
            *Specs_23 = ModuleSpecs_22;
          }
          else
          {
            MR_Word FatalErrors_51;
            MR_Word Var_54;

            Var_54 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
            mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_24, Var_54, &FatalErrors_51);
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_51);
            if (succeeded)
              libs__file_util__maybe_write_string_4_p_0(VeryVerbose_16, (MR_String) "parse error(s).\n");
            else
              libs__file_util__maybe_write_string_4_p_0(VeryVerbose_16, (MR_String) "fatal error(s).\n");
            parse_tree__error_util__pre_hlds_maybe_write_out_errors_6_p_0(VeryVerbose_16, Globals_14, ModuleSpecs_22, Specs_23);
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = mercury__set__contains_2_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_24, ((MR_Box) ((MR_Integer) 0)));
          if (succeeded)
          {
            libs__file_util__maybe_write_string_4_p_0(VeryVerbose_16, (MR_String) "not found.\n");
            *Specs_23 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            libs__file_util__maybe_write_string_4_p_0(VeryVerbose_16, (MR_String) "done.\n");
            *Specs_23 = ModuleSpecs_22;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 76, &Statistics_28);
    libs__file_util__maybe_report_stats_3_p_0(Statistics_28);
  }
}

static void MR_CALL 
parse_tree__read_modules__check_timestamp_report_if_needed_and_missing_6_p_0(
  MR_Word Globals_7,
  MR_String FileName_8,
  MR_Word MaybeTimestampRes_9,
  MR_Word * MaybeTimestamp_10)
{
  if ((MaybeTimestampRes_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeTimestamp_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTimestampRes_9, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1))
    {
      MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
      MR_Word SmartRecompilation_14;

      *MaybeTimestamp_10 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 140, &SmartRecompilation_14);
      switch (SmartRecompilation_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Warn_28;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__io_set_disable_generate_item_version_numbers_3_p_0((MR_Integer) 1);
            libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 31, &Warn_28);
            switch (Warn_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Msg_29;
                  MR_Word HaltAtWarn_30;

                  mercury__io__error_message_2_p_0(IOError_13, &Msg_29);
                  mercury__io__write_string_3_p_0((MR_String) "Warning: cannot find modification time for ");
                  mercury__io__write_string_3_p_0(FileName_8);
                  mercury__io__write_string_3_p_0((MR_String) ":\n");
                  mercury__io__write_string_3_p_0((MR_String) "  ");
                  mercury__io__write_string_3_p_0(Msg_29);
                  mercury__io__write_string_3_p_0((MR_String) ".\n");
                  mercury__io__write_string_3_p_0((MR_String) "  Smart recompilation will not work.\n");
                  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 3, &HaltAtWarn_30);
                  switch (HaltAtWarn_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                      break;
                  }
                }
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Timestamp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTimestamp_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Timestamp_12));
      }
    }
  }
}

static void MR_CALL 
parse_tree__read_modules__read_module_begin_10_p_0(
  MR_Word Globals_11,
  MR_String Descr_12,
  MR_Word Search_13,
  MR_Word ModuleName_14,
  MR_Word FileKind_15,
  MR_String * FileName0_16,
  MR_Word * VeryVerbose_17,
  MR_Word * SearchDirs_18)
{
  {
    MR_Word Ext_21;
    MR_String _ExtStr_20;

    parse_tree__file_kind__file_kind_to_extension_3_p_0(FileKind_15, &_ExtStr_20, &Ext_21);
    switch (Search_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_29;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_11, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/10", (MR_Integer) 1, Ext_21, ModuleName_14, FileName0_16);
          Var_29 = mercury__dir__this_directory_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SearchDirs_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.read_modules.read_module_begin\'/10", Ext_21, ModuleName_14, FileName0_16);
          libs__globals__lookup_accumulating_option_3_p_0(Globals_11, (MR_Integer) 680, SearchDirs_18);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 66, VeryVerbose_17);
    switch (*VeryVerbose_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "% ");
          mercury__io__write_string_3_p_0(Descr_12);
          mercury__io__write_string_3_p_0((MR_String) " \140");
          mercury__io__write_string_3_p_0(*FileName0_16);
          mercury__io__write_string_3_p_0((MR_String) "\'... ");
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

MR_Word MR_CALL 
parse_tree__read_modules__init_have_read_module_maps_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;
    MR_Word Var_3;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    Var_2 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[0]));
    Var_3 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__read_modules_scalar_common_1[1]), (MR_Word) (&parse_tree__read_modules_scalar_common_1[2]));
    Var_4 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_raw_compilation_unit_0));
    Var_5 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[3]));
    Var_6 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[4]));
    Var_7 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[5]));
    Var_8 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[6]));
    Var_9 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[7]));
    Var_10 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__read_modules_scalar_common_1[8]));
    {
      HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 2) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 3) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 4) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 5) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 6) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 7) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__1_1, 8) = ((MR_Box) (Var_10));
    }
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int0_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int0_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int0_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int0_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int1_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int1_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int1_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int1_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int2_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int2_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int2_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int2_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_int3_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_int3_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_int3_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_int3_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_key_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_key_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_key_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_plain_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_plain_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_rcu_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_rcu_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_rcu_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_rcu_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_src_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_src_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_src_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_src_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____have_read_module_trans_opt_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____have_read_module_trans_opt_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__read_modules____Unify____maybe_ignore_errors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__read_modules____Unify____maybe_ignore_errors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__read_modules____Compare____maybe_ignore_errors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__read_modules____Compare____maybe_ignore_errors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__read_modules__init(void)
{
}

void mercury__parse_tree__read_modules__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int0_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int1_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int2_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_int3_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_map_2);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_plain_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_rcu_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_src_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_trans_opt_map_0);
	MR_register_type_ctor_info(&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0);
}

void mercury__parse_tree__read_modules__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__read_modules__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.read_modules.
