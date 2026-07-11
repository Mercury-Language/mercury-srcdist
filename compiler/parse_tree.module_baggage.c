/*
** Automatically generated from `module_baggage.m'
** by the Mercury compiler,
** version rotd-2026-07-11
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


// :- module parse_tree.module_baggage.
// :- implementation.

/*
INIT mercury__parse_tree__module_baggage__init
ENDINIT
*/

#include "parse_tree.module_baggage.mih"


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
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.split_parse_tree_src.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_baggage__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_baggage__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_burdened_aug_comp_unit_0_0[2];

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_burdened_aug_comp_unit_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_aug_comp_unit_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_burdened_aug_comp_unit_0_0[1];

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_burdened_aug_comp_unit_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_burdened_aug_comp_unit_0[1];

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_burdened_aug_comp_unit_0[1];

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_burdened_module_0_0[2];

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_burdened_module_0_0[2];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_module_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_burdened_module_0_0[1];

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_burdened_module_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_burdened_module_0[1];

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_burdened_module_0[1];

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_0[1];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_0;

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_1[2];

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_1[2];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_1;

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_2[2];

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_2[2];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_2;

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_3[2];

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_3[2];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_3;

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_4[2];

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_4[2];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_4;

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_3[2];

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_grabbed_file_0[4];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_grabbed_file_0[5];

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_grabbed_file_0[5];

static const MR_FA_TypeInfo_Struct2 parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_grabbed_file_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_baggage__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_maybe_top_module_0_0[1];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_0;

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_maybe_top_module_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_maybe_top_module_0_1[1];

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_maybe_top_module_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_maybe_top_module_0[2];

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_maybe_top_module_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__module_baggage__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_module_timestamp_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_baggage__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_module_timestamp_0;

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_module_baggage_0_0[8];

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_module_baggage_0_0[8];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_baggage_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_module_baggage_0_0[1];

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_module_baggage_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_module_baggage_0[1];

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_module_baggage_0[1];

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_module_timestamp_0_0[3];

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_module_timestamp_0_0[3];

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_module_timestamp_0_0[3];

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_timestamp_0_0;

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_module_timestamp_0_0[1];

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_module_timestamp_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_module_timestamp_0[1];

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_module_timestamp_0[1];

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_0;

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_1;

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_2;

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_3;

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_4;

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_5;

static const MR_EnumFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__enum_ordinal_ordered_recomp_avail_0[6];

static const MR_EnumFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__enum_name_ordered_recomp_avail_0[6];

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_recomp_avail_0[6];

static void MR_CALL 
parse_tree__module_baggage__add_module_dep_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntDeps_0_17,
  MR_Word * STATE_VARIABLE_IntDeps_18,
  MR_Word STATE_VARIABLE_ImpDeps_0_19,
  MR_Word * STATE_VARIABLE_ImpDeps_20);

static void MR_CALL 
parse_tree__module_baggage__maybe_nested_init_burdened_module_7_p_0(
  MR_String SourceFileName_8,
  MR_Word SourceFileModuleName_9,
  MR_Word AllModuleNames_10,
  MR_Word ReadModuleErrors_11,
  MR_Word MaybeTimestamp_12,
  MR_Word ParseTreeModuleSrc_13,
  MR_Word * BurdenedModule_14);

static void MR_CALL 
parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____burdened_aug_comp_unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____burdened_aug_comp_unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____burdened_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____burdened_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____grabbed_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____grabbed_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____grabbed_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____grabbed_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____maybe_top_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____maybe_top_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_baggage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____module_baggage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____module_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_timestamp_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____module_timestamp_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____recomp_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_baggage____Compare____recomp_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_1[3][2];

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_4[1][10];

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_5[1][9];




static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_baggage_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_baggage_scalar_common_3[0])),
    ((MR_Box) (parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_baggage_scalar_common_5[0])),
    ((MR_Box) (parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)),
    ((MR_Box) (&parse_tree__module_baggage__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0))
  },
};

static /* final */ const MR_Box parse_tree__module_baggage_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__module_baggage__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_baggage__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_baggage__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_baggage__maybe__pti_maybe_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_burdened_aug_comp_unit_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_aug_compilation_unit_0)
};

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_burdened_aug_comp_unit_0_0[2] = {
  (MR_String) "bacu_baggage",
  (MR_String) "bacu_acu"
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_aug_comp_unit_0_0 = {
  (MR_String) "burdened_aug_comp_unit",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_burdened_aug_comp_unit_0_0,
  parse_tree__module_baggage__parse_tree__module_baggage__field_names_burdened_aug_comp_unit_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_burdened_aug_comp_unit_0_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_aug_comp_unit_0_0 };

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_burdened_aug_comp_unit_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_burdened_aug_comp_unit_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_burdened_aug_comp_unit_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_aug_comp_unit_0_0 };

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_burdened_aug_comp_unit_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_aug_comp_unit_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_baggage____Unify____burdened_aug_comp_unit_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____burdened_aug_comp_unit_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "burdened_aug_comp_unit",
  { parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_burdened_aug_comp_unit_0 },
  { parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_burdened_aug_comp_unit_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_burdened_aug_comp_unit_0,

};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_burdened_module_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0)
};

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_burdened_module_0_0[2] = {
  (MR_String) "bm_baggage",
  (MR_String) "bm_module"
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_module_0_0 = {
  (MR_String) "burdened_module",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_burdened_module_0_0,
  parse_tree__module_baggage__parse_tree__module_baggage__field_names_burdened_module_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_burdened_module_0_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_module_0_0 };

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_burdened_module_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_burdened_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_burdened_module_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_burdened_module_0_0 };

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_burdened_module_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_baggage____Unify____burdened_module_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____burdened_module_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "burdened_module",
  { parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_burdened_module_0 },
  { parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_burdened_module_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_burdened_module_0,

};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0) };

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_0 = {
  (MR_String) "gf_src",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int0_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_read_why_int0_0)
};

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_1 = {
  (MR_String) "gf_int0",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_1,
  NULL,
  parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int1_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_read_why_int1_0)
};

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_2 = {
  (MR_String) "gf_int1",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_2,
  NULL,
  parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int2_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_read_why_int2_0)
};

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_3 = {
  (MR_String) "gf_int2",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_3,
  NULL,
  parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_4[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_int3_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_read_why_int3_0)
};

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_4[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_4 = {
  (MR_String) "gf_int3",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_grabbed_file_0_4,
  NULL,
  parse_tree__module_baggage__parse_tree__module_baggage__field_locns_grabbed_file_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_0 };

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_1[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_1 };

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_2[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_2 };

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_3[2] = {
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_3,
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_4
};

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_grabbed_file_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_grabbed_file_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_grabbed_file_0[5] = {
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_1,
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_2,
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_3,
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_4,
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_grabbed_file_0_0
};

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_grabbed_file_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_baggage____Unify____grabbed_file_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____grabbed_file_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "grabbed_file",
  { parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_grabbed_file_0 },
  { parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_grabbed_file_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_grabbed_file_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_grabbed_file_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_baggage____Unify____grabbed_file_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____grabbed_file_map_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "grabbed_file_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_grabbed_file_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_baggage__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_maybe_top_module_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__module_baggage__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_0 = {
  (MR_String) "top_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_maybe_top_module_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_1 = {
  (MR_String) "not_top_module",
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

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_maybe_top_module_0_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_1 };

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_maybe_top_module_0_1[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_0 };

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_maybe_top_module_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_maybe_top_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_maybe_top_module_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_maybe_top_module_0[2] = {
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_1,
  &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_maybe_top_module_0_0
};

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_maybe_top_module_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_maybe_top_module_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_baggage____Unify____maybe_top_module_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____maybe_top_module_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "maybe_top_module",
  { parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_maybe_top_module_0 },
  { parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_maybe_top_module_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_maybe_top_module_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_baggage__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_module_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_baggage__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_module_timestamp_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_module_timestamp_0) }
};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_module_baggage_0_0[8] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_maybe_top_module_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__maybe__ti_maybe_1libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_module_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_grabbed_file_0),
  (MR_PseudoTypeInfo) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_errors_0)
};

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_module_baggage_0_0[8] = {
  (MR_String) "mb_source_file_name",
  (MR_String) "mb_source_file_dir",
  (MR_String) "mb_source_file_top_module_name",
  (MR_String) "mb_maybe_top_module",
  (MR_String) "mb_maybe_timestamp",
  (MR_String) "mb_maybe_timestamp_map",
  (MR_String) "mb_grabbed_file_map",
  (MR_String) "mb_errors"
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_baggage_0_0 = {
  (MR_String) "module_baggage",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_module_baggage_0_0,
  parse_tree__module_baggage__parse_tree__module_baggage__field_names_module_baggage_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_module_baggage_0_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_baggage_0_0 };

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_module_baggage_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_module_baggage_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_module_baggage_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_baggage_0_0 };

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_module_baggage_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_baggage____Unify____module_baggage_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____module_baggage_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "module_baggage",
  { parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_module_baggage_0 },
  { parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_module_baggage_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_module_baggage_0,

};

static const MR_PseudoTypeInfo parse_tree__module_baggage__parse_tree__module_baggage__field_types_module_timestamp_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_file_kind_0),
  (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)
};

static const MR_ConstString parse_tree__module_baggage__parse_tree__module_baggage__field_names_module_timestamp_0_0[3] = {
  (MR_String) "mts_file_kind",
  (MR_String) "mts_timestamp",
  (MR_String) "mts_avail_kind"
};

static const MR_DuArgLocn parse_tree__module_baggage__parse_tree__module_baggage__field_locns_module_timestamp_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_timestamp_0_0 = {
  (MR_String) "module_timestamp",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__module_baggage__parse_tree__module_baggage__field_types_module_timestamp_0_0,
  parse_tree__module_baggage__parse_tree__module_baggage__field_names_module_timestamp_0_0,
  parse_tree__module_baggage__parse_tree__module_baggage__field_locns_module_timestamp_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_module_timestamp_0_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_timestamp_0_0 };

static const MR_DuPtagLayout parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_module_timestamp_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_baggage__parse_tree__module_baggage__du_stag_ordered_module_timestamp_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_module_timestamp_0[1] = { &parse_tree__module_baggage__parse_tree__module_baggage__du_functor_desc_module_timestamp_0_0 };

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_module_timestamp_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_baggage____Unify____module_timestamp_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____module_timestamp_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "module_timestamp",
  { parse_tree__module_baggage__parse_tree__module_baggage__du_name_ordered_module_timestamp_0 },
  { parse_tree__module_baggage__parse_tree__module_baggage__du_ptag_ordered_module_timestamp_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_module_timestamp_0,

};

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_baggage____Unify____module_timestamp_map_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____module_timestamp_map_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "module_timestamp_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_baggage__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_baggage__type_ctor_info_module_timestamp_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_0 = {
  (MR_String) "recomp_avail_src",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_1 = {
  (MR_String) "recomp_avail_int_import",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_2 = {
  (MR_String) "recomp_avail_imp_import",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_3 = {
  (MR_String) "recomp_avail_int_use",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_4 = {
  (MR_String) "recomp_avail_imp_use",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_5 = {
  (MR_String) "recomp_avail_int_use_imp_import",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__enum_ordinal_ordered_recomp_avail_0[6] = {
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_0,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_1,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_2,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_3,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_4,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_5
};

static const MR_EnumFunctorDescPtr parse_tree__module_baggage__parse_tree__module_baggage__enum_name_ordered_recomp_avail_0[6] = {
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_2,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_4,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_1,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_3,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_5,
  &parse_tree__module_baggage__parse_tree__module_baggage__enum_functor_desc_recomp_avail_0_0
};

static const MR_Integer parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_recomp_avail_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_baggage____Unify____recomp_avail_0_0_10001)),
  ((MR_Box) (parse_tree__module_baggage____Compare____recomp_avail_0_0_10001)),
  (MR_String) "parse_tree.module_baggage",
  (MR_String) "recomp_avail",
  { parse_tree__module_baggage__parse_tree__module_baggage__enum_name_ordered_recomp_avail_0 },
  { parse_tree__module_baggage__parse_tree__module_baggage__enum_ordinal_ordered_recomp_avail_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__module_baggage__parse_tree__module_baggage__functor_number_map_recomp_avail_0,

};

void MR_CALL 
parse_tree__module_baggage____Compare____recomp_avail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____recomp_avail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_baggage____Compare____module_timestamp_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_timestamp_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_baggage____Compare____module_timestamp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 7);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 7);
    MR_Word SubResult1_6;

    parse_tree__file_kind____Compare____file_kind_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      libs__timestamp____Compare____timestamp_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_timestamp_0_0(
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
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 7);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 7);

    succeeded = parse_tree__file_kind____Unify____file_kind_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = libs__timestamp____Unify____timestamp_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__module_baggage____Compare____grabbed_file_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____grabbed_file_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_baggage____Compare____grabbed_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_26 == CastY_27);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

              parse_tree__prog_parse_tree____Compare____parse_tree_module_src_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 1))) & (MR_Integer) 1);
              MR_Word SubResult1_8;

              parse_tree__prog_parse_tree____Compare____parse_tree_int0_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Integer Var_43 = (MR_Integer) (ArgX2_9);
                MR_Integer Var_44 = (MR_Integer) (ArgY2_10);

                succeeded = (Var_43 < Var_44);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_43 > Var_44);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_14 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 1))) & (MR_Integer) 7);
              MR_Word ArgY2_15 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 1))) & (MR_Integer) 7);
              MR_Word SubResult1_13;

              parse_tree__prog_parse_tree____Compare____parse_tree_int1_0_0(&SubResult1_13, ArgX1_11, ArgY1_12);
              succeeded = (SubResult1_13 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_13;
              else
              {
                MR_Integer Var_41 = (MR_Integer) (ArgX2_14);
                MR_Integer Var_42 = (MR_Integer) (ArgY2_15);

                succeeded = (Var_41 < Var_42);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_41 > Var_42);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 3);
                      MR_Word ArgY2_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 3);
                      MR_Word SubResult1_18;

                      parse_tree__prog_parse_tree____Compare____parse_tree_int2_0_0(&SubResult1_18, ArgX1_16, ArgY1_17);
                      succeeded = (SubResult1_18 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_18;
                      else
                      {
                        MR_Integer Var_39 = (MR_Integer) (ArgX2_19);
                        MR_Integer Var_40 = (MR_Integer) (ArgY2_20);

                        succeeded = (Var_39 < Var_40);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_39 > Var_40);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 15);
                      MR_Word ArgY2_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 15);
                      MR_Word SubResult1_23;

                      parse_tree__prog_parse_tree____Compare____parse_tree_int3_0_0(&SubResult1_23, ArgX1_21, ArgY1_22);
                      succeeded = (SubResult1_23 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_23;
                      else
                      {
                        MR_Integer Var_37 = (MR_Integer) (ArgX2_24);
                        MR_Integer Var_38 = (MR_Integer) (ArgY2_25);

                        succeeded = (Var_37 < Var_38);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_37 > Var_38);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____grabbed_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
            succeeded = parse_tree__prog_parse_tree____Unify____parse_tree_module_src_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 1))) & (MR_Integer) 1);
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 1))) & (MR_Integer) 1);
            succeeded = parse_tree__prog_parse_tree____Unify____parse_tree_int0_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = (ArgX2_7 == ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 1))) & (MR_Integer) 7);
          MR_Word ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 1))) & (MR_Integer) 7);
            succeeded = parse_tree__prog_parse_tree____Unify____parse_tree_int1_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
              succeeded = (ArgX2_11 == ArgY2_12);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 3);
              MR_Word ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 3);
                succeeded = parse_tree__prog_parse_tree____Unify____parse_tree_int2_0_0(ArgX1_13, ArgY1_14);
                if (succeeded)
                  succeeded = (ArgX2_15 == ArgY2_16);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_18;
              MR_Word ArgX2_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 15);
              MR_Word ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 15);
                succeeded = parse_tree__prog_parse_tree____Unify____parse_tree_int3_0_0(ArgX1_17, ArgY1_18);
                if (succeeded)
                  succeeded = (ArgX2_19 == ArgY2_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__module_baggage____Compare____burdened_module_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__module_baggage____Compare____module_baggage_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_parse_tree____Compare____parse_tree_module_src_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____burdened_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = parse_tree__module_baggage____Unify____module_baggage_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__prog_parse_tree____Unify____parse_tree_module_src_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__module_baggage____Compare____burdened_aug_comp_unit_0_0(
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__module_baggage____Compare____module_baggage_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_parse_tree____Compare____aug_compilation_unit_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
parse_tree__module_baggage____Compare____module_baggage_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
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
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
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

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__module_baggage____Compare____maybe_top_module_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_1[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_2[0]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  parse_tree__parse_error____Compare____read_module_errors_0_0(HeadVar__1_1, ArgX8_25, ArgY8_26);
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__module_baggage____Compare____maybe_top_module_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_baggage_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____burdened_aug_comp_unit_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = parse_tree__module_baggage____Unify____module_baggage_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__prog_parse_tree____Unify____aug_compilation_unit_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_baggage_0_0(
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
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
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
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__module_baggage____Unify____maybe_top_module_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&parse_tree__module_baggage_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&parse_tree__module_baggage_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&parse_tree__module_baggage_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                  succeeded = parse_tree__parse_error____Unify____read_module_errors_0_0(ArgX8_17, ArgY8_18);
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__module_baggage____Unify____maybe_top_module_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__module_baggage_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage__add_module_dep_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_IntDeps_0_17,
  MR_Word * STATE_VARIABLE_IntDeps_18,
  MR_Word STATE_VARIABLE_ImpDeps_0_19,
  MR_Word * STATE_VARIABLE_ImpDeps_20)
{
  MR_bool succeeded;
  MR_Word Section_12;

  if (((MR_tag((MR_Word) MaybeImplicit_8)) == (MR_Integer) 0))
  {
    MR_Word SectionImportUse_11 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, 0))));

    switch (MR_tag((MR_Word) SectionImportUse_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        Section_12 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        Section_12 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, SectionImportUse_11, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Section_12 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            Section_12 = (MR_Integer) 0;
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word Implicit_13 = ((MR_Unsigned) ((MR_hl_field(1, MaybeImplicit_8, 0))) & (MR_Integer) 3);
    MR_Word MaybeExplicit_14 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit_8, 1))));
    MR_Word ImplicitSection_15;

    switch (Implicit_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        ImplicitSection_15 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ImplicitSection_15 = (MR_Integer) 0;
        break;
    }
    if ((MaybeExplicit_14 == (MR_Word) ((MR_Unsigned) 0U)))
      Section_12 = ImplicitSection_15;
    else
    {
      MR_Word ExplicitSection_16;
      MR_Word SectionImportUse_23 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_14, 0))));

      switch (MR_tag((MR_Word) SectionImportUse_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          ExplicitSection_16 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          ExplicitSection_16 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, SectionImportUse_23, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ExplicitSection_16 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              ExplicitSection_16 = (MR_Integer) 0;
              break;
          }
          break;
      }
      succeeded = (ImplicitSection_15 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (ExplicitSection_16 == (MR_Integer) 0);
      if (succeeded)
        Section_12 = (MR_Integer) 0;
      else
        Section_12 = (MR_Integer) 1;
    }
  }
  switch (Section_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_ImpDeps_0_19, STATE_VARIABLE_ImpDeps_20);
        *STATE_VARIABLE_IntDeps_18 = STATE_VARIABLE_IntDeps_0_17;
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_IntDeps_0_17, STATE_VARIABLE_IntDeps_18);
        *STATE_VARIABLE_ImpDeps_20 = STATE_VARIABLE_ImpDeps_0_19;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_baggage__maybe_nested_init_burdened_module_7_p_0(
  MR_String SourceFileName_8,
  MR_Word SourceFileModuleName_9,
  MR_Word AllModuleNames_10,
  MR_Word ReadModuleErrors_11,
  MR_Word MaybeTimestamp_12,
  MR_Word ParseTreeModuleSrc_13,
  MR_Word * BurdenedModule_14)
{
  MR_bool succeeded;
  MR_Word ModuleName_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_13, 0))));
  MR_Word MaybeTopModule_17;
  MR_Word GrabbedFileMap_19;
  MR_Word Baggage_20;
  MR_Word Var_21;
  MR_String Var_22;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_15, SourceFileModuleName_9);
  if (succeeded)
  {
    MR_Word NestedModuleNames_16;

    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_15)), AllModuleNames_10, &NestedModuleNames_16);
    {
      MaybeTopModule_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTopModule_17, 0) = ((MR_Box) (NestedModuleNames_16));
    }
  }
  else
    MaybeTopModule_17 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (ParseTreeModuleSrc_13));
  }
  GrabbedFileMap_19 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0), ((MR_Box) (ModuleName_15)), ((MR_Box) (Var_21)));
  Var_22 = mercury__dir__this_directory_0_f_0();
  {
    Baggage_20 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Baggage_20, 0) = ((MR_Box) (SourceFileName_8));
    MR_hl_field(0, Baggage_20, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, Baggage_20, 2) = ((MR_Box) (SourceFileModuleName_9));
    MR_hl_field(0, Baggage_20, 3) = ((MR_Box) (MaybeTopModule_17));
    MR_hl_field(0, Baggage_20, 4) = ((MR_Box) (MaybeTimestamp_12));
    MR_hl_field(0, Baggage_20, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Baggage_20, 6) = ((MR_Box) (GrabbedFileMap_19));
    MR_hl_field(0, Baggage_20, 7) = ((MR_Box) (ReadModuleErrors_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *BurdenedModule_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Baggage_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ParseTreeModuleSrc_13));
  }
}

static void MR_CALL 
parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_IntDeps_18;
  MR_Word conv0_STATE_VARIABLE_ImpDeps_20;

  parse_tree__module_baggage__add_module_dep_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_IntDeps_18, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ImpDeps_20);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_IntDeps_18));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ImpDeps_20));
}

void MR_CALL 
parse_tree__module_baggage__parse_tree_module_src_get_int_imp_deps_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word * IntDeps_5,
  MR_Word * ImpDeps_6)
{
  MR_Word ImportUseMap_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 3))));
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Box conv3_IntDeps_5;
  MR_Box conv2_ImpDeps_6;

  Var_9 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_10 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__module_baggage_scalar_common_1[0]), (MR_Word) (&parse_tree__module_baggage_scalar_common_1[0]), (MR_Word) (&parse_tree__module_baggage_scalar_common_2[3]), ImportUseMap_7, ((MR_Box) (Var_9)), &conv3_IntDeps_5, ((MR_Box) (Var_10)), &conv2_ImpDeps_6);
  *IntDeps_5 = ((MR_Word) (conv3_IntDeps_5));
  *ImpDeps_6 = ((MR_Word) (conv2_ImpDeps_6));
}

static void MR_CALL 
parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_BurdenedModule_14;

  parse_tree__module_baggage__maybe_nested_init_burdened_module_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), &conv1_BurdenedModule_14);
  *wrapper_arg_2 = ((MR_Box) (conv1_BurdenedModule_14));
}

static MR_Box MR_CALL 
parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__parse_tree_module_src_project_name_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ReadModuleErrors_10,
  MR_Word MaybeTimestamp_11,
  MR_Word ParseTreeSrc_12,
  MR_Word * STATE_VARIABLE_Specs_20,
  MR_Word * BurdenedModules_14)
{
  MR_Word ParseTreeModuleSrcs_15;
  MR_Word TopModuleName_16;
  MR_Word AllModuleNames_19;
  MR_Word STATE_VARIABLE_Specs_1_21;
  MR_Word Var_23;
  MR_Word Var_25;

  STATE_VARIABLE_Specs_1_21 = parse_tree__parse_error__get_read_module_specs_1_f_0(ReadModuleErrors_10);
  parse_tree__split_parse_tree_src__split_into_component_modules_perform_checks_5_p_0(Globals_8, ParseTreeSrc_12, &ParseTreeModuleSrcs_15, STATE_VARIABLE_Specs_1_21, STATE_VARIABLE_Specs_20);
  TopModuleName_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeSrc_12, 0))));
  Var_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_baggage_scalar_common_2[2]), ParseTreeModuleSrcs_15);
  AllModuleNames_19 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_23);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__module_baggage_scalar_common_4[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__module_baggage__parse_tree_src_to_burdened_module_list_7_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (SourceFileName_9));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (TopModuleName_16));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (AllModuleNames_19));
    MR_hl_field(0, Var_25, 6) = ((MR_Box) (ReadModuleErrors_10));
    MR_hl_field(0, Var_25, 7) = ((MR_Box) (MaybeTimestamp_11));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_parse_tree_module_src_0), (MR_Word) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0), Var_25, ParseTreeModuleSrcs_15, BurdenedModules_14);
}

MR_Word MR_CALL 
parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(
  MR_Word MaybeTopModule_3)
{
  MR_Word Modules_4;

  if ((MaybeTopModule_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Modules_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModulesSet_5 = ((MR_Word) ((MR_hl_field(1, MaybeTopModule_3, 0))));

    Modules_4 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModulesSet_5);
  }
  return Modules_4;
}

MR_Word MR_CALL 
parse_tree__module_baggage__get_nested_children_of_top_module_1_f_0(
  MR_Word MaybeTopModule_3)
{
  MR_Word Modules_4;

  if ((MaybeTopModule_3 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &Modules_4);
  else
    Modules_4 = ((MR_Word) ((MR_hl_field(1, MaybeTopModule_3, 0))));
  return Modules_4;
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____burdened_aug_comp_unit_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____burdened_aug_comp_unit_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____burdened_aug_comp_unit_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____burdened_aug_comp_unit_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____burdened_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____burdened_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____burdened_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____burdened_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____grabbed_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____grabbed_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____grabbed_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____grabbed_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____grabbed_file_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____grabbed_file_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____grabbed_file_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____grabbed_file_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____maybe_top_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____maybe_top_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____maybe_top_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____maybe_top_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_baggage_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____module_baggage_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____module_baggage_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____module_baggage_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____module_timestamp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____module_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____module_timestamp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____module_timestamp_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____module_timestamp_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____module_timestamp_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____module_timestamp_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_baggage____Unify____recomp_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_baggage____Unify____recomp_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_baggage____Compare____recomp_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_baggage____Compare____recomp_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_baggage__init(void)
{
}

void mercury__parse_tree__module_baggage__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_aug_comp_unit_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_burdened_module_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_grabbed_file_map_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_maybe_top_module_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_baggage_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_module_timestamp_map_0);
  MR_register_type_ctor_info(&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0);
}

void mercury__parse_tree__module_baggage__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_baggage__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_baggage.
