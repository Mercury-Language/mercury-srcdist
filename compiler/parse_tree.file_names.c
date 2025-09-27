/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2025-09-27
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
REQUIRED_INIT mercury__parse_tree__file_names__required_init
ENDINIT
*/

#include "parse_tree.file_names.mih"
#include "parse_tree.file_names.mh"


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
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_count_sum_0_0[2];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_count_sum_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0[1];

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_0[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_0[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_1[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_1[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_2[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_2[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_2;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_3[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_3[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_3;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_4[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_4[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_4;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_5[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_5[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_6[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_7[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_7[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_7;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_8[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_8;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_9[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_9;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_10[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_10[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_10;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_3[8];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_0[4];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0[11];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0[11];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_2;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_3;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_4;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_5;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_6;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_7;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_8;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_9;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_10;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_11;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_12;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_13;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_14;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_15;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_0[16];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_0[16];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_0[16];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_2;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_3;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_4;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_5;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_6;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_7;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_8;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gas_0[9];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gas_0[9];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gas_0[9];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gs_0[3];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gs_0[3];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gs_0[3];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_2;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_3;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_4;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_5;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_6;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_7;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_8;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_9;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_10;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_11;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_0[12];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_0[12];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_0[12];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_2;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_3;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_4;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_5;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_6;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_7;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_8;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_9;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_10;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gas_0[11];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gas_0[11];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gas_0[11];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_2;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_3;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_4;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_5;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_6;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_7;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_8;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_9;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_10;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_11;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_12;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_13;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_14;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_0[15];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_0[15];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_0[15];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_err_0_0;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_err_0[1];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_err_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_err_0[1];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_java_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_java_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_java_0[2];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_cur_0_0;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_max_cur_0[1];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_max_cur_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_max_cur_0[1];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_2;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_3;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_4;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_max_ngs_0[5];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_max_ngs_0[5];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_max_ngs_0[5];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_pgs_max_cur_0_0;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_pgs_max_cur_0[1];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_pgs_max_cur_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_pgs_max_cur_0[1];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_create_dirs_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_for_search_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_for_search_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_for_search_0[2];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_search_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__file_names__maybe__ti_maybe_1parse_tree__file_names__type_ctor_info_maybe_create_dirs_0;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_key_0_0[4];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_record_key_0_0[4];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_key_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_key_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_key_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_key_0[1];

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_value_0_0[2];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_value_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_value_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_value_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_value_0[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_0;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_search_which_dirs_0_1[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_1;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_search_which_dirs_0_2[2];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_2;

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_3;

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_4;

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_5;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_0[4];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_2[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_search_which_dirs_0[3];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_search_which_dirs_0[6];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_search_which_dirs_0[6];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_0;

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_1;

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_2;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_tail_dirs_0_0[3];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_search_which_tail_dirs_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_search_which_tail_dirs_0[3];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_search_which_tail_dirs_0[3];

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names__unsafe_set_mkdirs_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__file_names__unsafe_get_mkdirs_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__file_names__unlock_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__lock_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__initialise_mutable_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__unsafe_set_no_mkdirs_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__file_names__unsafe_get_no_mkdirs_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__file_names__unlock_no_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__lock_no_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_no_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__unsafe_set_translations_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__file_names__unsafe_get_translations_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__file_names__unlock_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__lock_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__initialise_mutable_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__unsafe_set_made_dirs_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__file_names__unsafe_get_made_dirs_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__file_names__unlock_made_dirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__lock_made_dirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_made_dirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__initialise_mutable_made_dirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__write_out_mkdirs_entry_5_p_0(
  MR_Word Stream_6,
  MR_String DirName_7,
  MR_Integer Cnt_8);

static void MR_CALL 
parse_tree__file_names__write_out_no_mkdirs_entry_5_p_0(
  MR_Word Stream_6,
  MR_String DirName_7,
  MR_Integer Cnt_8);

static void MR_CALL 
parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(
  MR_Word Stream_6,
  MR_String ExtSchDir_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__file_names__write_out_ext_entry_5_p_0(
  MR_Word Stream_6,
  MR_String Ext_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__file_names__gather_translation_stats_11_p_0(
  MR_Word Globals_12,
  MR_Word Key_13,
  MR_Word Value_14,
  MR_Integer STATE_VARIABLE_NumKeys_0_31,
  MR_Integer * STATE_VARIABLE_NumKeys_32,
  MR_Integer STATE_VARIABLE_NumLookups_0_33,
  MR_Integer * STATE_VARIABLE_NumLookups_34,
  MR_Word STATE_VARIABLE_ExtMap_0_35,
  MR_Word * STATE_VARIABLE_ExtMap_36,
  MR_Word STATE_VARIABLE_ExtSchDirMap_0_37,
  MR_Word * STATE_VARIABLE_ExtSchDirMap_38);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_12,
  MR_Word Ext_14,
  MR_Word ModuleName_15,
  MR_Word * DirNamesLegacy_16,
  MR_Word * DirNamesProposed_17,
  MR_String * CurDirFileName_18);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(
  MR_String * Str_5,
  MR_String * Dir_6);

static void MR_CALL 
parse_tree__file_names__make_gas_dir_names_4_p_0(
  MR_Word Globals_5,
  MR_String SubDirName_6,
  MR_Word * GasSubDirNamesLegacy_7,
  MR_Word * GasSubDirNamesProposed_8);

static void MR_CALL 
parse_tree__file_names__make_ngs_dir_names_3_p_0(
  MR_String SubDirName_4,
  MR_Word * NgsSubDirNamesLegacy_5,
  MR_Word * NgsSubDirNamesProposed_6);

static void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(
  MR_Word Globals_5,
  MR_Word Ext_6,
  MR_String * Str_7,
  MR_String * Dir_8);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_gas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_gas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_gs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_gs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_err_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_err_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_java_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_java_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_max_cur_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_max_cur_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_max_ngs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_max_ngs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_pgs_max_cur_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_pgs_max_cur_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
parse_tree__file_names____Unify____maybe_for_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____maybe_for_search_0_0_10001(
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

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____search_which_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____search_which_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____search_which_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____search_which_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[11][2];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_7[1][14];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_8[2][8];


struct parse_tree__file_names__vector_common_type_4_0_s {
  const MR_String parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
  const MR_String parse_tree__file_names__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_4_0_s parse_tree__file_names_vector_common_4[32];

struct parse_tree__file_names__vector_common_type_5_0_s {
  const MR_String parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_5_0_s parse_tree__file_names_vector_common_5[80];

struct parse_tree__file_names__vector_common_type_6_0_s {
  const MR_Word parse_tree__file_names__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_6_0_s parse_tree__file_names_vector_common_6[15];



static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "analysis_cache")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "MercurySystem")),
    ((MR_Box) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[8])))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_7[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_8[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__file_names__vector_common_type_4_0_s parse_tree__file_names_vector_common_4[32] = {
  /* row   0 */
  {
    (MR_String) ".int0",
    (MR_String) "int0s"
  },
  /* row   1 */
  {
    (MR_String) ".int",
    (MR_String) "ints"
  },
  /* row   2 */
  {
    (MR_String) ".int2",
    (MR_String) "int2s"
  },
  /* row   3 */
  {
    (MR_String) ".int3",
    (MR_String) "int3s"
  },
  /* row   4 */
  {
    (MR_String) ".date0",
    (MR_String) "date0s"
  },
  /* row   5 */
  {
    (MR_String) ".date",
    (MR_String) "dates"
  },
  /* row   6 */
  {
    (MR_String) ".date3",
    (MR_String) "date3s"
  },
  /* row   7 */
  {
    (MR_String) ".d",
    (MR_String) "ds"
  },
  /* row   8 */
  {
    (MR_String) ".dv",
    (MR_String) "deps"
  },
  /* row   9 */
  {
    (MR_String) ".dep",
    (MR_String) "deps"
  },
  /* row  10 */
  {
    (MR_String) ".module_dep",
    (MR_String) "module_deps"
  },
  /* row  11 */
  {
    (MR_String) ".prof",
    (MR_String) "profs"
  },
  /* row  12 */
  {
    (MR_String) ".opt",
    (MR_String) "opts"
  },
  /* row  13 */
  {
    (MR_String) ".trans_opt",
    (MR_String) "trans_opts"
  },
  /* row  14 */
  {
    (MR_String) ".optdate",
    (MR_String) "optdates"
  },
  /* row  15 */
  {
    (MR_String) ".trans_opt_date",
    (MR_String) "trans_opt_dates"
  },
  /* row  16 */
  {
    (MR_String) ".c",
    (MR_String) "cs"
  },
  /* row  17 */
  {
    (MR_String) ".cs",
    (MR_String) "css"
  },
  /* row  18 */
  {
    (MR_String) ".c_date",
    (MR_String) "c_dates"
  },
  /* row  19 */
  {
    (MR_String) ".cs_date",
    (MR_String) "cs_dates"
  },
  /* row  20 */
  {
    (MR_String) ".java_date",
    (MR_String) "java_dates"
  },
  /* row  21 */
  {
    (MR_String) "_init.c",
    (MR_String) "cs"
  },
  /* row  22 */
  {
    (MR_String) ".analysis_date",
    (MR_String) "analysis_dates"
  },
  /* row  23 */
  {
    (MR_String) ".analysis_status",
    (MR_String) "analysis_statuss"
  },
  /* row  24 */
  {
    (MR_String) ".err_date",
    (MR_String) "err_dates"
  },
  /* row  25 */
  {
    (MR_String) ".used",
    (MR_String) "useds"
  },
  /* row  26 */
  {
    (MR_String) ".track_flags",
    (MR_String) "track_flags"
  },
  /* row  27 */
  {
    (MR_String) ".opt",
    (MR_String) "opts"
  },
  /* row  28 */
  {
    (MR_String) ".trans_opt",
    (MR_String) "trans_opts"
  },
  /* row  29 */
  {
    (MR_String) ".analysis",
    (MR_String) "analyses"
  },
  /* row  30 */
  {
    (MR_String) ".imdg",
    (MR_String) "imdgs"
  },
  /* row  31 */
  {
    (MR_String) ".request",
    (MR_String) "requests"
  },
};

static /* final */ const struct parse_tree__file_names__vector_common_type_5_0_s parse_tree__file_names_vector_common_5[80] = {
  /* row   0 */   { (MR_String) ".defn_extents" },
  /* row   1 */   { (MR_String) ".defn_line_counts" },
  /* row   2 */   { (MR_String) ".defns" },
  /* row   3 */   { (MR_String) ".dependency_graph" },
  /* row   4 */   { (MR_String) ".hlds_dump" },
  /* row   5 */   { (MR_String) ".imports_graph" },
  /* row   6 */   { (MR_String) ".local_call_tree" },
  /* row   7 */   { (MR_String) ".local_call_tree_full" },
  /* row   8 */   { (MR_String) ".local_call_tree_order" },
  /* row   9 */   { (MR_String) ".mlds_dump" },
  /* row  10 */   { (MR_String) ".mode_constraints" },
  /* row  11 */   { (MR_String) ".module_order" },
  /* row  12 */   { (MR_String) ".module_order_for_trans_opt" },
  /* row  13 */   { (MR_String) ".type_repns" },
  /* row  14 */   { (MR_String) ".ugly" },
  /* row  15 */   { (MR_String) ".xml" },
  /* row  16 */   { (MR_String) ".defn_extents" },
  /* row  17 */   { (MR_String) ".defn_line_counts" },
  /* row  18 */   { (MR_String) ".defns" },
  /* row  19 */   { (MR_String) ".dependency_graph" },
  /* row  20 */   { (MR_String) ".hlds_dump" },
  /* row  21 */   { (MR_String) ".imports_graph" },
  /* row  22 */   { (MR_String) ".local_call_tree" },
  /* row  23 */   { (MR_String) ".local_call_tree_full" },
  /* row  24 */   { (MR_String) ".local_call_tree_order" },
  /* row  25 */   { (MR_String) ".mlds_dump" },
  /* row  26 */   { (MR_String) ".mode_constraints" },
  /* row  27 */   { (MR_String) ".module_order" },
  /* row  28 */   { (MR_String) ".module_order_for_trans_opt" },
  /* row  29 */   { (MR_String) ".type_repns" },
  /* row  30 */   { (MR_String) ".ugly" },
  /* row  31 */   { (MR_String) ".xml" },
  /* row  32 */   { (MR_String) ".defn_extents" },
  /* row  33 */   { (MR_String) ".defn_line_counts" },
  /* row  34 */   { (MR_String) ".defns" },
  /* row  35 */   { (MR_String) ".dependency_graph" },
  /* row  36 */   { (MR_String) ".hlds_dump" },
  /* row  37 */   { (MR_String) ".imports_graph" },
  /* row  38 */   { (MR_String) ".local_call_tree" },
  /* row  39 */   { (MR_String) ".local_call_tree_full" },
  /* row  40 */   { (MR_String) ".local_call_tree_order" },
  /* row  41 */   { (MR_String) ".mlds_dump" },
  /* row  42 */   { (MR_String) ".mode_constraints" },
  /* row  43 */   { (MR_String) ".module_order" },
  /* row  44 */   { (MR_String) ".module_order_for_trans_opt" },
  /* row  45 */   { (MR_String) ".type_repns" },
  /* row  46 */   { (MR_String) ".ugly" },
  /* row  47 */   { (MR_String) ".xml" },
  /* row  48 */   { (MR_String) ".defn_extents" },
  /* row  49 */   { (MR_String) ".defn_line_counts" },
  /* row  50 */   { (MR_String) ".defns" },
  /* row  51 */   { (MR_String) ".dependency_graph" },
  /* row  52 */   { (MR_String) ".hlds_dump" },
  /* row  53 */   { (MR_String) ".imports_graph" },
  /* row  54 */   { (MR_String) ".local_call_tree" },
  /* row  55 */   { (MR_String) ".local_call_tree_full" },
  /* row  56 */   { (MR_String) ".local_call_tree_order" },
  /* row  57 */   { (MR_String) ".mlds_dump" },
  /* row  58 */   { (MR_String) ".mode_constraints" },
  /* row  59 */   { (MR_String) ".module_order" },
  /* row  60 */   { (MR_String) ".module_order_for_trans_opt" },
  /* row  61 */   { (MR_String) ".type_repns" },
  /* row  62 */   { (MR_String) ".ugly" },
  /* row  63 */   { (MR_String) ".xml" },
  /* row  64 */   { (MR_String) ".defn_extents" },
  /* row  65 */   { (MR_String) ".defn_line_counts" },
  /* row  66 */   { (MR_String) ".defns" },
  /* row  67 */   { (MR_String) ".dependency_graph" },
  /* row  68 */   { (MR_String) ".hlds_dump" },
  /* row  69 */   { (MR_String) ".imports_graph" },
  /* row  70 */   { (MR_String) ".local_call_tree" },
  /* row  71 */   { (MR_String) ".local_call_tree_full" },
  /* row  72 */   { (MR_String) ".local_call_tree_order" },
  /* row  73 */   { (MR_String) ".mlds_dump" },
  /* row  74 */   { (MR_String) ".mode_constraints" },
  /* row  75 */   { (MR_String) ".module_order" },
  /* row  76 */   { (MR_String) ".module_order_for_trans_opt" },
  /* row  77 */   { (MR_String) ".type_repns" },
  /* row  78 */   { (MR_String) ".ugly" },
  /* row  79 */   { (MR_String) ".xml" },
};

static /* final */ const struct parse_tree__file_names__vector_common_type_6_0_s parse_tree__file_names_vector_common_6[15] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   5 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   6 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   7 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   8 */   { (MR_Word) ((MR_Integer) 0) },
  /* row   9 */   { (MR_Word) ((MR_Integer) 0) },
  /* row  10 */   { (MR_Integer) 4 },
  /* row  11 */   { (MR_Integer) 0 },
  /* row  12 */   { (MR_Integer) 1 },
  /* row  13 */   { (MR_Integer) 2 },
  /* row  14 */   { (MR_Integer) 3 },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "parse_tree.file_names.mh"
#line 2119 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_made_dirs;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_made_dirs_lock;
#endif

#line 2223 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_translations;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_translations_lock;
#endif

#line 2249 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_no_mkdirs;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_no_mkdirs_lock;
#endif

#line 2251 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_mkdirs;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_mkdirs_lock;
#endif


#line 2119 "file_names.m"
void 
parse_tree__file_names__user_init_pred_189_0(void)
#line 2119 "file_names.m"
{
#line 2119 "file_names.m"
	parse_tree__file_names__initialise_mutable_made_dirs_0_p_0();
}

#line 2223 "file_names.m"
void 
parse_tree__file_names__user_init_pred_199_0(void)
#line 2223 "file_names.m"
{
#line 2223 "file_names.m"
	parse_tree__file_names__initialise_mutable_translations_0_p_0();
}

#line 2249 "file_names.m"
void 
parse_tree__file_names__user_init_pred_202_0(void)
#line 2249 "file_names.m"
{
#line 2249 "file_names.m"
	parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0();
}

#line 2251 "file_names.m"
void 
parse_tree__file_names__user_init_pred_203_0(void)
#line 2251 "file_names.m"
{
#line 2251 "file_names.m"
	parse_tree__file_names__initialise_mutable_mkdirs_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_count_sum_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0 = {
  (MR_String) "count_sum",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_count_sum_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_count_sum_0_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0 };

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_count_sum_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0 };

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____count_sum_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____count_sum_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "count_sum",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0,

};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0 = {
  (MR_String) "ext_cur",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_0,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1 = {
  (MR_String) "ext_cur_ngs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_1,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gs_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_2 = {
  (MR_String) "ext_cur_gs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_2,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gas_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_3 = {
  (MR_String) "ext_cur_gas",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_3,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_4 = {
  (MR_String) "ext_cur_ngs_gs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_4,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_5[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gas_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_5[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5 = {
  (MR_String) "ext_cur_ngs_gas",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_5,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_6[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_err_0) };

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6 = {
  (MR_String) "ext_cur_ngs_gs_err",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_7[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_java_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_7[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_7 = {
  (MR_String) "ext_cur_ngs_gs_java",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_7,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_8[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_pgs_max_cur_0) };

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_8 = {
  (MR_String) "ext_cur_pgs_max_cur",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_9[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0) };

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_9 = {
  (MR_String) "ext_cur_ngs_gs_max_cur",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_10[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_10[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_10 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_10,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_10,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0 };

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1 };

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_2[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_2 };

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_3[8] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_3,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_4,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_7,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_8,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_9,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_10
};

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0[11] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_3,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_2,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_4,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_7,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_9,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_10,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_8
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0[11] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 9
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____ext_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_0 = {
  (MR_String) "ext_cur_user_defn_ext",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_1 = {
  (MR_String) "ext_cur_user_defn_lc",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_2 = {
  (MR_String) "ext_cur_user_defns",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_3 = {
  (MR_String) "ext_cur_user_depgraph",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_4 = {
  (MR_String) "ext_cur_user_hlds_dump",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_5 = {
  (MR_String) "ext_cur_user_imports_graph",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_6 = {
  (MR_String) "ext_cur_user_lct",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_7 = {
  (MR_String) "ext_cur_user_lct_full",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_8 = {
  (MR_String) "ext_cur_user_lct_order",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_9 = {
  (MR_String) "ext_cur_user_mlds_dump",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_10 = {
  (MR_String) "ext_cur_user_mode_constr",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_11 = {
  (MR_String) "ext_cur_user_order",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_12 = {
  (MR_String) "ext_cur_user_order_to",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_13 = {
  (MR_String) "ext_cur_user_type_repns",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_14 = {
  (MR_String) "ext_cur_user_ugly",
  INT32_C(14)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_15 = {
  (MR_String) "ext_cur_user_xml",
  INT32_C(15)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_0[16] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_11,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_12,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_13,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_14,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_15
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_0[16] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_11,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_12,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_13,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_14,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_15
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_0[16] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_0 },
  (MR_Integer) 16,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_0 = {
  (MR_String) "ext_cur_gas_exec_noext",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_1 = {
  (MR_String) "ext_cur_gas_exec_exe",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_2 = {
  (MR_String) "ext_cur_gas_exec_bat",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_3 = {
  (MR_String) "ext_cur_gas_exec_exec_opt",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_4 = {
  (MR_String) "ext_cur_gas_lib_dollar_efsl",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_5 = {
  (MR_String) "ext_cur_gas_lib_dollar_a",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_6 = {
  (MR_String) "ext_cur_gas_lib_archive",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_7 = {
  (MR_String) "ext_cur_gas_lib_lib_opt",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_8 = {
  (MR_String) "ext_cur_gas_lib_sh_lib_opt",
  INT32_C(8)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gas_0[9] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_8
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gas_0[9] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gas_0_8
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gas_0[9] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 8
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gas_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_gas_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_gas_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_gas",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gas_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gas_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gas_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0 = {
  (MR_String) "ext_cur_gs_lib_init",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1 = {
  (MR_String) "ext_cur_gs_lib_jar",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2 = {
  (MR_String) "ext_cur_gs_lib_cil_dll",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gs_0[3] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gs_0[3] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gs_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_gs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_gs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_gs",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gs_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gs_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gs_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_0 = {
  (MR_String) "ext_cur_ngs_int_int0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_1 = {
  (MR_String) "ext_cur_ngs_int_int1",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_2 = {
  (MR_String) "ext_cur_ngs_int_int2",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_3 = {
  (MR_String) "ext_cur_ngs_int_int3",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_4 = {
  (MR_String) "ext_cur_ngs_int_date_int0",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_5 = {
  (MR_String) "ext_cur_ngs_int_date_int12",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_6 = {
  (MR_String) "ext_cur_ngs_int_date_int3",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_7 = {
  (MR_String) "ext_cur_ngs_mf_d",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_8 = {
  (MR_String) "ext_cur_ngs_mf_dv",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_9 = {
  (MR_String) "ext_cur_ngs_mf_dep",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_10 = {
  (MR_String) "ext_cur_ngs_misc_module_dep",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_11 = {
  (MR_String) "ext_cur_ngs_misc_call_graph_for_prof",
  INT32_C(11)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_0[12] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_11
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_0[12] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_11,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_10
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_0[12] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 10
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_ngs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_ngs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_ngs",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_0 },
  (MR_Integer) 12,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_0 = {
  (MR_String) "ext_cur_ngs_gas_obj_dollar_o",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_1 = {
  (MR_String) "ext_cur_ngs_gas_obj_dollar_efpo",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_2 = {
  (MR_String) "ext_cur_ngs_gas_obj_o",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_3 = {
  (MR_String) "ext_cur_ngs_gas_obj_pic_o",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_4 = {
  (MR_String) "ext_cur_ngs_gas_obj_obj_opt",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_5 = {
  (MR_String) "ext_cur_ngs_gas_obj_pic_obj_opt",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_6 = {
  (MR_String) "ext_cur_ngs_gas_init_obj_dollar_o",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_7 = {
  (MR_String) "ext_cur_ngs_gas_init_obj_o",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_8 = {
  (MR_String) "ext_cur_ngs_gas_init_obj_pic_o",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_9 = {
  (MR_String) "ext_cur_ngs_gas_init_obj_obj_opt",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_10 = {
  (MR_String) "ext_cur_ngs_gas_init_obj_pic_obj_opt",
  INT32_C(10)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gas_0[11] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_10
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gas_0[11] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gas_0_5
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gas_0[11] = {
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gas_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_ngs_gas_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_ngs_gas_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_ngs_gas",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gas_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gas_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gas_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_0 = {
  (MR_String) "ext_cur_ngs_gs_proposed_opt_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_1 = {
  (MR_String) "ext_cur_ngs_gs_proposed_opt_trans",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_2 = {
  (MR_String) "ext_cur_ngs_gs_opt_date_plain",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_3 = {
  (MR_String) "ext_cur_ngs_gs_opt_date_trans",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_4 = {
  (MR_String) "ext_cur_ngs_gs_target_c",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_5 = {
  (MR_String) "ext_cur_ngs_gs_target_cs",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_6 = {
  (MR_String) "ext_cur_ngs_gs_target_date_c",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_7 = {
  (MR_String) "ext_cur_ngs_gs_target_date_cs",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_8 = {
  (MR_String) "ext_cur_ngs_gs_target_date_java",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_9 = {
  (MR_String) "ext_cur_ngs_gs_init_c",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_10 = {
  (MR_String) "ext_cur_ngs_gs_an_analysis_date",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_11 = {
  (MR_String) "ext_cur_ngs_gs_an_analysis_status",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_12 = {
  (MR_String) "ext_cur_ngs_gs_misc_err_date",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_13 = {
  (MR_String) "ext_cur_ngs_gs_misc_used",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_14 = {
  (MR_String) "ext_cur_ngs_gs_misc_track_flags",
  INT32_C(14)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_0[15] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_11,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_12,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_13,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_14
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_0[15] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_11,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_12,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_14,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_13,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_8
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_0[15] = {
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_ngs_gs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_ngs_gs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_ngs_gs",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_0 },
  (MR_Integer) 15,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_err_0_0 = {
  (MR_String) "ext_cur_ngs_gs_err_err",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_err_0[1] = { &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_err_0_0 };

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_err_0[1] = { &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_err_0_0 };

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_err_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_err_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_ngs_gs_err_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_ngs_gs_err_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_ngs_gs_err",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_err_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_err_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_err_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_0 = {
  (MR_String) "ext_cur_ngs_gs_java_java",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_1 = {
  (MR_String) "ext_cur_ngs_gs_java_class",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_java_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_java_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_java_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_java_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_java_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_ngs_gs_java_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_ngs_gs_java_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_ngs_gs_java",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_java_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_java_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_java_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_cur_0_0 = {
  (MR_String) "ext_cur_ngs_gs_max_cur_mih",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_max_cur_0[1] = { &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_cur_0_0 };

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_max_cur_0[1] = { &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_cur_0_0 };

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_max_cur_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_ngs_gs_max_cur_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_ngs_gs_max_cur_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_ngs_gs_max_cur",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_max_cur_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_max_cur_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_max_cur_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_0 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs_legacy_opt_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_1 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs_legacy_opt_trans",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_2 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs_an_analysis",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_3 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs_an_imdg",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_4 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs_an_request",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_max_ngs_0[5] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_4
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_max_ngs_0[5] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_1
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_max_ngs_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_ngs_gs_max_ngs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_ngs_gs_max_ngs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_ngs_gs_max_ngs",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_max_ngs_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_max_ngs_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_max_ngs_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_pgs_max_cur_0_0 = {
  (MR_String) "ext_cur_pgs_max_cur_mh",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_pgs_max_cur_0[1] = { &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_pgs_max_cur_0_0 };

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_pgs_max_cur_0[1] = { &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_pgs_max_cur_0_0 };

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_pgs_max_cur_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_pgs_max_cur_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (parse_tree__file_names____Unify____ext_cur_pgs_max_cur_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_cur_pgs_max_cur_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_cur_pgs_max_cur",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_pgs_max_cur_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_pgs_max_cur_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_pgs_max_cur_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0 = {
  (MR_String) "do_create_dirs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1 = {
  (MR_String) "do_not_create_dirs",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_create_dirs_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_create_dirs",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_create_dirs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_0 = {
  (MR_String) "not_for_search",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_1 = {
  (MR_String) "for_search",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_for_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_for_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_for_search_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_for_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_for_search_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_for_search_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_for_search_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_for_search",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_for_search_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_for_search_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_for_search_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0 = {
  (MR_String) "do_not_search",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1 = {
  (MR_String) "do_search",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_search_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_search_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_search",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_search_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__file_names__maybe__ti_maybe_1parse_tree__file_names__type_ctor_info_maybe_create_dirs_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0) }
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_key_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_for_search_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__maybe__ti_maybe_1parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)
};

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_record_key_0_0[4] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0 = {
  (MR_String) "record_key",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_record_key_0_0,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_record_key_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_key_0_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0 };

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_key_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_key_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_key_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0 };

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_key_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____record_key_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____record_key_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "record_key",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_key_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_key_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_record_key_0,

};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_value_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0 = {
  (MR_String) "record_value",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_record_value_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_value_0_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0 };

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_value_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_value_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_value_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0 };

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_value_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____record_value_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____record_value_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "record_value",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_value_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_value_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_record_value_0,

};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_0 = {
  (MR_String) "search_cur_dir",
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

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_search_which_dirs_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_1 = {
  (MR_String) "search_this_dir",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__file_names__parse_tree__file_names__field_types_search_which_dirs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_search_which_dirs_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_search_which_tail_dirs_0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_2 = {
  (MR_String) "search_this_dir_and",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__file_names__parse_tree__file_names__field_types_search_which_dirs_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_3 = {
  (MR_String) "search_interface_dirs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_4 = {
  (MR_String) "search_intermod_dirs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_5 = {
  (MR_String) "search_dirs_for_ext",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_0[4] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_3,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_4,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_5
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_1[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_1 };

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_2[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_2 };

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_search_which_dirs_0[3] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_dirs_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_search_which_dirs_0[6] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_5,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_3,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_4,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_1,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_dirs_0_2
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_search_which_dirs_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_search_which_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____search_which_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____search_which_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "search_which_dirs",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_search_which_dirs_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_search_which_dirs_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_search_which_dirs_0,

};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_0 = {
  (MR_String) "search_cur_dir",
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

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_1 = {
  (MR_String) "search_interface_dirs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_2 = {
  (MR_String) "search_intermod_dirs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_tail_dirs_0_0[3] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_1,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_2
};

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_search_which_tail_dirs_0[1] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_search_which_tail_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_search_which_tail_dirs_0[3] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_1,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_search_which_tail_dirs_0_2
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_search_which_tail_dirs_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_search_which_tail_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____search_which_tail_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____search_which_tail_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "search_which_tail_dirs",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_search_which_tail_dirs_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_search_which_tail_dirs_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_search_which_tail_dirs_0,

};

void MR_CALL 
parse_tree__file_names____Compare____search_which_tail_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__file_names____Compare____search_which_dirs_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____search_which_tail_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__file_names____Unify____search_which_dirs_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____search_which_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
                MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, 0))));
                MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
                MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
                MR_Word SubResult1_8;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
                succeeded = (SubResult1_8 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_8;
                else
                {
                  MR_Word Cast_HeadVar1_16 = (MR_Word) (ArgX2_9);
                  MR_Word Cast_HeadVar2_17 = (MR_Word) (ArgY2_10);
                  MR_Word next_value_of_HeadVar__2_2 = Cast_HeadVar1_16;
                  MR_Word next_value_of_HeadVar__3_3 = Cast_HeadVar2_17;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
              }
              break;
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____search_which_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_10 == CastX_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, 0))));
            MR_String ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
            MR_Word ArgY2_8;
            MR_Word Cast_HeadVar1_13;
            MR_Word Cast_HeadVar2_14;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
              if (succeeded)
              {
                Cast_HeadVar1_13 = (MR_Word) (ArgX2_7);
                Cast_HeadVar2_14 = (MR_Word) (ArgY2_8);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Cast_HeadVar1_13;
                next_value_of_HeadVar__2_2 = Cast_HeadVar2_14;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
          break;
      }
    return succeeded;
    break;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__file_names____Compare____ext_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__file_names____Unify____ext_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&parse_tree__file_names_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0(
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
parse_tree__file_names____Unify____maybe_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_for_search_0_0(
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
parse_tree__file_names____Unify____maybe_for_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0(
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
parse_tree__file_names____Unify____maybe_create_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_pgs_max_cur_0_0(
  MR_Word * HeadVar__1_1)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_110_97_109_101_115_95_95_101_120_116_95_99_117_114_95_112_103_115_95_109_97_120_95_99_117_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_110_97_109_101_115_95_95_101_120_116_95_99_117_114_95_112_103_115_95_109_97_120_95_99_117_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_pgs_max_cur_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_max_ngs_0_0(
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
parse_tree__file_names____Unify____ext_cur_ngs_gs_max_ngs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_max_cur_0_0(
  MR_Word * HeadVar__1_1)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_110_97_109_101_115_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_110_97_109_101_115_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_max_cur_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_java_0_0(
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
parse_tree__file_names____Unify____ext_cur_ngs_gs_java_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_err_0_0(
  MR_Word * HeadVar__1_1)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_110_97_109_101_115_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_102_105_108_101_95_110_97_109_101_115_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_err_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_0_0(
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
parse_tree__file_names____Unify____ext_cur_ngs_gs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gas_0_0(
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
parse_tree__file_names____Unify____ext_cur_ngs_gas_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_0_0(
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
parse_tree__file_names____Unify____ext_cur_ngs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_gs_0_0(
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
parse_tree__file_names____Unify____ext_cur_gs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_gas_0_0(
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
parse_tree__file_names____Unify____ext_cur_gas_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_cur_0_0(
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
parse_tree__file_names____Unify____ext_cur_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_0_0(
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
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 15);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 15);
              MR_Integer Var_50 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_51 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_50 < Var_51);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_50 > Var_51);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
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
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 15);
              MR_Integer Var_48 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_49 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_48 < Var_49);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_48 > Var_49);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
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
              MR_Word ArgX1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 3);
              MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 3);
              MR_Integer Var_46 = (MR_Integer) (ArgX1_8);
              MR_Integer Var_47 = (MR_Integer) (ArgY1_9);

              succeeded = (Var_46 < Var_47);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_46 > Var_47);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
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
                      MR_Word ArgX1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                      MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 15);
                      MR_Integer Var_44 = (MR_Integer) (ArgX1_10);
                      MR_Integer Var_45 = (MR_Integer) (ArgY1_11);

                      succeeded = (Var_44 < Var_45);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_44 > Var_45);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
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
                      MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                      MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 15);
                      MR_Integer Var_42 = (MR_Integer) (ArgX1_12);
                      MR_Integer Var_43 = (MR_Integer) (ArgY1_13);

                      succeeded = (Var_42 < Var_43);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_42 > Var_43);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
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
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                      MR_Word ArgY1_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 15);
                      MR_Integer Var_40 = (MR_Integer) (ArgX1_14);
                      MR_Integer Var_41 = (MR_Integer) (ArgY1_15);

                      succeeded = (Var_40 < Var_41);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_40 > Var_41);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ArgX1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                      MR_Word ArgY1_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
                      MR_Integer Var_38 = (MR_Integer) (ArgX1_18);
                      MR_Integer Var_39 = (MR_Integer) (ArgY1_19);

                      succeeded = (Var_38 < Var_39);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_38 > Var_39);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 5:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 6:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 7:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ArgX1_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                      MR_Word ArgY1_25 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 7);
                      MR_Integer Var_36 = (MR_Integer) (ArgX1_24);
                      MR_Integer Var_37 = (MR_Integer) (ArgY1_25);

                      succeeded = (Var_36 < Var_37);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_36 > Var_37);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
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
parse_tree__file_names____Unify____ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_25 == CastY_26);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 15);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 15);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 3);
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 15);
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 15);
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 15);
              MR_Word ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 15);
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 3:
            succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 5:
            succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
            break;
          case (MR_Integer) 6:
            succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 6)));
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);
              MR_Word ArgY1_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_23 == ArgY1_24);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names__unsafe_set_mkdirs_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_set_mkdirs_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_mkdirs = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_get_mkdirs_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_get_mkdirs_1_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_mkdirs;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__file_names__unlock_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unlock_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__lock_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__lock_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__pre_initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_mkdirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__initialise_mutable_mkdirs_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_mkdirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_mkdirs = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_set_no_mkdirs_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_set_no_mkdirs_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_no_mkdirs = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_get_no_mkdirs_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_get_no_mkdirs_1_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_no_mkdirs;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__file_names__unlock_no_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unlock_no_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, "parse_tree__file_names__mutable_variable_no_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__lock_no_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__lock_no_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, "parse_tree__file_names__mutable_variable_no_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_no_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__pre_initialise_mutable_no_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, "parse_tree__file_names__mutable_variable_no_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_no_mkdirs = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, "parse_tree__file_names__mutable_variable_no_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_set_translations_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_set_translations_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_translations = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_get_translations_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_get_translations_1_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_translations;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__file_names__unlock_translations_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unlock_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__lock_translations_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__lock_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_translations_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__pre_initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_translations_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__initialise_mutable_translations_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_translations_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0));
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_translations = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_set_made_dirs_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_set_made_dirs_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_made_dirs = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_get_made_dirs_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_get_made_dirs_1_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_made_dirs;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__file_names__unlock_made_dirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unlock_made_dirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__lock_made_dirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__lock_made_dirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_made_dirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__pre_initialise_mutable_made_dirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_made_dirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__initialise_mutable_made_dirs_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_made_dirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_made_dirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_made_dirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_made_dirs_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_made_dirs = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_made_dirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__write_out_mkdirs_entry_5_p_0(
  MR_Word Stream_6,
  MR_String DirName_7,
  MR_Integer Cnt_8)
{
  MR_String Var_22;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "dir_name ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), Cnt_8, &Var_22);
  mercury__io__write_string_4_p_0(Stream_6, Var_22);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, DirName_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__file_names__write_out_no_mkdirs_entry_5_p_0(
  MR_Word Stream_6,
  MR_String DirName_7,
  MR_Integer Cnt_8)
{
  MR_String Var_22;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "no_dir_name ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), Cnt_8, &Var_22);
  mercury__io__write_string_4_p_0(Stream_6, Var_22);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, DirName_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(
  MR_Word Stream_6,
  MR_String ExtSchDir_7,
  MR_Word HeadVar__3_3)
{
  MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_String Var_25;
  MR_String Var_35;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "ext_sch_dir ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), Cnt_8, &Var_25);
  mercury__io__write_string_4_p_0(Stream_6, Var_25);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), Sum_9, &Var_35);
  mercury__io__write_string_4_p_0(Stream_6, Var_35);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, ExtSchDir_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__file_names__write_out_ext_entry_5_p_0(
  MR_Word Stream_6,
  MR_String Ext_7,
  MR_Word HeadVar__3_3)
{
  MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_String Var_25;
  MR_String Var_35;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "ext ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), Cnt_8, &Var_25);
  mercury__io__write_string_4_p_0(Stream_6, Var_25);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), Sum_9, &Var_35);
  mercury__io__write_string_4_p_0(Stream_6, Var_35);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, Ext_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__file_names__gather_translation_stats_11_p_0(
  MR_Word Globals_12,
  MR_Word Key_13,
  MR_Word Value_14,
  MR_Integer STATE_VARIABLE_NumKeys_0_31,
  MR_Integer * STATE_VARIABLE_NumKeys_32,
  MR_Integer STATE_VARIABLE_NumLookups_0_33,
  MR_Integer * STATE_VARIABLE_NumLookups_34,
  MR_Word STATE_VARIABLE_ExtMap_0_35,
  MR_Word * STATE_VARIABLE_ExtMap_36,
  MR_Word STATE_VARIABLE_ExtSchDirMap_0_37,
  MR_Word * STATE_VARIABLE_ExtSchDirMap_38)
{
  MR_bool succeeded;
  MR_Integer Count_20;
  MR_Word Ext_22;
  MR_Word Search_23;
  MR_Word MaybeMkdir_24;
  MR_String ExtStr0_25;
  MR_String ExtStr_26;
  MR_String SearchStr_27;
  MR_String MkDirStr_28;
  MR_String ExtSchDir_30;
  MR_String Var_42;
  MR_Word Entry0_76;
  MR_Box conv0_Entry0_76;
  MR_Word Entry0_88;
  MR_Box conv1_Entry0_88;

  *STATE_VARIABLE_NumKeys_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumKeys_0_31 + (MR_Unsigned) 1);
  Count_20 = ((MR_Integer) ((MR_hl_field(0, Value_14, 1))));
  *STATE_VARIABLE_NumLookups_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumLookups_0_33 + (MR_Unsigned) Count_20);
  Ext_22 = ((MR_Word) ((MR_hl_field(0, Key_13, 1))));
  Search_23 = ((MR_Unsigned) ((MR_hl_field(0, Key_13, 2))) & (MR_Integer) 1);
  MaybeMkdir_24 = ((MR_Word) ((MR_hl_field(0, Key_13, 3))));
  switch (MR_tag((MR_Word) Ext_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExtCur_44 = ((MR_Unsigned) ((MR_hl_field(0, Ext_22, 0))) & (MR_Integer) 15);

        ExtStr0_25 = ((&parse_tree__file_names_vector_common_5[64 + ExtCur_44]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_45 = ((MR_Unsigned) ((MR_hl_field(1, Ext_22, 0))) & (MR_Integer) 15);
        MR_String _SubDirName_46;

        parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtCurNgs_45, &ExtStr0_25, &_SubDirName_46);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_47 = ((MR_Unsigned) ((MR_hl_field(2, Ext_22, 0))) & (MR_Integer) 3);
        MR_String _LegacySubDirName_48;
        MR_String _ProposedSubDirName_49;

        parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtCurGs_47, &ExtStr0_25, &_LegacySubDirName_48, &_ProposedSubDirName_49);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_22, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurGas_50 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, 1))) & (MR_Integer) 15);
            MR_String _SubDirName_57;

            parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_12, ExtCurGas_50, &ExtStr0_25, &_SubDirName_57);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGs_51 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, 1))) & (MR_Integer) 15);
            MR_String _SubDirName_58;

            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_51, &ExtStr0_25, &_SubDirName_58);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExtCurNgsGas_52 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, 1))) & (MR_Integer) 15);

            switch (ExtCurNgsGas_52) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 6:
                ExtStr0_25 = (MR_String) "_init.\044O";
                break;
              case (MR_Integer) 7:
                ExtStr0_25 = (MR_String) "_init.o";
                break;
              case (MR_Integer) 9:
                {
                  MR_String Str0_66;

                  libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 494, &Str0_66);
                  ExtStr0_25 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_66);
                }
                break;
              case (MR_Integer) 8:
                ExtStr0_25 = (MR_String) "_init.pic_o";
                break;
              case (MR_Integer) 10:
                {
                  MR_String Str0_73;

                  libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 495, &Str0_73);
                  ExtStr0_25 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_73);
                }
                break;
              case (MR_Integer) 1:
                ExtStr0_25 = (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)";
                break;
              case (MR_Integer) 0:
                ExtStr0_25 = (MR_String) ".\044O";
                break;
              case (MR_Integer) 2:
                ExtStr0_25 = (MR_String) ".o";
                break;
              case (MR_Integer) 4:
                libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 494, &ExtStr0_25);
                break;
              case (MR_Integer) 3:
                ExtStr0_25 = (MR_String) ".pic_o";
                break;
              case (MR_Integer) 5:
                libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 495, &ExtStr0_25);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          ExtStr0_25 = (MR_String) ".err";
          break;
        case (MR_Integer) 4:
          {
            MR_Word ExtCurNgsGsJava_54 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, 1))) & (MR_Integer) 1);

            switch (ExtCurNgsGsJava_54) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ExtStr0_25 = (MR_String) ".class";
                break;
              case (MR_Integer) 0:
                ExtStr0_25 = (MR_String) ".java";
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          ExtStr0_25 = (MR_String) ".mh";
          break;
        case (MR_Integer) 6:
          ExtStr0_25 = (MR_String) ".mih";
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtCurNgsGsMaxNgs_56 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, 1))) & (MR_Integer) 7);
            MR_String _SubDirName_65;

            parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_56, &ExtStr0_25, &_SubDirName_65);
          }
          break;
      }
      break;
  }
  succeeded = (strcmp(ExtStr0_25, (MR_String) "") == 0);
  if (succeeded)
    ExtStr_26 = (MR_String) "no_suffix";
  else
    ExtStr_26 = ExtStr0_25;
  switch (Search_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      SearchStr_27 = (MR_String) "_search";
      break;
    case (MR_Integer) 0:
      SearchStr_27 = (MR_String) "_nosearch";
      break;
  }
  if ((MaybeMkdir_24 == (MR_Word) ((MR_Unsigned) 0U)))
    MkDirStr_28 = (MR_String) "_returndir";
  else
  {
    MR_Word MkDir_29 = ((MR_Word) ((MR_hl_field(1, MaybeMkdir_24, 0))));

    switch (MkDir_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MkDirStr_28 = (MR_String) "_mkdir";
        break;
      case (MR_Integer) 1:
        MkDirStr_28 = (MR_String) "_nomkdir";
        break;
    }
  }
  Var_42 = mercury__string__f_43_43_2_f_0(SearchStr_27, MkDirStr_28);
  ExtSchDir_30 = mercury__string__f_43_43_2_f_0(ExtStr_26, Var_42);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), STATE_VARIABLE_ExtMap_0_35, ((MR_Box) (ExtStr_26)), &conv0_Entry0_76);
  if (succeeded)
  {
    Entry0_76 = ((MR_Word) (conv0_Entry0_76));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Cnt0_77 = ((MR_Integer) ((MR_hl_field(0, Entry0_76, 0))));
    MR_Integer Sum0_78 = ((MR_Integer) ((MR_hl_field(0, Entry0_76, 1))));
    MR_Word Entry_79;
    MR_Integer Var_80 = (MR_Integer) ((MR_Unsigned) Cnt0_77 + (MR_Unsigned) 1);
    MR_Integer Var_82 = (MR_Integer) ((MR_Unsigned) Sum0_78 + (MR_Unsigned) Count_20);

    {
      Entry_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(0, Entry_79, 1) = ((MR_Box) (Var_82));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtStr_26)), ((MR_Box) (Entry_79)), STATE_VARIABLE_ExtMap_0_35, STATE_VARIABLE_ExtMap_36);
  }
  else
  {
    MR_Word Entry_84;

    {
      Entry_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_84, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Entry_84, 1) = ((MR_Box) (Count_20));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtStr_26)), ((MR_Box) (Entry_84)), STATE_VARIABLE_ExtMap_0_35, STATE_VARIABLE_ExtMap_36);
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), STATE_VARIABLE_ExtSchDirMap_0_37, ((MR_Box) (ExtSchDir_30)), &conv1_Entry0_88);
  if (succeeded)
  {
    Entry0_88 = ((MR_Word) (conv1_Entry0_88));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Cnt0_89 = ((MR_Integer) ((MR_hl_field(0, Entry0_88, 0))));
    MR_Integer Sum0_90 = ((MR_Integer) ((MR_hl_field(0, Entry0_88, 1))));
    MR_Word Entry_91;
    MR_Integer Var_92 = (MR_Integer) ((MR_Unsigned) Cnt0_89 + (MR_Unsigned) 1);
    MR_Integer Var_94 = (MR_Integer) ((MR_Unsigned) Sum0_90 + (MR_Unsigned) Count_20);

    {
      Entry_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(0, Entry_91, 1) = ((MR_Box) (Var_94));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtSchDir_30)), ((MR_Box) (Entry_91)), STATE_VARIABLE_ExtSchDirMap_0_37, STATE_VARIABLE_ExtSchDirMap_38);
  }
  else
  {
    MR_Word Entry_96;

    {
      Entry_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_96, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Entry_96, 1) = ((MR_Box) (Count_20));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtSchDir_30)), ((MR_Box) (Entry_96)), STATE_VARIABLE_ExtSchDirMap_0_37, STATE_VARIABLE_ExtSchDirMap_38);
  }
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__write_out_mkdirs_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__write_out_no_mkdirs_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__write_out_ext_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_STATE_VARIABLE_NumKeys_32;
  MR_Integer conv2_STATE_VARIABLE_NumLookups_34;
  MR_Word conv1_STATE_VARIABLE_ExtMap_36;
  MR_Word conv0_STATE_VARIABLE_ExtSchDirMap_38;

  parse_tree__file_names__gather_translation_stats_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_STATE_VARIABLE_NumKeys_32, ((MR_Integer) (wrapper_arg_5)), &conv2_STATE_VARIABLE_NumLookups_34, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_ExtMap_36, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ExtSchDirMap_38);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_NumKeys_32));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_NumLookups_34));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_ExtMap_36));
  *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ExtSchDirMap_38));
}

void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_3_p_0(
  MR_Word Globals_4)
{
  MR_bool succeeded;
  MR_Word Translations_6;
  MR_Word NoMkDirs_7;
  MR_Word MkDirs_8;
  MR_Word TypeCtorInfo_45_45;
  MR_Word TypeCtorInfo_46_46;

{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_translations;


		;}
#undef MR_PROC_LABEL
	Translations_6  = X;
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, "parse_tree__file_names__mutable_variable_no_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_no_mkdirs;


		;}
#undef MR_PROC_LABEL
	NoMkDirs_7  = X;
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_no_mkdirs_lock, "parse_tree__file_names__mutable_variable_no_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_mkdirs;


		;}
#undef MR_PROC_LABEL
	MkDirs_8  = X;
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0), Translations_6);
  if (succeeded)
  {
    TypeCtorInfo_45_45 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeCtorInfo_46_46 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_45_45, TypeCtorInfo_46_46, NoMkDirs_7);
    if (succeeded)
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_45_45, TypeCtorInfo_46_46, MkDirs_8);
  }
  if (!(succeeded))
  {
    MR_Integer NumKeys_9;
    MR_Integer NumLookups_10;
    MR_Word ExtMap_11;
    MR_Word ExtSchDirMap_12;
    MR_Word Result_13;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Box conv7_NumKeys_9;
    MR_Box conv6_NumLookups_10;
    MR_Box conv5_ExtMap_11;
    MR_Box conv4_ExtSchDirMap_12;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_7[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (Globals_4));
    }
    Var_24 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0));
    Var_25 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__file_names_scalar_common_1[0]), (MR_Word) (&parse_tree__file_names_scalar_common_1[0]), Var_21, Translations_6, ((MR_Box) ((MR_Integer) 0)), &conv7_NumKeys_9, ((MR_Box) ((MR_Integer) 0)), &conv6_NumLookups_10, ((MR_Box) (Var_24)), &conv5_ExtMap_11, ((MR_Box) (Var_25)), &conv4_ExtSchDirMap_12);
    NumKeys_9 = ((MR_Integer) (conv7_NumKeys_9));
    NumLookups_10 = ((MR_Integer) (conv6_NumLookups_10));
    ExtMap_11 = ((MR_Word) (conv5_ExtMap_11));
    ExtSchDirMap_12 = ((MR_Word) (conv4_ExtSchDirMap_12));
    mercury__io__open_append_4_p_0((MR_String) "/tmp/TRANSLATIONS_RECORD", &Result_13);
    if (!(((MR_tag((MR_Word) Result_13)) == (MR_Integer) 1)))
    {
      MR_Word Stream_14 = ((MR_Word) ((MR_hl_field(0, Result_13, 0))));
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_String Var_83;
      MR_String Var_93;
      MR_Box conv8_STATE_VARIABLE_IO_6_36;
      MR_Box conv9_STATE_VARIABLE_IO_7_38;
      MR_Box conv10_STATE_VARIABLE_IO_8_40;
      MR_Box conv11_STATE_VARIABLE_IO_9_42;

      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "overall_stats ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), NumKeys_9, &Var_83);
      mercury__io__write_string_4_p_0(Stream_14, Var_83);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), NumLookups_10, &Var_93);
      mercury__io__write_string_4_p_0(Stream_14, Var_93);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_8[0]));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_2));
        MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_35, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, ExtMap_11, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_6_36);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_8[0]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_3));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, ExtSchDirMap_12, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_7_38);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_8[1]));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_4));
        MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_39, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, NoMkDirs_7, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_8_40);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_8[1]));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_5));
        MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_41, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, MkDirs_8, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_9_42);
      mercury__io__close_output_3_p_0(Stream_14);
    }
  }
}

void MR_CALL 
parse_tree__file_names__make_include_file_path_3_p_0(
  MR_String ModuleSourceFileName_4,
  MR_String OrigFileName_5,
  MR_String * Path_6)
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

MR_Word MR_CALL 
parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(
  MR_Word ModuleName_3)
{
  MR_bool succeeded;
  MR_Word QualModuleName_4;

  succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_3);
  if (succeeded)
    QualModuleName_4 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName_3);
  else
    QualModuleName_4 = ModuleName_3;
  return QualModuleName_4;
}

MR_bool MR_CALL 
parse_tree__file_names__mercury_std_library_module_name_1_p_0(
  MR_Word ModuleName_2)
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
    MR_String Name_3 = ((MR_String) ((MR_hl_field(0, ModuleName_2, 0))));

    succeeded = mercury__library__mercury_std_library_module_1_p_0(Name_3);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__file_names__maybe_create_any_dirs_on_path_4_p_0(
  MR_Word Mkdir_5,
  MR_Word DirComponents_6)
{
  switch (Mkdir_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirComponents_6);
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

MR_String MR_CALL 
parse_tree__file_names__glue_dir_names_base_name_2_f_0(
  MR_Word DirComponents_4,
  MR_String CurDirFileName_5)
{
  MR_String FullFileName_6;

  if ((DirComponents_4 == (MR_Word) ((MR_Unsigned) 0U)))
    FullFileName_6 = CurDirFileName_5;
  else
  {
    MR_Word Components_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (CurDirFileName_5));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirComponents_4, Var_10);
    FullFileName_6 = mercury__dir__relative_path_name_from_components_1_f_0(Components_9);
  }
  return FullFileName_6;
}

void MR_CALL 
parse_tree__file_names__make_all_proposed_dir_names_ngs_3_p_0(
  MR_String ExtSubDir_4,
  MR_String PrefixDir_5,
  MR_Word * Dirs_6)
{
  MR_String NgsDir_7;
  MR_Word Var_11;
  MR_Word Components_13;
  MR_Word Var_14;
  MR_Word Var_16;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (ExtSubDir_4));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_16));
  }
  {
    Components_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Components_13, 0) = ((MR_Box) (PrefixDir_5));
    MR_hl_field(1, Components_13, 1) = ((MR_Box) (Var_14));
  }
  NgsDir_7 = mercury__dir__relative_path_name_from_components_1_f_0(Components_13);
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (PrefixDir_5));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Dirs_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (NgsDir_7));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_11));
  }
}

void MR_CALL 
parse_tree__file_names__make_selected_proposed_dir_name_ngs_4_p_0(
  MR_Word SubdirSetting_5,
  MR_String ExtSubDir_6,
  MR_String PrefixDir_7,
  MR_String * Dir_8)
{
  switch (SubdirSetting_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Dir_8 = PrefixDir_7;
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word Components_9;
        MR_Word Var_10;
        MR_Word Var_12;

        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (ExtSubDir_6));
          MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_10, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_12));
        }
        {
          Components_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components_9, 0) = ((MR_Box) (PrefixDir_7));
          MR_hl_field(1, Components_9, 1) = ((MR_Box) (Var_10));
        }
        *Dir_8 = mercury__dir__relative_path_name_from_components_1_f_0(Components_9);
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__make_all_proposed_dir_names_gs_4_p_0(
  MR_String Grade_5,
  MR_String ExtSubDir_6,
  MR_String PrefixDir_7,
  MR_Word * Dirs_8)
{
  MR_String GsDir_9;
  MR_String NgsDir_10;
  MR_String CurDir_11;
  MR_Word Var_15;
  MR_Word Var_16;

  parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0((MR_Integer) 2, Grade_5, ExtSubDir_6, PrefixDir_7, &GsDir_9);
  parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0((MR_Integer) 1, Grade_5, ExtSubDir_6, PrefixDir_7, &NgsDir_10);
  parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0((MR_Integer) 0, Grade_5, ExtSubDir_6, PrefixDir_7, &CurDir_11);
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (CurDir_11));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (NgsDir_10));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Dirs_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (GsDir_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0(
  MR_Word SubdirSetting_6,
  MR_String Grade_7,
  MR_String ExtSubDir_8,
  MR_String PrefixDir_9,
  MR_String * Dir_10)
{
  switch (SubdirSetting_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Dir_10 = PrefixDir_9;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_16;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Components_21;

        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (Grade_7));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (ExtSubDir_8));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
        }
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
        }
        {
          Components_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components_21, 0) = ((MR_Box) (PrefixDir_9));
          MR_hl_field(1, Components_21, 1) = ((MR_Box) (Var_16));
        }
        *Dir_10 = mercury__dir__relative_path_name_from_components_1_f_0(Components_21);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Components_11;
        MR_Word Var_12;
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (ExtSubDir_8));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_14));
        }
        {
          Components_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components_11, 0) = ((MR_Box) (PrefixDir_9));
          MR_hl_field(1, Components_11, 1) = ((MR_Box) (Var_12));
        }
        *Dir_10 = mercury__dir__relative_path_name_from_components_1_f_0(Components_11);
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__make_all_proposed_dir_names_gas_5_p_0(
  MR_String Grade_6,
  MR_String TargetArch_7,
  MR_String ExtSubDir_8,
  MR_String PrefixDir_9,
  MR_Word * Dirs_10)
{
  MR_String GsDir_11;
  MR_String NgsDir_12;
  MR_String CurDir_13;
  MR_Word Var_17;
  MR_Word Var_18;

  parse_tree__file_names__make_selected_proposed_dir_name_gas_6_p_0((MR_Integer) 2, Grade_6, TargetArch_7, ExtSubDir_8, PrefixDir_9, &GsDir_11);
  parse_tree__file_names__make_selected_proposed_dir_name_gas_6_p_0((MR_Integer) 1, Grade_6, TargetArch_7, ExtSubDir_8, PrefixDir_9, &NgsDir_12);
  parse_tree__file_names__make_selected_proposed_dir_name_gas_6_p_0((MR_Integer) 0, Grade_6, TargetArch_7, ExtSubDir_8, PrefixDir_9, &CurDir_13);
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (CurDir_13));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (NgsDir_12));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Dirs_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (GsDir_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
parse_tree__file_names__make_selected_proposed_dir_name_gas_6_p_0(
  MR_Word SubdirSetting_7,
  MR_String Grade_8,
  MR_String TargetArch_9,
  MR_String ExtSubDir_10,
  MR_String PrefixDir_11,
  MR_String * Dir_12)
{
  switch (SubdirSetting_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Dir_12 = PrefixDir_11;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_18;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Components_24;

        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (TargetArch_9));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (Grade_8));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
        }
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (ExtSubDir_10));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
        }
        {
          Components_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components_24, 0) = ((MR_Box) (PrefixDir_11));
          MR_hl_field(1, Components_24, 1) = ((MR_Box) (Var_18));
        }
        *Dir_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_24);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Components_13;
        MR_Word Var_14;
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (ExtSubDir_10));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_16));
        }
        {
          Components_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Components_13, 0) = ((MR_Box) (PrefixDir_11));
          MR_hl_field(1, Components_13, 1) = ((MR_Box) (Var_14));
        }
        *Dir_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_13);
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__analysis_cache_dir_name_3_p_0(
  MR_Word Globals_4,
  MR_String * DirNameLegacy_5,
  MR_String * DirNameProposed_6)
{
  MR_Word SubdirSetting_7;
  MR_Word DirComponentsLegacy_8;
  MR_Word DirComponentsProposed_9;

  libs__globals__get_subdir_setting_2_p_0(Globals_4, &SubdirSetting_7);
  switch (SubdirSetting_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        DirComponentsLegacy_8 = (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[9]));
        DirComponentsProposed_9 = (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[10]));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Grade_18;
        MR_String TargetArch_19;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_29;
        MR_Word Var_30;

        libs__globals__get_grade_dir_2_p_0(Globals_4, &Grade_18);
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 600, &TargetArch_19);
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (TargetArch_19));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[9])));
        }
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (Grade_18));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
        }
        {
          DirComponentsLegacy_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DirComponentsLegacy_8, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, DirComponentsLegacy_8, 1) = ((MR_Box) (Var_22));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Grade_18));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) ((MR_String) "analysis_cache"));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_30));
        }
        {
          DirComponentsProposed_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DirComponentsProposed_9, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, DirComponentsProposed_9, 1) = ((MR_Box) (Var_29));
        }
      }
      break;
  }
  *DirNameLegacy_5 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponentsLegacy_8);
  *DirNameProposed_6 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponentsProposed_9);
}

void MR_CALL 
parse_tree__file_names__ext_to_dir_path_5_p_0(
  MR_Word Globals_6,
  MR_Word Search_7,
  MR_Word Ext_8,
  MR_Word * DirNamesLegacy_9,
  MR_Word * DirNamesProposed_10)
{
  switch (MR_tag((MR_Word) Ext_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
        *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_12 = ((MR_Unsigned) ((MR_hl_field(1, Ext_8, 0))) & (MR_Integer) 15);
        MR_Word SubdirSetting_13;

        libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_13);
        switch (SubdirSetting_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
              *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_String SubDirName_15;
              MR_String _ExtStr_14;

              parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtCurNgs_12, &_ExtStr_14, &SubDirName_15);
              parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_15, DirNamesLegacy_9, DirNamesProposed_10);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_16 = ((MR_Unsigned) ((MR_hl_field(2, Ext_8, 0))) & (MR_Integer) 3);
        MR_Word SubdirSetting_42;

        libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_42);
        switch (SubdirSetting_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
              *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LegacySubDirName_17;
              MR_String ProposedSubDirName_18;
              MR_String Grade_147;
              MR_String TargetArch_148;
              MR_Word Var_151;
              MR_Word Var_152;
              MR_Word Var_153;
              MR_Word Var_155;
              MR_String Grade_161;
              MR_Word Var_172;
              MR_Word Var_173;
              MR_String _ExtStr_39;
              MR_String TargetArch_162;

              parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtCurGs_16, &_ExtStr_39, &LegacySubDirName_17, &ProposedSubDirName_18);
              libs__globals__get_grade_dir_2_p_0(Globals_6, &Grade_147);
              libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, &TargetArch_148);
              {
                Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_155, 0) = ((MR_Box) (LegacySubDirName_17));
                MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_153, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_155));
              }
              {
                Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_152, 0) = ((MR_Box) (TargetArch_148));
                MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_153));
              }
              {
                Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_151, 0) = ((MR_Box) (Grade_147));
                MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNamesLegacy_9 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_151));
              }
              libs__globals__get_grade_dir_2_p_0(Globals_6, &Grade_161);
              libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, &TargetArch_162);
              {
                Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_173, 0) = ((MR_Box) (Grade_161));
                MR_hl_field(1, Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_172, 0) = ((MR_Box) (ProposedSubDirName_18));
                MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_173));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNamesProposed_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_172));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurGas_21 = ((MR_Unsigned) ((MR_hl_field(3, Ext_8, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_49;

            libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_49);
            switch (SubdirSetting_49) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_46;
                  MR_String Grade_132;
                  MR_String TargetArch_133;
                  MR_Word Var_136;
                  MR_Word Var_137;
                  MR_Word Var_138;
                  MR_Word Var_140;
                  MR_Word Var_143;
                  MR_Word Var_144;
                  MR_Word Var_145;
                  MR_String _ExtStr_44;

                  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_6, ExtCurGas_21, &_ExtStr_44, &SubDirName_46);
                  libs__globals__get_grade_dir_2_p_0(Globals_6, &Grade_132);
                  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, &TargetArch_133);
                  {
                    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_140, 0) = ((MR_Box) (SubDirName_46));
                    MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_138, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_140));
                  }
                  {
                    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_137, 0) = ((MR_Box) (TargetArch_133));
                    MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_138));
                  }
                  {
                    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_136, 0) = ((MR_Box) (Grade_132));
                    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesLegacy_9 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_136));
                  }
                  {
                    Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_145, 0) = ((MR_Box) (TargetArch_133));
                    MR_hl_field(1, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_144, 0) = ((MR_Box) (Grade_132));
                    MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_145));
                  }
                  {
                    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_143, 0) = ((MR_Box) (SubDirName_46));
                    MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesProposed_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_143));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGs_22 = ((MR_Unsigned) ((MR_hl_field(3, Ext_8, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_60;

            libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_60);
            switch (SubdirSetting_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_57;
                  MR_String Grade_175;
                  MR_String TargetArch_176;
                  MR_Word Var_179;
                  MR_Word Var_180;
                  MR_Word Var_181;
                  MR_Word Var_183;
                  MR_Word Var_186;
                  MR_Word Var_187;
                  MR_String _ExtStr_55;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_22, &_ExtStr_55, &SubDirName_57);
                  libs__globals__get_grade_dir_2_p_0(Globals_6, &Grade_175);
                  libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, &TargetArch_176);
                  {
                    Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_183, 0) = ((MR_Box) (SubDirName_57));
                    MR_hl_field(1, Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_181, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, Var_181, 1) = ((MR_Box) (Var_183));
                  }
                  {
                    Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_180, 0) = ((MR_Box) (TargetArch_176));
                    MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_181));
                  }
                  {
                    Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_179, 0) = ((MR_Box) (Grade_175));
                    MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_180));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesLegacy_9 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_179));
                  }
                  {
                    Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_187, 0) = ((MR_Box) (Grade_175));
                    MR_hl_field(1, Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_186, 0) = ((MR_Box) (SubDirName_57));
                    MR_hl_field(1, Var_186, 1) = ((MR_Box) (Var_187));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesProposed_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_186));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_54;
                  MR_String _ExtStr_52;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_22, &_ExtStr_52, &SubDirName_54);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_54, DirNamesLegacy_9, DirNamesProposed_10);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExtCurNgsGas_23 = ((MR_Unsigned) ((MR_hl_field(3, Ext_8, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_71;

            libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_71);
            switch (SubdirSetting_71) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_68;
                  MR_String _ExtStr_66;

                  parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(Globals_6, ExtCurNgsGas_23, &_ExtStr_66, &SubDirName_68);
                  parse_tree__file_names__make_gas_dir_names_4_p_0(Globals_6, SubDirName_68, DirNamesLegacy_9, DirNamesProposed_10);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_65;
                  MR_String _ExtStr_63;

                  parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(Globals_6, ExtCurNgsGas_23, &_ExtStr_63, &SubDirName_65);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_65, DirNamesLegacy_9, DirNamesProposed_10);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ErrorFilesInSubdir_25;

            libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 143, &ErrorFilesInSubdir_25);
            switch (ErrorFilesInSubdir_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubdirSetting_82;

                  libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_82);
                  switch (SubdirSetting_82) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                        *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SubDirName_79;
                        MR_String Grade_189;
                        MR_String TargetArch_190;
                        MR_Word Var_193;
                        MR_Word Var_194;
                        MR_Word Var_195;
                        MR_Word Var_197;
                        MR_Word Var_200;
                        MR_Word Var_201;
                        MR_String _ExtStr_77;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_77, &SubDirName_79);
                        libs__globals__get_grade_dir_2_p_0(Globals_6, &Grade_189);
                        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, &TargetArch_190);
                        {
                          Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_197, 0) = ((MR_Box) (SubDirName_79));
                          MR_hl_field(1, Var_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_195, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_195, 1) = ((MR_Box) (Var_197));
                        }
                        {
                          Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_194, 0) = ((MR_Box) (TargetArch_190));
                          MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_195));
                        }
                        {
                          Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_193, 0) = ((MR_Box) (Grade_189));
                          MR_hl_field(1, Var_193, 1) = ((MR_Box) (Var_194));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_9 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_193));
                        }
                        {
                          Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_201, 0) = ((MR_Box) (Grade_189));
                          MR_hl_field(1, Var_201, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_200, 0) = ((MR_Box) (SubDirName_79));
                          MR_hl_field(1, Var_200, 1) = ((MR_Box) (Var_201));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_200));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SubDirName_76;
                        MR_String _ExtStr_74;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_74, &SubDirName_76);
                        parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_76, DirNamesLegacy_9, DirNamesProposed_10);
                      }
                      break;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ExtCurNgsGsJava_26 = ((MR_Unsigned) ((MR_hl_field(3, Ext_8, 1))) & (MR_Integer) 1);
            MR_Word DirNamesLegacy0_27;
            MR_Word DirNamesProposed0_28;

            parse_tree__file_names__get_java_dir_path_4_p_0(Globals_6, ExtCurNgsGsJava_26, &DirNamesLegacy0_27, &DirNamesProposed0_28);
            *DirNamesLegacy_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy0_27, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[7])));
            *DirNamesProposed_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed0_28, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[7])));
          }
          break;
        case (MR_Integer) 5:
          switch (Search_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word SubdirSetting_96;

                libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_96);
                switch (SubdirSetting_96) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                      *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      MR_String SubDirName_93;
                      MR_String _ExtStr_91;

                      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_112_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_91, &SubDirName_93);
                      parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_93, DirNamesLegacy_9, DirNamesProposed_10);
                    }
                    break;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 6:
          switch (Search_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word SubdirSetting_113;

                libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_113);
                switch (SubdirSetting_113) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                      *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_String SubDirName_110;
                      MR_String Grade_203;
                      MR_String TargetArch_204;
                      MR_Word Var_207;
                      MR_Word Var_208;
                      MR_Word Var_209;
                      MR_Word Var_211;
                      MR_Word Var_214;
                      MR_Word Var_215;
                      MR_String _ExtStr_108;

                      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_108, &SubDirName_110);
                      libs__globals__get_grade_dir_2_p_0(Globals_6, &Grade_203);
                      libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, &TargetArch_204);
                      {
                        Var_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_211, 0) = ((MR_Box) (SubDirName_110));
                        MR_hl_field(1, Var_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_209, 0) = ((MR_Box) ((MR_String) "Mercury"));
                        MR_hl_field(1, Var_209, 1) = ((MR_Box) (Var_211));
                      }
                      {
                        Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_208, 0) = ((MR_Box) (TargetArch_204));
                        MR_hl_field(1, Var_208, 1) = ((MR_Box) (Var_209));
                      }
                      {
                        Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_207, 0) = ((MR_Box) (Grade_203));
                        MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_208));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *DirNamesLegacy_9 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                        MR_hl_field(1, base, 1) = ((MR_Box) (Var_207));
                      }
                      {
                        Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_215, 0) = ((MR_Box) (Grade_203));
                        MR_hl_field(1, Var_215, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_214, 0) = ((MR_Box) (SubDirName_110));
                        MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_215));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *DirNamesProposed_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                        MR_hl_field(1, base, 1) = ((MR_Box) (Var_214));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String SubDirName_107;
                      MR_String _ExtStr_105;

                      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_105, &SubDirName_107);
                      parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_107, DirNamesLegacy_9, DirNamesProposed_10);
                    }
                    break;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtCurNgsGsMaxNgs_31 = ((MR_Unsigned) ((MR_hl_field(3, Ext_8, 1))) & (MR_Integer) 7);
            MR_Word SubdirSetting_130;

            libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_130);
            switch (SubdirSetting_130) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_9 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_10 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_127;
                  MR_String _ExtStr_125;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_31, &_ExtStr_125, &SubDirName_127);
                  switch (Search_7) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_127, DirNamesLegacy_9, DirNamesProposed_10);
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Grade_217;
                        MR_String TargetArch_218;
                        MR_Word Var_221;
                        MR_Word Var_222;
                        MR_Word Var_223;
                        MR_Word Var_225;
                        MR_Word Var_228;
                        MR_Word Var_229;

                        libs__globals__get_grade_dir_2_p_0(Globals_6, &Grade_217);
                        libs__globals__lookup_string_option_3_p_0(Globals_6, (MR_Integer) 600, &TargetArch_218);
                        {
                          Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_225, 0) = ((MR_Box) (SubDirName_127));
                          MR_hl_field(1, Var_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_223, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_223, 1) = ((MR_Box) (Var_225));
                        }
                        {
                          Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_222, 0) = ((MR_Box) (TargetArch_218));
                          MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_223));
                        }
                        {
                          Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_221, 0) = ((MR_Box) (Grade_217));
                          MR_hl_field(1, Var_221, 1) = ((MR_Box) (Var_222));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_9 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_221));
                        }
                        {
                          Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_229, 0) = ((MR_Box) (Grade_217));
                          MR_hl_field(1, Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_228, 0) = ((MR_Box) (SubDirName_127));
                          MR_hl_field(1, Var_228, 1) = ((MR_Box) (Var_229));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_228));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_124;
                  MR_String _ExtStr_122;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_31, &_ExtStr_122, &SubDirName_124);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_124, DirNamesLegacy_9, DirNamesProposed_10);
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__ext_to_dir_path_extstr_6_p_0(
  MR_Word Globals_7,
  MR_Word Search_8,
  MR_Word Ext_9,
  MR_Word * DirNamesLegacy_10,
  MR_Word * DirNamesProposed_11,
  MR_String * ExtStr_12)
{
  switch (MR_tag((MR_Word) Ext_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExtCur_174;

        *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
        *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
        ExtCur_174 = ((MR_Unsigned) ((MR_hl_field(0, Ext_9, 0))) & (MR_Integer) 15);
        *ExtStr_12 = ((&parse_tree__file_names_vector_common_5[48 + ExtCur_174]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_14 = ((MR_Unsigned) ((MR_hl_field(1, Ext_9, 0))) & (MR_Integer) 15);
        MR_Word SubdirSetting_15;
        MR_Word ExtCurNgs_175;
        MR_String _SubDirName_176;

        libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_15);
        switch (SubdirSetting_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
              *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_String SubDirName_17;
              MR_String _ExtStr_16;

              parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtCurNgs_14, &_ExtStr_16, &SubDirName_17);
              parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_17, DirNamesLegacy_10, DirNamesProposed_11);
            }
            break;
        }
        ExtCurNgs_175 = ((MR_Unsigned) ((MR_hl_field(1, Ext_9, 0))) & (MR_Integer) 15);
        parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtCurNgs_175, ExtStr_12, &_SubDirName_176);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_18 = ((MR_Unsigned) ((MR_hl_field(2, Ext_9, 0))) & (MR_Integer) 3);
        MR_Word SubdirSetting_42;
        MR_Word ExtCurGs_177;
        MR_String _LegacySubDirName_178;
        MR_String _ProposedSubDirName_179;

        libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_42);
        switch (SubdirSetting_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
              *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LegacySubDirName_19;
              MR_String ProposedSubDirName_20;
              MR_String Grade_90;
              MR_String TargetArch_91;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_98;
              MR_String Grade_104;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_String _ExtStr_41;
              MR_String TargetArch_105;

              parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtCurGs_18, &_ExtStr_41, &LegacySubDirName_19, &ProposedSubDirName_20);
              libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_90);
              libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 600, &TargetArch_91);
              {
                Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_98, 0) = ((MR_Box) (LegacySubDirName_19));
                MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_96, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_98));
              }
              {
                Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_95, 0) = ((MR_Box) (TargetArch_91));
                MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
              }
              {
                Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_94, 0) = ((MR_Box) (Grade_90));
                MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNamesLegacy_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_94));
              }
              libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_104);
              libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 600, &TargetArch_105);
              {
                Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_116, 0) = ((MR_Box) (Grade_104));
                MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_115, 0) = ((MR_Box) (ProposedSubDirName_20));
                MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNamesProposed_11 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_115));
              }
            }
            break;
        }
        ExtCurGs_177 = ((MR_Unsigned) ((MR_hl_field(2, Ext_9, 0))) & (MR_Integer) 3);
        parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtCurGs_177, ExtStr_12, &_LegacySubDirName_178, &_ProposedSubDirName_179);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurGas_23 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_45;
            MR_Word ExtCurGas_180;
            MR_String _SubDirName_187;

            libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_45);
            switch (SubdirSetting_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_44;
                  MR_String Grade_75;
                  MR_String TargetArch_76;
                  MR_Word Var_79;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_83;
                  MR_Word Var_86;
                  MR_Word Var_87;
                  MR_Word Var_88;
                  MR_String _ExtStr_43;

                  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_7, ExtCurGas_23, &_ExtStr_43, &SubDirName_44);
                  libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_75);
                  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 600, &TargetArch_76);
                  {
                    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_83, 0) = ((MR_Box) (SubDirName_44));
                    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_81, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_83));
                  }
                  {
                    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_80, 0) = ((MR_Box) (TargetArch_76));
                    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
                  }
                  {
                    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Grade_75));
                    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesLegacy_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_79));
                  }
                  {
                    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_88, 0) = ((MR_Box) (TargetArch_76));
                    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Grade_75));
                    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
                  }
                  {
                    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_86, 0) = ((MR_Box) (SubDirName_44));
                    MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesProposed_11 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_86));
                  }
                }
                break;
            }
            ExtCurGas_180 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 15);
            parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_7, ExtCurGas_180, ExtStr_12, &_SubDirName_187);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGs_24 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_50;
            MR_Word ExtCurNgsGs_181;
            MR_String _SubDirName_188;

            libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_50);
            switch (SubdirSetting_50) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_49;
                  MR_String Grade_118;
                  MR_String TargetArch_119;
                  MR_Word Var_122;
                  MR_Word Var_123;
                  MR_Word Var_124;
                  MR_Word Var_126;
                  MR_Word Var_129;
                  MR_Word Var_130;
                  MR_String _ExtStr_48;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_24, &_ExtStr_48, &SubDirName_49);
                  libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_118);
                  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 600, &TargetArch_119);
                  {
                    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_126, 0) = ((MR_Box) (SubDirName_49));
                    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_124, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_126));
                  }
                  {
                    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_123, 0) = ((MR_Box) (TargetArch_119));
                    MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_124));
                  }
                  {
                    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_122, 0) = ((MR_Box) (Grade_118));
                    MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_123));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesLegacy_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_122));
                  }
                  {
                    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_130, 0) = ((MR_Box) (Grade_118));
                    MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_129, 0) = ((MR_Box) (SubDirName_49));
                    MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_130));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesProposed_11 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_129));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_47;
                  MR_String _ExtStr_46;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_24, &_ExtStr_46, &SubDirName_47);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_47, DirNamesLegacy_10, DirNamesProposed_11);
                }
                break;
            }
            ExtCurNgsGs_181 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 15);
            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_181, ExtStr_12, &_SubDirName_188);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExtCurNgsGas_25 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_55;
            MR_Word ExtCurNgsGas_182;

            libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_55);
            switch (SubdirSetting_55) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_54;
                  MR_String _ExtStr_53;

                  parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(Globals_7, ExtCurNgsGas_25, &_ExtStr_53, &SubDirName_54);
                  parse_tree__file_names__make_gas_dir_names_4_p_0(Globals_7, SubDirName_54, DirNamesLegacy_10, DirNamesProposed_11);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_52;
                  MR_String _ExtStr_51;

                  parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(Globals_7, ExtCurNgsGas_25, &_ExtStr_51, &SubDirName_52);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_52, DirNamesLegacy_10, DirNamesProposed_11);
                }
                break;
            }
            ExtCurNgsGas_182 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 15);
            switch (ExtCurNgsGas_182) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 6:
                *ExtStr_12 = (MR_String) "_init.\044O";
                break;
              case (MR_Integer) 7:
                *ExtStr_12 = (MR_String) "_init.o";
                break;
              case (MR_Integer) 9:
                {
                  MR_String Str0_196;

                  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 494, &Str0_196);
                  *ExtStr_12 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_196);
                }
                break;
              case (MR_Integer) 8:
                *ExtStr_12 = (MR_String) "_init.pic_o";
                break;
              case (MR_Integer) 10:
                {
                  MR_String Str0_203;

                  libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 495, &Str0_203);
                  *ExtStr_12 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_203);
                }
                break;
              case (MR_Integer) 1:
                *ExtStr_12 = (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)";
                break;
              case (MR_Integer) 0:
                *ExtStr_12 = (MR_String) ".\044O";
                break;
              case (MR_Integer) 2:
                *ExtStr_12 = (MR_String) ".o";
                break;
              case (MR_Integer) 4:
                libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 494, ExtStr_12);
                break;
              case (MR_Integer) 3:
                *ExtStr_12 = (MR_String) ".pic_o";
                break;
              case (MR_Integer) 5:
                libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 495, ExtStr_12);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ErrorFilesInSubdir_27;

            libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 143, &ErrorFilesInSubdir_27);
            switch (ErrorFilesInSubdir_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubdirSetting_60;

                  libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_60);
                  switch (SubdirSetting_60) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                        *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SubDirName_59;
                        MR_String Grade_132;
                        MR_String TargetArch_133;
                        MR_Word Var_136;
                        MR_Word Var_137;
                        MR_Word Var_138;
                        MR_Word Var_140;
                        MR_Word Var_143;
                        MR_Word Var_144;
                        MR_String _ExtStr_58;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_58, &SubDirName_59);
                        libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_132);
                        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 600, &TargetArch_133);
                        {
                          Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_140, 0) = ((MR_Box) (SubDirName_59));
                          MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_138, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_140));
                        }
                        {
                          Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_137, 0) = ((MR_Box) (TargetArch_133));
                          MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_138));
                        }
                        {
                          Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_136, 0) = ((MR_Box) (Grade_132));
                          MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_136));
                        }
                        {
                          Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_144, 0) = ((MR_Box) (Grade_132));
                          MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_143, 0) = ((MR_Box) (SubDirName_59));
                          MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_11 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_143));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SubDirName_57;
                        MR_String _ExtStr_56;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_56, &SubDirName_57);
                        parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_57, DirNamesLegacy_10, DirNamesProposed_11);
                      }
                      break;
                  }
                }
                break;
            }
            *ExtStr_12 = (MR_String) ".err";
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ExtCurNgsGsJava_28 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 1);
            MR_Word DirNamesLegacy0_29;
            MR_Word DirNamesProposed0_30;
            MR_Word ExtCurNgsGsJava_184;

            parse_tree__file_names__get_java_dir_path_4_p_0(Globals_7, ExtCurNgsGsJava_28, &DirNamesLegacy0_29, &DirNamesProposed0_30);
            *DirNamesLegacy_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy0_29, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[7])));
            *DirNamesProposed_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed0_30, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[7])));
            ExtCurNgsGsJava_184 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 1);
            switch (ExtCurNgsGsJava_184) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *ExtStr_12 = (MR_String) ".class";
                break;
              case (MR_Integer) 0:
                *ExtStr_12 = (MR_String) ".java";
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            switch (Search_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word SubdirSetting_63;

                  libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_63);
                  switch (SubdirSetting_63) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                        *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      {
                        MR_String SubDirName_62;
                        MR_String _ExtStr_61;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_112_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_61, &SubDirName_62);
                        parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_62, DirNamesLegacy_10, DirNamesProposed_11);
                      }
                      break;
                  }
                }
                break;
            }
            *ExtStr_12 = (MR_String) ".mh";
          }
          break;
        case (MR_Integer) 6:
          {
            switch (Search_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word SubdirSetting_68;

                  libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_68);
                  switch (SubdirSetting_68) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                        *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SubDirName_67;
                        MR_String Grade_146;
                        MR_String TargetArch_147;
                        MR_Word Var_150;
                        MR_Word Var_151;
                        MR_Word Var_152;
                        MR_Word Var_154;
                        MR_Word Var_157;
                        MR_Word Var_158;
                        MR_String _ExtStr_66;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_66, &SubDirName_67);
                        libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_146);
                        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 600, &TargetArch_147);
                        {
                          Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_154, 0) = ((MR_Box) (SubDirName_67));
                          MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_152, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_154));
                        }
                        {
                          Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_151, 0) = ((MR_Box) (TargetArch_147));
                          MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
                        }
                        {
                          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_150, 0) = ((MR_Box) (Grade_146));
                          MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_151));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_150));
                        }
                        {
                          Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_158, 0) = ((MR_Box) (Grade_146));
                          MR_hl_field(1, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_157, 0) = ((MR_Box) (SubDirName_67));
                          MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_158));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_11 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_157));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SubDirName_65;
                        MR_String _ExtStr_64;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_64, &SubDirName_65);
                        parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_65, DirNamesLegacy_10, DirNamesProposed_11);
                      }
                      break;
                  }
                }
                break;
            }
            *ExtStr_12 = (MR_String) ".mih";
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtCurNgsGsMaxNgs_33 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 7);
            MR_Word SubdirSetting_73;
            MR_Word ExtCurNgsGsMaxNgs_186;
            MR_String _SubDirName_195;

            libs__globals__get_subdir_setting_2_p_0(Globals_7, &SubdirSetting_73);
            switch (SubdirSetting_73) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_10 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_11 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_72;
                  MR_String _ExtStr_71;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_33, &_ExtStr_71, &SubDirName_72);
                  switch (Search_8) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_72, DirNamesLegacy_10, DirNamesProposed_11);
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Grade_160;
                        MR_String TargetArch_161;
                        MR_Word Var_164;
                        MR_Word Var_165;
                        MR_Word Var_166;
                        MR_Word Var_168;
                        MR_Word Var_171;
                        MR_Word Var_172;

                        libs__globals__get_grade_dir_2_p_0(Globals_7, &Grade_160);
                        libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 600, &TargetArch_161);
                        {
                          Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_168, 0) = ((MR_Box) (SubDirName_72));
                          MR_hl_field(1, Var_168, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_166, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_168));
                        }
                        {
                          Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_165, 0) = ((MR_Box) (TargetArch_161));
                          MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_166));
                        }
                        {
                          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_164, 0) = ((MR_Box) (Grade_160));
                          MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_165));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_164));
                        }
                        {
                          Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_172, 0) = ((MR_Box) (Grade_160));
                          MR_hl_field(1, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_171, 0) = ((MR_Box) (SubDirName_72));
                          MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_172));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_11 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_171));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_70;
                  MR_String _ExtStr_69;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_33, &_ExtStr_69, &SubDirName_70);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_70, DirNamesLegacy_10, DirNamesProposed_11);
                }
                break;
            }
            ExtCurNgsGsMaxNgs_186 = ((MR_Unsigned) ((MR_hl_field(3, Ext_9, 1))) & (MR_Integer) 7);
            parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_186, ExtStr_12, &_SubDirName_195);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__fact_table_file_name_return_dirs_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_String FactTableFileName_12,
  MR_Word * DirNamesLegacy_13,
  MR_Word * DirNamesProposed_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_9, Ext_11, FactTableFileName_12, DirNamesLegacy_13, DirNamesProposed_14, FullFileNameLegacy_15, FullFileNameProposed_16);
}

void MR_CALL 
parse_tree__file_names__fact_table_file_name_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_Word Ext_9,
  MR_String FactTableFileName_10,
  MR_String * FullFileNameLegacy_11,
  MR_String * FullFileNameProposed_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_6_p_0(Globals_7, Ext_9, FactTableFileName_10, FullFileNameLegacy_11, FullFileNameProposed_12);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_9,
  MR_String FactTableFileName_10,
  MR_String * FullFileNameLegacy_11,
  MR_String * FullFileNameProposed_12)
{
  MR_Word _DirNamesLegacy_13;
  MR_Word _DirNamesProposed_14;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_7, Ext_9, FactTableFileName_10, &_DirNamesLegacy_13, &_DirNamesProposed_14, FullFileNameLegacy_11, FullFileNameProposed_12);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_String FactTableFileName_12,
  MR_Word * DirNamesLegacy_13,
  MR_Word * DirNamesProposed_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  MR_Word FakeModuleName_17;
  MR_String CurDirFileName_18;

  {
    FakeModuleName_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_17, 0) = ((MR_Box) (FactTableFileName_12));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 0, Ext_11, FakeModuleName_17, DirNamesLegacy_13, DirNamesProposed_14, &CurDirFileName_18);
  if ((*DirNamesLegacy_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_15 = CurDirFileName_18;
  else
  {
    MR_Word Components_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (CurDirFileName_18));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNamesLegacy_13, Var_24);
    *FullFileNameLegacy_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_23);
  }
  if ((*DirNamesProposed_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_16 = CurDirFileName_18;
  else
  {
    MR_Word Components_29;
    MR_Word Var_30;

    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (CurDirFileName_18));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNamesProposed_14, Var_30);
    *FullFileNameProposed_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_29);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_target_timestamp_file_name_create_dirs_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_String * TimestampFileName_8)
{
  MR_Word CompilationTarget_10;
  MR_Word TimestampExt_11;
  MR_String _TimestampFileNameProposed_12;

  libs__globals__get_target_2_p_0(Globals_6, &CompilationTarget_10);
  switch (CompilationTarget_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TimestampExt_11 = (MR_Word) (MR_mkword(3, &parse_tree__file_names_scalar_common_2[4]));
      break;
    case (MR_Integer) 1:
      TimestampExt_11 = (MR_Word) (MR_mkword(3, &parse_tree__file_names_scalar_common_2[5]));
      break;
    case (MR_Integer) 2:
      TimestampExt_11 = (MR_Word) (MR_mkword(3, &parse_tree__file_names_scalar_common_2[6]));
      break;
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_6, TimestampExt_11, ModuleName_7, TimestampFileName_8, &_TimestampFileNameProposed_12);
}

void MR_CALL 
parse_tree__file_names__module_name_to_target_file_name_create_dirs_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_String * TargetFileName_8)
{
  MR_Word CompilationTarget_10;
  MR_Word TargetExt_11;
  MR_String _TargetFileNameProposed_12;

  libs__globals__get_target_2_p_0(Globals_6, &CompilationTarget_10);
  switch (CompilationTarget_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      TargetExt_11 = (MR_Word) (MR_mkword(3, &parse_tree__file_names_scalar_common_2[1]));
      break;
    case (MR_Integer) 1:
      TargetExt_11 = (MR_Word) (MR_mkword(3, &parse_tree__file_names_scalar_common_2[2]));
      break;
    case (MR_Integer) 2:
      TargetExt_11 = (MR_Word) (MR_mkword(3, &parse_tree__file_names_scalar_common_2[3]));
      break;
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_6, TargetExt_11, ModuleName_7, TargetFileName_8, &_TargetFileNameProposed_12);
}

void MR_CALL 
parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0(
  MR_Word ExtCur_4,
  MR_Word ModuleName_5,
  MR_String * CurDirFileName_6)
{
  MR_String BaseNameNoExt_7;
  MR_String ExtStr_8;

  BaseNameNoExt_7 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_5, (MR_String) ".");
  ExtStr_8 = ((&parse_tree__file_names_vector_common_5[32 + ExtCur_4]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
  *CurDirFileName_6 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_7, ExtStr_8);
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_full_curdir_create_dirs_10_p_0(
  MR_Word Globals_11,
  MR_String From_12,
  MR_String Prefix_13,
  MR_Word Ext_14,
  MR_Word ModuleName_15,
  MR_String * FullFileNameLegacy_16,
  MR_String * FullFileNameProposed_17,
  MR_String * CurDirFileName_18)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_10_p_0(Globals_11, Prefix_13, Ext_14, ModuleName_15, FullFileNameLegacy_16, FullFileNameProposed_17, CurDirFileName_18);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_String Prefix_13,
  MR_Word Ext_14,
  MR_Word ModuleName_15,
  MR_String * FullFileNameLegacy_16,
  MR_String * FullFileNameProposed_17,
  MR_String * CurDirFileName_18)
{
  MR_Word FakeModuleName_20;
  MR_Word DirNamesLegacy_21;
  MR_Word DirNamesProposed_22;
  MR_String BaseFileName_28;
  MR_String BaseNameNoExt_29;

  BaseFileName_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_15);
  BaseNameNoExt_29 = mercury__string__f_43_43_2_f_0(Prefix_13, BaseFileName_28);
  {
    FakeModuleName_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_20, 0) = ((MR_Box) (BaseNameNoExt_29));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_11, (MR_Integer) 0, Ext_14, FakeModuleName_20, &DirNamesLegacy_21, &DirNamesProposed_22, CurDirFileName_18);
  if ((DirNamesLegacy_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_16 = *CurDirFileName_18;
  else
  {
    MR_Word Components_32;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (*CurDirFileName_18));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_21, Var_33);
    *FullFileNameLegacy_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_32);
  }
  if ((DirNamesProposed_22 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_17 = *CurDirFileName_18;
  else
  {
    MR_Word Components_38;
    MR_Word Var_39;

    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (*CurDirFileName_18));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_22, Var_39);
    *FullFileNameProposed_17 = mercury__dir__relative_path_name_from_components_1_f_0(Components_38);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNamesLegacy_21);
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_create_dirs_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(Globals_10, Prefix_12, Ext_13, ModuleName_14, FullFileNameLegacy_15, FullFileNameProposed_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  MR_Word FakeModuleName_18;
  MR_Word DirNamesLegacy_19;
  MR_Word DirNamesProposed_20;
  MR_String CurDirFileName_21;
  MR_String BaseFileName_27;
  MR_String BaseNameNoExt_28;

  BaseFileName_27 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
  BaseNameNoExt_28 = mercury__string__f_43_43_2_f_0(Prefix_12, BaseFileName_27);
  {
    FakeModuleName_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_18, 0) = ((MR_Box) (BaseNameNoExt_28));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_10, (MR_Integer) 0, Ext_13, FakeModuleName_18, &DirNamesLegacy_19, &DirNamesProposed_20, &CurDirFileName_21);
  if ((DirNamesLegacy_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_15 = CurDirFileName_21;
  else
  {
    MR_Word Components_31;
    MR_Word Var_32;

    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (CurDirFileName_21));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_19, Var_32);
    *FullFileNameLegacy_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_31);
  }
  if ((DirNamesProposed_20 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_16 = CurDirFileName_21;
  else
  {
    MR_Word Components_37;
    MR_Word Var_38;

    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (CurDirFileName_21));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_20, Var_38);
    *FullFileNameProposed_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_37);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNamesLegacy_19);
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_full_curdir_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_String Prefix_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FullFileNameLegacy_14,
  MR_String * FullFileNameProposed_15,
  MR_String * CurDirFileName_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_8_p_0(Globals_9, Prefix_11, Ext_12, ModuleName_13, FullFileNameLegacy_14, FullFileNameProposed_15, CurDirFileName_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_String Prefix_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FullFileNameLegacy_14,
  MR_String * FullFileNameProposed_15,
  MR_String * CurDirFileName_16)
{
  MR_Word FakeModuleName_17;
  MR_Word DirNamesLegacy_18;
  MR_Word DirNamesProposed_19;
  MR_String BaseFileName_23;
  MR_String BaseNameNoExt_24;

  BaseFileName_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
  BaseNameNoExt_24 = mercury__string__f_43_43_2_f_0(Prefix_11, BaseFileName_23);
  {
    FakeModuleName_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_17, 0) = ((MR_Box) (BaseNameNoExt_24));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 0, Ext_12, FakeModuleName_17, &DirNamesLegacy_18, &DirNamesProposed_19, CurDirFileName_16);
  if ((DirNamesLegacy_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_14 = *CurDirFileName_16;
  else
  {
    MR_Word Components_27;
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (*CurDirFileName_16));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_18, Var_28);
    *FullFileNameLegacy_14 = mercury__dir__relative_path_name_from_components_1_f_0(Components_27);
  }
  if ((DirNamesProposed_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_15 = *CurDirFileName_16;
  else
  {
    MR_Word Components_33;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (*CurDirFileName_16));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_19, Var_34);
    *FullFileNameProposed_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_33);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_String Prefix_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileNameLegacy_13,
  MR_String * FullFileNameProposed_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0(Globals_8, Prefix_10, Ext_11, ModuleName_12, FullFileNameLegacy_13, FullFileNameProposed_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_String Prefix_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileNameLegacy_13,
  MR_String * FullFileNameProposed_14)
{
  MR_Word FakeModuleName_15;
  MR_Word DirNamesLegacy_16;
  MR_Word DirNamesProposed_17;
  MR_String CurDirFileName_18;
  MR_String BaseFileName_22;
  MR_String BaseNameNoExt_23;

  BaseFileName_22 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_12);
  BaseNameNoExt_23 = mercury__string__f_43_43_2_f_0(Prefix_10, BaseFileName_22);
  {
    FakeModuleName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_15, 0) = ((MR_Box) (BaseNameNoExt_23));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_8, (MR_Integer) 0, Ext_11, FakeModuleName_15, &DirNamesLegacy_16, &DirNamesProposed_17, &CurDirFileName_18);
  if ((DirNamesLegacy_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_13 = CurDirFileName_18;
  else
  {
    MR_Word Components_26;
    MR_Word Var_27;

    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (CurDirFileName_18));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_16, Var_27);
    *FullFileNameLegacy_13 = mercury__dir__relative_path_name_from_components_1_f_0(Components_26);
  }
  if ((DirNamesProposed_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_14 = CurDirFileName_18;
  else
  {
    MR_Word Components_32;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (CurDirFileName_18));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_17, Var_33);
    *FullFileNameProposed_14 = mercury__dir__relative_path_name_from_components_1_f_0(Components_32);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_return_dirs_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_Word * DirNamesLegacy_15,
  MR_Word * DirNamesProposed_16,
  MR_String * FullFileNameLegacy_17,
  MR_String * FullFileNameProposed_18)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(Globals_10, Prefix_12, Ext_13, ModuleName_14, DirNamesLegacy_15, DirNamesProposed_16, FullFileNameLegacy_17, FullFileNameProposed_18);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_Word * DirNamesLegacy_15,
  MR_Word * DirNamesProposed_16,
  MR_String * FullFileNameLegacy_17,
  MR_String * FullFileNameProposed_18)
{
  MR_Word FakeModuleName_19;
  MR_String CurDirFileName_20;
  MR_String BaseFileName_23;
  MR_String BaseNameNoExt_24;

  BaseFileName_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
  BaseNameNoExt_24 = mercury__string__f_43_43_2_f_0(Prefix_12, BaseFileName_23);
  {
    FakeModuleName_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_19, 0) = ((MR_Box) (BaseNameNoExt_24));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_10, (MR_Integer) 0, Ext_13, FakeModuleName_19, DirNamesLegacy_15, DirNamesProposed_16, &CurDirFileName_20);
  if ((*DirNamesLegacy_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_17 = CurDirFileName_20;
  else
  {
    MR_Word Components_27;
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (CurDirFileName_20));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNamesLegacy_15, Var_28);
    *FullFileNameLegacy_17 = mercury__dir__relative_path_name_from_components_1_f_0(Components_27);
  }
  if ((*DirNamesProposed_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_18 = CurDirFileName_20;
  else
  {
    MR_Word Components_33;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (CurDirFileName_20));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNamesProposed_16, Var_34);
    *FullFileNameProposed_18 = mercury__dir__relative_path_name_from_components_1_f_0(Components_33);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_8_p_3(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word SearchWhichDirs_13,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_44_32_53_93_95_51_8_p_3(Globals_9, Ext_11, ModuleName_12, SearchAuthDirs_14, FullFileNameLegacy_15, FullFileNameProposed_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_44_32_53_93_95_51_8_p_3(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  MR_Word DirNamesLegacy_17;
  MR_Word DirNamesProposed_18;
  MR_String CurDirFileName_19;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 1, Ext_11, ModuleName_12, &DirNamesLegacy_17, &DirNamesProposed_18, &CurDirFileName_19);
  if ((DirNamesLegacy_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_15 = CurDirFileName_19;
  else
  {
    MR_Word Components_59;
    MR_Word Var_60;

    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_17, Var_60);
    *FullFileNameLegacy_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_59);
  }
  if ((DirNamesProposed_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_16 = CurDirFileName_19;
  else
  {
    MR_Word Components_65;
    MR_Word Var_66;

    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_18, Var_66);
    *FullFileNameProposed_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_65);
  }
  switch (MR_tag((MR_Word) Ext_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_38;
        MR_Word ExtCurNgs_51 = ((MR_Unsigned) ((MR_hl_field(1, Ext_11, 0))) & (MR_Integer) 15);
        MR_Word InterfaceExt_52 = ((&parse_tree__file_names_vector_common_6[11 + ExtCurNgs_51]))->parse_tree__file_names__vector_common_type_6_0__vct_6_f_0;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = (MR_Box) ((MR_Unsigned) (InterfaceExt_52));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (Globals_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SearchAuthDirs_14 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_38));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 4:
          *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_43;
            MR_Word CInclDirs_56;

            {
              CInclDirs_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CInclDirs_56, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(2, CInclDirs_56, 1) = ((MR_Box) (Globals_9));
            }
            {
              Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_43, 1) = ((MR_Box) (CInclDirs_56));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *SearchAuthDirs_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CInclDirs_30;
            MR_Word Var_41;

            {
              CInclDirs_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CInclDirs_30, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(2, CInclDirs_30, 1) = ((MR_Box) (Globals_9));
            }
            {
              Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_41, 1) = ((MR_Box) (CInclDirs_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *SearchAuthDirs_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_41));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtCurNgsGsMaxNgs_28 = ((MR_Unsigned) ((MR_hl_field(3, Ext_11, 1))) & (MR_Integer) 7);
            MR_Word PrivateDirs_29;
            MR_Word Var_39;
            MR_Word IntermodExt_54;

            switch (ExtCurNgsGsMaxNgs_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                IntermodExt_54 = (MR_Integer) 4;
                break;
              case (MR_Integer) 0:
                IntermodExt_54 = (MR_Integer) 0;
                break;
            }
            {
              PrivateDirs_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PrivateDirs_29, 0) = (MR_Box) ((MR_Unsigned) (IntermodExt_54));
              MR_hl_field(1, PrivateDirs_29, 1) = ((MR_Box) (Globals_9));
            }
            {
              Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_39, 1) = ((MR_Box) (PrivateDirs_29));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *SearchAuthDirs_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_8_p_2(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word SearchWhichDirs_13,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_44_32_53_93_95_50_8_p_2(Globals_9, Ext_11, ModuleName_12, SearchAuthDirs_14, FullFileNameLegacy_15, FullFileNameProposed_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_44_32_53_93_95_50_8_p_2(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  MR_Word DirNamesLegacy_17;
  MR_Word DirNamesProposed_18;
  MR_String CurDirFileName_19;
  MR_Word IntermodExt_24;
  MR_Word Var_37;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 1, Ext_11, ModuleName_12, &DirNamesLegacy_17, &DirNamesProposed_18, &CurDirFileName_19);
  if ((DirNamesLegacy_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_15 = CurDirFileName_19;
  else
  {
    MR_Word Components_59;
    MR_Word Var_60;

    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_17, Var_60);
    *FullFileNameLegacy_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_59);
  }
  if ((DirNamesProposed_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_16 = CurDirFileName_19;
  else
  {
    MR_Word Components_65;
    MR_Word Var_66;

    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_18, Var_66);
    *FullFileNameProposed_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_65);
  }
  if (((((MR_tag((MR_Word) Ext_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Ext_11, 0)))) == (MR_Integer) 1))))
  {
    MR_Word ExtCurNgsGs_46 = ((MR_Unsigned) ((MR_hl_field(3, Ext_11, 1))) & (MR_Integer) 15);

    switch (ExtCurNgsGs_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 10:
        IntermodExt_24 = (MR_Integer) 2;
        break;
      case (MR_Integer) 11:
        IntermodExt_24 = (MR_Integer) 3;
        break;
    }
  }
  else
  {
    MR_Word ExtCurNgsGsMaxCur_45 = ((MR_Unsigned) ((MR_hl_field(3, Ext_11, 1))) & (MR_Integer) 7);

    switch (ExtCurNgsGsMaxCur_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        IntermodExt_24 = (MR_Integer) 4;
        break;
      case (MR_Integer) 3:
        IntermodExt_24 = (MR_Integer) 5;
        break;
      case (MR_Integer) 4:
        IntermodExt_24 = (MR_Integer) 6;
        break;
    }
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = (MR_Box) ((MR_Unsigned) (IntermodExt_24));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Globals_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *SearchAuthDirs_14 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_37));
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_8_p_1(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word SearchWhichDirs_13,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_49_8_p_1(Globals_9, Ext_11, ModuleName_12, SearchWhichDirs_13, SearchAuthDirs_14, FullFileNameLegacy_15, FullFileNameProposed_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_49_8_p_1(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word SearchWhichDirs_13,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  MR_Word DirNamesLegacy_17;
  MR_Word DirNamesProposed_18;
  MR_String CurDirFileName_19;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 1, Ext_11, ModuleName_12, &DirNamesLegacy_17, &DirNamesProposed_18, &CurDirFileName_19);
  if ((DirNamesLegacy_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_15 = CurDirFileName_19;
  else
  {
    MR_Word Components_65;
    MR_Word Var_66;

    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_17, Var_66);
    *FullFileNameLegacy_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_65);
  }
  if ((DirNamesProposed_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_16 = CurDirFileName_19;
  else
  {
    MR_Word Components_71;
    MR_Word Var_72;

    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_18, Var_72);
    *FullFileNameProposed_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_71);
  }
  if (((((MR_tag((MR_Word) Ext_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Ext_11, 0)))) == (MR_Integer) 1))))
  {
    MR_Word Var_61 = ((MR_Unsigned) ((MR_hl_field(3, Ext_11, 1))) & (MR_Integer) 15);

    if ((SearchWhichDirs_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IntermodExt_24;
      MR_Word Var_37;

      switch (Var_61) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IntermodExt_24 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          IntermodExt_24 = (MR_Integer) 1;
          break;
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = (MR_Box) ((MR_Unsigned) (IntermodExt_24));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) (Globals_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SearchAuthDirs_14 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Var_37));
      }
    }
  }
  else
  {
    MR_Word Var_62 = ((MR_Unsigned) ((MR_hl_field(3, Ext_11, 1))) & (MR_Integer) 7);

    if ((SearchWhichDirs_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IntermodExt_57;
      MR_Word Var_58;

      switch (Var_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IntermodExt_57 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          IntermodExt_57 = (MR_Integer) 1;
          break;
      }
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = (MR_Box) ((MR_Unsigned) (IntermodExt_57));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) (Globals_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SearchAuthDirs_14 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Var_58));
      }
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word SearchWhichDirs_13,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, Ext_11, ModuleName_12, SearchWhichDirs_13, SearchAuthDirs_14, FullFileNameLegacy_15, FullFileNameProposed_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word SearchWhichDirs_13,
  MR_Word * SearchAuthDirs_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  MR_Word DirNamesLegacy_17;
  MR_Word DirNamesProposed_18;
  MR_String CurDirFileName_19;
  MR_Word Var_57;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 1, Ext_11, ModuleName_12, &DirNamesLegacy_17, &DirNamesProposed_18, &CurDirFileName_19);
  if ((DirNamesLegacy_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_15 = CurDirFileName_19;
  else
  {
    MR_Word Components_60;
    MR_Word Var_61;

    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_17, Var_61);
    *FullFileNameLegacy_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_60);
  }
  if ((DirNamesProposed_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_16 = CurDirFileName_19;
  else
  {
    MR_Word Components_66;
    MR_Word Var_67;

    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (CurDirFileName_19));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_18, Var_67);
    *FullFileNameProposed_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_66);
  }
  Var_57 = ((MR_Unsigned) ((MR_hl_field(1, Ext_11, 0))) & (MR_Integer) 15);
  if ((SearchWhichDirs_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *SearchAuthDirs_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word InterfaceExt_23 = ((&parse_tree__file_names_vector_common_6[0 + Var_57]))->parse_tree__file_names__vector_common_type_6_0__vct_6_f_0;
    MR_Word Var_36;

    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_36, 0) = (MR_Box) ((MR_Unsigned) (InterfaceExt_23));
      MR_hl_field(0, Var_36, 1) = ((MR_Box) (Globals_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SearchAuthDirs_14 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FullFileNameLegacy_14,
  MR_String * FullFileNameProposed_15,
  MR_String * CurDirFileName_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(Globals_10, Ext_12, ModuleName_13, FullFileNameLegacy_14, FullFileNameProposed_15, CurDirFileName_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FullFileNameLegacy_14,
  MR_String * FullFileNameProposed_15,
  MR_String * CurDirFileName_16)
{
  MR_Word DirNamesLegacy_18;
  MR_Word DirNamesProposed_19;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_10, (MR_Integer) 0, Ext_12, ModuleName_13, &DirNamesLegacy_18, &DirNamesProposed_19, CurDirFileName_16);
  if ((DirNamesLegacy_18 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_14 = *CurDirFileName_16;
  else
  {
    MR_Word Components_27;
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (*CurDirFileName_16));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_18, Var_28);
    *FullFileNameLegacy_14 = mercury__dir__relative_path_name_from_components_1_f_0(Components_27);
  }
  if ((DirNamesProposed_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_15 = *CurDirFileName_16;
  else
  {
    MR_Word Components_33;
    MR_Word Var_34;

    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (*CurDirFileName_16));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_19, Var_34);
    *FullFileNameProposed_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_33);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNamesLegacy_18);
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileNameLegacy_13,
  MR_String * FullFileNameProposed_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_9, Ext_11, ModuleName_12, FullFileNameLegacy_13, FullFileNameProposed_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileNameLegacy_13,
  MR_String * FullFileNameProposed_14)
{
  MR_Word DirNamesLegacy_16;
  MR_Word DirNamesProposed_17;
  MR_String CurDirFileName_18;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 0, Ext_11, ModuleName_12, &DirNamesLegacy_16, &DirNamesProposed_17, &CurDirFileName_18);
  if ((DirNamesLegacy_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_13 = CurDirFileName_18;
  else
  {
    MR_Word Components_26;
    MR_Word Var_27;

    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (CurDirFileName_18));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_16, Var_27);
    *FullFileNameLegacy_13 = mercury__dir__relative_path_name_from_components_1_f_0(Components_26);
  }
  if ((DirNamesProposed_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_14 = CurDirFileName_18;
  else
  {
    MR_Word Components_32;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (CurDirFileName_18));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_17, Var_33);
    *FullFileNameProposed_14 = mercury__dir__relative_path_name_from_components_1_f_0(Components_32);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNamesLegacy_16);
}

void MR_CALL 
parse_tree__file_names__create_any_dirs_on_path_3_p_0(
  MR_Word DirComponents_4)
{
  MR_bool succeeded;

  if (!((DirComponents_4 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String DirName_8;
    MR_Word MadeDirs0_9;

    DirName_8 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_4);
{
#define MR_PROC_LABEL parse_tree__file_names__create_any_dirs_on_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__create_any_dirs_on_path_3_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_made_dirs;


		;}
#undef MR_PROC_LABEL
	MadeDirs0_9  = X;
}
{
#define MR_PROC_LABEL parse_tree__file_names__create_any_dirs_on_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MadeDirs0_9, ((MR_Box) (DirName_8)));
    if (!(succeeded))
    {
      MR_Word MadeDirs_12;
      MR_Word Var_11;

      mercury__dir__make_directory_4_p_0(DirName_8, &Var_11);
      mercury__set_tree234__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (DirName_8)), MadeDirs0_9, &MadeDirs_12);
{
#define MR_PROC_LABEL parse_tree__file_names__create_any_dirs_on_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__create_any_dirs_on_path_3_p_0

	MR_Word X;

	X = MadeDirs_12 ;
		{
parse_tree__file_names__mutable_variable_made_dirs = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__create_any_dirs_on_path_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_made_dirs_lock, "parse_tree__file_names__mutable_variable_made_dirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_full_curdir_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FullFileNameLegacy_12,
  MR_String * FullFileNameProposed_13,
  MR_String * CurDirFileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_7_p_0(Globals_8, Ext_10, ModuleName_11, FullFileNameLegacy_12, FullFileNameProposed_13, CurDirFileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FullFileNameLegacy_12,
  MR_String * FullFileNameProposed_13,
  MR_String * CurDirFileName_14)
{
  MR_Word DirNamesLegacy_15;
  MR_Word DirNamesProposed_16;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_8, (MR_Integer) 0, Ext_10, ModuleName_11, &DirNamesLegacy_15, &DirNamesProposed_16, CurDirFileName_14);
  if ((DirNamesLegacy_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_12 = *CurDirFileName_14;
  else
  {
    MR_Word Components_22;
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (*CurDirFileName_14));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_15, Var_23);
    *FullFileNameLegacy_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_22);
  }
  if ((DirNamesProposed_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_13 = *CurDirFileName_14;
  else
  {
    MR_Word Components_28;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (*CurDirFileName_14));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_16, Var_29);
    *FullFileNameProposed_13 = mercury__dir__relative_path_name_from_components_1_f_0(Components_28);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_curdir_5_p_0(
  MR_Word Globals_6,
  MR_String From_7,
  MR_Word Ext_8,
  MR_Word ModuleName_9,
  MR_String * CurDirFileName_10)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_117_114_100_105_114_95_95_91_50_93_95_48_5_p_0(Globals_6, Ext_8, ModuleName_9, CurDirFileName_10);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_117_114_100_105_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_Word Ext_8,
  MR_Word ModuleName_9,
  MR_String * CurDirFileName_10)
{
  MR_Word _DirNamesLegacy_11;
  MR_Word _DirNamesProposed_12;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_6, (MR_Integer) 0, Ext_8, ModuleName_9, &_DirNamesLegacy_11, &_DirNamesProposed_12, CurDirFileName_10);
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_Word Ext_9,
  MR_Word ModuleName_10,
  MR_String * FullFileNameLegacy_11,
  MR_String * FullFileNameProposed_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_6_p_0(Globals_7, Ext_9, ModuleName_10, FullFileNameLegacy_11, FullFileNameProposed_12);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_9,
  MR_Word ModuleName_10,
  MR_String * FullFileNameLegacy_11,
  MR_String * FullFileNameProposed_12)
{
  MR_Word DirNamesLegacy_13;
  MR_Word DirNamesProposed_14;
  MR_String CurDirFileName_15;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_7, (MR_Integer) 0, Ext_9, ModuleName_10, &DirNamesLegacy_13, &DirNamesProposed_14, &CurDirFileName_15);
  if ((DirNamesLegacy_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_11 = CurDirFileName_15;
  else
  {
    MR_Word Components_21;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (CurDirFileName_15));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy_13, Var_22);
    *FullFileNameLegacy_11 = mercury__dir__relative_path_name_from_components_1_f_0(Components_21);
  }
  if ((DirNamesProposed_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_12 = CurDirFileName_15;
  else
  {
    MR_Word Components_27;
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (CurDirFileName_15));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed_14, Var_28);
    *FullFileNameProposed_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_27);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * DirNamesLegacy_13,
  MR_Word * DirNamesProposed_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_9, Ext_11, ModuleName_12, DirNamesLegacy_13, DirNamesProposed_14, FullFileNameLegacy_15, FullFileNameProposed_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * DirNamesLegacy_13,
  MR_Word * DirNamesProposed_14,
  MR_String * FullFileNameLegacy_15,
  MR_String * FullFileNameProposed_16)
{
  MR_String CurDirFileName_17;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(Globals_9, (MR_Integer) 0, Ext_11, ModuleName_12, DirNamesLegacy_13, DirNamesProposed_14, &CurDirFileName_17);
  if ((*DirNamesLegacy_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameLegacy_15 = CurDirFileName_17;
  else
  {
    MR_Word Components_22;
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (CurDirFileName_17));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNamesLegacy_13, Var_23);
    *FullFileNameLegacy_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_22);
  }
  if ((*DirNamesProposed_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileNameProposed_16 = CurDirFileName_17;
  else
  {
    MR_Word Components_28;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (CurDirFileName_17));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNamesProposed_14, Var_29);
    *FullFileNameProposed_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_28);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_Word Search_12,
  MR_Word Ext_14,
  MR_Word ModuleName_15,
  MR_Word * DirNamesLegacy_16,
  MR_Word * DirNamesProposed_17,
  MR_String * CurDirFileName_18)
{
  MR_String BaseNameNoExt_19;
  MR_String ExtStr_20;

  switch (MR_tag((MR_Word) Ext_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExtCur_200;

        *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
        *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
        BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
        ExtCur_200 = ((MR_Unsigned) ((MR_hl_field(0, Ext_14, 0))) & (MR_Integer) 15);
        ExtStr_20 = ((&parse_tree__file_names_vector_common_5[16 + ExtCur_200]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_26 = ((MR_Unsigned) ((MR_hl_field(1, Ext_14, 0))) & (MR_Integer) 15);
        MR_Word SubdirSetting_27;
        MR_Word ExtCurNgs_201;
        MR_String _SubDirName_202;

        libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_27);
        switch (SubdirSetting_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
              *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_String SubDirName_29;
              MR_String _ExtStr_28;

              parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtCurNgs_26, &_ExtStr_28, &SubDirName_29);
              parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_29, DirNamesLegacy_16, DirNamesProposed_17);
            }
            break;
        }
        BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
        ExtCurNgs_201 = ((MR_Unsigned) ((MR_hl_field(1, Ext_14, 0))) & (MR_Integer) 15);
        parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtCurNgs_201, &ExtStr_20, &_SubDirName_202);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_30 = ((MR_Unsigned) ((MR_hl_field(2, Ext_14, 0))) & (MR_Integer) 3);
        MR_Word SubdirSetting_54;
        MR_Word ExtCurGs_203;
        MR_String _LegacySubDirName_204;
        MR_String _ProposedSubDirName_205;

        libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_54);
        switch (SubdirSetting_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
              *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String LegacySubDirName_31;
              MR_String ProposedSubDirName_32;
              MR_String Grade_102;
              MR_String TargetArch_103;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_110;
              MR_String Grade_116;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_String _ExtStr_53;
              MR_String TargetArch_117;

              parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtCurGs_30, &_ExtStr_53, &LegacySubDirName_31, &ProposedSubDirName_32);
              libs__globals__get_grade_dir_2_p_0(Globals_10, &Grade_102);
              libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &TargetArch_103);
              {
                Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_110, 0) = ((MR_Box) (LegacySubDirName_31));
                MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_108, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
              }
              {
                Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_107, 0) = ((MR_Box) (TargetArch_103));
                MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_106, 0) = ((MR_Box) (Grade_102));
                MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNamesLegacy_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_106));
              }
              libs__globals__get_grade_dir_2_p_0(Globals_10, &Grade_116);
              libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &TargetArch_117);
              {
                Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_128, 0) = ((MR_Box) (Grade_116));
                MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_127, 0) = ((MR_Box) (ProposedSubDirName_32));
                MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_128));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNamesProposed_17 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_127));
              }
            }
            break;
        }
        BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
        ExtCurGs_203 = ((MR_Unsigned) ((MR_hl_field(2, Ext_14, 0))) & (MR_Integer) 3);
        parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtCurGs_203, &ExtStr_20, &_LegacySubDirName_204, &_ProposedSubDirName_205);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurGas_35 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_57;
            MR_Word ExtCurGas_206;
            MR_String _SubDirName_213;

            libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_57);
            switch (SubdirSetting_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_56;
                  MR_String Grade_87;
                  MR_String TargetArch_88;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Word Var_95;
                  MR_Word Var_98;
                  MR_Word Var_99;
                  MR_Word Var_100;
                  MR_String _ExtStr_55;

                  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_10, ExtCurGas_35, &_ExtStr_55, &SubDirName_56);
                  libs__globals__get_grade_dir_2_p_0(Globals_10, &Grade_87);
                  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &TargetArch_88);
                  {
                    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_95, 0) = ((MR_Box) (SubDirName_56));
                    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_93, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_95));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_92, 0) = ((MR_Box) (TargetArch_88));
                    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
                  }
                  {
                    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Grade_87));
                    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_92));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesLegacy_16 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_91));
                  }
                  {
                    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_100, 0) = ((MR_Box) (TargetArch_88));
                    MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Grade_87));
                    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
                  }
                  {
                    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_98, 0) = ((MR_Box) (SubDirName_56));
                    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesProposed_17 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_98));
                  }
                }
                break;
            }
            BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
            ExtCurGas_206 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 15);
            parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_10, ExtCurGas_206, &ExtStr_20, &_SubDirName_213);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGs_36 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_62;
            MR_Word ExtCurNgsGs_207;
            MR_String _SubDirName_214;

            libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_62);
            switch (SubdirSetting_62) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_61;
                  MR_String Grade_130;
                  MR_String TargetArch_131;
                  MR_Word Var_134;
                  MR_Word Var_135;
                  MR_Word Var_136;
                  MR_Word Var_138;
                  MR_Word Var_141;
                  MR_Word Var_142;
                  MR_String _ExtStr_60;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_36, &_ExtStr_60, &SubDirName_61);
                  libs__globals__get_grade_dir_2_p_0(Globals_10, &Grade_130);
                  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &TargetArch_131);
                  {
                    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_138, 0) = ((MR_Box) (SubDirName_61));
                    MR_hl_field(1, Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_136, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_138));
                  }
                  {
                    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_135, 0) = ((MR_Box) (TargetArch_131));
                    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_136));
                  }
                  {
                    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_134, 0) = ((MR_Box) (Grade_130));
                    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesLegacy_16 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_134));
                  }
                  {
                    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_142, 0) = ((MR_Box) (Grade_130));
                    MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_141, 0) = ((MR_Box) (SubDirName_61));
                    MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNamesProposed_17 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_141));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_59;
                  MR_String _ExtStr_58;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_36, &_ExtStr_58, &SubDirName_59);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_59, DirNamesLegacy_16, DirNamesProposed_17);
                }
                break;
            }
            BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
            ExtCurNgsGs_207 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 15);
            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_207, &ExtStr_20, &_SubDirName_214);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExtCurNgsGas_37 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 15);
            MR_Word SubdirSetting_67;
            MR_Word ExtCurNgsGas_208;

            libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_67);
            switch (SubdirSetting_67) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_66;
                  MR_String _ExtStr_65;

                  parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(Globals_10, ExtCurNgsGas_37, &_ExtStr_65, &SubDirName_66);
                  parse_tree__file_names__make_gas_dir_names_4_p_0(Globals_10, SubDirName_66, DirNamesLegacy_16, DirNamesProposed_17);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_64;
                  MR_String _ExtStr_63;

                  parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(Globals_10, ExtCurNgsGas_37, &_ExtStr_63, &SubDirName_64);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_64, DirNamesLegacy_16, DirNamesProposed_17);
                }
                break;
            }
            BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
            ExtCurNgsGas_208 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 15);
            switch (ExtCurNgsGas_208) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 6:
                ExtStr_20 = (MR_String) "_init.\044O";
                break;
              case (MR_Integer) 7:
                ExtStr_20 = (MR_String) "_init.o";
                break;
              case (MR_Integer) 9:
                {
                  MR_String Str0_222;

                  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 494, &Str0_222);
                  ExtStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_222);
                }
                break;
              case (MR_Integer) 8:
                ExtStr_20 = (MR_String) "_init.pic_o";
                break;
              case (MR_Integer) 10:
                {
                  MR_String Str0_229;

                  libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 495, &Str0_229);
                  ExtStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_229);
                }
                break;
              case (MR_Integer) 1:
                ExtStr_20 = (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)";
                break;
              case (MR_Integer) 0:
                ExtStr_20 = (MR_String) ".\044O";
                break;
              case (MR_Integer) 2:
                ExtStr_20 = (MR_String) ".o";
                break;
              case (MR_Integer) 4:
                libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 494, &ExtStr_20);
                break;
              case (MR_Integer) 3:
                ExtStr_20 = (MR_String) ".pic_o";
                break;
              case (MR_Integer) 5:
                libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 495, &ExtStr_20);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ErrorFilesInSubdir_39;

            libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 143, &ErrorFilesInSubdir_39);
            switch (ErrorFilesInSubdir_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubdirSetting_72;

                  libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_72);
                  switch (SubdirSetting_72) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                        *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SubDirName_71;
                        MR_String Grade_144;
                        MR_String TargetArch_145;
                        MR_Word Var_148;
                        MR_Word Var_149;
                        MR_Word Var_150;
                        MR_Word Var_152;
                        MR_Word Var_155;
                        MR_Word Var_156;
                        MR_String _ExtStr_70;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_70, &SubDirName_71);
                        libs__globals__get_grade_dir_2_p_0(Globals_10, &Grade_144);
                        libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &TargetArch_145);
                        {
                          Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_152, 0) = ((MR_Box) (SubDirName_71));
                          MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_150, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_152));
                        }
                        {
                          Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_149, 0) = ((MR_Box) (TargetArch_145));
                          MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_150));
                        }
                        {
                          Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_148, 0) = ((MR_Box) (Grade_144));
                          MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_149));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_16 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_148));
                        }
                        {
                          Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_156, 0) = ((MR_Box) (Grade_144));
                          MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_155, 0) = ((MR_Box) (SubDirName_71));
                          MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_156));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_17 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_155));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SubDirName_69;
                        MR_String _ExtStr_68;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_68, &SubDirName_69);
                        parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_69, DirNamesLegacy_16, DirNamesProposed_17);
                      }
                      break;
                  }
                }
                break;
            }
            BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
            ExtStr_20 = (MR_String) ".err";
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ExtCurNgsGsJava_40 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 1);
            MR_Word DirNamesLegacy0_41;
            MR_Word DirNamesProposed0_42;
            MR_Word ExtCurNgsGsJava_210;

            parse_tree__file_names__get_java_dir_path_4_p_0(Globals_10, ExtCurNgsGsJava_40, &DirNamesLegacy0_41, &DirNamesProposed0_42);
            *DirNamesLegacy_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesLegacy0_41, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[7])));
            *DirNamesProposed_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNamesProposed0_42, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[7])));
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_15, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_19);
            ExtCurNgsGsJava_210 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 1);
            switch (ExtCurNgsGsJava_210) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ExtStr_20 = (MR_String) ".class";
                break;
              case (MR_Integer) 0:
                ExtStr_20 = (MR_String) ".java";
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            switch (Search_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word SubdirSetting_75;

                  libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_75);
                  switch (SubdirSetting_75) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                        *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      {
                        MR_String SubDirName_74;
                        MR_String _ExtStr_73;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_112_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_73, &SubDirName_74);
                        parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_74, DirNamesLegacy_16, DirNamesProposed_17);
                      }
                      break;
                  }
                }
                break;
            }
            BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
            ExtStr_20 = (MR_String) ".mh";
          }
          break;
        case (MR_Integer) 6:
          {
            switch (Search_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word SubdirSetting_80;

                  libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_80);
                  switch (SubdirSetting_80) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                        *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SubDirName_79;
                        MR_String Grade_158;
                        MR_String TargetArch_159;
                        MR_Word Var_162;
                        MR_Word Var_163;
                        MR_Word Var_164;
                        MR_Word Var_166;
                        MR_Word Var_169;
                        MR_Word Var_170;
                        MR_String _ExtStr_78;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_78, &SubDirName_79);
                        libs__globals__get_grade_dir_2_p_0(Globals_10, &Grade_158);
                        libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &TargetArch_159);
                        {
                          Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_166, 0) = ((MR_Box) (SubDirName_79));
                          MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_164, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_166));
                        }
                        {
                          Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_163, 0) = ((MR_Box) (TargetArch_159));
                          MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_164));
                        }
                        {
                          Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_162, 0) = ((MR_Box) (Grade_158));
                          MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_163));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_16 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_162));
                        }
                        {
                          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_170, 0) = ((MR_Box) (Grade_158));
                          MR_hl_field(1, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_169, 0) = ((MR_Box) (SubDirName_79));
                          MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_170));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_17 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_169));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SubDirName_77;
                        MR_String _ExtStr_76;

                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(&_ExtStr_76, &SubDirName_77);
                        parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_77, DirNamesLegacy_16, DirNamesProposed_17);
                      }
                      break;
                  }
                }
                break;
            }
            BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
            ExtStr_20 = (MR_String) ".mih";
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtCurNgsGsMaxNgs_45 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 7);
            MR_Word SubdirSetting_85;
            MR_Word ExtCurNgsGsMaxNgs_212;
            MR_String _SubDirName_221;

            libs__globals__get_subdir_setting_2_p_0(Globals_10, &SubdirSetting_85);
            switch (SubdirSetting_85) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *DirNamesLegacy_16 = (MR_Word) ((MR_Unsigned) 0U);
                  *DirNamesProposed_17 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_84;
                  MR_String _ExtStr_83;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_45, &_ExtStr_83, &SubDirName_84);
                  switch (Search_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_84, DirNamesLegacy_16, DirNamesProposed_17);
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_String Grade_172;
                        MR_String TargetArch_173;
                        MR_Word Var_176;
                        MR_Word Var_177;
                        MR_Word Var_178;
                        MR_Word Var_180;
                        MR_Word Var_183;
                        MR_Word Var_184;

                        libs__globals__get_grade_dir_2_p_0(Globals_10, &Grade_172);
                        libs__globals__lookup_string_option_3_p_0(Globals_10, (MR_Integer) 600, &TargetArch_173);
                        {
                          Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_180, 0) = ((MR_Box) (SubDirName_84));
                          MR_hl_field(1, Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_178, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, Var_178, 1) = ((MR_Box) (Var_180));
                        }
                        {
                          Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_177, 0) = ((MR_Box) (TargetArch_173));
                          MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_178));
                        }
                        {
                          Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_176, 0) = ((MR_Box) (Grade_172));
                          MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_177));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesLegacy_16 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_176));
                        }
                        {
                          Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_184, 0) = ((MR_Box) (Grade_172));
                          MR_hl_field(1, Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_183, 0) = ((MR_Box) (SubDirName_84));
                          MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_184));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *DirNamesProposed_17 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Var_183));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_82;
                  MR_String _ExtStr_81;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_45, &_ExtStr_81, &SubDirName_82);
                  parse_tree__file_names__make_ngs_dir_names_3_p_0(SubDirName_82, DirNamesLegacy_16, DirNamesProposed_17);
                }
                break;
            }
            BaseNameNoExt_19 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_15, (MR_String) ".");
            ExtCurNgsGsMaxNgs_212 = ((MR_Unsigned) ((MR_hl_field(3, Ext_14, 1))) & (MR_Integer) 7);
            parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_212, &ExtStr_20, &_SubDirName_221);
          }
          break;
      }
      break;
  }
  *CurDirFileName_18 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_19, ExtStr_20);
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_101_114_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(
  MR_String * Str_5,
  MR_String * Dir_6)
{
  *Str_5 = (MR_String) ".err";
  *Dir_6 = (MR_String) "errs";
}

static void MR_CALL 
parse_tree__file_names__make_gas_dir_names_4_p_0(
  MR_Word Globals_5,
  MR_String SubDirName_6,
  MR_Word * GasSubDirNamesLegacy_7,
  MR_Word * GasSubDirNamesProposed_8)
{
  MR_String Grade_9;
  MR_String TargetArch_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;

  libs__globals__get_grade_dir_2_p_0(Globals_5, &Grade_9);
  libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 600, &TargetArch_10);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (SubDirName_6));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) ((MR_String) "Mercury"));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (TargetArch_10));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Grade_9));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *GasSubDirNamesLegacy_7 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (TargetArch_10));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Grade_9));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (SubDirName_6));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *GasSubDirNamesProposed_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_20));
  }
}

static void MR_CALL 
parse_tree__file_names__make_ngs_dir_names_3_p_0(
  MR_String SubDirName_4,
  MR_Word * NgsSubDirNamesLegacy_5,
  MR_Word * NgsSubDirNamesProposed_6)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (SubDirName_4));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *NgsSubDirNamesLegacy_5 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *NgsSubDirNamesProposed_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_8));
  }
}

static void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gas_extension_dir_4_p_0(
  MR_Word Globals_5,
  MR_Word Ext_6,
  MR_String * Str_7,
  MR_String * Dir_8)
{
  switch (Ext_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 6:
      *Str_7 = (MR_String) "_init.\044O";
      break;
    case (MR_Integer) 7:
      *Str_7 = (MR_String) "_init.o";
      break;
    case (MR_Integer) 9:
      {
        MR_String Str0_9;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 494, &Str0_9);
        *Str_7 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_9);
      }
      break;
    case (MR_Integer) 8:
      *Str_7 = (MR_String) "_init.pic_o";
      break;
    case (MR_Integer) 10:
      {
        MR_String Str0_16;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 495, &Str0_16);
        *Str_7 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_16);
      }
      break;
    case (MR_Integer) 1:
      *Str_7 = (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)";
      break;
    case (MR_Integer) 0:
      *Str_7 = (MR_String) ".\044O";
      break;
    case (MR_Integer) 2:
      *Str_7 = (MR_String) ".o";
      break;
    case (MR_Integer) 4:
      libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 494, Str_7);
      break;
    case (MR_Integer) 3:
      *Str_7 = (MR_String) ".pic_o";
      break;
    case (MR_Integer) 5:
      libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 495, Str_7);
      break;
  }
  *Dir_8 = (MR_String) "os";
}

void MR_CALL 
parse_tree__file_names__get_java_dir_path_4_p_0(
  MR_Word Globals_5,
  MR_Word ExtCurNgsGsJava_6,
  MR_Word * DirNamesLegacy_7,
  MR_Word * DirNamesProposed_8)
{
  MR_Word SubdirSetting_9;

  libs__globals__get_subdir_setting_2_p_0(Globals_5, &SubdirSetting_9);
  switch (SubdirSetting_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *DirNamesLegacy_7 = (MR_Word) ((MR_Unsigned) 0U);
        *DirNamesProposed_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String SubDirName_14;
        MR_String Grade_15;
        MR_String TargetArch_16;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_23;
        MR_Word Var_26;
        MR_Word Var_27;

        switch (ExtCurNgsGsJava_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            SubDirName_14 = (MR_String) "classes";
            break;
          case (MR_Integer) 0:
            SubDirName_14 = (MR_String) "javas";
            break;
        }
        libs__globals__get_grade_dir_2_p_0(Globals_5, &Grade_15);
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 600, &TargetArch_16);
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (SubDirName_14));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = ((MR_Box) (TargetArch_16));
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (Grade_15));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DirNamesLegacy_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_19));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Grade_15));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (SubDirName_14));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DirNamesProposed_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_26));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String SubDirName_11;
        MR_Word Var_30;

        switch (ExtCurNgsGsJava_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            SubDirName_11 = (MR_String) "classes";
            break;
          case (MR_Integer) 0:
            SubDirName_11 = (MR_String) "javas";
            break;
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (SubDirName_11));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DirNamesLegacy_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DirNamesProposed_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "MercurySystem"));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_30));
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_source_file_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String * SourceFileName_6)
{
  parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_5, SourceFileName_6);
}

MR_String MR_CALL 
parse_tree__file_names__module_name_to_base_file_name_no_ext_java_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String BaseNameNoExt_4;

  parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_3, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_4);
  return BaseNameNoExt_4;
}

MR_String MR_CALL 
parse_tree__file_names__module_name_to_base_file_name_no_ext_non_java_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_3, (MR_String) ".");
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__file_names__module_name_to_base_file_name_no_ext_2_f_0(
  MR_Word Ext_4,
  MR_Word ModuleName_5)
{
  MR_String BaseNameNoExt_6;

  switch (MR_tag((MR_Word) Ext_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      BaseNameNoExt_6 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_5, (MR_String) ".");
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          BaseNameNoExt_6 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_5, (MR_String) ".");
          break;
        case (MR_Integer) 4:
          parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_5, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_6);
          break;
      }
      break;
  }
  return BaseNameNoExt_6;
}

void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gs_max_cur_extension_dir_3_p_0(
  MR_String * Str_5,
  MR_String * Dir_6)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(Str_5, Dir_6);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_110_103_115_95_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(
  MR_String * Str_5,
  MR_String * Dir_6)
{
  *Str_5 = (MR_String) ".mih";
  *Dir_6 = (MR_String) "mihs";
}

void MR_CALL 
parse_tree__file_names__ext_cur_pgs_max_cur_extension_dir_3_p_0(
  MR_String * Str_5,
  MR_String * Dir_6)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_112_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(Str_5, Dir_6);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_95_99_117_114_95_112_103_115_95_109_97_120_95_99_117_114_95_101_120_116_101_110_115_105_111_110_95_100_105_114_95_95_91_49_93_95_48_3_p_0(
  MR_String * Str_5,
  MR_String * Dir_6)
{
  *Str_5 = (MR_String) ".mh";
  *Dir_6 = (MR_String) "mhs";
}

MR_String MR_CALL 
parse_tree__file_names__extension_to_string_2_f_0(
  MR_Word Globals_4,
  MR_Word Ext_5)
{
  MR_String ExtStr_6;

  switch (MR_tag((MR_Word) Ext_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExtCur_7 = ((MR_Unsigned) ((MR_hl_field(0, Ext_5, 0))) & (MR_Integer) 15);

        ExtStr_6 = ((&parse_tree__file_names_vector_common_5[0 + ExtCur_7]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_8 = ((MR_Unsigned) ((MR_hl_field(1, Ext_5, 0))) & (MR_Integer) 15);
        MR_String _SubDirName_9;

        parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(ExtCurNgs_8, &ExtStr_6, &_SubDirName_9);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_10 = ((MR_Unsigned) ((MR_hl_field(2, Ext_5, 0))) & (MR_Integer) 3);
        MR_String _LegacySubDirName_11;
        MR_String _ProposedSubDirName_12;

        parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(ExtCurGs_10, &ExtStr_6, &_LegacySubDirName_11, &_ProposedSubDirName_12);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurGas_13 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, 1))) & (MR_Integer) 15);
            MR_String _SubDirName_20;

            parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(Globals_4, ExtCurGas_13, &ExtStr_6, &_SubDirName_20);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGs_14 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, 1))) & (MR_Integer) 15);
            MR_String _SubDirName_22;

            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(ExtCurNgsGs_14, &ExtStr_6, &_SubDirName_22);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExtCurNgsGas_15 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, 1))) & (MR_Integer) 15);

            switch (ExtCurNgsGas_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 6:
                ExtStr_6 = (MR_String) "_init.\044O";
                break;
              case (MR_Integer) 7:
                ExtStr_6 = (MR_String) "_init.o";
                break;
              case (MR_Integer) 9:
                {
                  MR_String Str0_36;

                  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 494, &Str0_36);
                  ExtStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_36);
                }
                break;
              case (MR_Integer) 8:
                ExtStr_6 = (MR_String) "_init.pic_o";
                break;
              case (MR_Integer) 10:
                {
                  MR_String Str0_43;

                  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 495, &Str0_43);
                  ExtStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_43);
                }
                break;
              case (MR_Integer) 1:
                ExtStr_6 = (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)";
                break;
              case (MR_Integer) 0:
                ExtStr_6 = (MR_String) ".\044O";
                break;
              case (MR_Integer) 2:
                ExtStr_6 = (MR_String) ".o";
                break;
              case (MR_Integer) 4:
                libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 494, &ExtStr_6);
                break;
              case (MR_Integer) 3:
                ExtStr_6 = (MR_String) ".pic_o";
                break;
              case (MR_Integer) 5:
                libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 495, &ExtStr_6);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          ExtStr_6 = (MR_String) ".err";
          break;
        case (MR_Integer) 4:
          {
            MR_Word ExtCurNgsGsJava_17 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, 1))) & (MR_Integer) 1);

            switch (ExtCurNgsGsJava_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ExtStr_6 = (MR_String) ".class";
                break;
              case (MR_Integer) 0:
                ExtStr_6 = (MR_String) ".java";
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          ExtStr_6 = (MR_String) ".mh";
          break;
        case (MR_Integer) 6:
          ExtStr_6 = (MR_String) ".mih";
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtCurNgsGsMaxNgs_19 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, 1))) & (MR_Integer) 7);
            MR_String _SubDirName_35;

            parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_19, &ExtStr_6, &_SubDirName_35);
          }
          break;
      }
      break;
  }
  return ExtStr_6;
}

void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(
  MR_Word Ext_4,
  MR_String * Str_5,
  MR_String * Dir_6)
{
  *Str_5 = ((&parse_tree__file_names_vector_common_4[27 + Ext_4]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
  *Dir_6 = ((&parse_tree__file_names_vector_common_4[27 + Ext_4]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_1;
}

void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0(
  MR_Word Ext_4,
  MR_String * Str_5,
  MR_String * Dir_6)
{
  *Str_5 = ((&parse_tree__file_names_vector_common_4[12 + Ext_4]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
  *Dir_6 = ((&parse_tree__file_names_vector_common_4[12 + Ext_4]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_1;
}

void MR_CALL 
parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(
  MR_Word Globals_5,
  MR_Word Ext_6,
  MR_String * Str_7,
  MR_String * Dir_8)
{
  switch (Ext_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        *Str_7 = (MR_String) ".bat";
        *Dir_8 = (MR_String) "bin";
      }
      break;
    case (MR_Integer) 1:
      {
        *Str_7 = (MR_String) ".exe";
        *Dir_8 = (MR_String) "bin";
      }
      break;
    case (MR_Integer) 3:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 601, Str_7);
        *Dir_8 = (MR_String) "bin";
      }
      break;
    case (MR_Integer) 0:
      {
        *Str_7 = (MR_String) "";
        *Dir_8 = (MR_String) "bin";
      }
      break;
    case (MR_Integer) 6:
      {
        *Str_7 = (MR_String) ".a";
        *Dir_8 = (MR_String) "lib";
      }
      break;
    case (MR_Integer) 5:
      {
        *Str_7 = (MR_String) ".\044A";
        *Dir_8 = (MR_String) "lib";
      }
      break;
    case (MR_Integer) 4:
      {
        *Str_7 = (MR_String) ".\044(EXT_FOR_SHARED_LIB)";
        *Dir_8 = (MR_String) "lib";
      }
      break;
    case (MR_Integer) 7:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 602, Str_7);
        *Dir_8 = (MR_String) "lib";
      }
      break;
    case (MR_Integer) 8:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 603, Str_7);
        *Dir_8 = (MR_String) "lib";
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0(
  MR_Word Ext_5,
  MR_String * Str_6,
  MR_String * LegacyDir_7,
  MR_String * ProposedDir_8)
{
  switch (Ext_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        *Str_6 = (MR_String) ".dll";
        *LegacyDir_7 = (MR_String) "lib";
        *ProposedDir_8 = (MR_String) "dlls";
      }
      break;
    case (MR_Integer) 0:
      {
        *Str_6 = (MR_String) ".init";
        *LegacyDir_7 = (MR_String) "inits";
        *ProposedDir_8 = (MR_String) "inits";
      }
      break;
    case (MR_Integer) 1:
      {
        *Str_6 = (MR_String) ".jar";
        *LegacyDir_7 = (MR_String) "lib";
        *ProposedDir_8 = (MR_String) "jars";
      }
      break;
  }
}

void MR_CALL 
parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0(
  MR_Word Ext_4,
  MR_String * Str_5,
  MR_String * Dir_6)
{
  *Str_5 = ((&parse_tree__file_names_vector_common_4[0 + Ext_4]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
  *Dir_6 = ((&parse_tree__file_names_vector_common_4[0 + Ext_4]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_1;
}

MR_Word MR_CALL 
parse_tree__file_names__maybe_search_to_maybe_for_search_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____count_sum_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____count_sum_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_gas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_gas_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_gas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_gas_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_gs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_gs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_gs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_gs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_ngs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_ngs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gas_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_ngs_gas_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gas_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_ngs_gas_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_ngs_gs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_ngs_gs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_err_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_ngs_gs_err_0_0();
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_err_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_ngs_gs_err_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_java_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_ngs_gs_java_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_java_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_ngs_gs_java_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_max_cur_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_ngs_gs_max_cur_0_0();
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_max_cur_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_ngs_gs_max_cur_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_ngs_gs_max_ngs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_ngs_gs_max_ngs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_max_ngs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_ngs_gs_max_ngs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_cur_pgs_max_cur_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_cur_pgs_max_cur_0_0();
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_pgs_max_cur_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_cur_pgs_max_cur_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____maybe_create_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____maybe_create_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_for_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____maybe_for_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_for_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____maybe_for_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____maybe_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____maybe_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____record_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____record_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____record_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____record_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____search_which_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____search_which_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____search_which_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____search_which_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____search_which_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____search_which_tail_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____search_which_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____search_which_tail_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__file_names__init(void)
{
}

void mercury__parse_tree__file_names__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gas_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gs_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gas_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_err_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_java_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_pgs_max_cur_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_for_search_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_search_which_dirs_0);
  MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_search_which_tail_dirs_0);
}

void mercury__parse_tree__file_names__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__file_names__required_init(void)
{
  parse_tree__file_names__user_init_pred_189_0();
  parse_tree__file_names__user_init_pred_199_0();
  parse_tree__file_names__user_init_pred_202_0();
  parse_tree__file_names__user_init_pred_203_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__file_names__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.file_names.
