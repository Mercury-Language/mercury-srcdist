/*
** Automatically generated from `parse_type_name.m'
** by the Mercury compiler,
** version rotd-2025-08-17
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


// :- module parse_tree.parse_type_name.
// :- implementation.

/*
INIT mercury__parse_tree__parse_type_name__init
ENDINIT
*/

#include "parse_tree.parse_type_name.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "int.mih"
#include "integer.mih"
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
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"




static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1[1];

static const MR_DuArgLocn parse_tree__parse_type_name__parse_tree__parse_type_name__field_locns_allow_ho_inst_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_allow_ho_inst_info_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_VA_TypeInfo_Struct2 parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1[2];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3[2];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4[3];

static const MR_DuArgLocn parse_tree__parse_type_name__parse_tree__parse_type_name__field_locns_known_compound_type_kind_1_4[3];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3[3];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1[4];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1[6];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1[6];

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_2[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2[1];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1[3];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1[3];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1[3];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_type_name__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_maybe_constrain_inst_vars_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_maybe_constrain_inst_vars_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_maybe_constrain_inst_vars_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_constrain_inst_vars_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_maybe_require_tm_mode_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_maybe_require_tm_mode_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_require_tm_mode_0[2];

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_type_and_maybe_mode_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_type_and_maybe_mode_0_1[2];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_type_and_maybe_mode_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_type_and_maybe_mode_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_type_and_maybe_mode_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_type_and_maybe_mode_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_type_and_maybe_mode_0[2];

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_1;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_2;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_3;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_4;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_5;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_6;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_7;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_8;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_9;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_10;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_11;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_12;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_13;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_14;

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_why_no_ho_inst_info_0[15];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_no_ho_inst_info_0[15];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_no_ho_inst_info_0[15];

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_why_not_allowed_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_not_allowed_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_not_allowed_0[2];

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_not_allowed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_not_allowed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_2,
  MR_Word * Mode_3);

static void MR_CALL 
parse_tree__parse_type_name__parse_type_no_mode_5_p_0(
  MR_Word WhyNotHOInstInfo_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeType_10);

static void MR_CALL 
parse_tree__parse_type_name__parse_types_acc_8_p_0(
  MR_Word AllowHOInstInfo_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevTypes_0_5,
  MR_Word * STATE_VARIABLE_RevTypes_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word WhyNotHOInstInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_97_110_100_95_109_97_121_98_101_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word MaybeInstConstraints_1,
  MR_Word MaybeRequireMode_2,
  MR_Word Why_3,
  MR_Word VarSet_4,
  MR_Word HeadVar__6_6,
  MR_Integer ArgNum_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word BeforeIsTerm_9,
  MR_Word AfterIsTerm_10,
  MR_Word Purity_11,
  MR_Word * MaybeType_12);

static void MR_CALL 
parse_tree__parse_type_name__parse_compound_type_6_p_0(
  MR_Word AllowHOInstInfo_7,
  MR_Word Term_8,
  MR_Word VarSet_9,
  MR_Word ContextPieces_10,
  MR_Word CompoundTypeKind_11,
  MR_Word * Result_12);

static MR_bool MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String Name_4,
  MR_Word Args_5,
  MR_Word * KnownType_6);

static MR_Word MR_CALL 
parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word WNHII_7,
  MR_Word VarSet_8,
  MR_Word Term_9);

static MR_Word MR_CALL 
parse_tree__parse_type_name__arg_context_pieces_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word PorF_6,
  MR_Integer ArgNum_7);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word Purity_11,
  MR_Word ArgTypeAndModes_12,
  MR_Word ArgSpecs_13,
  MR_Word MaybeMaybeRetTypeAndMode_14,
  MR_Word MaybeDetism_15,
  MR_Word * MaybeType_16);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____type_and_maybe_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____type_and_maybe_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_not_allowed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_not_allowed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_1[101][2];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_2[2][3];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_3[39][1];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_4[1][6];


struct parse_tree__parse_type_name__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_0;
  const MR_String parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct parse_tree__parse_type_name__vector_common_type_5_0_s parse_tree__parse_type_name_vector_common_5[30];



static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_1[101][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should not be used"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with any arity other than"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not a type."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type and mode are separated by"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one colon (\":\"),"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "two (\"::\")."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "suffix"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "::mode"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "there should be a"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "after"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "argument of higher-order"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type:"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected a"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "symbol name"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as type constructor, got"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ill-formed type"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the return value of higher-order function type:"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the operator"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: in a function type declaration,"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be preceded"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arguments>)"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[8])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arg_types>) = <ret_type>"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<arg_types>)"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<arg_types_modes>) is <detism>"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the purity marker"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should be followed"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should be of one of the following forms:"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by a higher order type,"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: expected either"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[69])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<arguments>) is det"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arguments>) = <return_argument> is det"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "as a higher order type, got"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[87]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is followed by a mode, but this is"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains higher order inst information, but this is"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arg_types_modes>) = <ret_type_mode> is <detism>"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[99])))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__parse_type_name_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__parse_type_name_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_3[39][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[4]))) },
  /* row   6 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   8 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[7]))) },
  /* row   9 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row  10 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[0]))) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[10]))) },
  /* row  12 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[1]))) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[12]))) },
  /* row  14 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row  15 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[14]))) },
  /* row  16 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[15]))) },
  /* row  17 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row  18 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[17]))) },
  /* row  19 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[18]))) },
  /* row  20 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row  21 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[20]))) },
  /* row  22 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[21]))) },
  /* row  23 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row  24 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[23]))) },
  /* row  25 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[2]))) },
  /* row  26 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[25]))) },
  /* row  27 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row  28 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[27]))) },
  /* row  29 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[28]))) },
  /* row  30 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row  31 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[30]))) },
  /* row  32 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[31]))) },
  /* row  33 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row  34 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[33]))) },
  /* row  35 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[34]))) },
  /* row  36 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row  37 */
  { ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[36]))) },
  /* row  38 */
  { ((MR_Box) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[37]))) },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_type_and_maybe_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};


static /* final */ const struct parse_tree__parse_type_name__vector_common_type_5_0_s parse_tree__parse_type_name_vector_common_5[30] = {
  /* row   0 */
  {
    (MR_String) "a type constructor\'s argument",
    (MR_String) "not (yet) allowed"
  },
  /* row   1 */
  {
    (MR_String) "a tuple type constructor\'s argument",
    (MR_String) "not allowed"
  },
  /* row   2 */
  {
    (MR_String) "a predicate\'s argument",
    (MR_String) "not allowed"
  },
  /* row   3 */
  {
    (MR_String) "a function\'s argument",
    (MR_String) "not allowed"
  },
  /* row   4 */
  {
    (MR_String) "a function\'s return value",
    (MR_String) "not allowed"
  },
  /* row   5 */
  {
    (MR_String) "a type used for type qualification",
    (MR_String) "not (yet) allowed"
  },
  /* row   6 */
  {
    (MR_String) "a supertype of a subtype",
    (MR_String) "not allowed"
  },
  /* row   7 */
  {
    (MR_String) "the definition of a solver type",
    (MR_String) "not allowed"
  },
  /* row   8 */
  {
    (MR_String) "a class constraint",
    (MR_String) "not allowed"
  },
  /* row   9 */
  {
    (MR_String) "structure sharing annotation",
    (MR_String) "not allowed"
  },
  /* row  10 */
  {
    (MR_String) "type selector",
    (MR_String) "not allowed"
  },
  /* row  11 */
  {
    (MR_String) "a structure_sharing pragma",
    (MR_String) "not allowed"
  },
  /* row  12 */
  {
    (MR_String) "a structure_reuse pragma",
    (MR_String) "not allowed"
  },
  /* row  13 */
  {
    (MR_String) "a type_spec_constrained_preds pragma",
    (MR_String) "not allowed"
  },
  /* row  14 */
  {
    (MR_String) "a type_spec pragma",
    (MR_String) "not allowed"
  },
  /* row  15 */
  {
    (MR_String) "a type constructor\'s argument",
    (MR_String) "not (yet) allowed"
  },
  /* row  16 */
  {
    (MR_String) "a tuple type constructor\'s argument",
    (MR_String) "not allowed"
  },
  /* row  17 */
  {
    (MR_String) "a predicate\'s argument",
    (MR_String) "not allowed"
  },
  /* row  18 */
  {
    (MR_String) "a function\'s argument",
    (MR_String) "not allowed"
  },
  /* row  19 */
  {
    (MR_String) "a function\'s return value",
    (MR_String) "not allowed"
  },
  /* row  20 */
  {
    (MR_String) "a type used for type qualification",
    (MR_String) "not (yet) allowed"
  },
  /* row  21 */
  {
    (MR_String) "a supertype of a subtype",
    (MR_String) "not allowed"
  },
  /* row  22 */
  {
    (MR_String) "the definition of a solver type",
    (MR_String) "not allowed"
  },
  /* row  23 */
  {
    (MR_String) "a class constraint",
    (MR_String) "not allowed"
  },
  /* row  24 */
  {
    (MR_String) "structure sharing annotation",
    (MR_String) "not allowed"
  },
  /* row  25 */
  {
    (MR_String) "type selector",
    (MR_String) "not allowed"
  },
  /* row  26 */
  {
    (MR_String) "a structure_sharing pragma",
    (MR_String) "not allowed"
  },
  /* row  27 */
  {
    (MR_String) "a structure_reuse pragma",
    (MR_String) "not allowed"
  },
  /* row  28 */
  {
    (MR_String) "a type_spec_constrained_preds pragma",
    (MR_String) "not allowed"
  },
  /* row  29 */
  {
    (MR_String) "a type_spec pragma",
    (MR_String) "not allowed"
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0 = {
  (MR_String) "allow_ho_inst_info",
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

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0) };

static const MR_DuArgLocn parse_tree__parse_type_name__parse_tree__parse_type_name__field_locns_allow_ho_inst_info_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1 = {
  (MR_String) "no_allow_ho_inst_info",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1,
  NULL,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_locns_allow_ho_inst_info_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1 };

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_allow_ho_inst_info_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_allow_ho_inst_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "allow_ho_inst_info",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_allow_ho_inst_info_0 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_VA_TypeInfo_Struct2 parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_spec__type_ctor_info_format_piece_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_arg_context_func_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "arg_context_func",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_spec__type_ctor_info_format_piece_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__list__pti_list_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0 = {
  (MR_String) "kctk_tuple",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1 = {
  (MR_String) "kctk_pure_func",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__list__pti_list_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2 = {
  (MR_String) "kctk_pure_pred",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3 = {
  (MR_String) "kctk_is",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuArgLocn parse_tree__parse_type_name__parse_tree__parse_type_name__field_locns_known_compound_type_kind_1_4[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4 = {
  (MR_String) "kctk_purity",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4,
  NULL,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_locns_known_compound_type_kind_1_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__list__pti_list_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5 = {
  (MR_String) "kctk_empty_name",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3[3] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1[6] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1[6] = {
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_compound_type_kind_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_compound_type_kind",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1,

};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0 = {
  (MR_String) "known_type_simple",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_compound_type_kind_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1 = {
  (MR_String) "known_type_compound",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2 = {
  (MR_String) "known_type_bad_arity",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2 };

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1[3] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_type_kind_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_type_kind",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1,

};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0 = {
  (MR_String) "do_not_constrain_inst_vars",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_type_name__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__parse_type_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_maybe_constrain_inst_vars_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_1 = {
  (MR_String) "constrain_some_inst_vars",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_maybe_constrain_inst_vars_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_0[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_1[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_1 };

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_maybe_constrain_inst_vars_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_maybe_constrain_inst_vars_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_constrain_inst_vars_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_maybe_constrain_inst_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "maybe_constrain_inst_vars",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_maybe_constrain_inst_vars_0 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_maybe_constrain_inst_vars_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_constrain_inst_vars_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_0 = {
  (MR_String) "do_not_require_tm_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_1 = {
  (MR_String) "require_tm_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_maybe_require_tm_mode_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_maybe_require_tm_mode_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_1
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_require_tm_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_maybe_require_tm_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "maybe_require_tm_mode",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_maybe_require_tm_mode_0 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_maybe_require_tm_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_require_tm_mode_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_type_and_maybe_mode_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) };

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_0 = {
  (MR_String) "type_only",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_type_and_maybe_mode_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_type_and_maybe_mode_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_1 = {
  (MR_String) "type_and_mode",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_type_and_maybe_mode_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_type_and_maybe_mode_0_0[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_0 };

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_type_and_maybe_mode_0_1[1] = { &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_1 };

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_type_and_maybe_mode_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_type_and_maybe_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_type_and_maybe_mode_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_type_and_maybe_mode_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_type_and_maybe_mode_0_0
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_type_and_maybe_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_type_and_maybe_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____type_and_maybe_mode_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____type_and_maybe_mode_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "type_and_maybe_mode",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_type_and_maybe_mode_0 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_type_and_maybe_mode_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_type_and_maybe_mode_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_0 = {
  (MR_String) "wnhii_type_ctor_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_1 = {
  (MR_String) "wnhii_tuple_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_2 = {
  (MR_String) "wnhii_pred_arg",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_3 = {
  (MR_String) "wnhii_func_arg",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_4 = {
  (MR_String) "wnhii_func_return_arg",
  INT32_C(4)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_5 = {
  (MR_String) "wnhii_type_qual",
  INT32_C(5)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_6 = {
  (MR_String) "wnhii_supertype",
  INT32_C(6)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_7 = {
  (MR_String) "wnhii_solver_type_defn",
  INT32_C(7)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_8 = {
  (MR_String) "wnhii_class_constraint",
  INT32_C(8)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_9 = {
  (MR_String) "wnhii_user_struct_sharing",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_10 = {
  (MR_String) "wnhii_ctgc_type_selector",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_11 = {
  (MR_String) "wnhii_pragma_struct_sharing",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_12 = {
  (MR_String) "wnhii_pragma_struct_reuse",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_13 = {
  (MR_String) "wnhii_pragma_type_spec_constr",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_14 = {
  (MR_String) "wnhii_pragma_type_spec",
  INT32_C(14)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_why_no_ho_inst_info_0[15] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_2,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_3,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_4,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_5,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_6,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_7,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_8,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_9,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_10,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_11,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_12,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_13,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_14
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_no_ho_inst_info_0[15] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_8,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_10,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_3,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_4,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_12,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_11,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_14,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_13,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_2,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_7,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_6,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_5,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_9
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_no_ho_inst_info_0[15] = {
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 8,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "why_no_ho_inst_info",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_no_ho_inst_info_0 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_why_no_ho_inst_info_0 },
  (MR_Integer) 15,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_no_ho_inst_info_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_0 = {
  (MR_String) "wna_by_design",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_1 = {
  (MR_String) "wna_nyi",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_why_not_allowed_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_not_allowed_0[2] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_not_allowed_0_1
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_not_allowed_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_not_allowed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____why_not_allowed_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____why_not_allowed_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "why_not_allowed",
  { parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_not_allowed_0 },
  { parse_tree__parse_type_name__parse_tree__parse_type_name__enum_ordinal_ordered_why_not_allowed_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_not_allowed_0,

};

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_not_allowed_0_0(
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

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_not_allowed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0(
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
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_type_name____Compare____type_and_maybe_mode_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_8;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
        parse_tree__prog_data____Compare____mer_mode_0_0(HeadVar__1_1, ArgX2_9, ArgY2_10);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____type_and_maybe_mode_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(ArgX2_7, ArgY2_8);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0(
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
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_type_name_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0(
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
      TypeInfo_9_9 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
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

              parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(TypeInfo_for_T_12, HeadVar__1_1, ArgX1_6, ArgY1_7);
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
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_8 < ArgY1_9);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_8 > ArgY1_9);
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
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0(
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
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_28 == CastY_29);
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

              mercury__list____Compare____list_1_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX1_4, ArgY1_5);
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
              MR_Box ArgX1_6 = (MR_hl_field(1, HeadVar__2_2, 0));
              MR_Box ArgY1_7 = (MR_hl_field(1, HeadVar__3_3, 0));
              MR_Box ArgX2_9 = (MR_hl_field(1, HeadVar__2_2, 1));
              MR_Box ArgY2_10 = (MR_hl_field(1, HeadVar__3_3, 1));
              MR_Word SubResult1_8;

              mercury__builtin__compare_3_p_0(TypeInfo_for_T_30, &SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
                mercury__builtin__compare_3_p_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX2_9, ArgY2_10);
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

              mercury__list____Compare____list_1_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX1_11, ArgY1_12);
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
                      MR_Box ArgX1_13 = (MR_hl_field(3, HeadVar__2_2, 1));
                      MR_Box ArgY1_14 = (MR_hl_field(3, HeadVar__3_3, 1));
                      MR_Box ArgX2_16 = (MR_hl_field(3, HeadVar__2_2, 2));
                      MR_Box ArgY2_17 = (MR_hl_field(3, HeadVar__3_3, 2));
                      MR_Word SubResult1_15;

                      mercury__builtin__compare_3_p_0(TypeInfo_for_T_30, &SubResult1_15, ArgX1_13, ArgY1_14);
                      succeeded = (SubResult1_15 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_15;
                      else
                        mercury__builtin__compare_3_p_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX2_16, ArgY2_17);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
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
                      MR_String ArgX1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 3);
                      MR_Word ArgY2_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 3);
                      MR_Box ArgX3_24 = (MR_hl_field(3, HeadVar__2_2, 3));
                      MR_Box ArgY3_25 = (MR_hl_field(3, HeadVar__3_3, 3));
                      MR_Word SubResult1_20;

                      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_20, ArgX1_18, ArgY1_19);
                      succeeded = (SubResult1_20 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_20;
                      else
                      {
                        MR_Word SubResult2_23;
                        MR_Integer Var_39 = (MR_Integer) (ArgX2_21);
                        MR_Integer Var_40 = (MR_Integer) (ArgY2_22);

                        succeeded = (Var_39 < Var_40);
                        if (succeeded)
                        {
                          SubResult2_23 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_39 > Var_40);
                          if (succeeded)
                          {
                            SubResult2_23 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult2_23 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_23;
                        else
                          mercury__builtin__compare_3_p_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX3_24, ArgY3_25);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
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
                      MR_Word ArgX1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__list____Compare____list_1_0(TypeInfo_for_T_30, HeadVar__1_1, ArgX1_26, ArgY1_27);
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

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
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
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_25, ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box ArgX1_5 = (MR_hl_field(1, HeadVar__1_1, 0));
          MR_Box ArgY1_6;
          MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__1_1, 1));
          MR_Box ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_hl_field(1, HeadVar__2_2, 0));
            ArgY2_8 = (MR_hl_field(1, HeadVar__2_2, 1));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX2_7, ArgY2_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_25, ArgX1_9, ArgY1_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ArgX1_11 = (MR_hl_field(3, HeadVar__1_1, 1));
              MR_Box ArgY1_12;
              MR_Box ArgX2_13 = (MR_hl_field(3, HeadVar__1_1, 2));
              MR_Box ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = (MR_hl_field(3, HeadVar__2_2, 1));
                ArgY2_14 = (MR_hl_field(3, HeadVar__2_2, 2));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX1_11, ArgY1_12);
                if (succeeded)
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX2_13, ArgY2_14);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_16;
              MR_Word ArgX2_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 3);
              MR_Word ArgY2_18;
              MR_Box ArgX3_19 = (MR_hl_field(3, HeadVar__1_1, 3));
              MR_Box ArgY3_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 3);
                ArgY3_20 = (MR_hl_field(3, HeadVar__2_2, 3));
                succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX2_17 == ArgY2_18);
                  if (succeeded)
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX3_19, ArgY3_20);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_25, ArgX1_21, ArgY1_22);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 15);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 15);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_2,
  MR_Word * Mode_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    *Type_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    *Mode_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_name.project_tm_type_and_mode\'/3", (MR_String) "type_only");
      return;
    }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__is_known_type_name_1_p_0(
  MR_String Name_2)
{
  MR_bool succeeded;

  {
    MR_Word Var_3;

    succeeded = parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Name_2, (MR_Word) ((MR_Unsigned) 0U), &Var_3);
  }
  if (!(succeeded))
    succeeded = (strcmp(Name_2, (MR_String) "func") == 0);
  return succeeded;
}

void MR_CALL 
parse_tree__parse_type_name__parse_types_and_maybe_modes_10_p_0(
  MR_Word MaybeInstConstraints_1,
  MR_Word MaybeRequireMode_2,
  MR_Word Why_3,
  MR_Word VarSet_4,
  MR_Word ArgContextFunc_5,
  MR_Word HeadVar__6_6,
  MR_Integer ArgNum_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
  }
  else
  {
    MR_Word Term_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    MR_Word Terms_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word TypesAndMaybeModesTail_30;
    MR_Word MaybeTypeAndMaybeMode_31;
    MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Specs_1_37;
    MR_Word Var_39;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_39;

    parse_tree__parse_type_name__parse_types_and_maybe_modes_10_p_0(MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, ArgContextFunc_5, Terms_26, Var_36, &TypesAndMaybeModesTail_30, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_1_37);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ArgContextFunc_5, 1))));
    conv1_Var_39 = func_0(((MR_Box) (ArgContextFunc_5)), ((MR_Box) (ArgNum_7)));
    Var_39 = ((MR_Word) (conv1_Var_39));
    parse_tree__parse_type_name__parse_type_and_maybe_mode_7_p_0(MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, Var_39, Term_25, &MaybeTypeAndMaybeMode_31);
    if (((MR_tag((MR_Word) MaybeTypeAndMaybeMode_31)) == (MR_Integer) 0))
    {
      MR_Word TMSpecs_33 = ((MR_Word) ((MR_hl_field(0, MaybeTypeAndMaybeMode_31, 0))));

      *HeadVar__8_8 = TypesAndMaybeModesTail_30;
      *STATE_VARIABLE_Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TMSpecs_33, STATE_VARIABLE_Specs_1_37);
    }
    else
    {
      MR_Word TypeAndMaybeMode_32 = ((MR_Word) ((MR_hl_field(1, MaybeTypeAndMaybeMode_31, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeAndMaybeMode_32));
        MR_hl_field(1, base, 1) = ((MR_Box) (TypesAndMaybeModesTail_30));
      }
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_1_37;
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_3_p_0(
  MR_Word AllowHOInstInfo_4,
  MR_Word Terms_5,
  MR_Word * Types_6)
{
  MR_bool succeeded;
  MR_Word VarSet_7;
  MR_Word ContextPieces_8;
  MR_Word Var_9;

  VarSet_7 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
  parse_tree__parse_type_name__parse_types_5_p_0(AllowHOInstInfo_4, VarSet_7, ContextPieces_8, Terms_5, &Var_9);
  succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
  if (succeeded)
    *Types_6 = ((MR_Word) ((MR_hl_field(1, Var_9, 0))));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_type_3_p_0(
  MR_Word AllowHOInstInfo_4,
  MR_Word Term_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;
  MR_Word VarSet_7;
  MR_Word ContextPieces_8;
  MR_Word Var_9;

  VarSet_7 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
  ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
  parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_4, VarSet_7, ContextPieces_8, Term_5, &Var_9);
  succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
  if (succeeded)
    *Type_6 = ((MR_Word) ((MR_hl_field(1, Var_9, 0))));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name__parse_type_no_mode_5_p_0(
  MR_Word WhyNotHOInstInfo_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeType_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
  MR_Word TypeTerm_11;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_22 = ((MR_String) ((MR_hl_field(0, Var_21, 0))));
      succeeded = (strcmp(Var_22, (MR_String) "::") == 0);
      if (succeeded)
      {
        succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeTerm_11 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(1, Var_23, 1))));
          succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_25 = ((MR_Word) ((MR_hl_field(1, Var_24, 1))));
            succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String TypeTermStr_14;
    MR_String Place_15;
    MR_String NotAllowed_17;
    MR_Word Pieces_18;
    MR_Word Spec_19;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_63;
    MR_Word Var_64;

    TypeTermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, TypeTerm_11);
    Place_15 = ((&parse_tree__parse_type_name_vector_common_5[15 + WhyNotHOInstInfo_6]))->parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_0;
    NotAllowed_17 = ((&parse_tree__parse_type_name_vector_common_5[15 + WhyNotHOInstInfo_6]))->parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_1;
    Var_26 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (TypeTermStr_14));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_35 = parse_tree__error_spec__color_as_subject_1_f_0(Var_36);
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (NotAllowed_17));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_46);
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (Place_15));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[93])));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[92])));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
    }
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_49);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[91])), Var_44);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_39);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[89])), Var_34);
    Pieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_27);
    Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type_no_mode\'/5"));
      MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Var_63));
      MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_18));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeType_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
    }
  }
  else
  {
    MR_Word AllowHOInstInfo_20;

    {
      AllowHOInstInfo_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, AllowHOInstInfo_20, 0) = (MR_Box) ((MR_Unsigned) (WhyNotHOInstInfo_6));
    }
    parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_20, VarSet_7, ContextPieces_8, Term_9, MaybeType_10);
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_5_p_0(
  MR_Word AllowHOInstInfo_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
  {
    MR_Word Functor_14 = ((MR_Word) ((MR_hl_field(0, Term_9, 0))));
    MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(0, Term_9, 1))));
    MR_Word FunctorContext_16 = ((MR_Word) ((MR_hl_field(0, Term_9, 2))));

    switch (MR_tag((MR_Word) Functor_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Name_27 = ((MR_String) ((MR_hl_field(0, Functor_14, 0))));
          MR_Word KnownTypeKind_28;

          succeeded = parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Name_27, ArgTerms_15, &KnownTypeKind_28);
          if (succeeded)
            switch (MR_tag((MR_Word) KnownTypeKind_28)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Type_29 = ((MR_Word) ((MR_hl_field(0, KnownTypeKind_28, 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Type_29));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CompoundTypeKind_30 = ((MR_Word) ((MR_hl_field(1, KnownTypeKind_28, 0))));

                  parse_tree__parse_type_name__parse_compound_type_6_p_0(AllowHOInstInfo_6, Term_9, VarSet_7, ContextPieces_8, CompoundTypeKind_30, Result_10);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ExpectedArity_31 = ((MR_Integer) ((MR_hl_field(2, KnownTypeKind_28, 0))));
                  MR_Word Var_72;
                  MR_Word Var_73;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_85;
                  MR_Word Var_90;
                  MR_Word Var_91;
                  MR_Word Var_92;
                  MR_Word Var_95;
                  MR_Word Var_96;
                  MR_Word Var_107;
                  MR_Word Pieces_113;
                  MR_Word Spec_114;

                  Var_72 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
                  {
                    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_83, 1) = ((MR_Box) (Name_27));
                  }
                  {
                    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
                    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_81 = parse_tree__error_spec__color_as_subject_1_f_0(Var_82);
                  {
                    Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, Var_96, 1) = ((MR_Box) (ExpectedArity_31));
                  }
                  {
                    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
                    MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[8])));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[6])));
                    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
                  }
                  Var_91 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_92);
                  Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_91, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
                  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[5])), Var_90);
                  Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, Var_85);
                  Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[3])), Var_80);
                  Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_73);
                  {
                    Spec_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type\'/5"));
                    MR_hl_field(0, Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(0, Spec_114, 3) = ((MR_Box) (FunctorContext_16));
                    MR_hl_field(0, Spec_114, 4) = ((MR_Box) (Pieces_113));
                  }
                  {
                    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_107, 0) = ((MR_Box) (Spec_114));
                    MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *Result_10 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_107));
                  }
                }
                break;
            }
          else
          {
            MR_Word NameResult_32;

            parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, ContextPieces_8, Term_9, &NameResult_32);
            if (((MR_tag((MR_Word) NameResult_32)) == (MR_Integer) 0))
            {
              MR_Word Specs_117 = ((MR_Word) ((MR_hl_field(0, NameResult_32, 0))));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Result_10 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Specs_117));
              }
            }
            else
            {
              MR_Word SymName_33 = ((MR_Word) ((MR_hl_field(1, NameResult_32, 0))));
              MR_Word SymNameArgTerms_34 = ((MR_Word) ((MR_hl_field(1, NameResult_32, 1))));
              MR_Word SymNameArgsResult_35;

              parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[0])), VarSet_7, ContextPieces_8, SymNameArgTerms_34, &SymNameArgsResult_35);
              if (((MR_tag((MR_Word) SymNameArgsResult_35)) == (MR_Integer) 0))
                *Result_10 = (MR_Word) (SymNameArgsResult_35);
              else
              {
                MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(1, SymNameArgsResult_35, 0))));
                MR_Word Var_111;

                {
                  Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_111, 0) = ((MR_Box) (SymName_33));
                  MR_hl_field(1, Var_111, 1) = ((MR_Box) (ArgTypes_36));
                  MR_hl_field(1, Var_111, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_111));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_String TermStr_24;
          MR_Word Pieces_25;
          MR_Word Spec_26;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_53;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_70;

          TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
          Var_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8);
          {
            Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_51, 1) = ((MR_Box) (TermStr_24));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_49 = parse_tree__error_spec__color_as_subject_1_f_0(Var_50);
          Var_59 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[13])));
          Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
          Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[11])), Var_58);
          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_53);
          Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[3])), Var_48);
          Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_41);
          {
            Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type\'/5"));
            MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_26, 3) = ((MR_Box) (FunctorContext_16));
            MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
          }
          {
            Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_26));
            MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
          }
        }
        break;
    }
  }
  else
  {
    MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(1, Term_9, 0))));
    MR_Word Var_13;
    MR_Word Var_38;

    mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Var0_11, &Var_13);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (Var_13));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_types_acc_8_p_0(
  MR_Word AllowHOInstInfo_1,
  MR_Word VarSet_2,
  MR_Word ContextPieces_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevTypes_0_5,
  MR_Word * STATE_VARIABLE_RevTypes_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_RevTypes_6 = STATE_VARIABLE_RevTypes_0_5;
    }
    else
    {
      MR_Word Term_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Terms_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word TermResult_25;
      MR_Word STATE_VARIABLE_RevTypes_1_32;
      MR_Word STATE_VARIABLE_Specs_1_33;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevTypes_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_1, VarSet_2, ContextPieces_3, Term_21, &TermResult_25);
      if (((MR_tag((MR_Word) TermResult_25)) == (MR_Integer) 0))
      {
        MR_Word TermSpecs_27 = ((MR_Word) ((MR_hl_field(0, TermResult_25, 0))));

        STATE_VARIABLE_Specs_1_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TermSpecs_27, STATE_VARIABLE_Specs_0_7);
        STATE_VARIABLE_RevTypes_1_32 = STATE_VARIABLE_RevTypes_0_5;
      }
      else
      {
        MR_Word Type_26 = ((MR_Word) ((MR_hl_field(1, TermResult_25, 0))));

        {
          STATE_VARIABLE_RevTypes_1_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevTypes_1_32, 0) = ((MR_Box) (Type_26));
          MR_hl_field(1, STATE_VARIABLE_RevTypes_1_32, 1) = ((MR_Box) (STATE_VARIABLE_RevTypes_0_5));
        }
        STATE_VARIABLE_Specs_1_33 = STATE_VARIABLE_Specs_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Terms_22;
      next_value_of_STATE_VARIABLE_RevTypes_0_5 = STATE_VARIABLE_RevTypes_1_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_33;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevTypes_0_5 = next_value_of_STATE_VARIABLE_RevTypes_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(
  MR_Word Var_35,
  MR_Word Var_36,
  MR_Word WhyNotHOInstInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
  }
  else
  {
    MR_Word Term_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word Terms_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word TypesTail_24;
    MR_Word MaybeType_25;
    MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Specs_1_31;
    MR_Word Var_33;

    parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(Var_35, Var_36, WhyNotHOInstInfo_1, VarSet_2, Terms_20, Var_30, &TypesTail_24, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_31);
    Var_33 = parse_tree__parse_type_name__arg_context_pieces_3_f_0(Var_35, Var_36, ArgNum_5);
    parse_tree__parse_type_name__parse_type_no_mode_5_p_0(WhyNotHOInstInfo_1, VarSet_2, Var_33, Term_19, &MaybeType_25);
    if (((MR_tag((MR_Word) MaybeType_25)) == (MR_Integer) 0))
    {
      MR_Word TSpecs_27 = ((MR_Word) ((MR_hl_field(0, MaybeType_25, 0))));

      *HeadVar__6_6 = TypesTail_24;
      *STATE_VARIABLE_Specs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TSpecs_27, STATE_VARIABLE_Specs_1_31);
    }
    else
    {
      MR_Word Type_26 = ((MR_Word) ((MR_hl_field(1, MaybeType_25, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Type_26));
        MR_hl_field(1, base, 1) = ((MR_Box) (TypesTail_24));
      }
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_1_31;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_97_110_100_95_109_97_121_98_101_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_41,
  MR_Word Var_42,
  MR_Word MaybeInstConstraints_1,
  MR_Word MaybeRequireMode_2,
  MR_Word Why_3,
  MR_Word VarSet_4,
  MR_Word HeadVar__6_6,
  MR_Integer ArgNum_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
  }
  else
  {
    MR_Word Term_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    MR_Word Terms_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word TypesAndMaybeModesTail_30;
    MR_Word MaybeTypeAndMaybeMode_31;
    MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Specs_1_37;
    MR_Word Var_39;

    parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_97_110_100_95_109_97_121_98_101_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(Var_41, Var_42, MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, Terms_26, Var_36, &TypesAndMaybeModesTail_30, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_1_37);
    Var_39 = parse_tree__parse_type_name__arg_context_pieces_3_f_0(Var_41, Var_42, ArgNum_7);
    parse_tree__parse_type_name__parse_type_and_maybe_mode_7_p_0(MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, Var_39, Term_25, &MaybeTypeAndMaybeMode_31);
    if (((MR_tag((MR_Word) MaybeTypeAndMaybeMode_31)) == (MR_Integer) 0))
    {
      MR_Word TMSpecs_33 = ((MR_Word) ((MR_hl_field(0, MaybeTypeAndMaybeMode_31, 0))));

      *HeadVar__8_8 = TypesAndMaybeModesTail_30;
      *STATE_VARIABLE_Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TMSpecs_33, STATE_VARIABLE_Specs_1_37);
    }
    else
    {
      MR_Word TypeAndMaybeMode_32 = ((MR_Word) ((MR_hl_field(1, MaybeTypeAndMaybeMode_31, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeAndMaybeMode_32));
        MR_hl_field(1, base, 1) = ((MR_Box) (TypesAndMaybeModesTail_30));
      }
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_1_37;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word BeforeIsTerm_9,
  MR_Word AfterIsTerm_10,
  MR_Word Purity_11,
  MR_Word * MaybeType_12)
{
  MR_bool succeeded;
  MR_Word MaybeDetism_13;
  MR_Word RetTerm_15;
  MR_Word ArgTerms_17;
  MR_Word FuncTerm_14;
  MR_Word Var_30;
  MR_String Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_String Var_36;

  parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_7, AfterIsTerm_10, &MaybeDetism_13);
  succeeded = ((MR_tag((MR_Word) BeforeIsTerm_9)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_30 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_9, 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_9, 1))));
    succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_31 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
      succeeded = (strcmp(Var_31, (MR_String) "=") == 0);
      if (succeeded)
      {
        succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FuncTerm_14 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
          Var_33 = ((MR_Word) ((MR_hl_field(1, Var_32, 1))));
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            RetTerm_15 = ((MR_Word) ((MR_hl_field(1, Var_33, 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(1, Var_33, 1))));
            succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) FuncTerm_14)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_35 = ((MR_Word) ((MR_hl_field(0, FuncTerm_14, 0))));
                ArgTerms_17 = ((MR_Word) ((MR_hl_field(0, FuncTerm_14, 1))));
                succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_36 = ((MR_String) ((MR_hl_field(0, Var_35, 0))));
                  succeeded = (strcmp(Var_36, (MR_String) "func") == 0);
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ArgTypeAndMaybeModes_20;
    MR_Word ArgTMSpecs_21;
    MR_Word RetContextPieces_22;
    MR_Word MaybeRetTypeAndMaybeMode_23;
    MR_Word Var_43;
    MR_Word Var_53;

    parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_97_110_100_95_109_97_121_98_101_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(ContextPieces_8, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 3, VarSet_7, ArgTerms_17, (MR_Integer) 1, &ArgTypeAndMaybeModes_20, (MR_Word) ((MR_Unsigned) 0U), &ArgTMSpecs_21);
    Var_43 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[45])));
    RetContextPieces_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8, Var_43);
    parse_tree__parse_type_name__parse_type_and_maybe_mode_7_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 4, VarSet_7, RetContextPieces_22, RetTerm_15, &MaybeRetTypeAndMaybeMode_23);
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MaybeRetTypeAndMaybeMode_23));
    }
    parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(Purity_11, ArgTypeAndMaybeModes_20, ArgTMSpecs_21, Var_53, MaybeDetism_13, MaybeType_12);
  }
  else
  {
    MR_Word ArgTerms_115;
    MR_Word Var_54;
    MR_String Var_55;

    succeeded = ((MR_tag((MR_Word) BeforeIsTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_54 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_9, 0))));
      ArgTerms_115 = ((MR_Word) ((MR_hl_field(0, BeforeIsTerm_9, 1))));
      succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_55 = ((MR_String) ((MR_hl_field(0, Var_54, 0))));
        succeeded = (strcmp(Var_55, (MR_String) "pred") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word ArgTypeAndMaybeModes_113;
      MR_Word ArgTMSpecs_114;

      parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_97_110_100_95_109_97_121_98_101_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(ContextPieces_8, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 2, VarSet_7, ArgTerms_115, (MR_Integer) 1, &ArgTypeAndMaybeModes_113, (MR_Word) ((MR_Unsigned) 0U), &ArgTMSpecs_114);
      parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(Purity_11, ArgTypeAndMaybeModes_113, ArgTMSpecs_114, (MR_Word) ((MR_Unsigned) 0U), MaybeDetism_13, MaybeType_12);
    }
    else
    {
      MR_String BeforeIsTermStr_27;
      MR_Word HOPieces_28;
      MR_Word HOSpec_29;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_75;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_87;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_109;
      MR_Word Var_110;

      BeforeIsTermStr_27 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, BeforeIsTerm_9);
      Var_71 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[79])));
      Var_83 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[83])));
      {
        Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_98, 1) = ((MR_Box) (BeforeIsTermStr_27));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[8])));
      }
      Var_96 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_97);
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[86])), Var_95);
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_87);
      Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[81])), Var_82);
      Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_75);
      HOPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[77])), Var_70);
      Var_109 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AfterIsTerm_10);
      {
        HOSpec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HOSpec_29, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_ho_type_and_inst\'/6"));
        MR_hl_field(0, HOSpec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, HOSpec_29, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, HOSpec_29, 3) = ((MR_Box) (Var_109));
        MR_hl_field(0, HOSpec_29, 4) = ((MR_Box) (HOPieces_28));
      }
      {
        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_110, 0) = ((MR_Box) (HOSpec_29));
        MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeType_12 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_110));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_compound_type_6_p_0(
  MR_Word AllowHOInstInfo_7,
  MR_Word Term_8,
  MR_Word VarSet_9,
  MR_Word ContextPieces_10,
  MR_Word CompoundTypeKind_11,
  MR_Word * Result_12)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) CompoundTypeKind_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Args_13 = ((MR_Word) ((MR_hl_field(0, CompoundTypeKind_11, 0))));
        MR_Word ArgsResult_14;

        parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[2])), VarSet_9, ContextPieces_10, Args_13, &ArgsResult_14);
        if (((MR_tag((MR_Word) ArgsResult_14)) == (MR_Integer) 0))
          *Result_12 = (MR_Word) (ArgsResult_14);
        else
        {
          MR_Word ArgTypes_15 = ((MR_Word) ((MR_hl_field(1, ArgsResult_14, 0))));
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_58, 1) = ((MR_Box) (ArgTypes_15));
            MR_hl_field(3, Var_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_58));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BeforeEqTerm_28 = ((MR_Word) ((MR_hl_field(1, CompoundTypeKind_11, 0))));
        MR_Word AfterEqTerm_29 = ((MR_Word) ((MR_hl_field(1, CompoundTypeKind_11, 1))));
        MR_Word FuncArgs_30;
        MR_Word Var_126;
        MR_String Var_127;

        succeeded = ((MR_tag((MR_Word) BeforeEqTerm_28)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_126 = ((MR_Word) ((MR_hl_field(0, BeforeEqTerm_28, 0))));
          FuncArgs_30 = ((MR_Word) ((MR_hl_field(0, BeforeEqTerm_28, 1))));
          succeeded = ((MR_tag((MR_Word) Var_126)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_127 = ((MR_String) ((MR_hl_field(0, Var_126, 0))));
            succeeded = (strcmp(Var_127, (MR_String) "func") == 0);
          }
        }
        if (succeeded)
        {
          MR_Word ArgSpecs_32;
          MR_Word RetContextPieces_33;
          MR_Word MaybeRetType_34;
          MR_Word Var_132;
          MR_Word ArgTypes_285;
          MR_Word RetType_35;

          parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 1, (MR_Integer) 3, VarSet_9, FuncArgs_30, (MR_Integer) 1, &ArgTypes_285, (MR_Word) ((MR_Unsigned) 0U), &ArgSpecs_32);
          Var_132 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[45])));
          RetContextPieces_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10, Var_132);
          parse_tree__parse_type_name__parse_type_no_mode_5_p_0((MR_Integer) 4, VarSet_9, RetContextPieces_33, AfterEqTerm_29, &MaybeRetType_34);
          succeeded = (ArgSpecs_32 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeRetType_34)) == (MR_Integer) 1);
            if (succeeded)
              RetType_35 = ((MR_Word) ((MR_hl_field(1, MaybeRetType_34, 0))));
          }
          if (succeeded)
          {
            MR_Word FuncType_36;

            parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0((MR_Integer) 0, ArgTypes_285, RetType_35, &FuncType_36);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (FuncType_36));
            }
          }
          else
          {
            MR_Word Var_141;
            MR_Word Specs_283;

            Var_141 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeRetType_34);
            Specs_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgSpecs_32, Var_141);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_283));
            }
          }
        }
        else
        {
          MR_Word Var_142;
          MR_Word Var_143;
          MR_Word Var_153;
          MR_Word Var_154;
          MR_Word Var_159;
          MR_Word Var_160;
          MR_Word Var_165;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Pieces_288;
          MR_Word Spec_289;

          Var_142 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
          Var_154 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[52])));
          Var_160 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[54])));
          Var_171 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[58])));
          Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_171, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
          Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[56])), Var_170);
          Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_160, Var_165);
          Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_154, Var_159);
          Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[50])), Var_153);
          Pieces_288 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_142, Var_143);
          Var_185 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeEqTerm_28);
          {
            Spec_289 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_289, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_compound_type\'/6"));
            MR_hl_field(0, Spec_289, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_289, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, Spec_289, 3) = ((MR_Box) (Var_185));
            MR_hl_field(0, Spec_289, 4) = ((MR_Box) (Pieces_288));
          }
          {
            Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_186, 0) = ((MR_Box) (Spec_289));
            MR_hl_field(1, Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_186));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Args_280 = ((MR_Word) ((MR_hl_field(2, CompoundTypeKind_11, 0))));
        MR_Word ArgTypes_281;
        MR_Word Specs_282;

        parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 0, (MR_Integer) 2, VarSet_9, Args_280, (MR_Integer) 1, &ArgTypes_281, (MR_Word) ((MR_Unsigned) 0U), &Specs_282);
        if ((Specs_282 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word PredType_25;

          parse_tree__prog_type_construct__construct_higher_order_pred_type_3_p_0((MR_Integer) 0, ArgTypes_281, &PredType_25);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (PredType_25));
          }
        }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Specs_282));
          }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CompoundTypeKind_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BeforeIsTerm_37 = ((MR_Word) ((MR_hl_field(3, CompoundTypeKind_11, 1))));
            MR_Word AfterIsTerm_38 = ((MR_Word) ((MR_hl_field(3, CompoundTypeKind_11, 2))));
            MR_Word MaybeType_39;

            parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(VarSet_9, ContextPieces_10, BeforeIsTerm_37, AfterIsTerm_38, (MR_Integer) 0, &MaybeType_39);
            if (((MR_tag((MR_Word) MaybeType_39)) == (MR_Integer) 0))
              *Result_12 = MaybeType_39;
            else
            if ((AllowHOInstInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
              *Result_12 = MaybeType_39;
            else
            {
              MR_Word Why_41 = ((MR_Unsigned) ((MR_hl_field(1, AllowHOInstInfo_7, 0))) & (MR_Integer) 15);

              *Result_12 = parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(ContextPieces_10, Why_41, VarSet_9, Term_8);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String PurityName_42 = ((MR_String) ((MR_hl_field(3, CompoundTypeKind_11, 1))));
            MR_Word Purity_43 = ((MR_Unsigned) ((MR_hl_field(3, CompoundTypeKind_11, 2))) & (MR_Integer) 3);
            MR_Word SubTerm_44 = ((MR_Word) ((MR_hl_field(3, CompoundTypeKind_11, 3))));
            MR_Word AfterEqTerm_370;
            MR_Word FuncArgs_371;
            MR_String Name_45;
            MR_Word Var_189;
            MR_Word Var_190;
            MR_Word Var_191;
            MR_Word Var_192;
            MR_String Var_193;
            MR_Word Args_303;
            MR_Word BeforeEqTerm_304;

            succeeded = ((MR_tag((MR_Word) SubTerm_44)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_189 = ((MR_Word) ((MR_hl_field(0, SubTerm_44, 0))));
              Args_303 = ((MR_Word) ((MR_hl_field(0, SubTerm_44, 1))));
              succeeded = ((MR_tag((MR_Word) Var_189)) == (MR_Integer) 0);
              if (succeeded)
              {
                Name_45 = ((MR_String) ((MR_hl_field(0, Var_189, 0))));
                succeeded = (strcmp(Name_45, (MR_String) "=") == 0);
                if (succeeded)
                {
                  succeeded = (Args_303 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    BeforeEqTerm_304 = ((MR_Word) ((MR_hl_field(1, Args_303, 0))));
                    Var_190 = ((MR_Word) ((MR_hl_field(1, Args_303, 1))));
                    succeeded = (Var_190 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      AfterEqTerm_370 = ((MR_Word) ((MR_hl_field(1, Var_190, 0))));
                      Var_191 = ((MR_Word) ((MR_hl_field(1, Var_190, 1))));
                      succeeded = (Var_191 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) BeforeEqTerm_304)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_192 = ((MR_Word) ((MR_hl_field(0, BeforeEqTerm_304, 0))));
                          FuncArgs_371 = ((MR_Word) ((MR_hl_field(0, BeforeEqTerm_304, 1))));
                          succeeded = ((MR_tag((MR_Word) Var_192)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_193 = ((MR_String) ((MR_hl_field(0, Var_192, 0))));
                            succeeded = (strcmp(Var_193, (MR_String) "func") == 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_198;
              MR_Word ArgTypes_310;
              MR_Word ArgSpecs_313;
              MR_Word RetContextPieces_314;
              MR_Word MaybeRetType_315;
              MR_Word RetType_308;

              parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 1, (MR_Integer) 3, VarSet_9, FuncArgs_371, (MR_Integer) 1, &ArgTypes_310, (MR_Word) ((MR_Unsigned) 0U), &ArgSpecs_313);
              Var_198 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[45])));
              RetContextPieces_314 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10, Var_198);
              parse_tree__parse_type_name__parse_type_no_mode_5_p_0((MR_Integer) 4, VarSet_9, RetContextPieces_314, AfterEqTerm_370, &MaybeRetType_315);
              succeeded = (ArgSpecs_313 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeRetType_315)) == (MR_Integer) 1);
                if (succeeded)
                  RetType_308 = ((MR_Word) ((MR_hl_field(1, MaybeRetType_315, 0))));
              }
              if (succeeded)
              {
                MR_Word Type_305;

                parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(Purity_43, ArgTypes_310, RetType_308, &Type_305);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_12 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Type_305));
                }
              }
              else
              {
                MR_Word Var_206;
                MR_Word Specs_306;

                Var_206 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeRetType_315);
                Specs_306 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgSpecs_313, Var_206);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Specs_306));
                }
              }
            }
            else
            {
              MR_Word Args_351;
              MR_Word Var_207;
              MR_String Name_318;

              succeeded = ((MR_tag((MR_Word) SubTerm_44)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_207 = ((MR_Word) ((MR_hl_field(0, SubTerm_44, 0))));
                Args_351 = ((MR_Word) ((MR_hl_field(0, SubTerm_44, 1))));
                succeeded = ((MR_tag((MR_Word) Var_207)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Name_318 = ((MR_String) ((MR_hl_field(0, Var_207, 0))));
                  succeeded = (strcmp(Name_318, (MR_String) "pred") == 0);
                }
              }
              if (succeeded)
              {
                MR_Word ArgTypes_321;
                MR_Word Specs_322;

                parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 0, (MR_Integer) 2, VarSet_9, Args_351, (MR_Integer) 1, &ArgTypes_321, (MR_Word) ((MR_Unsigned) 0U), &Specs_322);
                if ((Specs_322 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Type_319;

                  parse_tree__prog_type_construct__construct_higher_order_pred_type_3_p_0(Purity_43, ArgTypes_321, &Type_319);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_12 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Type_319));
                  }
                }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *Result_12 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Specs_322));
                  }
              }
              else
              {
                MR_Word BeforeIsTerm_345;
                MR_Word AfterIsTerm_346;
                MR_Word Var_212;
                MR_Word Var_213;
                MR_Word Var_214;
                MR_Word Args_325;
                MR_String Name_326;

                succeeded = ((MR_tag((MR_Word) SubTerm_44)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_212 = ((MR_Word) ((MR_hl_field(0, SubTerm_44, 0))));
                  Args_325 = ((MR_Word) ((MR_hl_field(0, SubTerm_44, 1))));
                  succeeded = ((MR_tag((MR_Word) Var_212)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Name_326 = ((MR_String) ((MR_hl_field(0, Var_212, 0))));
                    succeeded = (strcmp(Name_326, (MR_String) "is") == 0);
                    if (succeeded)
                    {
                      succeeded = (Args_325 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        BeforeIsTerm_345 = ((MR_Word) ((MR_hl_field(1, Args_325, 0))));
                        Var_213 = ((MR_Word) ((MR_hl_field(1, Args_325, 1))));
                        succeeded = (Var_213 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          AfterIsTerm_346 = ((MR_Word) ((MR_hl_field(1, Var_213, 0))));
                          Var_214 = ((MR_Word) ((MR_hl_field(1, Var_213, 1))));
                          succeeded = (Var_214 == (MR_Word) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word MaybeType_336;

                  parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(VarSet_9, ContextPieces_10, BeforeIsTerm_345, AfterIsTerm_346, Purity_43, &MaybeType_336);
                  if (((MR_tag((MR_Word) MaybeType_336)) == (MR_Integer) 0))
                    *Result_12 = MaybeType_336;
                  else
                  if ((AllowHOInstInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
                    *Result_12 = MaybeType_336;
                  else
                  {
                    MR_Word Why_328 = ((MR_Unsigned) ((MR_hl_field(1, AllowHOInstInfo_7, 0))) & (MR_Integer) 15);

                    *Result_12 = parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(ContextPieces_10, Why_328, VarSet_9, Term_8);
                  }
                }
                else
                {
                  MR_Word AlwaysPieces_52 = (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[63]));
                  MR_Word FormPieces_54;
                  MR_Word Var_235;
                  MR_Word Var_236;
                  MR_Word Var_237;
                  MR_Word Var_239;
                  MR_Word Var_242;
                  MR_Word Var_243;
                  MR_Word Var_245;
                  MR_Word Var_246;
                  MR_Word Var_251;
                  MR_Word Var_262;
                  MR_Word Var_263;
                  MR_Word Var_264;
                  MR_Word Var_276;
                  MR_Word Var_277;
                  MR_Word Pieces_339;
                  MR_Word Spec_340;

                  if ((AllowHOInstInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
                    FormPieces_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AlwaysPieces_52, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[100])));
                  else
                    FormPieces_54 = AlwaysPieces_52;
                  Var_235 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
                  {
                    Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_243, 1) = ((MR_Box) (PurityName_42));
                  }
                  {
                    Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_242, 0) = ((MR_Box) (Var_243));
                    MR_hl_field(1, Var_242, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_239, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[65])));
                    MR_hl_field(1, Var_239, 1) = ((MR_Box) (Var_242));
                  }
                  {
                    Var_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_237, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Var_237, 1) = ((MR_Box) (Var_239));
                  }
                  Var_246 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[67])));
                  Var_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FormPieces_54, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[8])));
                  Var_263 = parse_tree__error_spec__color_as_correct_1_f_0(Var_264);
                  Var_262 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_263, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[75])));
                  Var_251 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[73])), Var_262);
                  Var_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_246, Var_251);
                  Var_236 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_237, Var_245);
                  Pieces_339 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_235, Var_236);
                  Var_276 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_44);
                  {
                    Spec_340 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_340, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_compound_type\'/6"));
                    MR_hl_field(0, Spec_340, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_340, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(0, Spec_340, 3) = ((MR_Box) (Var_276));
                    MR_hl_field(0, Spec_340, 4) = ((MR_Box) (Pieces_339));
                  }
                  {
                    Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_277, 0) = ((MR_Box) (Spec_340));
                    MR_hl_field(1, Var_277, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *Result_12 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_277));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Pieces_21;
            MR_Word Spec_23;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word ArgTypes_279 = ((MR_Word) ((MR_hl_field(3, CompoundTypeKind_11, 1))));
            MR_Word FunctorVarName_17;
            MR_Word Var_60;

            succeeded = (ArgTypes_279 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_60 = ((MR_Word) ((MR_hl_field(1, ArgTypes_279, 0))));
              succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 1);
              if (succeeded)
                FunctorVarName_17 = ((MR_Word) ((MR_hl_field(1, Var_60, 0))));
            }
            if (succeeded)
            {
              MR_Word FunctorPiece_20;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_75;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;

              FunctorPiece_20 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, FunctorVarName_17);
              Var_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
              Var_70 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[39])));
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (FunctorPiece_20));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[8])));
              }
              Var_81 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_82);
              Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
              Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[41])), Var_80);
              Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_75);
              Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[37])), Var_69);
              Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_62);
            }
            else
            {
              MR_String TermStr_22;
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;

              TermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Term_8);
              Var_90 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_10);
              Var_99 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[43])));
              {
                Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_107, 1) = ((MR_Box) (TermStr_22));
              }
              {
                Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
                MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[8])));
              }
              Var_105 = parse_tree__error_spec__color_as_subject_1_f_0(Var_106);
              Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
              Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, Var_104);
              Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[3])), Var_98);
              Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_91);
            }
            Var_118 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
            {
              Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_compound_type\'/6"));
              MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Var_118));
              MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_21));
            }
            {
              Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_119, 0) = ((MR_Box) (Spec_23));
              MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_12 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_119));
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_and_maybe_mode_7_p_0(
  MR_Word MaybeInstConstraints_8,
  MR_Word MaybeRequireMode_9,
  MR_Word Why_10,
  MR_Word VarSet_11,
  MR_Word ContextPieces_12,
  MR_Word Term_13,
  MR_Word * MaybeTypeAndMode_14)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
  MR_String Colons_15;
  MR_Word TypeTerm_16;
  MR_Word ModeTerm_17;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;

  if (succeeded)
  {
    Var_34 = ((MR_Word) ((MR_hl_field(0, Term_13, 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, Term_13, 1))));
    succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
    if (succeeded)
    {
      Colons_15 = ((MR_String) ((MR_hl_field(0, Var_34, 0))));
      if ((strcmp(Colons_15, (MR_String) ":") == 0))
        succeeded = MR_TRUE;
      else
      if ((strcmp(Colons_15, (MR_String) "::") == 0))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TypeTerm_16 = ((MR_Word) ((MR_hl_field(1, Var_35, 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(1, Var_35, 1))));
          succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ModeTerm_17 = ((MR_Word) ((MR_hl_field(1, Var_36, 0))));
            Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
            succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeType_19;
    MR_Word MaybeMode_24;
    MR_Word ColonSpecs_26;
    MR_Word Var_38;
    MR_Word Type_28;
    MR_Word Mode_29;

    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = (MR_Box) ((MR_Unsigned) (Why_10));
    }
    parse_tree__parse_type_name__parse_type_5_p_0(Var_38, VarSet_11, ContextPieces_12, TypeTerm_16, &MaybeType_19);
    if ((MaybeInstConstraints_8 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_3[1])), VarSet_11, ContextPieces_12, ModeTerm_17, &MaybeMode_24);
    else
    {
      MR_Word InstConstraints_20 = ((MR_Word) ((MR_hl_field(1, MaybeInstConstraints_8, 0))));
      MR_Word MaybeMode0_21;

      parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_11, ContextPieces_12, ModeTerm_17, &MaybeMode0_21);
      if (((MR_tag((MR_Word) MaybeMode0_21)) == (MR_Integer) 0))
        MaybeMode_24 = MaybeMode0_21;
      else
      {
        MR_Word Mode0_22 = ((MR_Word) ((MR_hl_field(1, MaybeMode0_21, 0))));
        MR_Word Mode1_23;

        parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(InstConstraints_20, Mode0_22, &Mode1_23);
        {
          MaybeMode_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeMode_24, 0) = ((MR_Box) (Mode1_23));
        }
      }
    }
    if ((strcmp(Colons_15, (MR_String) ":") == 0))
    {
      MR_Word ColonPieces_27;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_56;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_70;
      MR_Word Var_74;

      Var_42 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_12);
      Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[18])));
      Var_62 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[22])));
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[20])), Var_61);
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[16])), Var_50);
      ColonPieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_43);
      Var_74 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_70, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type_and_maybe_mode\'/7"));
        MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(0, Var_70, 3) = ((MR_Box) (Var_74));
        MR_hl_field(0, Var_70, 4) = ((MR_Box) (ColonPieces_27));
      }
      {
        ColonSpecs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ColonSpecs_26, 0) = ((MR_Box) (Var_70));
        MR_hl_field(1, ColonSpecs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      ColonSpecs_26 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = (ColonSpecs_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeType_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        Type_28 = ((MR_Word) ((MR_hl_field(1, MaybeType_19, 0))));
        succeeded = ((MR_tag((MR_Word) MaybeMode_24)) == (MR_Integer) 1);
        if (succeeded)
          Mode_29 = ((MR_Word) ((MR_hl_field(1, MaybeMode_24, 0))));
      }
    }
    if (succeeded)
    {
      MR_Word Var_76;

      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Type_28));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Mode_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTypeAndMode_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_76));
      }
    }
    else
    {
      MR_Word Specs_30;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;

      Var_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeType_19);
      Var_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeMode_24);
      Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_79, ColonSpecs_26);
      Specs_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_77, Var_78);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeTypeAndMode_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_30));
      }
    }
  }
  else
    switch (MaybeRequireMode_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_122;
          MR_Word MaybeType_128;

          {
            Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_122, 0) = (MR_Box) ((MR_Unsigned) (Why_10));
          }
          parse_tree__parse_type_name__parse_type_5_p_0(Var_122, VarSet_11, ContextPieces_12, Term_13, &MaybeType_128);
          if (((MR_tag((MR_Word) MaybeType_128)) == (MR_Integer) 0))
            *MaybeTypeAndMode_14 = (MR_Word) (MaybeType_128);
          else
          {
            MR_Word Var_123;
            MR_Word Type_124 = ((MR_Word) ((MR_hl_field(1, MaybeType_128, 0))));

            {
              Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_123, 0) = ((MR_Box) (Type_124));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeTypeAndMode_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_123));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String TermStr_31;
          MR_Word MissingPieces_32;
          MR_Word MissingSpec_33;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_100;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_119;
          MR_Word Var_120;

          TermStr_31 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_11, Term_13);
          Var_80 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_12);
          Var_89 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[28])));
          {
            Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_108, 1) = ((MR_Box) (TermStr_31));
          }
          {
            Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
            MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[8])));
          }
          Var_106 = parse_tree__error_spec__color_as_subject_1_f_0(Var_107);
          Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[9])));
          Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[30])), Var_105);
          Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_100);
          Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[3])), Var_88);
          MissingPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_81);
          Var_119 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
          {
            MissingSpec_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MissingSpec_33, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type_and_maybe_mode\'/7"));
            MR_hl_field(0, MissingSpec_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, MissingSpec_33, 2) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(0, MissingSpec_33, 3) = ((MR_Box) (Var_119));
            MR_hl_field(0, MissingSpec_33, 4) = ((MR_Box) (MissingPieces_32));
          }
          {
            Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_120, 0) = ((MR_Box) (MissingSpec_33));
            MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeTypeAndMode_14 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_120));
          }
        }
        break;
    }
}

void MR_CALL 
parse_tree__parse_type_name__parse_types_5_p_0(
  MR_Word AllowHOInstInfo_6,
  MR_Word VarSet_7,
  MR_Word ContextPieces_8,
  MR_Word Terms_9,
  MR_Word * Result_10)
{
  MR_Word RevTypes_11;
  MR_Word Specs_12;

  parse_tree__parse_type_name__parse_types_acc_8_p_0(AllowHOInstInfo_6, VarSet_7, ContextPieces_8, Terms_9, (MR_Word) ((MR_Unsigned) 0U), &RevTypes_11, (MR_Word) ((MR_Unsigned) 0U), &Specs_12);
  if ((Specs_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_17;

    Var_17 = mercury__list__reverse_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RevTypes_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_12));
    }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String Name_4,
  MR_Word Args_5,
  MR_Word * KnownType_6)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(Name_4, 0)) {
      case (MR_Integer) 0:
        case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 61:
        switch (MR_nth_code_unit(Name_4, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 1;
            break;
          case (MR_Integer) 60:
            if (MR_offset_streq(2, Name_4, (MR_String) "=<"))
              case_num_0 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 99:
        if (MR_offset_streq(1, Name_4, (MR_String) "character"))
          case_num_0 = (MR_Integer) 2;
        break;
      case (MR_Integer) 102:
        if (MR_offset_streq(1, Name_4, (MR_String) "float"))
          case_num_0 = (MR_Integer) 3;
        break;
      case (MR_Integer) 105:
        switch (MR_nth_code_unit(Name_4, 1)) {
          case (MR_Integer) 109:
            if (MR_offset_streq(2, Name_4, (MR_String) "impure"))
              case_num_0 = (MR_Integer) 4;
            break;
          case (MR_Integer) 110:
            switch (MR_nth_code_unit(Name_4, 2)) {
              case (MR_Integer) 116:
                switch (MR_nth_code_unit(Name_4, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(4, Name_4, (MR_String) "int16"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(4, Name_4, (MR_String) "int32"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_streq(4, Name_4, (MR_String) "int64"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(4, Name_4, (MR_String) "int8"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 115:
            if (MR_offset_streq(2, Name_4, (MR_String) "is"))
              case_num_0 = (MR_Integer) 10;
            break;
        }
        break;
      case (MR_Integer) 112:
        switch (MR_nth_code_unit(Name_4, 1)) {
          case (MR_Integer) 114:
            if (MR_offset_streq(2, Name_4, (MR_String) "pred"))
              case_num_0 = (MR_Integer) 11;
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, Name_4, (MR_String) "pure"))
              case_num_0 = (MR_Integer) 12;
            break;
        }
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(Name_4, 1)) {
          case (MR_Integer) 101:
            if (MR_offset_streq(2, Name_4, (MR_String) "semipure"))
              case_num_0 = (MR_Integer) 13;
            break;
          case (MR_Integer) 116:
            if (MR_offset_streq(2, Name_4, (MR_String) "string"))
              case_num_0 = (MR_Integer) 14;
            break;
        }
        break;
      case (MR_Integer) 117:
        if (MR_offset_strn_eq(1, 3, Name_4, (MR_String) "uint"))
          switch (MR_nth_code_unit(Name_4, 4)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 49:
              if (MR_offset_streq(5, Name_4, (MR_String) "uint16"))
                case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 51:
              if (MR_offset_streq(5, Name_4, (MR_String) "uint32"))
                case_num_0 = (MR_Integer) 17;
              break;
            case (MR_Integer) 54:
              if (MR_offset_streq(5, Name_4, (MR_String) "uint64"))
                case_num_0 = (MR_Integer) 18;
              break;
            case (MR_Integer) 56:
              if (MR_offset_streq(5, Name_4, (MR_String) "uint8"))
                case_num_0 = (MR_Integer) 19;
              break;
          }
        break;
      case (MR_Integer) 123:
        if (MR_offset_streq(1, Name_4, (MR_String) "{}"))
          case_num_0 = (MR_Integer) 20;
        break;
    }
    switch (case_num_0) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          // case ""
          ;
          {
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_58, 1) = ((MR_Box) (Args_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *KnownType_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_58));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          // case "=", "=<"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[3]));
          else
          {
            MR_Word Var_329 = ((MR_Word) ((MR_hl_field(1, Args_5, 1))));
            MR_Box Var_330 = (MR_hl_field(1, Args_5, 0));

            if ((Var_329 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[3]));
            else
            {
              MR_Word Var_339 = ((MR_Word) ((MR_hl_field(1, Var_329, 1))));
              MR_Box Var_340 = (MR_hl_field(1, Var_329, 0));

              if ((Var_339 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_45;

                {
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = Var_330;
                  MR_hl_field(1, Var_45, 1) = Var_340;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownType_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
                }
              }
              else
                *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[3]));
            }
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          // case "character"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[5]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          // case "float"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[8]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 4:
        {
          // case "impure"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[9]));
          else
          {
            MR_Word Var_331 = ((MR_Word) ((MR_hl_field(1, Args_5, 1))));
            MR_Box Var_332 = (MR_hl_field(1, Args_5, 0));

            if ((Var_331 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_57;

              {
                Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_57, 1) = ((MR_Box) (Name_4));
                MR_hl_field(3, Var_57, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                MR_hl_field(3, Var_57, 3) = Var_332;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownType_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_57));
              }
            }
            else
              *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[9]));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 5:
        {
          // case "int"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[11]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
        {
          // case "int16"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[13]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 7:
        {
          // case "int32"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[16]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 8:
        {
          // case "int64"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[19]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 9:
        {
          // case "int8"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[22]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 10:
        {
          // case "is"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[3]));
          else
          {
            MR_Word Var_333 = ((MR_Word) ((MR_hl_field(1, Args_5, 1))));
            MR_Box Var_334 = (MR_hl_field(1, Args_5, 0));

            if ((Var_333 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[3]));
            else
            {
              MR_Word Var_341 = ((MR_Word) ((MR_hl_field(1, Var_333, 1))));
              MR_Box Var_342 = (MR_hl_field(1, Var_333, 0));

              if ((Var_341 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_53;

                {
                  Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, Var_53, 1) = Var_334;
                  MR_hl_field(3, Var_53, 2) = Var_342;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownType_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_53));
                }
              }
              else
                *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[3]));
            }
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 11:
        {
          // case "pred"
          ;
          {
            MR_Word Var_46;

            {
              Var_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_46, 0) = ((MR_Box) (Args_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *KnownType_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_46));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 12:
        {
          // case "pure"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[9]));
          else
          {
            MR_Word Var_335 = ((MR_Word) ((MR_hl_field(1, Args_5, 1))));
            MR_Box Var_336 = (MR_hl_field(1, Args_5, 0));

            if ((Var_335 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_167;

              {
                Var_167 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_167, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_167, 1) = ((MR_Box) (Name_4));
                MR_hl_field(3, Var_167, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(3, Var_167, 3) = Var_336;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownType_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_167));
              }
            }
            else
              *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[9]));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 13:
        {
          // case "semipure"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[9]));
          else
          {
            MR_Word Var_337 = ((MR_Word) ((MR_hl_field(1, Args_5, 1))));
            MR_Box Var_338 = (MR_hl_field(1, Args_5, 0));

            if ((Var_337 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_204;

              {
                Var_204 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_204, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_204, 1) = ((MR_Box) (Name_4));
                MR_hl_field(3, Var_204, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(3, Var_204, 3) = Var_338;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownType_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_204));
              }
            }
            else
              *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[9]));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 14:
        {
          // case "string"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[24]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 15:
        {
          // case "uint"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[26]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 16:
        {
          // case "uint16"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[29]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 17:
        {
          // case "uint32"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[32]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 18:
        {
          // case "uint64"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[35]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 19:
        {
          // case "uint8"
          ;
          if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
            *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[38]);
          else
            *KnownType_6 = (MR_Word) (MR_mkword(2, &parse_tree__parse_type_name_scalar_common_3[6]));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 20:
        {
          // case "{}"
          ;
          {
            MR_Word Var_38;

            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_38, 0) = ((MR_Box) (Args_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *KnownType_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_38));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word WNHII_7,
  MR_Word VarSet_8,
  MR_Word Term_9)
{
  MR_Word Result_10;
  MR_String Place_11 = ((&parse_tree__parse_type_name_vector_common_5[0 + WNHII_7]))->parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_0;
  MR_String NotAllowed_13 = ((&parse_tree__parse_type_name_vector_common_5[0 + WNHII_7]))->parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_1;
  MR_String TermStr_14;
  MR_Word Pieces_15;
  MR_Word Spec_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_54;
  MR_Word Var_55;

  TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
  Var_17 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_6);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (TermStr_14));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_26 = parse_tree__error_spec__color_as_subject_1_f_0(Var_27);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (NotAllowed_13));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_37);
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (Place_11));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[93])));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[92])));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
  }
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_40);
  Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[95])), Var_35);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_30);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[89])), Var_25);
  Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_18);
  Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_name.no_ho_inst_allowed_result\'/4"));
    MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 24U));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Var_54));
    MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Result_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Result_10, 0) = ((MR_Box) (Var_55));
  }
  return Result_10;
}

static MR_Word MR_CALL 
parse_tree__parse_type_name__arg_context_pieces_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word PorF_6,
  MR_Integer ArgNum_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;

  {
    Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_15, 1) = ((MR_Box) (ArgNum_7));
  }
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_20, 1) = (MR_Box) ((MR_Unsigned) (PorF_6));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__parse_type_name_scalar_common_1[34])));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[32])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_16));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__parse_type_name_scalar_common_1[31])));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_11));
  }
  Var_8 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_9);
  HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_5, Var_8);
  return HeadVar__4_4;
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_2;
  MR_Word conv0_Mode_3;

  parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Type_2, &conv0_Mode_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_2));
  *wrapper_arg_3 = ((MR_Box) (conv0_Mode_3));
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word Purity_11,
  MR_Word ArgTypeAndModes_12,
  MR_Word ArgSpecs_13,
  MR_Word MaybeMaybeRetTypeAndMode_14,
  MR_Word MaybeDetism_15,
  MR_Word * MaybeType_16)
{
  MR_bool succeeded;
  MR_Word ArgTypes0_17;
  MR_Word ArgModes0_18;
  MR_Word PredOrFunc_19;
  MR_Word ArgTypes_20;
  MR_Word PredInstInfo_22;
  MR_Word Detism_23;

  mercury__list__map2_4_p_0((MR_Word) (&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_type_and_maybe_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_type_name_scalar_common_2[1]), ArgTypeAndModes_12, &ArgTypes0_17, &ArgModes0_18);
  succeeded = (ArgSpecs_13 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) MaybeDetism_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Detism_23 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_15, 0))));
      if ((MaybeMaybeRetTypeAndMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        PredOrFunc_19 = (MR_Integer) 0;
        ArgTypes_20 = ArgTypes0_17;
        {
          PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredInstInfo_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
          MR_hl_field(0, PredInstInfo_22, 1) = ((MR_Box) (ArgModes0_18));
          MR_hl_field(0, PredInstInfo_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, PredInstInfo_22, 3) = (MR_Box) ((MR_Unsigned) (Detism_23));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word MaybeRetTypeAndMode_24 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRetTypeAndMode_14, 0))));
        MR_Word RetTypeAndMode_25;
        MR_Word RetType_26;
        MR_Word RetMode_27;
        MR_Word Var_34;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word ArgModes_44;

        succeeded = ((MR_tag((MR_Word) MaybeRetTypeAndMode_24)) == (MR_Integer) 1);
        if (succeeded)
        {
          RetTypeAndMode_25 = ((MR_Word) ((MR_hl_field(1, MaybeRetTypeAndMode_24, 0))));
          PredOrFunc_19 = (MR_Integer) 1;
          if (((MR_tag((MR_Word) RetTypeAndMode_25)) == (MR_Integer) 1))
          {
            RetType_26 = ((MR_Word) ((MR_hl_field(1, RetTypeAndMode_25, 0))));
            RetMode_27 = ((MR_Word) ((MR_hl_field(1, RetTypeAndMode_25, 1))));
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_name.project_tm_type_and_mode\'/3", (MR_String) "type_only");
              return;
            }
          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (RetType_26));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) (ArgSpecs_13));
          }
          ArgTypes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_17, Var_34);
          Var_37 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (RetMode_27));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
          }
          ArgModes_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_18, Var_36);
          Var_38 = (MR_Word) ((MR_Unsigned) 0U);
          {
            PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredInstInfo_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
            MR_hl_field(0, PredInstInfo_22, 1) = ((MR_Box) (ArgModes_44));
            MR_hl_field(0, PredInstInfo_22, 2) = ((MR_Box) (Var_38));
            MR_hl_field(0, PredInstInfo_22, 3) = (MR_Box) ((MR_Unsigned) (Detism_23));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Type_28;
    MR_Word Var_39 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_22)));

    {
      Type_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Type_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Type_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
      MR_hl_field(3, Type_28, 2) = ((MR_Box) (ArgTypes_20));
      MR_hl_field(3, Type_28, 3) = ((MR_Box) (Var_39));
      MR_hl_field(3, Type_28, 4) = (MR_Box) ((MR_Unsigned) (Purity_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeType_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_28));
    }
  }
  else
  {
    MR_Word RetSpecs_29;
    MR_Word Specs_31;
    MR_Word Var_42;
    MR_Word Var_43;

    if ((MaybeMaybeRetTypeAndMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
      RetSpecs_29 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, MaybeMaybeRetTypeAndMode_14, 0))));

      if (((MR_tag((MR_Word) Var_53)) == (MR_Integer) 0))
        RetSpecs_29 = ((MR_Word) ((MR_hl_field(0, Var_53, 0))));
      else
        RetSpecs_29 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_43 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_15);
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RetSpecs_29, Var_43);
    Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgSpecs_13, Var_42);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeType_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_31));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____arg_context_func_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____arg_context_func_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____known_type_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____known_type_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____type_and_maybe_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____type_and_maybe_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____type_and_maybe_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____type_and_maybe_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_not_allowed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_type_name____Unify____why_not_allowed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_not_allowed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_type_name____Compare____why_not_allowed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_type_name__init(void)
{
}

void mercury__parse_tree__parse_type_name__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_allow_ho_inst_info_0);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_arg_context_func_0);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_compound_type_kind_1);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_type_kind_1);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_maybe_constrain_inst_vars_0);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_maybe_require_tm_mode_0);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_type_and_maybe_mode_0);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0);
  MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_not_allowed_0);
}

void mercury__parse_tree__parse_type_name__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_type_name__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_type_name.
