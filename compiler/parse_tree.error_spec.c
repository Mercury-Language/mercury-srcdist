/*
** Automatically generated from `error_spec.m'
** by the Mercury compiler,
** version rotd-2022-12-04
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


// :- module parse_tree.error_spec.
// :- implementation.

/*
INIT mercury__parse_tree__error_spec__init
ENDINIT
*/

#include "parse_tree.error_spec.mih"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_spec__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_0;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_1;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_2;

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_actual_severity_0[3];

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_actual_severity_0[3];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_actual_severity_0[3];

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_0[2];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_0[2];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_1[1];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_1[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_1;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_2[2];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_2[2];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_2;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__maybe__ti_maybe_1term_context__type_ctor_info_term_context_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_3[4];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_3[4];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_0_3[4];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_3;

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_3[1];

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_msg_0[4];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_msg_0[4];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_msg_0[4];

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_0[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_1[3];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_component_0_1[3];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_1;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_2[2];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_component_0_2[2];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_2;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_3[2];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_3;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_4[1];

static const MR_TypeClassConstraint_1Struct parse_tree__error_spec__parse_tree__error_spec__exist_tc_constr_error_msg_component_0_4_1;

static const MR_TypeClassConstraint parse_tree__error_spec__parse_tree__error_spec__exist_tc_constrs_error_msg_component_0_4[1];

static const MR_DuExistLocn parse_tree__error_spec__parse_tree__error_spec__exist_locns_error_msg_component_0_4[1];

static const MR_DuExistInfo parse_tree__error_spec__parse_tree__error_spec__exist_info_error_msg_component_0_4;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_4;

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_3[2];

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_msg_component_0[4];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_msg_component_0[5];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_msg_component_0[5];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_0;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_1;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_2;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_3;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_4;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_5;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_6;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_7;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_8;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_9;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_10;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_11;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_12;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_13;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_14;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_phase_0_15[1];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_phase_0_15[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_15;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_16;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_17;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_18;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_19;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_phase_0_20[1];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_phase_0_20[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_20;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_21;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_22;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_23;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_24;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_25;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_26;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_27;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_28;

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_0[27];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_2[1];

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_phase_0[3];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_phase_0[29];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_phase_0[29];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_0;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_1;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_2;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__maybe__ti_maybe_1parse_tree__error_spec__type_ctor_info_error_severity_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_severity_0_3[4];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_severity_0_3[4];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_severity_0_3[4];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_3;

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_severity_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_severity_0_1[1];

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_severity_0[2];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_severity_0[4];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_severity_0[4];

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_0[4];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_0[4];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_1[5];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_1[5];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_1;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_2[4];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_2[4];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_2;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_3[6];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_3[6];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_spec_0_3[6];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_3;

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_3[1];

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_spec_0[4];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_spec_0[4];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_spec_0[4];

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_0[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_1[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_1;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_2[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_2;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_3[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_3;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_4[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_4;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_5[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_5;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_6;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_7;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_8[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_8;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_9[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_9;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_10[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_10;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_11[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_11;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_12[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_12;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_13[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_13;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_14[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_14;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_15[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_15;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_16[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_16;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_17[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_17;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_18[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_18;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_19[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_19;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_20[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_20;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_21[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_21;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_22[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_22;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_23[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_23;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_24[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_24;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_25[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_25;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_26[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_26;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_27[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_27;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_28[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_28;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_29[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_29;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_30[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_30;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_31[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_31;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_32[1];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_32[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_32;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_33[1];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_33[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_33;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_34[1];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_34[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_34;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_35[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_35;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_36[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_36;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_37[2];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_37[2];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_37;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_38[2];

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_38[2];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_38;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_39;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_40[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_40;

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_41;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_42[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_42;

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_0[4];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_3[37];

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_format_piece_0[4];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_format_piece_0[43];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_format_piece_0[43];

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_lp_piece_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_lp_piece_kind_0[2];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_lp_piece_kind_0[2];

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_0;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_1;

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_maybe_always_treat_as_first_0[2];

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_maybe_always_treat_as_first_0[2];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_maybe_always_treat_as_first_0[2];

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_maybe_error_specs_1_0[1];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_maybe_error_specs_1_1[2];

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_1;

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_maybe_error_specs_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_maybe_error_specs_1_1[1];

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_maybe_error_specs_1[2];

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_maybe_error_specs_1[2];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_maybe_error_specs_1[2];

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_0;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_1;

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_mode_report_control_0[2];

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_mode_report_control_0[2];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_mode_report_control_0[2];

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_rp_piece_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_rp_piece_kind_0[2];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_rp_piece_kind_0[2];

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_0;

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_1;

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_verbose_always_or_once_0[2];

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_verbose_always_or_once_0[2];

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_verbose_always_or_once_0[2];

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__type_class_id_var_names_print_anything_1[1];

static const MR_TypeClassMethod parse_tree__error_spec__parse_tree__error_spec__type_class_id_method_ids_print_anything_1[1];

static const MR_TypeClassId parse_tree__error_spec__parse_tree__error_spec__type_class_id_print_anything_1;

static void MR_CALL 
parse_tree__error_spec__diff_seq_line_to_pieces_2_p_0(
  MR_Word Diff_3,
  MR_Word * Pieces_4);

static void MR_CALL 
parse_tree__error_spec__change_hunk_to_pieces_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____actual_severity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____actual_severity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____error_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_msg_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____error_msg_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_phase_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____error_phase_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_severity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____error_severity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____error_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____format_piece_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____format_piece_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____lp_piece_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____lp_piece_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____maybe_always_treat_as_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____maybe_always_treat_as_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____maybe_error_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__error_spec____Compare____maybe_error_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____mode_report_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____mode_report_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____rp_piece_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____rp_piece_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____verbose_always_or_once_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____verbose_always_or_once_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____warning_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__error_spec____Compare____warning_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_spec_scalar_common_1[13][2];

static /* final */ const MR_Box parse_tree__error_spec_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__error_spec_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__error_spec_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__error_spec_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_spec_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__error_spec_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[11])))
  },
};

static /* final */ const MR_Box parse_tree__error_spec_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__error_spec_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__error_spec__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__error_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__error_spec_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__error_spec_scalar_common_3[0])),
    ((MR_Box) (parse_tree__error_spec__change_hunk_to_pieces_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_spec__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_diff_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_actual_severity_0[3] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_actual_severity_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_actual_severity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_spec____Unify____actual_severity_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____actual_severity_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "actual_severity",
  { parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_actual_severity_0 },
  { parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_actual_severity_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_actual_severity_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_0[2] = {
  (MR_String) "simplest_context",
  (MR_String) "simplest_pieces"
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_0 = {
  (MR_String) "simplest_msg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_0,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_1[1] = {
  (MR_String) "simplestnc_pieces"
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_1 = {
  (MR_String) "simplest_no_context_msg",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_1,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_2[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_2 = {
  (MR_String) "simple_msg",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_2,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__maybe__ti_maybe_1term_context__type_ctor_info_term_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_3[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__maybe__ti_maybe_1term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_maybe_always_treat_as_first_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_3[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_0_3[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_3 = {
  (MR_String) "error_msg",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_0_3,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_msg_0_3,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_0
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_1
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_2[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_2
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_3[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_3
};

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_msg_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_msg_0[4] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_msg_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_spec____Unify____error_msg_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____error_msg_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "error_msg",
  { parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_msg_0 },
  { parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_msg_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_msg_0,

};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_0 = {
  (MR_String) "always",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_component_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_component_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 10
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_1 = {
  (MR_String) "option_is_set",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_1,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_component_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_2[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_verbose_always_or_once_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_component_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_2 = {
  (MR_String) "verbose_only",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_2,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_error_msg_component_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_3 = {
  (MR_String) "verbose_and_nonverbose",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 513)
};

static const MR_TypeClassConstraint_1Struct parse_tree__error_spec__parse_tree__error_spec__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_spec__parse_tree__error_spec__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_TypeClassConstraint parse_tree__error_spec__parse_tree__error_spec__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) (&parse_tree__error_spec__parse_tree__error_spec__exist_tc_constr_error_msg_component_0_4_1)
};

static const MR_DuExistLocn parse_tree__error_spec__parse_tree__error_spec__exist_locns_error_msg_component_0_4[1] = {
  {
    INT16_C(0),
    INT16_C(1)
  }
};

static const MR_DuExistInfo parse_tree__error_spec__parse_tree__error_spec__exist_info_error_msg_component_0_4 = {
  INT16_C(0),
  INT16_C(1),
  INT16_C(1),
  parse_tree__error_spec__parse_tree__error_spec__exist_locns_error_msg_component_0_4,
  parse_tree__error_spec__parse_tree__error_spec__exist_tc_constrs_error_msg_component_0_4
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_4 = {
  (MR_String) "print_anything",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_msg_component_0_4,
  NULL,
  NULL,
  &parse_tree__error_spec__parse_tree__error_spec__exist_info_error_msg_component_0_4,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_0
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_1
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_2
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_4
};

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_msg_component_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_msg_component_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_msg_component_0_2
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_spec____Unify____error_msg_component_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____error_msg_component_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "error_msg_component",
  { parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_msg_component_0 },
  { parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_msg_component_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_msg_component_0,

};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_0 = {
  (MR_String) "phase_options",
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

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_1 = {
  (MR_String) "phase_check_libs",
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

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_2 = {
  (MR_String) "phase_make_target",
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

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_3 = {
  (MR_String) "phase_read_files",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_4 = {
  (MR_String) "phase_module_name",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_5 = {
  (MR_String) "phase_term_to_parse_tree",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_6 = {
  (MR_String) "phase_type_inst_mode_check_invalid_type",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_7 = {
  (MR_String) "phase_type_inst_mode_check_invalid_inst_mode",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_8 = {
  (MR_String) "phase_type_inst_mode_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_9 = {
  (MR_String) "phase_type_repn",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_10 = {
  (MR_String) "phase_parse_tree_to_hlds",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 10,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_11 = {
  (MR_String) "phase_expand_types",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 11,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_12 = {
  (MR_String) "phase_type_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 12,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_13 = {
  (MR_String) "phase_inst_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 13,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_14 = {
  (MR_String) "phase_polymorphism",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 14,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_phase_0_15[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_mode_report_control_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_phase_0_15[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_15 = {
  (MR_String) "phase_mode_check",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(15),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_phase_0_15,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_error_phase_0_15,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_16 = {
  (MR_String) "phase_purity_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 15,
  INT32_C(16),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_17 = {
  (MR_String) "phase_detism_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 16,
  INT32_C(17),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_18 = {
  (MR_String) "phase_fact_table_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 17,
  INT32_C(18),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_19 = {
  (MR_String) "phase_oisu_check",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 18,
  INT32_C(19),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_phase_0_20[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_mode_report_control_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_phase_0_20[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_20 = {
  (MR_String) "phase_simplify",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(20),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_phase_0_20,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_error_phase_0_20,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_21 = {
  (MR_String) "phase_direct_arg_in_out",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 19,
  INT32_C(21),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_22 = {
  (MR_String) "phase_style",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 20,
  INT32_C(22),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_23 = {
  (MR_String) "phase_dead_code",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 21,
  INT32_C(23),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_24 = {
  (MR_String) "phase_termination_analysis",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 22,
  INT32_C(24),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_25 = {
  (MR_String) "phase_accumulator_intro",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 23,
  INT32_C(25),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_26 = {
  (MR_String) "phase_auto_parallelism",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 24,
  INT32_C(26),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_27 = {
  (MR_String) "phase_interface_gen",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 25,
  INT32_C(27),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_28 = {
  (MR_String) "phase_code_gen",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 26,
  INT32_C(28),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_0[27] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_1,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_4,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_5,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_6,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_7,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_8,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_9,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_10,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_11,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_12,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_13,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_14,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_16,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_17,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_18,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_19,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_21,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_22,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_23,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_24,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_25,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_26,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_27,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_28
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_15
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_20
};

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_phase_0[3] = {
  {
    UINT32_C(27),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_phase_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_phase_0[29] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_25,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_26,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_1,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_28,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_23,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_17,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_21,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_11,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_18,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_13,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_27,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_15,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_4,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_19,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_10,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_14,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_16,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_20,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_22,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_5,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_24,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_12,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_8,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_7,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_6,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_phase_0_9
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_phase_0[29] = {
  (MR_Integer) 15,
  (MR_Integer) 2,
  (MR_Integer) 11,
  (MR_Integer) 19,
  (MR_Integer) 13,
  (MR_Integer) 22,
  (MR_Integer) 27,
  (MR_Integer) 26,
  (MR_Integer) 25,
  (MR_Integer) 28,
  (MR_Integer) 16,
  (MR_Integer) 7,
  (MR_Integer) 24,
  (MR_Integer) 9,
  (MR_Integer) 17,
  (MR_Integer) 12,
  (MR_Integer) 18,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 14,
  (MR_Integer) 20,
  (MR_Integer) 6,
  (MR_Integer) 21,
  (MR_Integer) 4,
  (MR_Integer) 23,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_phase_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_spec____Unify____error_phase_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____error_phase_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "error_phase",
  { parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_phase_0 },
  { parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_phase_0 },
  (MR_Integer) 29,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_phase_0,

};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_0 = {
  (MR_String) "severity_error",
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

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_1 = {
  (MR_String) "severity_warning",
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

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_2 = {
  (MR_String) "severity_informational",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__maybe__ti_maybe_1parse_tree__error_spec__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__maybe__ti_maybe_1parse_tree__error_spec__type_ctor_info_error_severity_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_severity_0_3[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 10
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_3 = {
  (MR_String) "severity_conditional",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_severity_0_3,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_severity_0_3,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_error_severity_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_1,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_2
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_3
};

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_severity_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_severity_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_severity_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_severity_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_spec____Unify____error_severity_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____error_severity_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "error_severity",
  { parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_severity_0 },
  { parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_severity_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_severity_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_phase_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_0[4] = {
  (MR_String) "error_id",
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_0 = {
  (MR_String) "error_spec",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_0,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_1[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_phase_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_1[5] = {
  (MR_String) "simp_id",
  (MR_String) "simp_spec_severity",
  (MR_String) "simp_spec_phase",
  (MR_String) "simp_spec_context",
  (MR_String) "simp_spec_pieces"
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_1 = {
  (MR_String) "simplest_spec",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_1,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_2[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_phase_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_2[4] = {
  (MR_String) "simpnc_id",
  (MR_String) "simpnc_spec_severity",
  (MR_String) "simpnc_spec_phase",
  (MR_String) "simpnc_spec_pieces"
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_2 = {
  (MR_String) "simplest_no_context_spec",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_2,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_3[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_phase_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_msg_0)
};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_3[6] = {
  (MR_String) "cond_id",
  (MR_String) "cond_spec_option",
  (MR_String) "cond_spec_value",
  (MR_String) "cond_spec_severity",
  (MR_String) "cond_spec_phase",
  (MR_String) "cond_spec_msgs"
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_error_spec_0_3[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 10
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_3 = {
  (MR_String) "conditional_spec",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  parse_tree__error_spec__parse_tree__error_spec__field_types_error_spec_0_3,
  parse_tree__error_spec__parse_tree__error_spec__field_names_error_spec_0_3,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_error_spec_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_0
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_1[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_1
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_2[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_2
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_3[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_3
};

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_spec_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_error_spec_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_spec_0[4] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_error_spec_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_spec_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_spec____Unify____error_spec_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____error_spec_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "error_spec",
  { parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_error_spec_0 },
  { parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_error_spec_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_error_spec_0,

};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_0 = {
  (MR_String) "invis_order_default_start",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_1 = {
  (MR_String) "fixed",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_2 = {
  (MR_String) "quote",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_3 = {
  (MR_String) "int_fixed",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_4 = {
  (MR_String) "int_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_5 = {
  (MR_String) "nth_fixed",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_6 = {
  (MR_String) "lower_case_next_if_not_first",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_7 = {
  (MR_String) "treat_next_as_first",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_8 = {
  (MR_String) "prefix",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(8),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_9[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_9 = {
  (MR_String) "suffix",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(9),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_10[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_10 = {
  (MR_String) "words",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(10),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_11 = {
  (MR_String) "words_quote",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(11),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_12[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_12 = {
  (MR_String) "qual_sym_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(12),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_13[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_13 = {
  (MR_String) "unqual_sym_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(13),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_13,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_14[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_14 = {
  (MR_String) "name_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(14),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_14,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_15[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_15 = {
  (MR_String) "qual_sym_name_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(15),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_16[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_16 = {
  (MR_String) "unqual_sym_name_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(16),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_17[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_17 = {
  (MR_String) "qual_pf_sym_name_pred_form_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(17),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_17,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_18[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_18 = {
  (MR_String) "unqual_pf_sym_name_pred_form_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(18),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_18,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_19[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_19 = {
  (MR_String) "qual_pf_sym_name_user_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(19),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_19,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_20[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_20 = {
  (MR_String) "unqual_pf_sym_name_user_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(20),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_20,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_21[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_21 = {
  (MR_String) "qual_type_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 17,
  INT32_C(21),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_21,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_22[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_22 = {
  (MR_String) "unqual_type_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 18,
  INT32_C(22),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_22,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_23[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_23 = {
  (MR_String) "qual_inst_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 19,
  INT32_C(23),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_23,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_24[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_24 = {
  (MR_String) "unqual_inst_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 20,
  INT32_C(24),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_24,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_25[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_25 = {
  (MR_String) "qual_mode_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 21,
  INT32_C(25),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_25,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_26[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_26 = {
  (MR_String) "unqual_mode_ctor",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 22,
  INT32_C(26),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_26,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_27[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_27 = {
  (MR_String) "qual_class_id",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 23,
  INT32_C(27),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_27,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_28[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_28 = {
  (MR_String) "unqual_class_id",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 24,
  INT32_C(28),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_28,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_29[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_29 = {
  (MR_String) "qual_cons_id_and_maybe_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 25,
  INT32_C(29),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_29,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_30[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_30 = {
  (MR_String) "unqual_cons_id_and_maybe_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 26,
  INT32_C(30),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_30,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_31[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_31 = {
  (MR_String) "qual_top_ctor_of_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 27,
  INT32_C(31),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_31,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_32[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_32[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_32 = {
  (MR_String) "p_or_f",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 28,
  INT32_C(32),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_32,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_32,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_33[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_33[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_33 = {
  (MR_String) "purity_desc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 29,
  INT32_C(33),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_33,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_33,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_34[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_34[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_34 = {
  (MR_String) "a_purity_desc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 30,
  INT32_C(34),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_34,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_34,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_35[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_35 = {
  (MR_String) "decl",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 31,
  INT32_C(35),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_35,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_36[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_36 = {
  (MR_String) "pragma_decl",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 32,
  INT32_C(36),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_36,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_37[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_lp_piece_kind_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_37[2] = {
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

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_37 = {
  (MR_String) "left_paren_maybe_nl_inc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 33,
  INT32_C(37),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_37,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_37,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_38[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_rp_piece_kind_0)
};

static const MR_DuArgLocn parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_38[2] = {
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

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_38 = {
  (MR_String) "maybe_nl_dec_right_paren",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 34,
  INT32_C(38),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_38,
  NULL,
  parse_tree__error_spec__parse_tree__error_spec__field_locns_format_piece_0_38,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_39 = {
  (MR_String) "nl",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(39),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_40[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_40 = {
  (MR_String) "nl_indent_delta",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 35,
  INT32_C(40),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_40,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_41 = {
  (MR_String) "blank_line",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(41),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_42[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_42 = {
  (MR_String) "invis_order_default_end",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 36,
  INT32_C(42),
  parse_tree__error_spec__parse_tree__error_spec__field_types_format_piece_0_42,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_0[4] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_6,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_7,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_39,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_41
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_1[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_0
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_2[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_1
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_3[37] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_4,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_5,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_8,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_9,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_10,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_11,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_12,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_13,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_14,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_15,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_16,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_17,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_18,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_19,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_20,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_21,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_22,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_23,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_24,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_25,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_26,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_27,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_28,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_29,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_30,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_31,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_32,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_33,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_34,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_35,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_36,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_37,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_38,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_40,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_42
};

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_format_piece_0[4] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(37),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_format_piece_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_format_piece_0[43] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_34,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_41,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_35,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_1,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_3,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_4,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_42,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_37,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_6,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_38,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_14,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_39,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_40,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_5,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_32,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_36,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_8,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_33,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_27,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_29,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_23,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_25,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_17,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_19,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_12,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_15,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_31,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_21,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_2,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_9,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_7,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_28,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_30,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_24,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_26,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_18,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_20,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_13,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_16,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_22,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_10,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_format_piece_0_11
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_format_piece_0[43] = {
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 29,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 14,
  (MR_Integer) 9,
  (MR_Integer) 31,
  (MR_Integer) 17,
  (MR_Integer) 30,
  (MR_Integer) 41,
  (MR_Integer) 42,
  (MR_Integer) 25,
  (MR_Integer) 38,
  (MR_Integer) 11,
  (MR_Integer) 26,
  (MR_Integer) 39,
  (MR_Integer) 23,
  (MR_Integer) 36,
  (MR_Integer) 24,
  (MR_Integer) 37,
  (MR_Integer) 28,
  (MR_Integer) 40,
  (MR_Integer) 21,
  (MR_Integer) 34,
  (MR_Integer) 22,
  (MR_Integer) 35,
  (MR_Integer) 19,
  (MR_Integer) 32,
  (MR_Integer) 20,
  (MR_Integer) 33,
  (MR_Integer) 27,
  (MR_Integer) 15,
  (MR_Integer) 18,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 1,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_spec____Unify____format_piece_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____format_piece_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "format_piece",
  { parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_format_piece_0 },
  { parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_format_piece_0 },
  (MR_Integer) 43,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_format_piece_0,

};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_0 = {
  (MR_String) "lp_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_1 = {
  (MR_String) "lp_suffix",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_lp_piece_kind_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_lp_piece_kind_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_lp_piece_kind_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_lp_piece_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_lp_piece_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_spec____Unify____lp_piece_kind_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____lp_piece_kind_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "lp_piece_kind",
  { parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_lp_piece_kind_0 },
  { parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_lp_piece_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_lp_piece_kind_0,

};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_0 = {
  (MR_String) "always_treat_as_first",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_1 = {
  (MR_String) "treat_based_on_posn",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_maybe_always_treat_as_first_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_maybe_always_treat_as_first_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_maybe_always_treat_as_first_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_maybe_always_treat_as_first_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_maybe_always_treat_as_first_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_spec____Unify____maybe_always_treat_as_first_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____maybe_always_treat_as_first_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "maybe_always_treat_as_first",
  { parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_maybe_always_treat_as_first_0 },
  { parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_maybe_always_treat_as_first_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_maybe_always_treat_as_first_0,

};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_maybe_error_specs_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_0 = {
  (MR_String) "ok_no_spec",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__error_spec__parse_tree__error_spec__field_types_maybe_error_specs_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__error_spec__parse_tree__error_spec__field_types_maybe_error_specs_1_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_1 = {
  (MR_String) "error_specs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__error_spec__parse_tree__error_spec__field_types_maybe_error_specs_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_maybe_error_specs_1_0[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_0
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_maybe_error_specs_1_1[1] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_1
};

static const MR_DuPtagLayout parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_maybe_error_specs_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_maybe_error_specs_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__error_spec__parse_tree__error_spec__du_stag_ordered_maybe_error_specs_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_maybe_error_specs_1[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_1,
  &parse_tree__error_spec__parse_tree__error_spec__du_functor_desc_maybe_error_specs_1_0
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_maybe_error_specs_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_maybe_error_specs_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_spec____Unify____maybe_error_specs_1_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____maybe_error_specs_1_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "maybe_error_specs",
  { parse_tree__error_spec__parse_tree__error_spec__du_name_ordered_maybe_error_specs_1 },
  { parse_tree__error_spec__parse_tree__error_spec__du_ptag_ordered_maybe_error_specs_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_maybe_error_specs_1,

};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_mode_report_control_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_mode_report_control_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_mode_report_control_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_spec____Unify____mode_report_control_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____mode_report_control_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "mode_report_control",
  { parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_mode_report_control_0 },
  { parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_mode_report_control_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_mode_report_control_0,

};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_0 = {
  (MR_String) "rp_plain",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_1 = {
  (MR_String) "rp_prefix",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_rp_piece_kind_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_rp_piece_kind_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_rp_piece_kind_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_rp_piece_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_rp_piece_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_spec____Unify____rp_piece_kind_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____rp_piece_kind_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "rp_piece_kind",
  { parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_rp_piece_kind_0 },
  { parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_rp_piece_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_rp_piece_kind_0,

};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_0 = {
  (MR_String) "verbose_always",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_1 = {
  (MR_String) "verbose_once",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_spec__parse_tree__error_spec__enum_functor_desc_verbose_always_or_once_0_1
};

static const MR_Integer parse_tree__error_spec__parse_tree__error_spec__functor_number_map_verbose_always_or_once_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_verbose_always_or_once_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_spec____Unify____verbose_always_or_once_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____verbose_always_or_once_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "verbose_always_or_once",
  { parse_tree__error_spec__parse_tree__error_spec__enum_name_ordered_verbose_always_or_once_0 },
  { parse_tree__error_spec__parse_tree__error_spec__enum_ordinal_ordered_verbose_always_or_once_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__error_spec__parse_tree__error_spec__functor_number_map_verbose_always_or_once_0,

};

const MR_TypeCtorInfo_Struct parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warning_spec_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_spec____Unify____warning_spec_0_0_10001)),
  ((MR_Box) (parse_tree__error_spec____Compare____warning_spec_0_0_10001)),
  (MR_String) "parse_tree.error_spec",
  (MR_String) "warning_spec",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_ConstString parse_tree__error_spec__parse_tree__error_spec__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod parse_tree__error_spec__parse_tree__error_spec__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    MR_PREDICATE
  }
};

static const MR_TypeClassId parse_tree__error_spec__parse_tree__error_spec__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_spec",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_spec__parse_tree__error_spec__type_class_id_var_names_print_anything_1,
  parse_tree__error_spec__parse_tree__error_spec__type_class_id_method_ids_print_anything_1
};

const MR_TypeClassDeclStruct parse_tree__error_spec__parse_tree__error_spec__type_class_decl_print_anything_1 = {
  &parse_tree__error_spec__parse_tree__error_spec__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
parse_tree__error_spec____Compare____warning_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  parse_tree__error_spec____Compare____error_spec_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____warning_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = parse_tree__error_spec____Unify____error_spec_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____verbose_always_or_once_0_0(
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
parse_tree__error_spec____Unify____verbose_always_or_once_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____rp_piece_kind_0_0(
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
parse_tree__error_spec____Unify____rp_piece_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____mode_report_control_0_0(
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
parse_tree__error_spec____Unify____mode_report_control_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____maybe_error_specs_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      parse_tree__error_spec____Compare____error_spec_0_0(&SubResult1_14, Var_23, ArgY1_13);
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY2_16)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_24 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_24, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____maybe_error_specs_1_0(
  MR_Word TypeInfo_for_T_11,
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____maybe_always_treat_as_first_0_0(
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
parse_tree__error_spec____Unify____maybe_always_treat_as_first_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____lp_piece_kind_0_0(
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
parse_tree__error_spec____Unify____lp_piece_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____format_piece_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_91 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_92 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_91 == CastY_92);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    parse_tree__error_spec____Index____format_piece_0_0(HeadVar__2_2, &IndexX_4);
    parse_tree__error_spec____Index____format_piece_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_8;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                succeeded = (ArgX1_7 < ArgY1_8);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX1_7 > ArgY1_8);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_10;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_9, ArgY1_10);
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_12;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_12 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_11, ArgY1_12);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_14;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_14 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_13 < ArgY1_14);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_13 > ArgY1_14);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_16;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_15 < ArgY1_16);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_15 > ArgY1_16);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_18;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_17 < ArgY1_18);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_17 > ArgY1_18);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_20;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_19, ArgY1_20);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_22;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_21, ArgY1_22);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_24;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_24 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_23, ArgY1_24);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_26;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_25, ArgY1_26);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_28;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mdbcomp__sym_name____Compare____sym_name_0_0(&CompareResult_6, ArgX1_27, ArgY1_28);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_30;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mdbcomp__sym_name____Compare____sym_name_0_0(&CompareResult_6, ArgX1_29, ArgY1_30);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_32;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____name_arity_0_0(&CompareResult_6, ArgX1_31, ArgY1_32);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_34;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____sym_name_arity_0_0(&CompareResult_6, ArgX1_33, ArgY1_34);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_36;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____sym_name_arity_0_0(&CompareResult_6, ArgX1_35, ArgY1_36);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_38;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(&CompareResult_6, ArgX1_37, ArgY1_38);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_40;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(&CompareResult_6, ArgX1_39, ArgY1_40);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_42;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____pred_pf_name_arity_0_0(&CompareResult_6, ArgX1_41, ArgY1_42);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_44;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____pred_pf_name_arity_0_0(&CompareResult_6, ArgX1_43, ArgY1_44);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_46;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 17)));
                  if (succeeded)
                  {
                    ArgY1_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____type_ctor_0_0(&CompareResult_6, ArgX1_45, ArgY1_46);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_48;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 18)));
                  if (succeeded)
                  {
                    ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____type_ctor_0_0(&CompareResult_6, ArgX1_47, ArgY1_48);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_50;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 19)));
                  if (succeeded)
                  {
                    ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____inst_ctor_0_0(&CompareResult_6, ArgX1_49, ArgY1_50);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 20:
                {
                  MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_52;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 20)));
                  if (succeeded)
                  {
                    ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____inst_ctor_0_0(&CompareResult_6, ArgX1_51, ArgY1_52);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 21:
                {
                  MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_54;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 21)));
                  if (succeeded)
                  {
                    ArgY1_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____mode_ctor_0_0(&CompareResult_6, ArgX1_53, ArgY1_54);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 22:
                {
                  MR_Word ArgX1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_56;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 22)));
                  if (succeeded)
                  {
                    ArgY1_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____mode_ctor_0_0(&CompareResult_6, ArgX1_55, ArgY1_56);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 23:
                {
                  MR_Word ArgX1_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_58;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 23)));
                  if (succeeded)
                  {
                    ArgY1_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____class_id_0_0(&CompareResult_6, ArgX1_57, ArgY1_58);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 24:
                {
                  MR_Word ArgX1_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_60;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 24)));
                  if (succeeded)
                  {
                    ArgY1_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____class_id_0_0(&CompareResult_6, ArgX1_59, ArgY1_60);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 25:
                {
                  MR_Word ArgX1_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_62;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 25)));
                  if (succeeded)
                  {
                    ArgY1_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____cons_id_0_0(&CompareResult_6, ArgX1_61, ArgY1_62);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 26:
                {
                  MR_Word ArgX1_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_64;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 26)));
                  if (succeeded)
                  {
                    ArgY1_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____cons_id_0_0(&CompareResult_6, ArgX1_63, ArgY1_64);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 27:
                {
                  MR_Word ArgX1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_66;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 27)));
                  if (succeeded)
                  {
                    ArgY1_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    parse_tree__prog_data____Compare____mer_type_0_0(&CompareResult_6, ArgX1_65, ArgY1_66);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 28:
                {
                  MR_Word ArgX1_67 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_68;
                  MR_Integer Var_140;
                  MR_Integer Var_141;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 28)));
                  if (succeeded)
                  {
                    ArgY1_68 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_140 = (MR_Integer) (ArgX1_67);
                    Var_141 = (MR_Integer) (ArgY1_68);
                    succeeded = (Var_140 < Var_141);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_140 > Var_141);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 29:
                {
                  MR_Word ArgX1_69 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_70;
                  MR_Integer Var_142;
                  MR_Integer Var_143;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 29)));
                  if (succeeded)
                  {
                    ArgY1_70 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_142 = (MR_Integer) (ArgX1_69);
                    Var_143 = (MR_Integer) (ArgY1_70);
                    succeeded = (Var_142 < Var_143);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_142 > Var_143);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 30:
                {
                  MR_Word ArgX1_71 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Word ArgY1_72;
                  MR_Integer Var_134;
                  MR_Integer Var_135;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 30)));
                  if (succeeded)
                  {
                    ArgY1_72 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                    Var_134 = (MR_Integer) (ArgX1_71);
                    Var_135 = (MR_Integer) (ArgY1_72);
                    succeeded = (Var_134 < Var_135);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_134 > Var_135);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 31:
                {
                  MR_String ArgX1_73 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_74;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 31)));
                  if (succeeded)
                  {
                    ArgY1_74 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_73, ArgY1_74);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 32:
                {
                  MR_String ArgX1_75 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_76;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 32)));
                  if (succeeded)
                  {
                    ArgY1_76 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    mercury__private_builtin__builtin_compare_string_3_p_0(&CompareResult_6, ArgX1_75, ArgY1_76);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 33:
                {
                  MR_String ArgX1_77 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_78;
                  MR_Word ArgX2_80 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_81;
                  MR_Word SubResult1_79;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 33)));
                  if (succeeded)
                  {
                    ArgY1_78 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_81 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_79, ArgX1_77, ArgY1_78);
                    succeeded = (SubResult1_79 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_79;
                    else
                    {
                      MR_Integer Var_136 = (MR_Integer) (ArgX2_80);
                      MR_Integer Var_137 = (MR_Integer) (ArgY2_81);

                      succeeded = (Var_136 < Var_137);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_136 > Var_137);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 34:
                {
                  MR_String ArgX1_82 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_String ArgY1_83;
                  MR_Word ArgX2_85 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word ArgY2_86;
                  MR_Word SubResult1_84;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 34)));
                  if (succeeded)
                  {
                    ArgY1_83 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_86 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_84, ArgX1_82, ArgY1_83);
                    succeeded = (SubResult1_84 != (MR_Integer) 0);
                    if (succeeded)
                      CompareResult_6 = SubResult1_84;
                    else
                    {
                      MR_Integer Var_138 = (MR_Integer) (ArgX2_85);
                      MR_Integer Var_139 = (MR_Integer) (ArgY2_86);

                      succeeded = (Var_138 < Var_139);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_138 > Var_139);
                        if (succeeded)
                          CompareResult_6 = (MR_Integer) 2;
                        else
                          CompareResult_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 35:
                {
                  MR_Integer ArgX1_87 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_88;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 35)));
                  if (succeeded)
                  {
                    ArgY1_88 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_87 < ArgY1_88);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_87 > ArgY1_88);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 36:
                {
                  MR_Integer ArgX1_89 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  MR_Integer ArgY1_90;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 36)));
                  if (succeeded)
                  {
                    ArgY1_90 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                    succeeded = (ArgX1_89 < ArgY1_90);
                    if (succeeded)
                      CompareResult_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX1_89 > ArgY1_90);
                      if (succeeded)
                        CompareResult_6 = (MR_Integer) 2;
                      else
                        CompareResult_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
parse_tree__error_spec____Index____format_piece_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 39;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 41;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 20;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 23;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 24;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 26;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 27;
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_Integer) 28;
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_Integer) 29;
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_Integer) 30;
          break;
        case (MR_Integer) 27:
          *HeadVar__2_2 = (MR_Integer) 31;
          break;
        case (MR_Integer) 28:
          *HeadVar__2_2 = (MR_Integer) 32;
          break;
        case (MR_Integer) 29:
          *HeadVar__2_2 = (MR_Integer) 33;
          break;
        case (MR_Integer) 30:
          *HeadVar__2_2 = (MR_Integer) 34;
          break;
        case (MR_Integer) 31:
          *HeadVar__2_2 = (MR_Integer) 35;
          break;
        case (MR_Integer) 32:
          *HeadVar__2_2 = (MR_Integer) 36;
          break;
        case (MR_Integer) 33:
          *HeadVar__2_2 = (MR_Integer) 37;
          break;
        case (MR_Integer) 34:
          *HeadVar__2_2 = (MR_Integer) 38;
          break;
        case (MR_Integer) 35:
          *HeadVar__2_2 = (MR_Integer) 40;
          break;
        case (MR_Integer) 36:
          *HeadVar__2_2 = (MR_Integer) 42;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____format_piece_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_93 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_94 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_93 == CastY_94);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_85 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_86 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_86 == CastX_85);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_89 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_90 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_90 == CastX_89);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ArgX1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_23, ArgY1_24) == 0);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_27, ArgY1_28);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_29, ArgY1_30);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_32;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____name_arity_0_0(ArgX1_31, ArgY1_32);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(ArgX1_33, ArgY1_34);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_36;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____sym_name_arity_0_0(ArgX1_35, ArgY1_36);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_38;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX1_37, ArgY1_38);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX1_39, ArgY1_40);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_42;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____pred_pf_name_arity_0_0(ArgX1_41, ArgY1_42);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_44;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____pred_pf_name_arity_0_0(ArgX1_43, ArgY1_44);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 17)));
              if (succeeded)
              {
                ArgY1_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_45, ArgY1_46);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_48;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 18)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_47, ArgY1_48);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ArgX1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 19)));
              if (succeeded)
              {
                ArgY1_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_ctor_0_0(ArgX1_49, ArgY1_50);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ArgX1_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
                ArgY1_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____inst_ctor_0_0(ArgX1_51, ArgY1_52);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ArgX1_53 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_54;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 21)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____mode_ctor_0_0(ArgX1_53, ArgY1_54);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ArgX1_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 22)));
              if (succeeded)
              {
                ArgY1_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____mode_ctor_0_0(ArgX1_55, ArgY1_56);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ArgX1_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 23)));
              if (succeeded)
              {
                ArgY1_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_57, ArgY1_58);
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Word ArgX1_59 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_60;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 24)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____class_id_0_0(ArgX1_59, ArgY1_60);
              }
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Word ArgX1_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_62;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 25)));
              if (succeeded)
              {
                ArgY1_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_61, ArgY1_62);
              }
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Word ArgX1_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 26)));
              if (succeeded)
              {
                ArgY1_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_63, ArgY1_64);
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ArgX1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_66;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 27)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_65, ArgY1_66);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ArgX1_67 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 28)));
              if (succeeded)
              {
                ArgY1_68 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_67 == ArgY1_68);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ArgX1_69 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_70;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 29)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_69 == ArgY1_70);
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ArgX1_71 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_72;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 30)));
              if (succeeded)
              {
                ArgY1_72 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_71 == ArgY1_72);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_String ArgX1_73 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_74;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 31)));
              if (succeeded)
              {
                ArgY1_74 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_73, ArgY1_74) == 0);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_String ArgX1_75 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_76;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 32)));
              if (succeeded)
              {
                ArgY1_76 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_75, ArgY1_76) == 0);
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_String ArgX1_77 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_78;
              MR_Word ArgX2_79 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY2_80;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 33)));
              if (succeeded)
              {
                ArgY1_78 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_80 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                succeeded = (strcmp(ArgX1_77, ArgY1_78) == 0);
                if (succeeded)
                  succeeded = (ArgX2_79 == ArgY2_80);
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_String ArgX1_81 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_82;
              MR_Word ArgX2_83 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY2_84;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 34)));
              if (succeeded)
              {
                ArgY1_82 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_84 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
                succeeded = (strcmp(ArgX1_81, ArgY1_82) == 0);
                if (succeeded)
                  succeeded = (ArgX2_83 == ArgY2_84);
              }
            }
            break;
          case (MR_Integer) 35:
            {
              MR_Integer ArgX1_87 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_88;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 35)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_87 == ArgY1_88);
              }
            }
            break;
          case (MR_Integer) 36:
            {
              MR_Integer ArgX1_91 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_92;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 36)));
              if (succeeded)
              {
                ArgY1_92 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_91 == ArgY1_92);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____error_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_171 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_172 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_171 == CastY_172);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_198 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_199 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_200 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_201 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_6;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_201, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  parse_tree__error_spec____Compare____error_severity_0_0(&SubResult2_9, Var_200, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Word SubResult3_12;

                    parse_tree__error_spec____Compare____error_phase_0_0(&SubResult3_12, Var_199, ArgY3_11);
                    succeeded = (SubResult3_12 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_12;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_198)), ((MR_Box) (ArgY4_14)));
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_206 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_207 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_208 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_209 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_210 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_52 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_58 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_61 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word ArgY5_64 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
                MR_Word SubResult1_53;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_53, Var_210, ArgY1_52);
                succeeded = (SubResult1_53 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_53;
                else
                {
                  MR_Word SubResult2_56;

                  parse_tree__error_spec____Compare____error_severity_0_0(&SubResult2_56, Var_209, ArgY2_55);
                  succeeded = (SubResult2_56 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_56;
                  else
                  {
                    MR_Word SubResult3_59;

                    parse_tree__error_spec____Compare____error_phase_0_0(&SubResult3_59, Var_208, ArgY3_58);
                    succeeded = (SubResult3_59 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_59;
                    else
                    {
                      MR_Word SubResult4_62;

                      mercury__term_context____Compare____term_context_0_0(&SubResult4_62, Var_207, ArgY4_61);
                      succeeded = (SubResult4_62 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_62;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_206)), ((MR_Box) (ArgY5_64)));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_202 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_203 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_204 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_205 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_103 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_106 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_109 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_112 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_104;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_104, Var_205, ArgY1_103);
                succeeded = (SubResult1_104 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_104;
                else
                {
                  MR_Word SubResult2_107;

                  parse_tree__error_spec____Compare____error_severity_0_0(&SubResult2_107, Var_204, ArgY2_106);
                  succeeded = (SubResult2_107 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_107;
                  else
                  {
                    MR_Word SubResult3_110;

                    parse_tree__error_spec____Compare____error_phase_0_0(&SubResult3_110, Var_203, ArgY3_109);
                    succeeded = (SubResult3_110 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_110;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_202)), ((MR_Box) (ArgY4_112)));
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_192 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_193 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_194 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_195 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Var_196 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
          MR_String Var_197 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_String ArgY1_155 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_158 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
                MR_Word ArgY3_161 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word ArgY4_164 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY5_167 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word ArgY6_170 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                MR_Word SubResult1_156;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_156, Var_197, ArgY1_155);
                succeeded = (SubResult1_156 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_156;
                else
                {
                  MR_Word SubResult2_159;
                  MR_Integer Var_211 = (MR_Integer) (Var_196);
                  MR_Integer Var_212 = (MR_Integer) (ArgY2_158);

                  succeeded = (Var_211 < Var_212);
                  if (succeeded)
                  {
                    SubResult2_159 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_211 > Var_212);
                    if (succeeded)
                    {
                      SubResult2_159 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_159 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_159;
                  else
                  {
                    MR_Word SubResult3_162;
                    MR_Integer Var_213 = (MR_Integer) (Var_195);
                    MR_Integer Var_214 = (MR_Integer) (ArgY3_161);

                    succeeded = (Var_213 < Var_214);
                    if (succeeded)
                    {
                      SubResult3_162 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_213 > Var_214);
                      if (succeeded)
                      {
                        SubResult3_162 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_162 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_162;
                    else
                    {
                      MR_Word SubResult4_165;

                      parse_tree__error_spec____Compare____error_severity_0_0(&SubResult4_165, Var_194, ArgY4_164);
                      succeeded = (SubResult4_165 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_165;
                      else
                      {
                        MR_Word SubResult5_168;

                        parse_tree__error_spec____Compare____error_phase_0_0(&SubResult5_168, Var_193, ArgY5_167);
                        succeeded = (SubResult5_168 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult5_168;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_192)), ((MR_Box) (ArgY6_170)));
                      }
                    }
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_41 == CastY_42);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_44_44;
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;
          MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
            {
              succeeded = parse_tree__error_spec____Unify____error_severity_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                succeeded = parse_tree__error_spec____Unify____error_phase_0_0(ArgX3_7, ArgY3_8);
                if (succeeded)
                {
                  TypeInfo_44_44 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_47_47;
          MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_16;
          MR_Word ArgX4_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_18;
          MR_Word ArgX5_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
          MR_Word ArgY5_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            ArgY5_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
            succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
            if (succeeded)
            {
              succeeded = parse_tree__error_spec____Unify____error_severity_0_0(ArgX2_13, ArgY2_14);
              if (succeeded)
              {
                succeeded = parse_tree__error_spec____Unify____error_phase_0_0(ArgX3_15, ArgY3_16);
                if (succeeded)
                {
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_17, ArgY4_18);
                  if (succeeded)
                  {
                    TypeInfo_47_47 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_47_47, ((MR_Box) (ArgX5_19)), ((MR_Box) (ArgY5_20)));
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_45_45;
          MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_22;
          MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_24;
          MR_Word ArgX3_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_26;
          MR_Word ArgX4_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_28;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_22 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_28 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
            if (succeeded)
            {
              succeeded = parse_tree__error_spec____Unify____error_severity_0_0(ArgX2_23, ArgY2_24);
              if (succeeded)
              {
                succeeded = parse_tree__error_spec____Unify____error_phase_0_0(ArgX3_25, ArgY3_26);
                if (succeeded)
                {
                  TypeInfo_45_45 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX4_27)), ((MR_Box) (ArgY4_28)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_43_43;
          MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_30;
          MR_Word ArgX2_31 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
          MR_Word ArgY2_32;
          MR_Word ArgX3_33 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgY3_34;
          MR_Word ArgX4_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY4_36;
          MR_Word ArgX5_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY5_38;
          MR_Word ArgX6_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
          MR_Word ArgY6_40;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_30 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_32 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
            ArgY3_34 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            ArgY4_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            ArgY5_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
            ArgY6_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
            succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
            if (succeeded)
            {
              succeeded = (ArgX2_31 == ArgY2_32);
              if (succeeded)
              {
                succeeded = (ArgX3_33 == ArgY3_34);
                if (succeeded)
                {
                  succeeded = parse_tree__error_spec____Unify____error_severity_0_0(ArgX4_35, ArgY4_36);
                  if (succeeded)
                  {
                    succeeded = parse_tree__error_spec____Unify____error_phase_0_0(ArgX5_37, ArgY5_38);
                    if (succeeded)
                    {
                      TypeInfo_43_43 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[5]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX6_39)), ((MR_Box) (ArgY6_40)));
                    }
                  }
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____error_severity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
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
        {
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_47 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_48 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_29 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
                MR_Word ArgY2_32 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY3_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY4_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_30;
                MR_Integer Var_49 = (MR_Integer) (Var_48);
                MR_Integer Var_50 = (MR_Integer) (ArgY1_29);

                succeeded = (Var_49 < Var_50);
                if (succeeded)
                {
                  SubResult1_30 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_49 > Var_50);
                  if (succeeded)
                  {
                    SubResult1_30 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_30 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_30;
                else
                {
                  MR_Word SubResult2_33;
                  MR_Integer Var_51 = (MR_Integer) (Var_47);
                  MR_Integer Var_52 = (MR_Integer) (ArgY2_32);

                  succeeded = (Var_51 < Var_52);
                  if (succeeded)
                  {
                    SubResult2_33 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_51 > Var_52);
                    if (succeeded)
                    {
                      SubResult2_33 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_33 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_33;
                  else
                  {
                    MR_Word SubResult3_36;

                    parse_tree__error_spec____Compare____error_severity_0_0(&SubResult3_36, Var_46, ArgY3_35);
                    succeeded = (SubResult3_36 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_36;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_45)), ((MR_Box) (ArgY4_38)));
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_severity_0_0(
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
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_19_19;
          MR_Word ArgX1_9 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY3_14;
          MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY4_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
            ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_9 == ArgY1_10);
            if (succeeded)
            {
              succeeded = (ArgX2_11 == ArgY2_12);
              if (succeeded)
              {
                succeeded = parse_tree__error_spec____Unify____error_severity_0_0(ArgX3_13, ArgY3_14);
                if (succeeded)
                {
                  TypeInfo_19_19 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____error_phase_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    parse_tree__error_spec____Index____error_phase_0_0(HeadVar__2_2, &IndexX_4);
    parse_tree__error_spec____Index____error_phase_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__2_2)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 7:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 9:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 11:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 12:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 13:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 14:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 15:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 16:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 17:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 18:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 19:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 20:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 21:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 22:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 23:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 24:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 25:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 26:
                {
                  CompareResult_6 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer Var_15;
              MR_Integer Var_16;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                Var_15 = (MR_Integer) (ArgX1_7);
                Var_16 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_15 < Var_16);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_15 > Var_16);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_10;
              MR_Integer Var_17;
              MR_Integer Var_18;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                Var_17 = (MR_Integer) (ArgX1_9);
                Var_18 = (MR_Integer) (ArgY1_10);
                succeeded = (Var_17 < Var_18);
                if (succeeded)
                  CompareResult_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_17 > Var_18);
                  if (succeeded)
                    CompareResult_6 = (MR_Integer) 2;
                  else
                    CompareResult_6 = (MR_Integer) 0;
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
parse_tree__error_spec____Index____error_phase_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 17:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 18:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
        case (MR_Integer) 19:
          *HeadVar__2_2 = (MR_Integer) 21;
          break;
        case (MR_Integer) 20:
          *HeadVar__2_2 = (MR_Integer) 22;
          break;
        case (MR_Integer) 21:
          *HeadVar__2_2 = (MR_Integer) 23;
          break;
        case (MR_Integer) 22:
          *HeadVar__2_2 = (MR_Integer) 24;
          break;
        case (MR_Integer) 23:
          *HeadVar__2_2 = (MR_Integer) 25;
          break;
        case (MR_Integer) 24:
          *HeadVar__2_2 = (MR_Integer) 26;
          break;
        case (MR_Integer) 25:
          *HeadVar__2_2 = (MR_Integer) 27;
          break;
        case (MR_Integer) 26:
          *HeadVar__2_2 = (MR_Integer) 28;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 15;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 20;
      break;
  }
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_phase_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_61 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_62 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_61 == CastY_62);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_18 == CastX_17);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_20 == CastX_19);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_22 == CastX_21);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_24 == CastX_23);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_26 == CastX_25);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_28 == CastX_27);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_30 == CastX_29);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_32 == CastX_31);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_36 == CastX_35);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_38 == CastX_37);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_40 == CastX_39);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_42 == CastX_41);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Integer CastX_45 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_46 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_46 == CastX_45);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Integer CastX_47 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_48 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_48 == CastX_47);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Integer CastX_49 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_50 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_50 == CastX_49);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_52 == CastX_51);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Integer CastX_53 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_54 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_54 == CastX_53);
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Integer CastX_55 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_56 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_56 == CastX_55);
            }
            break;
          case (MR_Integer) 25:
            {
              MR_Integer CastX_57 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_58 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_58 == CastX_57);
            }
            break;
          case (MR_Integer) 26:
            {
              MR_Integer CastX_59 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_60 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_60 == CastX_59);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_33 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_34;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_34 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_33 == ArgY1_34);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_43 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_44;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_44 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_43 == ArgY1_44);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____error_msg_component_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_98 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_99 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_98 == CastY_99);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_121 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_121)), ((MR_Box) (ArgY1_5)));
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_123 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_124 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_23 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
                MR_Word ArgY2_26 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY3_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_24;
                MR_Integer Var_131 = (MR_Integer) (Var_124);
                MR_Integer Var_132 = (MR_Integer) (ArgY1_23);

                succeeded = (Var_131 < Var_132);
                if (succeeded)
                {
                  SubResult1_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_131 > Var_132);
                  if (succeeded)
                  {
                    SubResult1_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_24;
                else
                {
                  MR_Word SubResult2_27;
                  MR_Integer Var_133 = (MR_Integer) (Var_123);
                  MR_Integer Var_134 = (MR_Integer) (ArgY2_26);

                  succeeded = (Var_133 < Var_134);
                  if (succeeded)
                  {
                    SubResult2_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_133 > Var_134);
                    if (succeeded)
                    {
                      SubResult2_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_122)), ((MR_Box) (ArgY3_29)));
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_129 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_130 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_53 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgY2_56 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_54;
                MR_Integer Var_135 = (MR_Integer) (Var_130);
                MR_Integer Var_136 = (MR_Integer) (ArgY1_53);

                succeeded = (Var_135 < Var_136);
                if (succeeded)
                {
                  SubResult1_54 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_135 > Var_136);
                  if (succeeded)
                  {
                    SubResult1_54 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_54 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_54;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_129)), ((MR_Box) (ArgY2_56)));
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_127 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_128 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgY1_77 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_80 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_78;

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), &SubResult1_78, ((MR_Box) (Var_128)), ((MR_Box) (ArgY1_77)));
                        succeeded = (SubResult1_78 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_78;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_127)), ((MR_Box) (ArgY2_80)));
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeClassInfo_for_print_anything_126 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
              MR_Box Var_125 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
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
                        MR_Word TypeClassInfo_for_print_anything_101 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word TypeInfo_103_103;
                        MR_Word TypeInfo_104_104;
                        MR_Box ArgY1_97 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2));

                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_print_anything_126, (MR_Integer) 1, &TypeInfo_103_103);
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_print_anything_101, (MR_Integer) 1, &TypeInfo_104_104);
                        mercury__private_builtin__typed_compare_3_p_0(TypeInfo_103_103, TypeInfo_104_104, HeadVar__1_1, Var_125, ArgY1_97);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_msg_component_0_0(
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
          MR_Word TypeInfo_28_28;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_28_28 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_29_29;
          MR_Word ArgX1_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1023);
            ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
            {
              succeeded = (ArgX2_7 == ArgY2_8);
              if (succeeded)
              {
                TypeInfo_29_29 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_32_32;
          MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_11 == ArgY1_12);
            if (succeeded)
            {
              TypeInfo_32_32 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_30_30;
              MR_Word TypeInfo_31_31;
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                TypeInfo_30_30 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
                if (succeeded)
                {
                  TypeInfo_31_31 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeClassInfo_for_print_anything_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word TypeClassInfo_for_print_anything_24;
              MR_Word TypeInfo_26_26;
              MR_Word TypeInfo_27_27;
              MR_Box ArgX1_19 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2));
              MR_Box ArgY1_20;
              MR_Integer PolyConst1_25;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                TypeClassInfo_for_print_anything_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY1_20 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2));
                PolyConst1_25 = (MR_Integer) 1;
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_print_anything_23, PolyConst1_25, &TypeInfo_26_26);
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_print_anything_24, PolyConst1_25, &TypeInfo_27_27);
                succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_26_26, TypeInfo_27_27, ArgX1_19, ArgY1_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____error_msg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_81 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_82 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_81 == CastY_82);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                mercury__term_context____Compare____term_context_0_0(&SubResult1_6, Var_99, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_98)), ((MR_Box) (ArgY2_8)));
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_100)), ((MR_Box) (ArgY1_26)));
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_96 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_97 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_46 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_44;

                mercury__term_context____Compare____term_context_0_0(&SubResult1_44, Var_97, ArgY1_43);
                succeeded = (SubResult1_44 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_44;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_96)), ((MR_Box) (ArgY2_46)));
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_92 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer Var_93 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_94 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Var_95 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_71 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_74 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Integer ArgY3_77 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_80 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_72;

                mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[2]), &SubResult1_72, ((MR_Box) (Var_95)), ((MR_Box) (ArgY1_71)));
                succeeded = (SubResult1_72 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_72;
                else
                {
                  MR_Word SubResult2_75;
                  MR_Integer Var_101 = (MR_Integer) (Var_94);
                  MR_Integer Var_102 = (MR_Integer) (ArgY2_74);

                  succeeded = (Var_101 < Var_102);
                  if (succeeded)
                  {
                    SubResult2_75 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_101 > Var_102);
                    if (succeeded)
                    {
                      SubResult2_75 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_75 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_75;
                  else
                  {
                    MR_Word SubResult3_78;

                    succeeded = (Var_93 < ArgY3_77);
                    if (succeeded)
                    {
                      SubResult3_78 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_93 > ArgY3_77);
                      if (succeeded)
                      {
                        SubResult3_78 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_78 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_78;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_92)), ((MR_Box) (ArgY4_80)));
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_msg_0_0(
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
          MR_Word TypeInfo_28_28;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              TypeInfo_28_28 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_29_29;
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_29_29 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_26_26;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_11)), ((MR_Box) (ArgY2_12)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_23_23;
          MR_Word TypeInfo_24_24;
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgY2_16;
          MR_Integer ArgX3_17 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_18;
          MR_Word ArgX4_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            ArgY3_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
            TypeInfo_23_23 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
            if (succeeded)
            {
              succeeded = (ArgX2_15 == ArgY2_16);
              if (succeeded)
              {
                succeeded = (ArgX3_17 == ArgY3_18);
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&parse_tree__error_spec_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_19)), ((MR_Box) (ArgY4_20)));
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__error_spec____Compare____actual_severity_0_0(
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
parse_tree__error_spec____Unify____actual_severity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__error_spec__print_anything_3_p_0(
  MR_Word TypeClassInfo_for_print_anything_4,
  MR_Box HeadVar__1_1)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__3_3;

  func_0(((MR_Box) (TypeClassInfo_for_print_anything_4)), HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__3_3);
}

static void MR_CALL 
parse_tree__error_spec__diff_seq_line_to_pieces_2_p_0(
  MR_Word Diff_3,
  MR_Word * Pieces_4)
{
  MR_String Line_6;
  MR_Word Var_10;

  switch (MR_tag((MR_Word) Diff_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Str_5 = ((MR_String) ((MR_hl_field(0, Diff_3, (MR_Integer) 0))));

        Line_6 = mercury__string__f_43_43_2_f_0((MR_String) " ", Str_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Str_14 = ((MR_String) ((MR_hl_field(1, Diff_3, (MR_Integer) 0))));

        Line_6 = mercury__string__f_43_43_2_f_0((MR_String) "-", Str_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Str_15 = ((MR_String) ((MR_hl_field(2, Diff_3, (MR_Integer) 0))));

        Line_6 = mercury__string__f_43_43_2_f_0((MR_String) "+", Str_15);
      }
      break;
  }
  {
    Var_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_10, 0) = ((MR_Box) (Line_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Pieces_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[11])));
  }
}

void MR_CALL 
parse_tree__error_spec__extract_spec_msgs_3_p_0(
  MR_Word Globals_4,
  MR_Word Spec_5,
  MR_Word * Msgs_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Spec_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msgs_6 = ((MR_Word) ((MR_hl_field(0, Spec_5, (MR_Integer) 3))));
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_10 = ((MR_Word) ((MR_hl_field(1, Spec_5, (MR_Integer) 3))));
        MR_Word Pieces_11 = ((MR_Word) ((MR_hl_field(1, Spec_5, (MR_Integer) 4))));
        MR_Word Var_16;

        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_16, 0) = ((MR_Box) (Context_10));
          MR_hl_field(0, Var_16, 1) = ((MR_Box) (Pieces_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Msgs_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_18;
        MR_Word Pieces_32 = ((MR_Word) ((MR_hl_field(2, Spec_5, (MR_Integer) 3))));

        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Pieces_32));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Msgs_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Option_12 = ((((MR_Unsigned) ((MR_hl_field(3, Spec_5, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1023);
        MR_Word MatchValue_13 = ((MR_Unsigned) ((MR_hl_field(3, Spec_5, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word Msgs0_14 = ((MR_Word) ((MR_hl_field(3, Spec_5, (MR_Integer) 4))));
        MR_Word Value_15;

        libs__globals__lookup_bool_option_3_p_0(Globals_4, Option_12, &Value_15);
        succeeded = (Value_15 == MatchValue_13);
        if (succeeded)
          *Msgs_6 = Msgs0_14;
        else
          *Msgs_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

void MR_CALL 
parse_tree__error_spec__extract_spec_phase_2_p_0(
  MR_Word Spec_3,
  MR_Word * Phase_4)
{
  switch (MR_tag((MR_Word) Spec_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Phase_4 = ((MR_Word) ((MR_hl_field(0, Spec_3, (MR_Integer) 2))));
      break;
    case (MR_Integer) 1:
      *Phase_4 = ((MR_Word) ((MR_hl_field(1, Spec_3, (MR_Integer) 2))));
      break;
    case (MR_Integer) 2:
      *Phase_4 = ((MR_Word) ((MR_hl_field(2, Spec_3, (MR_Integer) 2))));
      break;
    case (MR_Integer) 3:
      *Phase_4 = ((MR_Word) ((MR_hl_field(3, Spec_3, (MR_Integer) 3))));
      break;
  }
}

MR_String MR_CALL 
parse_tree__error_spec__add_quotes_1_f_0(
  MR_String Str_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_5;

  Var_5 = mercury__string__f_43_43_2_f_0(Str_3, (MR_String) "\'");
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_5);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__error_spec__describe_sym_name_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word SymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Var_8;
  MR_String Var_12;
  MR_String Var_20;
  MR_String Var_21;

  Var_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_3);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_2[0]), Arity_4, &Var_12);
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "\'/", Var_12);
  Var_21 = mercury__string__f_43_43_2_f_0(Var_8, Var_20);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_21);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__error_spec__describe_sym_name_1_f_0(
  MR_Word SymName_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_7;
  MR_String Var_10;

  Var_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_3);
  Var_10 = mercury__string__f_43_43_2_f_0(Var_7, (MR_String) "\'");
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_10);
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__error_spec__change_hunk_to_pieces_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_4;

  parse_tree__error_spec__diff_seq_line_to_pieces_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Pieces_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
}

void MR_CALL 
parse_tree__error_spec__change_hunk_to_pieces_2_p_0(
  MR_Word ChangeHunk_3,
  MR_Word * ChangeHunkPieces_4)
{
  MR_Integer StartA_5 = ((MR_Integer) ((MR_hl_field(0, ChangeHunk_3, (MR_Integer) 0))));
  MR_Integer LenA_6 = ((MR_Integer) ((MR_hl_field(0, ChangeHunk_3, (MR_Integer) 1))));
  MR_Integer StartB_7 = ((MR_Integer) ((MR_hl_field(0, ChangeHunk_3, (MR_Integer) 2))));
  MR_Integer LenB_8 = ((MR_Integer) ((MR_hl_field(0, ChangeHunk_3, (MR_Integer) 3))));
  MR_Word Diffs_9 = ((MR_Word) ((MR_hl_field(0, ChangeHunk_3, (MR_Integer) 4))));
  MR_String HeaderStr_10;
  MR_Word HeaderPieces_11;
  MR_Word DiffPieceLists_12;
  MR_Word Var_23;
  MR_Word Var_28;
  MR_String Var_35;
  MR_String Var_42;
  MR_String Var_44;
  MR_String Var_45;
  MR_String Var_52;
  MR_String Var_54;
  MR_String Var_55;
  MR_String Var_62;
  MR_String Var_64;
  MR_String Var_65;
  MR_String Var_72;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_2[0]), LenB_8, &Var_35);
  Var_42 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) " \100\100");
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_42);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_2[0]), StartB_7, &Var_45);
  Var_52 = mercury__string__f_43_43_2_f_0(Var_45, Var_44);
  Var_54 = mercury__string__f_43_43_2_f_0((MR_String) " +", Var_52);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_2[0]), LenA_6, &Var_55);
  Var_62 = mercury__string__f_43_43_2_f_0(Var_55, Var_54);
  Var_64 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_62);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_2[0]), StartA_5, &Var_65);
  Var_72 = mercury__string__f_43_43_2_f_0(Var_65, Var_64);
  HeaderStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "\100\100 -", Var_72);
  {
    Var_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_23, 0) = ((MR_Box) (HeaderStr_10));
  }
  {
    HeaderPieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeaderPieces_11, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, HeaderPieces_11, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[11])));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__error_spec_scalar_common_1[0]), (MR_Word) (&parse_tree__error_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__error_spec_scalar_common_4[0]), Diffs_9, &DiffPieceLists_12);
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (HeaderPieces_11));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (DiffPieceLists_12));
  }
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, ChangeHunkPieces_4);
}

MR_String MR_CALL 
parse_tree__error_spec__is_or_are_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    HeadVar__2_2 = (MR_String) "";
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.error_spec.is_or_are\'/1", (MR_String) "[]");
  }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

    if ((Var_12 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "is";
    else
      HeadVar__2_2 = (MR_String) "are";
  }
  return HeadVar__2_2;
}

MR_Box MR_CALL 
parse_tree__error_spec__choose_number_3_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box HeadVar__4_4;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

    if ((Var_19 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__2_2;
    else
      HeadVar__4_4 = HeadVar__3_3;
  }
  return HeadVar__4_4;
}

MR_Word MR_CALL 
parse_tree__error_spec__component_list_to_line_pieces_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word Final_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_24 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Final_2);
    else
    {
      MR_Word Var_13;
      MR_Word Var_20;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 0))));

      if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Final_2);
      else
      {
        MR_Word Var_35;
        MR_Word Var_37;

        Var_37 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(Var_41, Final_2);
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[12])), Var_37);
        Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_35);
      }
      Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[12])), Var_20);
      HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_13);
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__error_spec__strict_component_list_to_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_19));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word Var_10;
      MR_Word Var_15;
      MR_Word Var_35;
      MR_Word Var_36;

      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_19));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[10])));
      }
      Var_36 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 0))));
      Var_35 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
      if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word Var_27;
        MR_Word Var_32;

        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[10])));
        }
        Var_32 = parse_tree__error_spec__strict_component_list_to_pieces_1_f_0(Var_35);
        Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_32);
      }
      HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_10, Var_15);
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__error_spec__component_list_to_pieces_2_f_0(
  MR_String LastSep_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));

      if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_16;

        {
          Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_15, 1) = ((MR_Box) (LastSep_1));
        }
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_16));
        }
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_14));
        }
      }
      else
      {
        MR_Word Var_25;
        MR_Word Var_30;

        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_35));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[10])));
        }
        Var_30 = parse_tree__error_spec__component_list_to_pieces_2_f_0(LastSep_1, Var_34);
        HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_30);
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_17 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = Var_18;
    else
    {
      MR_Word Var_9;
      MR_Word Var_14;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 1))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));

      if ((Var_33 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_14 = Var_34;
      else
      {
        MR_Word Var_25;
        MR_Word Var_30;

        Var_30 = parse_tree__error_spec__strict_component_lists_to_pieces_1_f_0(Var_33);
        Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[10])), Var_30);
        Var_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_25);
      }
      Var_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[10])), Var_14);
      HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_18, Var_9);
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__error_spec__component_lists_to_pieces_2_f_0(
  MR_String LastSep_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = Var_35;
    else
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, Var_34, (MR_Integer) 0))));

      if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_15, 1) = ((MR_Box) (LastSep_1));
        }
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_37);
        HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_13);
      }
      else
      {
        MR_Word Var_24;
        MR_Word Var_29;

        Var_29 = parse_tree__error_spec__component_lists_to_pieces_2_f_0(LastSep_1, Var_34);
        Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__error_spec_scalar_common_1[10])), Var_29);
        HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_24);
      }
    }
  }
  return HeadVar__3_3;
}

MR_Word MR_CALL 
parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_32 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_5;

      {
        Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_5, 1) = ((MR_Box) (Var_32));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
      MR_String Var_34 = ((MR_String) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));

      if ((Var_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Word Var_15;
        MR_Word Var_16;

        {
          Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_11, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_16, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_spec_scalar_common_1[9])));
          MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_12));
        }
      }
      else
      {
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_28;

        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_32));
        }
        Var_28 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0(Var_31);
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_spec_scalar_common_1[8])));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_25));
        }
      }
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__error_spec__list_to_quoted_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_32 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_5;

      {
        Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_5, 1) = ((MR_Box) (Var_32));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
      MR_String Var_34 = ((MR_String) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));

      if ((Var_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Word Var_15;
        MR_Word Var_16;

        {
          Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_11, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_16, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_spec_scalar_common_1[7])));
          MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_12));
        }
      }
      else
      {
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_28;

        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_32));
        }
        Var_28 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(Var_31);
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_spec_scalar_common_1[8])));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_25));
        }
      }
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__error_spec__strict_list_to_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_17 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_5;

      {
        Var_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_5, 0) = ((MR_Box) (Var_17));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_11;
      MR_String Var_12;
      MR_Word Var_14;
      MR_Word Var_31;
      MR_String Var_32;

      Var_12 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ",");
      {
        Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_11, 0) = ((MR_Box) (Var_12));
      }
      Var_32 = ((MR_String) ((MR_hl_field(1, Var_16, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(1, Var_16, (MR_Integer) 1))));
      if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_20, 0) = ((MR_Box) (Var_32));
        }
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_26;
        MR_String Var_27;
        MR_Word Var_29;

        Var_27 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) ",");
        {
          Var_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_26, 0) = ((MR_Box) (Var_27));
        }
        Var_29 = parse_tree__error_spec__strict_list_to_pieces_1_f_0(Var_31);
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_29));
        }
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_14));
      }
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__error_spec__list_to_pieces_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_31 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_5;

      {
        Var_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_5, 0) = ((MR_Box) (Var_31));
      }
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, Var_30, (MR_Integer) 1))));
      MR_String Var_33 = ((MR_String) ((MR_hl_field(1, Var_30, (MR_Integer) 0))));

      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Word Var_15;
        MR_Word Var_16;

        {
          Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_11, 0) = ((MR_Box) (Var_31));
        }
        {
          Var_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_16, 0) = ((MR_Box) (Var_33));
        }
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__error_spec_scalar_common_1[7])));
          MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_15));
        }
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_12));
        }
      }
      else
      {
        MR_Word Var_24;
        MR_String Var_25;
        MR_Word Var_27;

        Var_25 = mercury__string__f_43_43_2_f_0(Var_31, (MR_String) ",");
        {
          Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_24, 0) = ((MR_Box) (Var_25));
        }
        Var_27 = parse_tree__error_spec__list_to_pieces_1_f_0(Var_30);
        {
          HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_27));
        }
      }
    }
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
parse_tree__error_spec__string_to_words_piece_1_f_0(
  MR_String Str_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Str_3));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____actual_severity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____actual_severity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____actual_severity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____actual_severity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_msg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____error_msg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____error_msg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____error_msg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_msg_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____error_msg_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____error_msg_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____error_msg_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_phase_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____error_phase_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____error_phase_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____error_phase_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_severity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____error_severity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____error_severity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____error_severity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____error_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____error_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____error_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____error_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____format_piece_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____format_piece_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____format_piece_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____format_piece_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____lp_piece_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____lp_piece_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____lp_piece_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____lp_piece_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____maybe_always_treat_as_first_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____maybe_always_treat_as_first_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____maybe_always_treat_as_first_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____maybe_always_treat_as_first_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____maybe_error_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____maybe_error_specs_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____maybe_error_specs_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____maybe_error_specs_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____mode_report_control_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____mode_report_control_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____mode_report_control_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____mode_report_control_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____rp_piece_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____rp_piece_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____rp_piece_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____rp_piece_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____verbose_always_or_once_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____verbose_always_or_once_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____verbose_always_or_once_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____verbose_always_or_once_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__error_spec____Unify____warning_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__error_spec____Unify____warning_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__error_spec____Compare____warning_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__error_spec____Compare____warning_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__error_spec__init(void)
{
}

void mercury__parse_tree__error_spec__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_actual_severity_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_phase_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_severity_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_lp_piece_kind_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_maybe_always_treat_as_first_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_maybe_error_specs_1);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_mode_report_control_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_rp_piece_kind_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_verbose_always_or_once_0);
	MR_register_type_ctor_info(&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warning_spec_0);
}

void mercury__parse_tree__error_spec__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__error_spec__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.error_spec.
