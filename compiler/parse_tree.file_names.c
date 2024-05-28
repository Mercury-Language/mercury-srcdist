/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2024-05-28
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
#include "one_or_more_map.mih"
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
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_6[1];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_6[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_3[4];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_0[4];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0[7];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0[7];

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

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_16;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_17;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_18;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_19;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_20;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_21;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_22;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_23;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_24;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_25;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_26;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_27;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_28;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_29;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_30;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_31;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_32;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_33;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_34;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_35;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_0[36];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_0[36];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_0[36];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_3;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_4;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_5;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_6;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_7;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_8;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_9;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_10;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_11;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gs_0[12];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gs_0[12];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gs_0[12];

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

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_12;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_0[13];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_0[13];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_0[13];

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

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_15;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_16;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_17;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_18;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_19;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_20;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_21;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_22;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_0[23];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_0[23];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_0[23];

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
parse_tree__file_names__update_count_sum_map_4_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Box Key_5,
  MR_Integer Count_6,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13);

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
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_11,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_Word * DirNames_15,
  MR_String * CurDirFileName_16);

static MR_Word MR_CALL 
parse_tree__file_names__make_gs_dir_names_2_f_0(
  MR_Word Globals_4,
  MR_String SubDirName_5);

static MR_Word MR_CALL 
parse_tree__file_names__make_ngs_dir_names_1_f_0(
  MR_String SubDirName_3);

static void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(
  MR_Word Ext_4,
  MR_String * Str_5,
  MR_String * Dir_6);

static void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(
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
parse_tree__file_names____Unify____ext_cur_ngs_gs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_cur_ngs_gs_0_0_10001(
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


static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][3];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[6][2];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_6[1][14];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_7[2][8];


struct parse_tree__file_names__vector_common_type_4_0_s {
  const MR_String parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_4_0_s parse_tree__file_names_vector_common_4[188];

struct parse_tree__file_names__vector_common_type_5_0_s {
  const MR_String parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
  const MR_String parse_tree__file_names__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_5_0_s parse_tree__file_names_vector_common_5[5];



static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "mihs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "analysis_cache")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "Mercury")),
    ((MR_Box) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[4])))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_6[1][14] = {
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

static /* final */ const MR_Box parse_tree__file_names_scalar_common_7[2][8] = {
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


static /* final */ const struct parse_tree__file_names__vector_common_type_4_0_s parse_tree__file_names_vector_common_4[188] = {
  /* row   0 */   { (MR_String) ".mh" },
  /* row   1 */   { (MR_String) ".all_int3s" },
  /* row   2 */   { (MR_String) ".all_ints" },
  /* row   3 */   { (MR_String) ".all_opts" },
  /* row   4 */   { (MR_String) ".all_trans_opts" },
  /* row   5 */   { (MR_String) ".check" },
  /* row   6 */   { (MR_String) ".classes" },
  /* row   7 */   { (MR_String) ".clean" },
  /* row   8 */   { (MR_String) ".depend" },
  /* row   9 */   { (MR_String) ".install_grade_hdrs" },
  /* row  10 */   { (MR_String) ".install_hdrs" },
  /* row  11 */   { (MR_String) ".install_ints" },
  /* row  12 */   { (MR_String) ".install_opts" },
  /* row  13 */   { (MR_String) ".int3s" },
  /* row  14 */   { (MR_String) ".ints" },
  /* row  15 */   { (MR_String) ".javas" },
  /* row  16 */   { (MR_String) ".opts" },
  /* row  17 */   { (MR_String) ".realclean" },
  /* row  18 */   { (MR_String) ".trans_opts" },
  /* row  19 */   { (MR_String) ".defn_extents" },
  /* row  20 */   { (MR_String) ".defn_line_counts" },
  /* row  21 */   { (MR_String) ".defns" },
  /* row  22 */   { (MR_String) ".dependency_graph" },
  /* row  23 */   { (MR_String) ".err" },
  /* row  24 */   { (MR_String) ".hlds_dump" },
  /* row  25 */   { (MR_String) ".imports_graph" },
  /* row  26 */   { (MR_String) ".local_call_tree" },
  /* row  27 */   { (MR_String) ".local_call_tree_full" },
  /* row  28 */   { (MR_String) ".local_call_tree_order" },
  /* row  29 */   { (MR_String) ".mlds_dump" },
  /* row  30 */   { (MR_String) ".mode_constraints" },
  /* row  31 */   { (MR_String) ".order" },
  /* row  32 */   { (MR_String) ".order_trans_opt" },
  /* row  33 */   { (MR_String) ".type_repns" },
  /* row  34 */   { (MR_String) ".ugly" },
  /* row  35 */   { (MR_String) ".xml" },
  /* row  36 */   { (MR_String) ".int0" },
  /* row  37 */   { (MR_String) ".int" },
  /* row  38 */   { (MR_String) ".int2" },
  /* row  39 */   { (MR_String) ".int3" },
  /* row  40 */   { (MR_String) ".date0" },
  /* row  41 */   { (MR_String) ".date" },
  /* row  42 */   { (MR_String) ".date3" },
  /* row  43 */   { (MR_String) ".d" },
  /* row  44 */   { (MR_String) ".dv" },
  /* row  45 */   { (MR_String) ".dep" },
  /* row  46 */   { (MR_String) ".module_dep" },
  /* row  47 */   { (MR_String) ".err_date" },
  /* row  48 */   { (MR_String) ".prof" },
  /* row  49 */   { (MR_String) ".opt" },
  /* row  50 */   { (MR_String) ".trans_opt" },
  /* row  51 */   { (MR_String) ".analysis" },
  /* row  52 */   { (MR_String) ".imdg" },
  /* row  53 */   { (MR_String) ".request" },
  /* row  54 */   { (MR_String) ".mh" },
  /* row  55 */   { (MR_String) ".all_int3s" },
  /* row  56 */   { (MR_String) ".all_ints" },
  /* row  57 */   { (MR_String) ".all_opts" },
  /* row  58 */   { (MR_String) ".all_trans_opts" },
  /* row  59 */   { (MR_String) ".check" },
  /* row  60 */   { (MR_String) ".classes" },
  /* row  61 */   { (MR_String) ".clean" },
  /* row  62 */   { (MR_String) ".depend" },
  /* row  63 */   { (MR_String) ".install_grade_hdrs" },
  /* row  64 */   { (MR_String) ".install_hdrs" },
  /* row  65 */   { (MR_String) ".install_ints" },
  /* row  66 */   { (MR_String) ".install_opts" },
  /* row  67 */   { (MR_String) ".int3s" },
  /* row  68 */   { (MR_String) ".ints" },
  /* row  69 */   { (MR_String) ".javas" },
  /* row  70 */   { (MR_String) ".opts" },
  /* row  71 */   { (MR_String) ".realclean" },
  /* row  72 */   { (MR_String) ".trans_opts" },
  /* row  73 */   { (MR_String) ".defn_extents" },
  /* row  74 */   { (MR_String) ".defn_line_counts" },
  /* row  75 */   { (MR_String) ".defns" },
  /* row  76 */   { (MR_String) ".dependency_graph" },
  /* row  77 */   { (MR_String) ".err" },
  /* row  78 */   { (MR_String) ".hlds_dump" },
  /* row  79 */   { (MR_String) ".imports_graph" },
  /* row  80 */   { (MR_String) ".local_call_tree" },
  /* row  81 */   { (MR_String) ".local_call_tree_full" },
  /* row  82 */   { (MR_String) ".local_call_tree_order" },
  /* row  83 */   { (MR_String) ".mlds_dump" },
  /* row  84 */   { (MR_String) ".mode_constraints" },
  /* row  85 */   { (MR_String) ".order" },
  /* row  86 */   { (MR_String) ".order_trans_opt" },
  /* row  87 */   { (MR_String) ".type_repns" },
  /* row  88 */   { (MR_String) ".ugly" },
  /* row  89 */   { (MR_String) ".xml" },
  /* row  90 */   { (MR_String) "int0s" },
  /* row  91 */   { (MR_String) "ints" },
  /* row  92 */   { (MR_String) "int2s" },
  /* row  93 */   { (MR_String) "int3s" },
  /* row  94 */   { (MR_String) "date0s" },
  /* row  95 */   { (MR_String) "dates" },
  /* row  96 */   { (MR_String) "date3s" },
  /* row  97 */   { (MR_String) "ds" },
  /* row  98 */   { (MR_String) "deps" },
  /* row  99 */   { (MR_String) "deps" },
  /* row 100 */   { (MR_String) "module_deps" },
  /* row 101 */   { (MR_String) "err_dates" },
  /* row 102 */   { (MR_String) "profs" },
  /* row 103 */   { (MR_String) ".int0" },
  /* row 104 */   { (MR_String) ".int" },
  /* row 105 */   { (MR_String) ".int2" },
  /* row 106 */   { (MR_String) ".int3" },
  /* row 107 */   { (MR_String) ".date0" },
  /* row 108 */   { (MR_String) ".date" },
  /* row 109 */   { (MR_String) ".date3" },
  /* row 110 */   { (MR_String) ".d" },
  /* row 111 */   { (MR_String) ".dv" },
  /* row 112 */   { (MR_String) ".dep" },
  /* row 113 */   { (MR_String) ".module_dep" },
  /* row 114 */   { (MR_String) ".err_date" },
  /* row 115 */   { (MR_String) ".prof" },
  /* row 116 */   { (MR_String) ".opt" },
  /* row 117 */   { (MR_String) ".trans_opt" },
  /* row 118 */   { (MR_String) ".analysis" },
  /* row 119 */   { (MR_String) ".imdg" },
  /* row 120 */   { (MR_String) ".request" },
  /* row 121 */   { (MR_String) "int0s" },
  /* row 122 */   { (MR_String) "ints" },
  /* row 123 */   { (MR_String) "int2s" },
  /* row 124 */   { (MR_String) "int3s" },
  /* row 125 */   { (MR_String) "date0s" },
  /* row 126 */   { (MR_String) "dates" },
  /* row 127 */   { (MR_String) "date3s" },
  /* row 128 */   { (MR_String) "ds" },
  /* row 129 */   { (MR_String) "deps" },
  /* row 130 */   { (MR_String) "deps" },
  /* row 131 */   { (MR_String) "module_deps" },
  /* row 132 */   { (MR_String) "err_dates" },
  /* row 133 */   { (MR_String) "profs" },
  /* row 134 */   { (MR_String) ".mh" },
  /* row 135 */   { (MR_String) ".all_int3s" },
  /* row 136 */   { (MR_String) ".all_ints" },
  /* row 137 */   { (MR_String) ".all_opts" },
  /* row 138 */   { (MR_String) ".all_trans_opts" },
  /* row 139 */   { (MR_String) ".check" },
  /* row 140 */   { (MR_String) ".classes" },
  /* row 141 */   { (MR_String) ".clean" },
  /* row 142 */   { (MR_String) ".depend" },
  /* row 143 */   { (MR_String) ".install_grade_hdrs" },
  /* row 144 */   { (MR_String) ".install_hdrs" },
  /* row 145 */   { (MR_String) ".install_ints" },
  /* row 146 */   { (MR_String) ".install_opts" },
  /* row 147 */   { (MR_String) ".int3s" },
  /* row 148 */   { (MR_String) ".ints" },
  /* row 149 */   { (MR_String) ".javas" },
  /* row 150 */   { (MR_String) ".opts" },
  /* row 151 */   { (MR_String) ".realclean" },
  /* row 152 */   { (MR_String) ".trans_opts" },
  /* row 153 */   { (MR_String) ".defn_extents" },
  /* row 154 */   { (MR_String) ".defn_line_counts" },
  /* row 155 */   { (MR_String) ".defns" },
  /* row 156 */   { (MR_String) ".dependency_graph" },
  /* row 157 */   { (MR_String) ".err" },
  /* row 158 */   { (MR_String) ".hlds_dump" },
  /* row 159 */   { (MR_String) ".imports_graph" },
  /* row 160 */   { (MR_String) ".local_call_tree" },
  /* row 161 */   { (MR_String) ".local_call_tree_full" },
  /* row 162 */   { (MR_String) ".local_call_tree_order" },
  /* row 163 */   { (MR_String) ".mlds_dump" },
  /* row 164 */   { (MR_String) ".mode_constraints" },
  /* row 165 */   { (MR_String) ".order" },
  /* row 166 */   { (MR_String) ".order_trans_opt" },
  /* row 167 */   { (MR_String) ".type_repns" },
  /* row 168 */   { (MR_String) ".ugly" },
  /* row 169 */   { (MR_String) ".xml" },
  /* row 170 */   { (MR_String) ".int0" },
  /* row 171 */   { (MR_String) ".int" },
  /* row 172 */   { (MR_String) ".int2" },
  /* row 173 */   { (MR_String) ".int3" },
  /* row 174 */   { (MR_String) ".date0" },
  /* row 175 */   { (MR_String) ".date" },
  /* row 176 */   { (MR_String) ".date3" },
  /* row 177 */   { (MR_String) ".d" },
  /* row 178 */   { (MR_String) ".dv" },
  /* row 179 */   { (MR_String) ".dep" },
  /* row 180 */   { (MR_String) ".module_dep" },
  /* row 181 */   { (MR_String) ".err_date" },
  /* row 182 */   { (MR_String) ".prof" },
  /* row 183 */   { (MR_String) ".opt" },
  /* row 184 */   { (MR_String) ".trans_opt" },
  /* row 185 */   { (MR_String) ".analysis" },
  /* row 186 */   { (MR_String) ".imdg" },
  /* row 187 */   { (MR_String) ".request" },
};

static /* final */ const struct parse_tree__file_names__vector_common_type_5_0_s parse_tree__file_names_vector_common_5[5] = {
  /* row   0 */
  {
    (MR_String) ".opt",
    (MR_String) "opts"
  },
  /* row   1 */
  {
    (MR_String) ".trans_opt",
    (MR_String) "trans_opts"
  },
  /* row   2 */
  {
    (MR_String) ".analysis",
    (MR_String) "analyses"
  },
  /* row   3 */
  {
    (MR_String) ".imdg",
    (MR_String) "imdgs"
  },
  /* row   4 */
  {
    (MR_String) ".request",
    (MR_String) "requests"
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "parse_tree.file_names.mh"
#line 1324 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_made_dirs;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_made_dirs_lock;
#endif

#line 1425 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_translations;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_translations_lock;
#endif

#line 1451 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_no_mkdirs;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_no_mkdirs_lock;
#endif

#line 1453 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_mkdirs;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_mkdirs_lock;
#endif


#line 1324 "file_names.m"
void 
parse_tree__file_names__user_init_pred_120_0(void)
#line 1324 "file_names.m"
{
#line 1324 "file_names.m"
	parse_tree__file_names__initialise_mutable_made_dirs_0_p_0();
}

#line 1425 "file_names.m"
void 
parse_tree__file_names__user_init_pred_130_0(void)
#line 1425 "file_names.m"
{
#line 1425 "file_names.m"
	parse_tree__file_names__initialise_mutable_translations_0_p_0();
}

#line 1451 "file_names.m"
void 
parse_tree__file_names__user_init_pred_133_0(void)
#line 1451 "file_names.m"
{
#line 1451 "file_names.m"
	parse_tree__file_names__initialise_mutable_no_mkdirs_0_p_0();
}

#line 1453 "file_names.m"
void 
parse_tree__file_names__user_init_pred_134_0(void)
#line 1453 "file_names.m"
{
#line 1453 "file_names.m"
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
    (MR_Integer) 6
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
    (MR_Integer) 4
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

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 5
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_3 = {
  (MR_String) "ext_cur_ngs_gs",
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

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_java_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_4 = {
  (MR_String) "ext_cur_ngs_gs_java",
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

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_5[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0) };

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5 = {
  (MR_String) "ext_cur_ngs_gs_max_cur",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_6[1] = { (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0) };

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_6[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_6,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0 };

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1 };

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_2[1] = { &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_2 };

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_3[4] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_3,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_4,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6
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
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0[7] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_2,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_3,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_4,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_5,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_6
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6
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
  (MR_Integer) 7,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_0 = {
  (MR_String) "ext_cur_mh",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_1 = {
  (MR_String) "ext_cur_pmt_all_int3s",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_2 = {
  (MR_String) "ext_cur_pmt_all_ints",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_3 = {
  (MR_String) "ext_cur_pmt_all_opts",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_4 = {
  (MR_String) "ext_cur_pmt_all_trans_opts",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_5 = {
  (MR_String) "ext_cur_pmt_check",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_6 = {
  (MR_String) "ext_cur_pmt_classes",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_7 = {
  (MR_String) "ext_cur_pmt_clean",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_8 = {
  (MR_String) "ext_cur_pmt_depend",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_9 = {
  (MR_String) "ext_cur_pmt_install_grade_hdrs",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_10 = {
  (MR_String) "ext_cur_pmt_install_hdrs",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_11 = {
  (MR_String) "ext_cur_pmt_install_ints",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_12 = {
  (MR_String) "ext_cur_pmt_install_opts",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_13 = {
  (MR_String) "ext_cur_pmt_int3s",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_14 = {
  (MR_String) "ext_cur_pmt_ints",
  INT32_C(14)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_15 = {
  (MR_String) "ext_cur_pmt_javas",
  INT32_C(15)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_16 = {
  (MR_String) "ext_cur_pmt_opts",
  INT32_C(16)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_17 = {
  (MR_String) "ext_cur_pmt_realclean",
  INT32_C(17)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_18 = {
  (MR_String) "ext_cur_pmt_trans_opts",
  INT32_C(18)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_19 = {
  (MR_String) "ext_cur_user_defn_ext",
  INT32_C(19)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_20 = {
  (MR_String) "ext_cur_user_defn_lc",
  INT32_C(20)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_21 = {
  (MR_String) "ext_cur_user_defns",
  INT32_C(21)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_22 = {
  (MR_String) "ext_cur_user_depgraph",
  INT32_C(22)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_23 = {
  (MR_String) "ext_cur_user_err",
  INT32_C(23)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_24 = {
  (MR_String) "ext_cur_user_hlds_dump",
  INT32_C(24)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_25 = {
  (MR_String) "ext_cur_user_imports_graph",
  INT32_C(25)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_26 = {
  (MR_String) "ext_cur_user_lct",
  INT32_C(26)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_27 = {
  (MR_String) "ext_cur_user_lct_full",
  INT32_C(27)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_28 = {
  (MR_String) "ext_cur_user_lct_order",
  INT32_C(28)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_29 = {
  (MR_String) "ext_cur_user_mlds_dump",
  INT32_C(29)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_30 = {
  (MR_String) "ext_cur_user_mode_constr",
  INT32_C(30)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_31 = {
  (MR_String) "ext_cur_user_order",
  INT32_C(31)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_32 = {
  (MR_String) "ext_cur_user_order_to",
  INT32_C(32)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_33 = {
  (MR_String) "ext_cur_user_type_repns",
  INT32_C(33)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_34 = {
  (MR_String) "ext_cur_user_ugly",
  INT32_C(34)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_35 = {
  (MR_String) "ext_cur_user_xml",
  INT32_C(35)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_0[36] = {
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
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_15,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_16,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_17,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_18,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_19,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_20,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_21,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_22,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_23,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_24,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_25,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_26,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_27,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_28,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_29,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_30,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_31,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_32,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_33,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_34,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_35
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_0[36] = {
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
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_15,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_16,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_17,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_18,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_19,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_20,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_21,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_22,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_23,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_24,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_25,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_26,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_27,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_28,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_29,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_30,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_31,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_32,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_33,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_34,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_0_35
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_0[36] = {
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
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 20,
  (MR_Integer) 21,
  (MR_Integer) 22,
  (MR_Integer) 23,
  (MR_Integer) 24,
  (MR_Integer) 25,
  (MR_Integer) 26,
  (MR_Integer) 27,
  (MR_Integer) 28,
  (MR_Integer) 29,
  (MR_Integer) 30,
  (MR_Integer) 31,
  (MR_Integer) 32,
  (MR_Integer) 33,
  (MR_Integer) 34,
  (MR_Integer) 35
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
  (MR_Integer) 36,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0 = {
  (MR_String) "ext_cur_gs_exec_noext",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1 = {
  (MR_String) "ext_cur_gs_exec_exe",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2 = {
  (MR_String) "ext_cur_gs_exec_bat",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_3 = {
  (MR_String) "ext_cur_gs_exec_exec_opt",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_4 = {
  (MR_String) "ext_cur_gs_lib_dollar_efsl",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_5 = {
  (MR_String) "ext_cur_gs_lib_dollar_a",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_6 = {
  (MR_String) "ext_cur_gs_lib_archive",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_7 = {
  (MR_String) "ext_cur_gs_lib_dll",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_8 = {
  (MR_String) "ext_cur_gs_lib_init",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_9 = {
  (MR_String) "ext_cur_gs_lib_jar",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_10 = {
  (MR_String) "ext_cur_gs_lib_lib_opt",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_11 = {
  (MR_String) "ext_cur_gs_lib_sh_lib_opt",
  INT32_C(11)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_gs_0[12] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_11
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_gs_0[12] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_6,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_gs_0_11
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_gs_0[12] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11
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
  (MR_Integer) 12,
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
  (MR_String) "ext_cur_ngs_misc_err_date",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_12 = {
  (MR_String) "ext_cur_ngs_misc_prof",
  INT32_C(12)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_0[13] = {
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
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_11,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_12
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_0[13] = {
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
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_0_12
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_0[13] = {
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
  (MR_Integer) 10,
  (MR_Integer) 12
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
  (MR_Integer) 13,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_0 = {
  (MR_String) "ext_cur_ngs_gs_opt_date_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_1 = {
  (MR_String) "ext_cur_ngs_gs_opt_date_trans",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_2 = {
  (MR_String) "ext_cur_ngs_gs_target_c",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_3 = {
  (MR_String) "ext_cur_ngs_gs_target_cs",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_4 = {
  (MR_String) "ext_cur_ngs_gs_target_date_c",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_5 = {
  (MR_String) "ext_cur_ngs_gs_target_date_cs",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_6 = {
  (MR_String) "ext_cur_ngs_gs_target_date_java",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_7 = {
  (MR_String) "ext_cur_ngs_gs_init_c",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_8 = {
  (MR_String) "ext_cur_ngs_gs_obj_dollar_o",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_9 = {
  (MR_String) "ext_cur_ngs_gs_obj_dollar_efpo",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_10 = {
  (MR_String) "ext_cur_ngs_gs_obj_o",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_11 = {
  (MR_String) "ext_cur_ngs_gs_obj_pic_o",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_12 = {
  (MR_String) "ext_cur_ngs_gs_obj_obj_opt",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_13 = {
  (MR_String) "ext_cur_ngs_gs_obj_pic_obj_opt",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_14 = {
  (MR_String) "ext_cur_ngs_gs_init_obj_dollar_o",
  INT32_C(14)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_15 = {
  (MR_String) "ext_cur_ngs_gs_init_obj_o",
  INT32_C(15)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_16 = {
  (MR_String) "ext_cur_ngs_gs_init_obj_pic_o",
  INT32_C(16)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_17 = {
  (MR_String) "ext_cur_ngs_gs_init_obj_obj_opt",
  INT32_C(17)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_18 = {
  (MR_String) "ext_cur_ngs_gs_init_obj_pic_obj_opt",
  INT32_C(18)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_19 = {
  (MR_String) "ext_cur_ngs_gs_an_ds_date",
  INT32_C(19)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_20 = {
  (MR_String) "ext_cur_ngs_gs_an_ds_status",
  INT32_C(20)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_21 = {
  (MR_String) "ext_cur_ngs_gs_misc_used",
  INT32_C(21)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_22 = {
  (MR_String) "ext_cur_ngs_gs_misc_track_flags",
  INT32_C(22)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_ext_cur_ngs_gs_0[23] = {
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
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_14,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_15,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_16,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_17,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_18,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_19,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_20,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_21,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_22
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_ext_cur_ngs_gs_0[23] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_19,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_20,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_7,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_14,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_15,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_17,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_16,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_18,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_22,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_21,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_9,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_8,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_10,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_12,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_11,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_13,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_2,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_3,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_4,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_5,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_0_6
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_0[23] = {
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 20,
  (MR_Integer) 21,
  (MR_Integer) 22,
  (MR_Integer) 2,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 12,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 15,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 8
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
  (MR_Integer) 23,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_cur_ngs_gs_0,

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
  (MR_String) "ext_cur_ngs_gs_max_ngs_opt_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_ext_cur_ngs_gs_max_ngs_0_1 = {
  (MR_String) "ext_cur_ngs_gs_max_ngs_opt_trans",
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

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
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 63);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 63);
              MR_Integer Var_36 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_37 = (MR_Integer) (ArgY1_5);

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
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Integer Var_34 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_35 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_34 < Var_35);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_34 > Var_35);
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
              MR_Word ArgX1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Integer Var_32 = (MR_Integer) (ArgX1_8);
              MR_Integer Var_33 = (MR_Integer) (ArgY1_9);

              succeeded = (Var_32 < Var_33);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_32 > Var_33);
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 31);
                      MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 31);
                      MR_Integer Var_30 = (MR_Integer) (ArgX1_10);
                      MR_Integer Var_31 = (MR_Integer) (ArgY1_11);

                      succeeded = (Var_30 < Var_31);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_30 > Var_31);
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                      MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                      MR_Integer Var_28 = (MR_Integer) (ArgX1_12);
                      MR_Integer Var_29 = (MR_Integer) (ArgY1_13);

                      succeeded = (Var_28 < Var_29);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_28 > Var_29);
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ArgX1_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word ArgY1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Integer Var_26 = (MR_Integer) (ArgX1_16);
                      MR_Integer Var_27 = (MR_Integer) (ArgY1_17);

                      succeeded = (Var_26 < Var_27);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_26 > Var_27);
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
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 63);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 63);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 31);
              MR_Word ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 31);
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 2:
            succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_15 == ArgY1_16);
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
  MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
  MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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

  *STATE_VARIABLE_NumKeys_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumKeys_0_31 + (MR_Unsigned) 1);
  Count_20 = ((MR_Integer) ((MR_hl_field(0, Value_14, (MR_Integer) 1))));
  *STATE_VARIABLE_NumLookups_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumLookups_0_33 + (MR_Unsigned) Count_20);
  Ext_22 = ((MR_Word) ((MR_hl_field(0, Key_13, (MR_Integer) 1))));
  Search_23 = ((MR_Unsigned) ((MR_hl_field(0, Key_13, (MR_Integer) 2))) & (MR_Integer) 1);
  MaybeMkdir_24 = ((MR_Word) ((MR_hl_field(0, Key_13, (MR_Integer) 3))));
  switch (MR_tag((MR_Word) Ext_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExtCur_44 = ((MR_Unsigned) ((MR_hl_field(0, Ext_22, (MR_Integer) 0))) & (MR_Integer) 63);

        ExtStr0_25 = ((&parse_tree__file_names_vector_common_4[134 + ExtCur_44]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_45 = ((MR_Unsigned) ((MR_hl_field(1, Ext_22, (MR_Integer) 0))) & (MR_Integer) 15);

        ExtStr0_25 = ((&parse_tree__file_names_vector_common_4[170 + ExtCurNgs_45]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_47 = ((MR_Unsigned) ((MR_hl_field(2, Ext_22, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (ExtCurGs_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            ExtStr0_25 = (MR_String) ".bat";
            break;
          case (MR_Integer) 1:
            ExtStr0_25 = (MR_String) ".exe";
            break;
          case (MR_Integer) 3:
            libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 624, &ExtStr0_25);
            break;
          case (MR_Integer) 0:
            ExtStr0_25 = (MR_String) "";
            break;
          case (MR_Integer) 6:
            ExtStr0_25 = (MR_String) ".a";
            break;
          case (MR_Integer) 7:
            ExtStr0_25 = (MR_String) ".dll";
            break;
          case (MR_Integer) 5:
            ExtStr0_25 = (MR_String) ".\044A";
            break;
          case (MR_Integer) 4:
            ExtStr0_25 = (MR_String) ".\044(EXT_FOR_SHARED_LIB)";
            break;
          case (MR_Integer) 8:
            ExtStr0_25 = (MR_String) ".init";
            break;
          case (MR_Integer) 9:
            ExtStr0_25 = (MR_String) ".jar";
            break;
          case (MR_Integer) 10:
            libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 623, &ExtStr0_25);
            break;
          case (MR_Integer) 11:
            libs__globals__lookup_string_option_3_p_0(Globals_12, (MR_Integer) 622, &ExtStr0_25);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_22, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurNgsGs_48 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, (MR_Integer) 1))) & (MR_Integer) 31);
            MR_String _SubDirName_53;

            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(Globals_12, ExtCurNgsGs_48, &ExtStr0_25, &_SubDirName_53);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGsJava_49 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (ExtCurNgsGsJava_49) {
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
        case (MR_Integer) 2:
          ExtStr0_25 = (MR_String) ".mih";
          break;
        case (MR_Integer) 3:
          {
            MR_Word ExtCurNgsGsMaxNgs_51 = ((MR_Unsigned) ((MR_hl_field(3, Ext_22, (MR_Integer) 1))) & (MR_Integer) 7);

            ExtStr0_25 = ((&parse_tree__file_names_vector_common_4[183 + ExtCurNgsGsMaxNgs_51]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
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
    MR_Word MkDir_29 = ((MR_Word) ((MR_hl_field(1, MaybeMkdir_24, (MR_Integer) 0))));

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
  parse_tree__file_names__update_count_sum_map_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ExtStr_26)), Count_20, STATE_VARIABLE_ExtMap_0_35, STATE_VARIABLE_ExtMap_36);
  parse_tree__file_names__update_count_sum_map_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ExtSchDir_30)), Count_20, STATE_VARIABLE_ExtSchDirMap_0_37, STATE_VARIABLE_ExtSchDirMap_38);
}

static void MR_CALL 
parse_tree__file_names__update_count_sum_map_4_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Box Key_5,
  MR_Integer Count_6,
  MR_Word STATE_VARIABLE_Map_0_12,
  MR_Word * STATE_VARIABLE_Map_13)
{
  MR_bool succeeded;
  MR_Word Entry0_8;
  MR_Box conv0_Entry0_8;

  succeeded = mercury__map__search_3_p_0(TypeInfo_for_T_21, (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), STATE_VARIABLE_Map_0_12, Key_5, &conv0_Entry0_8);
  if (succeeded)
  {
    Entry0_8 = ((MR_Word) (conv0_Entry0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Cnt0_9 = ((MR_Integer) ((MR_hl_field(0, Entry0_8, (MR_Integer) 0))));
    MR_Integer Sum0_10 = ((MR_Integer) ((MR_hl_field(0, Entry0_8, (MR_Integer) 1))));
    MR_Word Entry_11;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Cnt0_9 + (MR_Unsigned) 1);
    MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Sum0_10 + (MR_Unsigned) Count_6);

    {
      Entry_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_11, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, Entry_11, 1) = ((MR_Box) (Var_16));
    }
    mercury__map__det_update_4_p_0(TypeInfo_for_T_21, (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), Key_5, ((MR_Box) (Entry_11)), STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13);
  }
  else
  {
    MR_Word Entry_20;

    {
      Entry_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_20, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Entry_20, 1) = ((MR_Box) (Count_6));
    }
    mercury__map__det_insert_4_p_0(TypeInfo_for_T_21, (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), Key_5, ((MR_Box) (Entry_20)), STATE_VARIABLE_Map_0_12, STATE_VARIABLE_Map_13);
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

  parse_tree__file_names__write_out_mkdirs_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
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

  parse_tree__file_names__write_out_no_mkdirs_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
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

  parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

  parse_tree__file_names__write_out_ext_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

  parse_tree__file_names__gather_translation_stats_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_STATE_VARIABLE_NumKeys_32, ((MR_Integer) (wrapper_arg_5)), &conv2_STATE_VARIABLE_NumLookups_34, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_ExtMap_36, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ExtSchDirMap_38);
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
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_6[0]));
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
      MR_Word Stream_14 = ((MR_Word) ((MR_hl_field(0, Result_13, (MR_Integer) 0))));
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_String Var_83;
      MR_String Var_93;
      MR_Box conv8_STATE_VARIABLE_IO_36_36;
      MR_Box conv9_STATE_VARIABLE_IO_38_38;
      MR_Box conv10_STATE_VARIABLE_IO_40_40;
      MR_Box conv11_STATE_VARIABLE_IO_42_42;

      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "overall_stats ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), NumKeys_9, &Var_83);
      mercury__io__write_string_4_p_0(Stream_14, Var_83);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) " ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_3[0]), NumLookups_10, &Var_93);
      mercury__io__write_string_4_p_0(Stream_14, Var_93);
      mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_7[0]));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_2));
        MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_35, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, ExtMap_11, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_36_36);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_7[0]));
        MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_3));
        MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_37, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, ExtSchDirMap_12, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_38_38);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_7[1]));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_4));
        MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_39, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, NoMkDirs_7, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_40_40);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_7[1]));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_3_p_0_5));
        MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_41, 3) = ((MR_Box) (Stream_14));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, MkDirs_8, ((MR_Box) ((MR_Integer) 0)), &conv11_STATE_VARIABLE_IO_42_42);
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
    MR_String Name_3 = ((MR_String) ((MR_hl_field(0, ModuleName_2, (MR_Integer) 0))));

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

void MR_CALL 
parse_tree__file_names__analysis_cache_dir_name_2_p_0(
  MR_Word Globals_3,
  MR_String * DirName_4)
{
  MR_Word SubdirSetting_5;
  MR_Word DirComponents_6;

  libs__globals__get_subdir_setting_2_p_0(Globals_3, &SubdirSetting_5);
  switch (SubdirSetting_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      DirComponents_6 = (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[5]));
      break;
    case (MR_Integer) 2:
      {
        MR_String Grade_12;
        MR_String TargetArch_13;
        MR_Word Var_16;
        MR_Word Var_17;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_3, &Grade_12);
        libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 717, &TargetArch_13);
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (TargetArch_13));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[5])));
        }
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (Grade_12));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
        }
        {
          DirComponents_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, DirComponents_6, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, DirComponents_6, 1) = ((MR_Box) (Var_16));
        }
      }
      break;
  }
  *DirName_4 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_6);
}

void MR_CALL 
parse_tree__file_names__ext_to_dir_path_4_p_0(
  MR_Word Globals_5,
  MR_Word Search_6,
  MR_Word Ext_7,
  MR_Word * DirNames_8)
{
  switch (MR_tag((MR_Word) Ext_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *DirNames_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_10 = ((MR_Unsigned) ((MR_hl_field(1, Ext_7, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Word SubdirSetting_11;

        libs__globals__get_subdir_setting_2_p_0(Globals_5, &SubdirSetting_11);
        switch (SubdirSetting_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *DirNames_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_String SubDirName_13 = ((&parse_tree__file_names_vector_common_4[121 + ExtCurNgs_10]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
              MR_Word Var_122;

              {
                Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_122, 0) = ((MR_Box) (SubDirName_13));
                MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNames_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_122));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_14 = ((MR_Unsigned) ((MR_hl_field(2, Ext_7, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Word SubdirSetting_28;

        libs__globals__get_subdir_setting_2_p_0(Globals_5, &SubdirSetting_28);
        switch (SubdirSetting_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *DirNames_8 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_String SubDirName_25;
              MR_String Grade_72;
              MR_String TargetArch_73;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_80;

              switch (ExtCurGs_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  SubDirName_25 = (MR_String) "bin";
                  break;
                case (MR_Integer) 1:
                  SubDirName_25 = (MR_String) "bin";
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String _ExtStr_132;

                    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 624, &_ExtStr_132);
                    SubDirName_25 = (MR_String) "bin";
                  }
                  break;
                case (MR_Integer) 0:
                  SubDirName_25 = (MR_String) "bin";
                  break;
                case (MR_Integer) 6:
                  SubDirName_25 = (MR_String) "lib";
                  break;
                case (MR_Integer) 7:
                  SubDirName_25 = (MR_String) "lib";
                  break;
                case (MR_Integer) 5:
                  SubDirName_25 = (MR_String) "lib";
                  break;
                case (MR_Integer) 4:
                  SubDirName_25 = (MR_String) "lib";
                  break;
                case (MR_Integer) 8:
                  SubDirName_25 = (MR_String) "inits";
                  break;
                case (MR_Integer) 9:
                  SubDirName_25 = (MR_String) "lib";
                  break;
                case (MR_Integer) 10:
                  {
                    MR_String _ExtStr_148;

                    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 623, &_ExtStr_148);
                    SubDirName_25 = (MR_String) "lib";
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    MR_String _ExtStr_150;

                    libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 622, &_ExtStr_150);
                    SubDirName_25 = (MR_String) "lib";
                  }
                  break;
              }
              libs__compute_grade__grade_directory_component_2_p_0(Globals_5, &Grade_72);
              libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 717, &TargetArch_73);
              {
                Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_80, 0) = ((MR_Box) (SubDirName_25));
                MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_78, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (TargetArch_73));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_76, 0) = ((MR_Box) (Grade_72));
                MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNames_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_76));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurNgsGs_15 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, (MR_Integer) 1))) & (MR_Integer) 31);
            MR_Word SubdirSetting_39;

            libs__globals__get_subdir_setting_2_p_0(Globals_5, &SubdirSetting_39);
            switch (SubdirSetting_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *DirNames_8 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_36;
                  MR_String _ExtStr_34;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(Globals_5, ExtCurNgsGs_15, &_ExtStr_34, &SubDirName_36);
                  *DirNames_8 = parse_tree__file_names__make_gs_dir_names_2_f_0(Globals_5, SubDirName_36);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_33;
                  MR_Word Var_125;
                  MR_String _ExtStr_31;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(Globals_5, ExtCurNgsGs_15, &_ExtStr_31, &SubDirName_33);
                  {
                    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_125, 0) = ((MR_Box) (SubDirName_33));
                    MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNames_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_125));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGsJava_16 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word DirNames0_17;

            parse_tree__file_names__get_java_dir_path_3_p_0(Globals_5, ExtCurNgsGsJava_16, &DirNames0_17);
            *DirNames_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames0_17, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[1])));
          }
          break;
        case (MR_Integer) 2:
          switch (Search_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *DirNames_8 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 0:
              {
                MR_Word SubdirSetting_50;

                libs__globals__get_subdir_setting_2_p_0(Globals_5, &SubdirSetting_50);
                switch (SubdirSetting_50) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *DirNames_8 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 2:
                    *DirNames_8 = parse_tree__file_names__make_gs_dir_names_2_f_0(Globals_5, (MR_String) "mihs");
                    break;
                  case (MR_Integer) 1:
                    *DirNames_8 = (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[3]));
                    break;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ExtCurNgsGsMaxNgs_19 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word SubdirSetting_67;

            libs__globals__get_subdir_setting_2_p_0(Globals_5, &SubdirSetting_67);
            switch (SubdirSetting_67) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *DirNames_8 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_64;
                  MR_String _ExtStr_62;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_19, &_ExtStr_62, &SubDirName_64);
                  switch (Search_6) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *DirNames_8 = parse_tree__file_names__make_ngs_dir_names_1_f_0(SubDirName_64);
                      break;
                    case (MR_Integer) 0:
                      *DirNames_8 = parse_tree__file_names__make_gs_dir_names_2_f_0(Globals_5, SubDirName_64);
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_61;
                  MR_String _ExtStr_59;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_19, &_ExtStr_59, &SubDirName_61);
                  *DirNames_8 = parse_tree__file_names__make_ngs_dir_names_1_f_0(SubDirName_61);
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
parse_tree__file_names__fact_table_file_name_return_dirs_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_Word Ext_9,
  MR_String FactTableFileName_10,
  MR_Word * DirNames_11,
  MR_String * FullFileName_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_6_p_0(Globals_7, Ext_9, FactTableFileName_10, DirNames_11, FullFileName_12);
}

void MR_CALL 
parse_tree__file_names__fact_table_file_name_5_p_0(
  MR_Word Globals_6,
  MR_String From_7,
  MR_Word Ext_8,
  MR_String FactTableFileName_9,
  MR_String * FullFileName_10)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(Globals_6, Ext_8, FactTableFileName_9, FullFileName_10);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_Word Ext_8,
  MR_String FactTableFileName_9,
  MR_String * FullFileName_10)
{
  MR_Word _DirNames_11;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_6_p_0(Globals_6, Ext_8, FactTableFileName_9, &_DirNames_11, FullFileName_10);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_9,
  MR_String FactTableFileName_10,
  MR_Word * DirNames_11,
  MR_String * FullFileName_12)
{
  MR_Word FakeModuleName_13;
  MR_String CurDirFileName_14;

  {
    FakeModuleName_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_13, 0) = ((MR_Box) (FactTableFileName_10));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_7, (MR_Integer) 0, Ext_9, FakeModuleName_13, DirNames_11, &CurDirFileName_14);
  if ((*DirNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_12 = CurDirFileName_14;
  else
  {
    MR_Word Components_19;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (CurDirFileName_14));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNames_11, Var_20);
    *FullFileName_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_19);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_full_curdir_create_dirs_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_String * FullFileName_15,
  MR_String * CurDirFileName_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(Globals_10, Prefix_12, Ext_13, ModuleName_14, FullFileName_15, CurDirFileName_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_String Prefix_12,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_String * FullFileName_15,
  MR_String * CurDirFileName_16)
{
  MR_Word FakeModuleName_18;
  MR_Word DirNames_19;
  MR_String BaseFileName_25;
  MR_String BaseNameNoExt_26;

  BaseFileName_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
  BaseNameNoExt_26 = mercury__string__f_43_43_2_f_0(Prefix_12, BaseFileName_25);
  {
    FakeModuleName_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_18, 0) = ((MR_Box) (BaseNameNoExt_26));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_10, (MR_Integer) 0, Ext_13, FakeModuleName_18, &DirNames_19, CurDirFileName_16);
  if ((DirNames_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_15 = *CurDirFileName_16;
  else
  {
    MR_Word Components_29;
    MR_Word Var_30;

    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (*CurDirFileName_16));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_19, Var_30);
    *FullFileName_15 = mercury__dir__relative_path_name_from_components_1_f_0(Components_29);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNames_19);
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_create_dirs_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_String Prefix_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FullFileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_9, Prefix_11, Ext_12, ModuleName_13, FullFileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_String Prefix_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FullFileName_14)
{
  MR_Word FakeModuleName_16;
  MR_Word DirNames_17;
  MR_String CurDirFileName_18;
  MR_String BaseFileName_24;
  MR_String BaseNameNoExt_25;

  BaseFileName_24 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
  BaseNameNoExt_25 = mercury__string__f_43_43_2_f_0(Prefix_11, BaseFileName_24);
  {
    FakeModuleName_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_16, 0) = ((MR_Box) (BaseNameNoExt_25));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_9, (MR_Integer) 0, Ext_12, FakeModuleName_16, &DirNames_17, &CurDirFileName_18);
  if ((DirNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_14 = CurDirFileName_18;
  else
  {
    MR_Word Components_28;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (CurDirFileName_18));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_17, Var_29);
    *FullFileName_14 = mercury__dir__relative_path_name_from_components_1_f_0(Components_28);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNames_17);
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_full_curdir_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_String Prefix_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileName_13,
  MR_String * CurDirFileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_7_p_0(Globals_8, Prefix_10, Ext_11, ModuleName_12, FullFileName_13, CurDirFileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_String Prefix_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileName_13,
  MR_String * CurDirFileName_14)
{
  MR_Word FakeModuleName_15;
  MR_Word DirNames_16;
  MR_String BaseFileName_20;
  MR_String BaseNameNoExt_21;

  BaseFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_12);
  BaseNameNoExt_21 = mercury__string__f_43_43_2_f_0(Prefix_10, BaseFileName_20);
  {
    FakeModuleName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_15, 0) = ((MR_Box) (BaseNameNoExt_21));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_8, (MR_Integer) 0, Ext_11, FakeModuleName_15, &DirNames_16, CurDirFileName_14);
  if ((DirNames_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_13 = *CurDirFileName_14;
  else
  {
    MR_Word Components_24;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (*CurDirFileName_14));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_16, Var_25);
    *FullFileName_13 = mercury__dir__relative_path_name_from_components_1_f_0(Components_24);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_String Prefix_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FullFileName_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_6_p_0(Globals_7, Prefix_9, Ext_10, ModuleName_11, FullFileName_12);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_String Prefix_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FullFileName_12)
{
  MR_Word FakeModuleName_13;
  MR_Word DirNames_14;
  MR_String CurDirFileName_15;
  MR_String BaseFileName_19;
  MR_String BaseNameNoExt_20;

  BaseFileName_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
  BaseNameNoExt_20 = mercury__string__f_43_43_2_f_0(Prefix_9, BaseFileName_19);
  {
    FakeModuleName_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_13, 0) = ((MR_Box) (BaseNameNoExt_20));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_7, (MR_Integer) 0, Ext_10, FakeModuleName_13, &DirNames_14, &CurDirFileName_15);
  if ((DirNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_12 = CurDirFileName_15;
  else
  {
    MR_Word Components_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (CurDirFileName_15));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_14, Var_24);
    *FullFileName_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_23);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_return_dirs_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_String Prefix_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * DirNames_13,
  MR_String * FullFileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_7_p_0(Globals_8, Prefix_10, Ext_11, ModuleName_12, DirNames_13, FullFileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_String Prefix_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_Word * DirNames_13,
  MR_String * FullFileName_14)
{
  MR_Word FakeModuleName_15;
  MR_String CurDirFileName_16;
  MR_String BaseFileName_19;
  MR_String BaseNameNoExt_20;

  BaseFileName_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_12);
  BaseNameNoExt_20 = mercury__string__f_43_43_2_f_0(Prefix_10, BaseFileName_19);
  {
    FakeModuleName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FakeModuleName_15, 0) = ((MR_Box) (BaseNameNoExt_20));
  }
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_8, (MR_Integer) 0, Ext_11, FakeModuleName_15, DirNames_13, &CurDirFileName_16);
  if ((*DirNames_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_14 = CurDirFileName_16;
  else
  {
    MR_Word Components_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (CurDirFileName_16));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNames_13, Var_24);
    *FullFileName_14 = mercury__dir__relative_path_name_from_components_1_f_0(Components_23);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_5_p_0(
  MR_Word Globals_6,
  MR_String From_7,
  MR_Word Ext_8,
  MR_Word ModuleName_9,
  MR_String * FullFileName_10)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(Globals_6, Ext_8, ModuleName_9, FullFileName_10);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_Word Ext_8,
  MR_Word ModuleName_9,
  MR_String * FullFileName_10)
{
  MR_Word DirNames_11;
  MR_String CurDirFileName_12;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_6, (MR_Integer) 1, Ext_8, ModuleName_9, &DirNames_11, &CurDirFileName_12);
  if ((DirNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_10 = CurDirFileName_12;
  else
  {
    MR_Word Components_18;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (CurDirFileName_12));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_11, Var_19);
    *FullFileName_10 = mercury__dir__relative_path_name_from_components_1_f_0(Components_18);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_full_curdir_create_dirs_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileName_13,
  MR_String * CurDirFileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(Globals_9, Ext_11, ModuleName_12, FullFileName_13, CurDirFileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_11,
  MR_Word ModuleName_12,
  MR_String * FullFileName_13,
  MR_String * CurDirFileName_14)
{
  MR_Word DirNames_16;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_9, (MR_Integer) 0, Ext_11, ModuleName_12, &DirNames_16, CurDirFileName_14);
  if ((DirNames_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_13 = *CurDirFileName_14;
  else
  {
    MR_Word Components_24;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (*CurDirFileName_14));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_16, Var_25);
    *FullFileName_13 = mercury__dir__relative_path_name_from_components_1_f_0(Components_24);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNames_16);
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FullFileName_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_7_p_0(Globals_8, Ext_10, ModuleName_11, FullFileName_12);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_99_114_101_97_116_101_95_100_105_114_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FullFileName_12)
{
  MR_Word DirNames_14;
  MR_String CurDirFileName_15;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_8, (MR_Integer) 0, Ext_10, ModuleName_11, &DirNames_14, &CurDirFileName_15);
  if ((DirNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_12 = CurDirFileName_15;
  else
  {
    MR_Word Components_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (CurDirFileName_15));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_14, Var_24);
    *FullFileName_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_23);
  }
  parse_tree__file_names__create_any_dirs_on_path_3_p_0(DirNames_14);
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
parse_tree__file_names__module_name_to_file_name_full_curdir_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_Word Ext_9,
  MR_Word ModuleName_10,
  MR_String * FullFileName_11,
  MR_String * CurDirFileName_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_6_p_0(Globals_7, Ext_9, ModuleName_10, FullFileName_11, CurDirFileName_12);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_102_117_108_108_95_99_117_114_100_105_114_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_9,
  MR_Word ModuleName_10,
  MR_String * FullFileName_11,
  MR_String * CurDirFileName_12)
{
  MR_Word DirNames_13;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_7, (MR_Integer) 0, Ext_9, ModuleName_10, &DirNames_13, CurDirFileName_12);
  if ((DirNames_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_11 = *CurDirFileName_12;
  else
  {
    MR_Word Components_19;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (*CurDirFileName_12));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_13, Var_20);
    *FullFileName_11 = mercury__dir__relative_path_name_from_components_1_f_0(Components_19);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_5_p_0(
  MR_Word Globals_6,
  MR_String From_7,
  MR_Word Ext_8,
  MR_Word ModuleName_9,
  MR_String * FullFileName_10)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(Globals_6, Ext_8, ModuleName_9, FullFileName_10);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word Globals_6,
  MR_Word Ext_8,
  MR_Word ModuleName_9,
  MR_String * FullFileName_10)
{
  MR_Word DirNames_11;
  MR_String CurDirFileName_12;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_6, (MR_Integer) 0, Ext_8, ModuleName_9, &DirNames_11, &CurDirFileName_12);
  if ((DirNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_10 = CurDirFileName_12;
  else
  {
    MR_Word Components_18;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (CurDirFileName_12));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames_11, Var_19);
    *FullFileName_10 = mercury__dir__relative_path_name_from_components_1_f_0(Components_18);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_return_dirs_6_p_0(
  MR_Word Globals_7,
  MR_String From_8,
  MR_Word Ext_9,
  MR_Word ModuleName_10,
  MR_Word * DirNames_11,
  MR_String * FullFileName_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_6_p_0(Globals_7, Ext_9, ModuleName_10, DirNames_11, FullFileName_12);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_114_101_116_117_114_110_95_100_105_114_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_9,
  MR_Word ModuleName_10,
  MR_Word * DirNames_11,
  MR_String * FullFileName_12)
{
  MR_String CurDirFileName_13;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(Globals_7, (MR_Integer) 0, Ext_9, ModuleName_10, DirNames_11, &CurDirFileName_13);
  if ((*DirNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *FullFileName_12 = CurDirFileName_13;
  else
  {
    MR_Word Components_18;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (CurDirFileName_13));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Components_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirNames_11, Var_19);
    *FullFileName_12 = mercury__dir__relative_path_name_from_components_1_f_0(Components_18);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_101_120_116_95_95_91_50_44_32_52_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_11,
  MR_Word Ext_13,
  MR_Word ModuleName_14,
  MR_Word * DirNames_15,
  MR_String * CurDirFileName_16)
{
  MR_String BaseNameNoExt_17;
  MR_String ExtStr_18;

  switch (MR_tag((MR_Word) Ext_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExtCur_173;

        *DirNames_15 = (MR_Word) ((MR_Unsigned) 0U);
        BaseNameNoExt_17 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_14, (MR_String) ".");
        ExtCur_173 = ((MR_Unsigned) ((MR_hl_field(0, Ext_13, (MR_Integer) 0))) & (MR_Integer) 63);
        ExtStr_18 = ((&parse_tree__file_names_vector_common_4[54 + ExtCur_173]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_24 = ((MR_Unsigned) ((MR_hl_field(1, Ext_13, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Word SubdirSetting_25;
        MR_Word ExtCurNgs_174;

        libs__globals__get_subdir_setting_2_p_0(Globals_9, &SubdirSetting_25);
        switch (SubdirSetting_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *DirNames_15 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MR_String SubDirName_27 = ((&parse_tree__file_names_vector_common_4[90 + ExtCurNgs_24]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
              MR_Word Var_109;

              {
                Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_109, 0) = ((MR_Box) (SubDirName_27));
                MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNames_15 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_109));
              }
            }
            break;
        }
        BaseNameNoExt_17 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_14, (MR_String) ".");
        ExtCurNgs_174 = ((MR_Unsigned) ((MR_hl_field(1, Ext_13, (MR_Integer) 0))) & (MR_Integer) 15);
        ExtStr_18 = ((&parse_tree__file_names_vector_common_4[103 + ExtCurNgs_174]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_28 = ((MR_Unsigned) ((MR_hl_field(2, Ext_13, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Word SubdirSetting_39;
        MR_Word ExtCurGs_176;

        libs__globals__get_subdir_setting_2_p_0(Globals_9, &SubdirSetting_39);
        switch (SubdirSetting_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *DirNames_15 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_String SubDirName_38;
              MR_String Grade_59;
              MR_String TargetArch_60;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_67;

              switch (ExtCurGs_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  SubDirName_38 = (MR_String) "bin";
                  break;
                case (MR_Integer) 1:
                  SubDirName_38 = (MR_String) "bin";
                  break;
                case (MR_Integer) 3:
                  {
                    MR_String _ExtStr_119;

                    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 624, &_ExtStr_119);
                    SubDirName_38 = (MR_String) "bin";
                  }
                  break;
                case (MR_Integer) 0:
                  SubDirName_38 = (MR_String) "bin";
                  break;
                case (MR_Integer) 6:
                  SubDirName_38 = (MR_String) "lib";
                  break;
                case (MR_Integer) 7:
                  SubDirName_38 = (MR_String) "lib";
                  break;
                case (MR_Integer) 5:
                  SubDirName_38 = (MR_String) "lib";
                  break;
                case (MR_Integer) 4:
                  SubDirName_38 = (MR_String) "lib";
                  break;
                case (MR_Integer) 8:
                  SubDirName_38 = (MR_String) "inits";
                  break;
                case (MR_Integer) 9:
                  SubDirName_38 = (MR_String) "lib";
                  break;
                case (MR_Integer) 10:
                  {
                    MR_String _ExtStr_135;

                    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 623, &_ExtStr_135);
                    SubDirName_38 = (MR_String) "lib";
                  }
                  break;
                case (MR_Integer) 11:
                  {
                    MR_String _ExtStr_137;

                    libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 622, &_ExtStr_137);
                    SubDirName_38 = (MR_String) "lib";
                  }
                  break;
              }
              libs__compute_grade__grade_directory_component_2_p_0(Globals_9, &Grade_59);
              libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 717, &TargetArch_60);
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (SubDirName_38));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (TargetArch_60));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
              }
              {
                Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_63, 0) = ((MR_Box) (Grade_59));
                MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *DirNames_15 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_63));
              }
            }
            break;
        }
        BaseNameNoExt_17 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_14, (MR_String) ".");
        ExtCurGs_176 = ((MR_Unsigned) ((MR_hl_field(2, Ext_13, (MR_Integer) 0))) & (MR_Integer) 15);
        switch (ExtCurGs_176) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            ExtStr_18 = (MR_String) ".bat";
            break;
          case (MR_Integer) 1:
            ExtStr_18 = (MR_String) ".exe";
            break;
          case (MR_Integer) 3:
            libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 624, &ExtStr_18);
            break;
          case (MR_Integer) 0:
            ExtStr_18 = (MR_String) "";
            break;
          case (MR_Integer) 6:
            ExtStr_18 = (MR_String) ".a";
            break;
          case (MR_Integer) 7:
            ExtStr_18 = (MR_String) ".dll";
            break;
          case (MR_Integer) 5:
            ExtStr_18 = (MR_String) ".\044A";
            break;
          case (MR_Integer) 4:
            ExtStr_18 = (MR_String) ".\044(EXT_FOR_SHARED_LIB)";
            break;
          case (MR_Integer) 8:
            ExtStr_18 = (MR_String) ".init";
            break;
          case (MR_Integer) 9:
            ExtStr_18 = (MR_String) ".jar";
            break;
          case (MR_Integer) 10:
            libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 623, &ExtStr_18);
            break;
          case (MR_Integer) 11:
            libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 622, &ExtStr_18);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurNgsGs_29 = ((MR_Unsigned) ((MR_hl_field(3, Ext_13, (MR_Integer) 1))) & (MR_Integer) 31);
            MR_Word SubdirSetting_44;
            MR_Word ExtCurNgsGs_177;
            MR_String _SubDirName_182;

            libs__globals__get_subdir_setting_2_p_0(Globals_9, &SubdirSetting_44);
            switch (SubdirSetting_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *DirNames_15 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_43;
                  MR_String _ExtStr_42;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(Globals_9, ExtCurNgsGs_29, &_ExtStr_42, &SubDirName_43);
                  *DirNames_15 = parse_tree__file_names__make_gs_dir_names_2_f_0(Globals_9, SubDirName_43);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_41;
                  MR_Word Var_112;
                  MR_String _ExtStr_40;

                  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(Globals_9, ExtCurNgsGs_29, &_ExtStr_40, &SubDirName_41);
                  {
                    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_112, 0) = ((MR_Box) (SubDirName_41));
                    MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirNames_15 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_112));
                  }
                }
                break;
            }
            BaseNameNoExt_17 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_14, (MR_String) ".");
            ExtCurNgsGs_177 = ((MR_Unsigned) ((MR_hl_field(3, Ext_13, (MR_Integer) 1))) & (MR_Integer) 31);
            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(Globals_9, ExtCurNgsGs_177, &ExtStr_18, &_SubDirName_182);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGsJava_30 = ((MR_Unsigned) ((MR_hl_field(3, Ext_13, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word DirNames0_31;
            MR_Word ExtCurNgsGsJava_178;

            parse_tree__file_names__get_java_dir_path_3_p_0(Globals_9, ExtCurNgsGsJava_30, &DirNames0_31);
            *DirNames_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirNames0_31, (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[1])));
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_14, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_17);
            ExtCurNgsGsJava_178 = ((MR_Unsigned) ((MR_hl_field(3, Ext_13, (MR_Integer) 1))) & (MR_Integer) 1);
            switch (ExtCurNgsGsJava_178) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                ExtStr_18 = (MR_String) ".class";
                break;
              case (MR_Integer) 0:
                ExtStr_18 = (MR_String) ".java";
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            switch (Search_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                *DirNames_15 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 0:
                {
                  MR_Word SubdirSetting_49;

                  libs__globals__get_subdir_setting_2_p_0(Globals_9, &SubdirSetting_49);
                  switch (SubdirSetting_49) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *DirNames_15 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 2:
                      *DirNames_15 = parse_tree__file_names__make_gs_dir_names_2_f_0(Globals_9, (MR_String) "mihs");
                      break;
                    case (MR_Integer) 1:
                      *DirNames_15 = (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_2[3]));
                      break;
                  }
                }
                break;
            }
            BaseNameNoExt_17 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_14, (MR_String) ".");
            ExtStr_18 = (MR_String) ".mih";
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ExtCurNgsGsMaxNgs_33 = ((MR_Unsigned) ((MR_hl_field(3, Ext_13, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word SubdirSetting_54;
            MR_Word ExtCurNgsGsMaxNgs_180;

            libs__globals__get_subdir_setting_2_p_0(Globals_9, &SubdirSetting_54);
            switch (SubdirSetting_54) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *DirNames_15 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 2:
                {
                  MR_String SubDirName_53;
                  MR_String _ExtStr_52;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_33, &_ExtStr_52, &SubDirName_53);
                  switch (Search_11) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      *DirNames_15 = parse_tree__file_names__make_ngs_dir_names_1_f_0(SubDirName_53);
                      break;
                    case (MR_Integer) 0:
                      *DirNames_15 = parse_tree__file_names__make_gs_dir_names_2_f_0(Globals_9, SubDirName_53);
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String SubDirName_51;
                  MR_String _ExtStr_50;

                  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(ExtCurNgsGsMaxNgs_33, &_ExtStr_50, &SubDirName_51);
                  *DirNames_15 = parse_tree__file_names__make_ngs_dir_names_1_f_0(SubDirName_51);
                }
                break;
            }
            BaseNameNoExt_17 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_14, (MR_String) ".");
            ExtCurNgsGsMaxNgs_180 = ((MR_Unsigned) ((MR_hl_field(3, Ext_13, (MR_Integer) 1))) & (MR_Integer) 7);
            ExtStr_18 = ((&parse_tree__file_names_vector_common_4[116 + ExtCurNgsGsMaxNgs_180]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
          }
          break;
      }
      break;
  }
  *CurDirFileName_16 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_17, ExtStr_18);
}

static MR_Word MR_CALL 
parse_tree__file_names__make_gs_dir_names_2_f_0(
  MR_Word Globals_4,
  MR_String SubDirName_5)
{
  MR_Word GsSubDirNames_6;
  MR_String Grade_7;
  MR_String TargetArch_8;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_15;

  libs__compute_grade__grade_directory_component_2_p_0(Globals_4, &Grade_7);
  libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 717, &TargetArch_8);
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (SubDirName_5));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) ((MR_String) "Mercury"));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (TargetArch_8));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Grade_7));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_12));
  }
  {
    GsSubDirNames_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GsSubDirNames_6, 0) = ((MR_Box) ((MR_String) "Mercury"));
    MR_hl_field(1, GsSubDirNames_6, 1) = ((MR_Box) (Var_11));
  }
  return GsSubDirNames_6;
}

static MR_Word MR_CALL 
parse_tree__file_names__make_ngs_dir_names_1_f_0(
  MR_String SubDirName_3)
{
  MR_Word NgsSubDirNames_4;
  MR_Word Var_6;

  {
    Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_6, 0) = ((MR_Box) (SubDirName_3));
    MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    NgsSubDirNames_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, NgsSubDirNames_4, 0) = ((MR_Box) ((MR_String) "Mercury"));
    MR_hl_field(1, NgsSubDirNames_4, 1) = ((MR_Box) (Var_6));
  }
  return NgsSubDirNames_4;
}

static void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0(
  MR_Word Ext_4,
  MR_String * Str_5,
  MR_String * Dir_6)
{
  *Str_5 = ((&parse_tree__file_names_vector_common_5[0 + Ext_4]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
  *Dir_6 = ((&parse_tree__file_names_vector_common_5[0 + Ext_4]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_1;
}

void MR_CALL 
parse_tree__file_names__get_java_dir_path_3_p_0(
  MR_Word Globals_4,
  MR_Word ExtCurNgsGsJava_5,
  MR_Word * DirNames_6)
{
  MR_Word SubdirSetting_7;

  libs__globals__get_subdir_setting_2_p_0(Globals_4, &SubdirSetting_7);
  switch (SubdirSetting_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *DirNames_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_String SubDirName_12;
        MR_String Grade_13;
        MR_String TargetArch_14;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;

        switch (ExtCurNgsGsJava_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            SubDirName_12 = (MR_String) "classes";
            break;
          case (MR_Integer) 0:
            SubDirName_12 = (MR_String) "javas";
            break;
        }
        libs__compute_grade__grade_directory_component_2_p_0(Globals_4, &Grade_13);
        libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 717, &TargetArch_14);
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (SubDirName_12));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (TargetArch_14));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
        }
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (Grade_13));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DirNames_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_17));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String SubDirName_9;
        MR_Word Var_24;

        switch (ExtCurNgsGsJava_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            SubDirName_9 = (MR_String) "classes";
            break;
          case (MR_Integer) 0:
            SubDirName_9 = (MR_String) "javas";
            break;
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (SubDirName_9));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *DirNames_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_24));
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
  MR_Word MaybeFileName_8;

  parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_5, &MaybeFileName_8);
  if ((MaybeFileName_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_13;

    Var_13 = parse_tree__source_file_map__default_source_file_name_1_f_0(ModuleName_5);
    *SourceFileName_6 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury/.missing.", Var_13);
  }
  else
    *SourceFileName_6 = ((MR_String) ((MR_hl_field(1, MaybeFileName_8, (MR_Integer) 0))));
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
      switch (((MR_Integer) ((MR_hl_field(3, Ext_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          BaseNameNoExt_6 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_5, (MR_String) ".");
          break;
        case (MR_Integer) 1:
          parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_5, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_6);
          break;
      }
      break;
  }
  return BaseNameNoExt_6;
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
        MR_Word ExtCur_7 = ((MR_Unsigned) ((MR_hl_field(0, Ext_5, (MR_Integer) 0))) & (MR_Integer) 63);

        ExtStr_6 = ((&parse_tree__file_names_vector_common_4[0 + ExtCur_7]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtCurNgs_8 = ((MR_Unsigned) ((MR_hl_field(1, Ext_5, (MR_Integer) 0))) & (MR_Integer) 15);

        ExtStr_6 = ((&parse_tree__file_names_vector_common_4[36 + ExtCurNgs_8]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtCurGs_10 = ((MR_Unsigned) ((MR_hl_field(2, Ext_5, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (ExtCurGs_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            ExtStr_6 = (MR_String) ".bat";
            break;
          case (MR_Integer) 1:
            ExtStr_6 = (MR_String) ".exe";
            break;
          case (MR_Integer) 3:
            libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 624, &ExtStr_6);
            break;
          case (MR_Integer) 0:
            ExtStr_6 = (MR_String) "";
            break;
          case (MR_Integer) 6:
            ExtStr_6 = (MR_String) ".a";
            break;
          case (MR_Integer) 7:
            ExtStr_6 = (MR_String) ".dll";
            break;
          case (MR_Integer) 5:
            ExtStr_6 = (MR_String) ".\044A";
            break;
          case (MR_Integer) 4:
            ExtStr_6 = (MR_String) ".\044(EXT_FOR_SHARED_LIB)";
            break;
          case (MR_Integer) 8:
            ExtStr_6 = (MR_String) ".init";
            break;
          case (MR_Integer) 9:
            ExtStr_6 = (MR_String) ".jar";
            break;
          case (MR_Integer) 10:
            libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 623, &ExtStr_6);
            break;
          case (MR_Integer) 11:
            libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 622, &ExtStr_6);
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtCurNgsGs_11 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, (MR_Integer) 1))) & (MR_Integer) 31);
            MR_String _SubDirName_17;

            parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(Globals_4, ExtCurNgsGs_11, &ExtStr_6, &_SubDirName_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtCurNgsGsJava_12 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (ExtCurNgsGsJava_12) {
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
        case (MR_Integer) 2:
          ExtStr_6 = (MR_String) ".mih";
          break;
        case (MR_Integer) 3:
          {
            MR_Word ExtCurNgsGsMaxNgs_14 = ((MR_Unsigned) ((MR_hl_field(3, Ext_5, (MR_Integer) 1))) & (MR_Integer) 7);

            ExtStr_6 = ((&parse_tree__file_names_vector_common_4[49 + ExtCurNgsGsMaxNgs_14]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
          }
          break;
      }
      break;
  }
  return ExtStr_6;
}

static void MR_CALL 
parse_tree__file_names__ext_cur_ngs_gs_extension_dir_4_p_0(
  MR_Word Globals_5,
  MR_Word Ext_6,
  MR_String * Str_7,
  MR_String * Dir_8)
{
  switch (Ext_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 19:
      {
        *Str_7 = (MR_String) ".analysis_date";
        *Dir_8 = (MR_String) "analysis_dates";
      }
      break;
    case (MR_Integer) 20:
      {
        *Str_7 = (MR_String) ".analysis_status";
        *Dir_8 = (MR_String) "analysis_statuss";
      }
      break;
    case (MR_Integer) 7:
      {
        *Str_7 = (MR_String) "_init.c";
        *Dir_8 = (MR_String) "cs";
      }
      break;
    case (MR_Integer) 14:
      {
        *Str_7 = (MR_String) "_init.\044O";
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 15:
      {
        *Str_7 = (MR_String) "_init.o";
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 17:
      {
        MR_String Str0_9;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 571, &Str0_9);
        *Str_7 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_9);
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 16:
      {
        *Str_7 = (MR_String) "_init.pic_o";
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 18:
      {
        MR_String Str0_16;

        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 572, &Str0_16);
        *Str_7 = mercury__string__f_43_43_2_f_0((MR_String) "_init", Str0_16);
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 22:
      {
        *Str_7 = (MR_String) ".track_flags";
        *Dir_8 = (MR_String) "track_flags";
      }
      break;
    case (MR_Integer) 21:
      {
        *Str_7 = (MR_String) ".used";
        *Dir_8 = (MR_String) "useds";
      }
      break;
    case (MR_Integer) 9:
      {
        *Str_7 = (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)";
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 8:
      {
        *Str_7 = (MR_String) ".\044O";
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 10:
      {
        *Str_7 = (MR_String) ".o";
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 12:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 571, Str_7);
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 11:
      {
        *Str_7 = (MR_String) ".pic_o";
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 13:
      {
        libs__globals__lookup_string_option_3_p_0(Globals_5, (MR_Integer) 572, Str_7);
        *Dir_8 = (MR_String) "os";
      }
      break;
    case (MR_Integer) 0:
      {
        *Str_7 = (MR_String) ".optdate";
        *Dir_8 = (MR_String) "optdates";
      }
      break;
    case (MR_Integer) 1:
      {
        *Str_7 = (MR_String) ".trans_opt_date";
        *Dir_8 = (MR_String) "trans_opt_dates";
      }
      break;
    case (MR_Integer) 2:
      {
        *Str_7 = (MR_String) ".c";
        *Dir_8 = (MR_String) "cs";
      }
      break;
    case (MR_Integer) 3:
      {
        *Str_7 = (MR_String) ".cs";
        *Dir_8 = (MR_String) "css";
      }
      break;
    case (MR_Integer) 4:
      {
        *Str_7 = (MR_String) ".c_date";
        *Dir_8 = (MR_String) "c_dates";
      }
      break;
    case (MR_Integer) 5:
      {
        *Str_7 = (MR_String) ".cs_date";
        *Dir_8 = (MR_String) "cs_dates";
      }
      break;
    case (MR_Integer) 6:
      {
        *Str_7 = (MR_String) ".java_date";
        *Dir_8 = (MR_String) "java_dates";
      }
      break;
  }
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
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_java_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_for_search_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0);
}

void mercury__parse_tree__file_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__file_names__required_init(void)
{
	parse_tree__file_names__user_init_pred_120_0();
	parse_tree__file_names__user_init_pred_130_0();
	parse_tree__file_names__user_init_pred_133_0();
	parse_tree__file_names__user_init_pred_134_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__file_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.file_names.
