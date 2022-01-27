/*
** Automatically generated from `parse_type_name.m'
** by the Mercury compiler,
** version rotd-2020-10-19
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"




static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1[1];

static const MR_DuArgLocn parse_tree__parse_type_name__parse_tree__parse_type_name__field_locns_allow_ho_inst_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1;

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1[1];

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_allow_ho_inst_info_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_VA_TypeInfo_Struct2 parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0;

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

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_maybe_require_tm_mode_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_maybe_require_tm_mode_0[2];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_require_tm_mode_0[2];

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

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_why_no_ho_inst_info_0[15];

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_no_ho_inst_info_0[15];

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_no_ho_inst_info_0[15];

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word TypeInfo_for_T_24,
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
  MR_Word TypeInfo_for_T_130,
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
  MR_Word AllowHOInstInfo_6,
  MR_Word Varset_7,
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
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word AllowHOInstInfo_1,
  MR_Word Varset_2,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_42,
  MR_Word Var_43,
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
  MR_Word Why_7,
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
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_1[68][2];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_3[2][3];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_6[39][1];


/* sealed */ struct parse_tree__parse_type_name__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_type_name__vector_common_type_5_0_s parse_tree__parse_type_name_vector_common_5[15];



static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_1[68][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a type."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "suffix."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "::mode"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the return value of higher-order function type:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arguments>)"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "by"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be preceded"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the operator"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: in a function type declaration,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arg_types>) = <ret_type>"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<arg_types>)"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arg_types_modes>) = <ret_type_mode> is <detism>"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<arg_types_modes>) is <detism>"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which should be of one of the following forms:"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be followed by a higher order type,"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is neither."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: unexpected"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[10])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument of higher-order"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "higher order inst information,"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but this is not allowed in"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[40])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the purity marker"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a higher order type"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have one of the forms"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "pred(<arguments>) is det"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "func(<arguments>) = <return_argument> is det"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should not be used"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with any arity other than"))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__parse_type_name_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__parse_type_name_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_type_name_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_6[39][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[8])))
  },
  /* row 10 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[11])))
  },
  /* row 13 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[14])))
  },
  /* row 16 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[17])))
  },
  /* row 19 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[22])))
  },
  /* row 24 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[25])))
  },
  /* row 27 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[28])))
  },
  /* row 30 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[31])))
  },
  /* row 33 */
  {
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[34])))
  },
  /* row 36 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[37])))
  },
};


static /* final */ const struct parse_tree__parse_type_name__vector_common_type_5_0_s parse_tree__parse_type_name_vector_common_5[15] = {
  /* row 0 */   {     (MR_String) "a type constructor\'s argument" },
  /* row 1 */   {     (MR_String) "a tuple type constructor\'s argument" },
  /* row 2 */   {     (MR_String) "a predicate\'s argument" },
  /* row 3 */   {     (MR_String) "a function\'s argument" },
  /* row 4 */   {     (MR_String) "a function\'s return value" },
  /* row 5 */   {     (MR_String) "a type used for type qualification" },
  /* row 6 */   {     (MR_String) "the definition of an equivalence type" },
  /* row 7 */   {     (MR_String) "the definition of a solver type" },
  /* row 8 */   {     (MR_String) "a class constraint" },
  /* row 9 */   {     (MR_String) "a mutable declaration" },
  /* row 10 */   {     (MR_String) "structure sharing annotation" },
  /* row 11 */   {     (MR_String) "type selector" },
  /* row 12 */   {     (MR_String) "a structure_sharing pragma" },
  /* row 13 */   {     (MR_String) "a structure_reuse pragma" },
  /* row 14 */   {     (MR_String) "a type_spec pragma" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "allow_ho_inst_info",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_allow_ho_inst_info_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_VA_TypeInfo_Struct2 parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_arg_context_func_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "arg_context_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__list__pti_list_1__pseudo_1)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__list__pti_list_1__pseudo_1)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5 = {
  (MR_String) "kctk_apply",
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

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2
};

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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2,
    INT8_C(-1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_compound_type_kind",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1 },
  (MR_Integer) 6,
  UINT16_C(4),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

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
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1)
};

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

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_type_kind",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1 },
  (MR_Integer) 3,
  UINT16_C(4),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0 = {
  (MR_String) "dont_constrain_inst_vars",
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
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_type_name__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__parse_type_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_maybe_constrain_inst_vars_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_type_name__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_1
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_maybe_constrain_inst_vars_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "maybe_constrain_inst_vars",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_maybe_constrain_inst_vars_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_maybe_constrain_inst_vars_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_constrain_inst_vars_0
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_0 = {
  (MR_String) "dont_require_tm_mode",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_1 = {
  (MR_String) "require_tm_mode",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_maybe_require_tm_mode_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "maybe_require_tm_mode",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_maybe_require_tm_mode_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_maybe_require_tm_mode_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_require_tm_mode_0
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
  (MR_String) "wnhii_eqv_type_defn_body",
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
  (MR_String) "wnhii_mutable_decl",
  INT32_C(9)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_10 = {
  (MR_String) "wnhii_user_struct_sharing",
  INT32_C(10)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_11 = {
  (MR_String) "wnhii_ctgc_type_selector",
  INT32_C(11)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_12 = {
  (MR_String) "wnhii_pragma_struct_sharing",
  INT32_C(12)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_13 = {
  (MR_String) "wnhii_pragma_struct_reuse",
  INT32_C(13)
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_14 = {
  (MR_String) "wnhii_pragma_type_spec",
  INT32_C(14)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_why_no_ho_inst_info_0[15] = {
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
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_11,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_6,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_3,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_4,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_9,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_13,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_12,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_14,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_2,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_7,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_1,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_0,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_5,
  &parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_10
};

static const MR_Integer parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_no_ho_inst_info_0[15] = {
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 13,
  (MR_Integer) 2,
  (MR_Integer) 10,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 14,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 8
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "why_no_ho_inst_info",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_no_ho_inst_info_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_why_no_ho_inst_info_0 },
  (MR_Integer) 15,
  UINT16_C(4),
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_no_ho_inst_info_0
};

void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0(
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
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0(
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
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_type_name_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Var_31, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(TypeInfo_for_T_24, HeadVar__1_1, Var_30, ArgY1_13);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_29 < ArgY1_21);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_29 > ArgY1_21);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word TypeInfo_for_T_130,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_128 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_129 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_128 == CastY_129);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__list____Compare____list_1_0(TypeInfo_for_T_130, HeadVar__1_1, Var_148, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_142 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_143 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_24 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_27 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word SubResult1_25;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_130, &SubResult1_25, Var_143, ArgY1_24);
                  succeeded = (SubResult1_25 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_25;
                  else
                    mercury__builtin__compare_3_p_0(TypeInfo_for_T_130, HeadVar__1_1, Var_142, ArgY2_27);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__list____Compare____list_1_0(TypeInfo_for_T_130, HeadVar__1_1, Var_144, ArgY1_49);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box Var_140 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                MR_Box Var_141 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box ArgY1_70 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1));
                          MR_Box ArgY2_73 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2));
                          MR_Word SubResult1_71;

                          mercury__builtin__compare_3_p_0(TypeInfo_for_T_130, &SubResult1_71, Var_141, ArgY1_70);
                          succeeded = (SubResult1_71 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_71;
                          else
                            mercury__builtin__compare_3_p_0(TypeInfo_for_T_130, HeadVar__1_1, Var_140, ArgY2_73);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box Var_145 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                MR_Word Var_146 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_String Var_147 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_101 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
                          MR_Box ArgY3_107 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3));
                          MR_Word SubResult1_102;

                          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_102, Var_147, ArgY1_101);
                          succeeded = (SubResult1_102 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_102;
                          else
                          {
                            MR_Word SubResult2_105;
                            MR_Integer Var_149 = (MR_Integer) (Var_146);
                            MR_Integer Var_150 = (MR_Integer) (ArgY2_104);

                            succeeded = (Var_149 < Var_150);
                            if (succeeded)
                            {
                              SubResult2_105 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_149 > Var_150);
                              if (succeeded)
                              {
                                SubResult2_105 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_105 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_105;
                            else
                              mercury__builtin__compare_3_p_0(TypeInfo_for_T_130, HeadVar__1_1, Var_145, ArgY3_107);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__list____Compare____list_1_0(TypeInfo_for_T_130, HeadVar__1_1, Var_139, ArgY1_127);
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
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_25, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_25, ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgX1_11 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1));
                MR_Box ArgY1_12;
                MR_Box ArgX2_13 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2));
                MR_Box ArgY2_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1));
                  ArgY2_14 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2));
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX1_11, ArgY1_12);
                  if (succeeded)
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_25, ArgX2_13, ArgY2_14);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_16;
                MR_Word ArgX2_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
                MR_Word ArgY2_18;
                MR_Box ArgX3_19 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3));
                MR_Box ArgY3_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
                  ArgY3_20 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
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
                MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_25, ArgX1_21, ArgY1_22);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__parse_type_name_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
        MR_Integer Var_12 = (MR_Integer) (Var_11);
        MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

        succeeded = (Var_12 < Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_12 > Var_13);
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
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_2,
  MR_Word * Mode_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    *Type_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    *Mode_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_and_modes_10_p_0(
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
    MR_Word Term_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Terms_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word TypesAndModesTail_30;
    MR_Word MaybeTypeAndMode_31;
    MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word Var_39;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_Var_39;

    parse_tree__parse_type_name__parse_type_and_modes_10_p_0(MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, ArgContextFunc_5, Terms_26, Var_36, &TypesAndModesTail_30, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_37_37);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ArgContextFunc_5, (MR_Integer) 1))));
    conv1_Var_39 = func_0(((MR_Box) (ArgContextFunc_5)), ((MR_Box) (ArgNum_7)));
    Var_39 = ((MR_Word) (conv1_Var_39));
    parse_tree__parse_type_name__parse_type_and_mode_7_p_0(MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, Var_39, Term_25, &MaybeTypeAndMode_31);
    if (((MR_tag((MR_Word) MaybeTypeAndMode_31)) == (MR_Integer) 0))
    {
      MR_Word TMSpecs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTypeAndMode_31, (MR_Integer) 0))));

      *HeadVar__8_8 = TypesAndModesTail_30;
      *STATE_VARIABLE_Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TMSpecs_33, STATE_VARIABLE_Specs_37_37);
    }
    else
    {
      MR_Word TypeAndMode_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeAndMode_31, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAndMode_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypesAndModesTail_30));
      }
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_37_37;
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_3_p_0(
  MR_Word AllowHOInstInfo_4,
  MR_Word Terms_5,
  MR_Word * Types_6)
{
  {
    MR_bool succeeded;
    MR_Word VarSet_7;
    MR_Word ContextPieces_8;
    MR_Word Var_9;

    VarSet_7 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
    ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
    parse_tree__parse_type_name__parse_types_5_p_0(AllowHOInstInfo_4, VarSet_7, ContextPieces_8, Terms_5, &Var_9);
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
    if (succeeded)
      *Types_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_type_3_p_0(
  MR_Word AllowHOInstInfo_4,
  MR_Word Term_5,
  MR_Word * Type_6)
{
  {
    MR_bool succeeded;
    MR_Word VarSet_7;
    MR_Word ContextPieces_8;
    MR_Word Var_9;

    VarSet_7 = mercury__varset__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0));
    ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
    parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_4, VarSet_7, ContextPieces_8, Term_5, &Var_9);
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
    if (succeeded)
      *Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_type_no_mode_5_p_0(
  MR_Word AllowHOInstInfo_6,
  MR_Word Varset_7,
  MR_Word ContextPieces_8,
  MR_Word Term_9,
  MR_Word * MaybeType_10)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0);
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_40;
      MR_Word Var_41;

      Var_36 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[49])));
      Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8, Var_36);
      Pieces_15 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35);
      Var_40 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type_no_mode\'/5"));
        MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeType_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      }
    }
    else
      parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_6, Varset_7, ContextPieces_8, Term_9, MaybeType_10);
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
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term_9)) == (MR_Integer) 0))
    {
      MR_Word Functor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 0))));
      MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 1))));
      MR_Word FunctorContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_9, (MR_Integer) 2))));

      switch (MR_tag((MR_Word) Functor_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Name_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0))));
            MR_Word KnownTypeKind_28;

            succeeded = parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(Name_27, ArgTerms_15, &KnownTypeKind_28);
            if (succeeded)
              switch (MR_tag((MR_Word) KnownTypeKind_28)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Type_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), KnownTypeKind_28, (MR_Integer) 0))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_29));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CompoundTypeKind_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), KnownTypeKind_28, (MR_Integer) 0))));

                    parse_tree__parse_type_name__parse_compound_type_6_p_0(AllowHOInstInfo_6, Term_9, VarSet_7, ContextPieces_8, CompoundTypeKind_30, Result_10);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer ExpectedArity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), KnownTypeKind_28, (MR_Integer) 0))));
                    MR_Word Var_38;
                    MR_Word Var_39;
                    MR_Word Var_41;
                    MR_Word Var_44;
                    MR_Word Var_45;
                    MR_Word Var_46;
                    MR_Word Var_49;
                    MR_Word Var_52;
                    MR_Word Var_53;
                    MR_Word Var_63;
                    MR_Word Pieces_90;
                    MR_Word Spec_91;

                    Var_38 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
                    {
                      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Name_27));
                    }
                    {
                      Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (ExpectedArity_31));
                    }
                    {
                      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
                      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])));
                    }
                    {
                      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[67])));
                      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
                    }
                    {
                      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[66])));
                      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
                    }
                    {
                      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
                      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
                    }
                    {
                      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[65])));
                      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
                    }
                    {
                      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
                    }
                    Pieces_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_38, Var_39);
                    {
                      Spec_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_91, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type\'/5"));
                      MR_hl_field(MR_mktag(1), Spec_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_91, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_91, 3) = ((MR_Box) (FunctorContext_16));
                      MR_hl_field(MR_mktag(1), Spec_91, 4) = ((MR_Box) (Pieces_90));
                    }
                    {
                      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_91));
                      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *Result_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
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
                MR_Word Specs_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameResult_32, (MR_Integer) 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_94));
                }
              }
              else
              {
                MR_Word SymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NameResult_32, (MR_Integer) 0))));
                MR_Word SymNameArgTerms_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NameResult_32, (MR_Integer) 1))));
                MR_Word SymNameArgsResult_35;

                parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[7])), VarSet_7, ContextPieces_8, SymNameArgTerms_34, &SymNameArgsResult_35);
                if (((MR_tag((MR_Word) SymNameArgsResult_35)) == (MR_Integer) 0))
                  *Result_10 = (MR_Word) (SymNameArgsResult_35);
                else
                {
                  MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymNameArgsResult_35, (MR_Integer) 0))));
                  MR_Word Var_67;

                  {
                    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (SymName_33));
                    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (ArgTypes_36));
                    MR_hl_field(MR_mktag(1), Var_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_67));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_String TermStr_24;
            MR_Word Pieces_25;
            MR_Word Spec_26;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_72;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_86;

            TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
            Var_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (TermStr_24));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[6])));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
            }
            Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_70);
            {
              Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type\'/5"));
              MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (FunctorContext_16));
              MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (Pieces_25));
            }
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_26));
              MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String TermStr_24;
            MR_Word Pieces_25;
            MR_Word Spec_26;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_72;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_86;

            TermStr_24 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, Term_9);
            Var_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8);
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (TermStr_24));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[6])));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[65])));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
            }
            Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, Var_70);
            {
              Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type\'/5"));
              MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (FunctorContext_16));
              MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (Pieces_25));
            }
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_26));
              MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_9, (MR_Integer) 0))));
      MR_Word Var_13;
      MR_Word Var_88;

      mercury__term__coerce_var_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Var0_11, &Var_13);
      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_88));
      }
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
      MR_Word Term_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Terms_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TermResult_25;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word STATE_VARIABLE_RevTypes_33_33;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevTypes_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_1, VarSet_2, ContextPieces_3, Term_21, &TermResult_25);
      if (((MR_tag((MR_Word) TermResult_25)) == (MR_Integer) 0))
      {
        MR_Word TermSpecs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermResult_25, (MR_Integer) 0))));

        STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TermSpecs_27, STATE_VARIABLE_Specs_0_7);
        STATE_VARIABLE_RevTypes_33_33 = STATE_VARIABLE_RevTypes_0_5;
      }
      else
      {
        MR_Word Type_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermResult_25, (MR_Integer) 0))));

        {
          STATE_VARIABLE_RevTypes_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypes_33_33, 0) = ((MR_Box) (Type_26));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevTypes_33_33, 1) = ((MR_Box) (STATE_VARIABLE_RevTypes_0_5));
        }
        STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Terms_22;
      next_value_of_STATE_VARIABLE_RevTypes_0_5 = STATE_VARIABLE_RevTypes_33_33;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_32_32;
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
  MR_Word Var_36,
  MR_Word Var_37,
  MR_Word AllowHOInstInfo_1,
  MR_Word Varset_2,
  MR_Word HeadVar__4_4,
  MR_Integer ArgNum_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    }
    else
    {
      MR_Word Term_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Terms_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypesTail_24;
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
      MR_Word STATE_VARIABLE_Specs_31_31;
      MR_Word Var_33;
      MR_Word Var_53;
      MR_Word Var_49;
      MR_String Var_50;
      MR_Word Var_51;
      MR_Word Var_52;

      parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(Var_36, Var_37, AllowHOInstInfo_1, Varset_2, Terms_20, Var_30, &TypesTail_24, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_31_31);
      Var_33 = parse_tree__parse_type_name__arg_context_pieces_3_f_0(Var_36, Var_37, ArgNum_5);
      succeeded = ((MR_tag((MR_Word) Term_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_19, (MR_Integer) 0))));
        Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_19, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
          succeeded = (strcmp(Var_50, (MR_String) "::") == 0);
          if (succeeded)
          {
            succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 1))));
              succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 1))));
                succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word TSpecs_27;
        MR_Word Pieces_47;
        MR_Word Spec_48;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_72;

        Var_68 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[49])));
        Var_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, Var_68);
        Pieces_47 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_67);
        Var_72 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_19);
        {
          Spec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type_no_mode\'/5"));
          MR_hl_field(MR_mktag(1), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), Spec_48, 3) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), Spec_48, 4) = ((MR_Box) (Pieces_47));
        }
        {
          TSpecs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TSpecs_27, 0) = ((MR_Box) (Spec_48));
          MR_hl_field(MR_mktag(1), TSpecs_27, 1) = ((MR_Box) (Var_53));
        }
        *HeadVar__6_6 = TypesTail_24;
        *STATE_VARIABLE_Specs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TSpecs_27, STATE_VARIABLE_Specs_31_31);
      }
      else
      {
        MR_Word MaybeType_81;

        parse_tree__parse_type_name__parse_type_5_p_0(AllowHOInstInfo_1, Varset_2, Var_33, Term_19, &MaybeType_81);
        if (((MR_tag((MR_Word) MaybeType_81)) == (MR_Integer) 0))
        {
          MR_Word TSpecs_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeType_81, (MR_Integer) 0))));

          *HeadVar__6_6 = TypesTail_24;
          *STATE_VARIABLE_Specs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TSpecs_77, STATE_VARIABLE_Specs_31_31);
        }
        else
        {
          MR_Word Type_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_81, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_26));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypesTail_24));
          }
          *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_31_31;
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(
  MR_Word Var_42,
  MR_Word Var_43,
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
    MR_Word Term_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Terms_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word TypesAndModesTail_30;
    MR_Word MaybeTypeAndMode_31;
    MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word Var_39;

    parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(Var_42, Var_43, MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, Terms_26, Var_36, &TypesAndModesTail_30, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_37_37);
    Var_39 = parse_tree__parse_type_name__arg_context_pieces_3_f_0(Var_42, Var_43, ArgNum_7);
    parse_tree__parse_type_name__parse_type_and_mode_7_p_0(MaybeInstConstraints_1, MaybeRequireMode_2, Why_3, VarSet_4, Var_39, Term_25, &MaybeTypeAndMode_31);
    if (((MR_tag((MR_Word) MaybeTypeAndMode_31)) == (MR_Integer) 0))
    {
      MR_Word TMSpecs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTypeAndMode_31, (MR_Integer) 0))));

      *HeadVar__8_8 = TypesAndModesTail_30;
      *STATE_VARIABLE_Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TMSpecs_33, STATE_VARIABLE_Specs_37_37);
    }
    else
    {
      MR_Word TypeAndMode_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeAndMode_31, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAndMode_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypesAndModesTail_30));
      }
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_37_37;
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
  {
    MR_bool succeeded;
    MR_Word MaybeDetism_13;
    MR_Word RetTerm_15;
    MR_Word ArgTerms_17;
    MR_Word FuncTerm_14;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_String Var_34;

    parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(VarSet_7, AfterIsTerm_10, &MaybeDetism_13);
    succeeded = ((MR_tag((MR_Word) BeforeIsTerm_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_9, (MR_Integer) 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
        succeeded = (strcmp(Var_29, (MR_String) "=") == 0);
        if (succeeded)
        {
          succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            FuncTerm_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              RetTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) FuncTerm_14)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncTerm_14, (MR_Integer) 0))));
                  ArgTerms_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncTerm_14, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
                    succeeded = (strcmp(Var_34, (MR_String) "func") == 0);
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
      MR_Word ArgTypeAndModes_20;
      MR_Word ArgTMSpecs_21;
      MR_Word RetContextPieces_22;
      MR_Word MaybeRetTypeAndMode_23;
      MR_Word Var_41;
      MR_Word Var_51;

      parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(ContextPieces_8, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 3, VarSet_7, ArgTerms_17, (MR_Integer) 1, &ArgTypeAndModes_20, (MR_Word) ((MR_Unsigned) 0U), &ArgTMSpecs_21);
      Var_41 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[17])));
      RetContextPieces_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8, Var_41);
      parse_tree__parse_type_name__parse_type_and_mode_7_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 4, VarSet_7, RetContextPieces_22, RetTerm_15, &MaybeRetTypeAndMode_23);
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MaybeRetTypeAndMode_23));
      }
      parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(Purity_11, ArgTypeAndModes_20, ArgTMSpecs_21, Var_51, MaybeDetism_13, MaybeType_12);
    }
    else
    {
      MR_Word ArgTerms_101;
      MR_Word Var_52;
      MR_String Var_53;

      succeeded = ((MR_tag((MR_Word) BeforeIsTerm_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_9, (MR_Integer) 0))));
        ArgTerms_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeIsTerm_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))));
          succeeded = (strcmp(Var_53, (MR_String) "pred") == 0);
        }
      }
      if (succeeded)
      {
        MR_Word ArgTypeAndModes_99;
        MR_Word ArgTMSpecs_100;

        parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(ContextPieces_8, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 2, VarSet_7, ArgTerms_101, (MR_Integer) 1, &ArgTypeAndModes_99, (MR_Word) ((MR_Unsigned) 0U), &ArgTMSpecs_100);
        parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(Purity_11, ArgTypeAndModes_99, ArgTMSpecs_100, (MR_Word) ((MR_Unsigned) 0U), MaybeDetism_13, MaybeType_12);
      }
      else
      {
        MR_String BeforeIsTermStr_25;
        MR_Word HOPieces_26;
        MR_Word HOSpec_27;
        MR_Word Var_63;
        MR_Word Var_66;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_76;
        MR_Word Var_79;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_95;
        MR_Word Var_96;

        BeforeIsTermStr_25 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_7, BeforeIsTerm_9);
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (BeforeIsTermStr_25));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[46])));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[64])));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[62])));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[61])));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[60])));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
        }
        {
          HOPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HOPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[59])));
          MR_hl_field(MR_mktag(1), HOPieces_26, 1) = ((MR_Box) (Var_63));
        }
        Var_95 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), AfterIsTerm_10);
        {
          HOSpec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HOSpec_27, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_ho_type_and_inst\'/6"));
          MR_hl_field(MR_mktag(1), HOSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), HOSpec_27, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(1), HOSpec_27, 3) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(1), HOSpec_27, 4) = ((MR_Box) (HOPieces_26));
        }
        {
          Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (HOSpec_27));
          MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeType_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
        }
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
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) CompoundTypeKind_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompoundTypeKind_11, (MR_Integer) 0))));
          MR_Word ArgsResult_14;

          parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[24])), VarSet_9, ContextPieces_10, Args_13, &ArgsResult_14);
          if (((MR_tag((MR_Word) ArgsResult_14)) == (MR_Integer) 0))
            *Result_12 = (MR_Word) (ArgsResult_14);
          else
          {
            MR_Word ArgTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgsResult_14, (MR_Integer) 0))));
            MR_Word Var_213;

            {
              Var_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_213, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_213, 1) = ((MR_Box) (ArgTypes_15));
              MR_hl_field(MR_mktag(3), Var_213, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_213));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BeforeEqTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompoundTypeKind_11, (MR_Integer) 0))));
          MR_Word AfterEqTerm_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompoundTypeKind_11, (MR_Integer) 1))));
          MR_Word FuncArgs_27;
          MR_Word Var_132;
          MR_String Var_133;

          succeeded = ((MR_tag((MR_Word) BeforeEqTerm_25)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeEqTerm_25, (MR_Integer) 0))));
            FuncArgs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeEqTerm_25, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_132)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_133 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_132, (MR_Integer) 0))));
              succeeded = (strcmp(Var_133, (MR_String) "func") == 0);
            }
          }
          if (succeeded)
          {
            MR_Word ArgSpecs_29;
            MR_Word RetContextPieces_30;
            MR_Word MaybeRetType_31;
            MR_Word Var_139;
            MR_Word ArgTypes_220;
            MR_Word RetType_32;

            parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[36])), VarSet_9, FuncArgs_27, (MR_Integer) 1, &ArgTypes_220, (MR_Word) ((MR_Unsigned) 0U), &ArgSpecs_29);
            Var_139 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[17])));
            RetContextPieces_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10, Var_139);
            parse_tree__parse_type_name__parse_type_no_mode_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[10])), VarSet_9, RetContextPieces_30, AfterEqTerm_26, &MaybeRetType_31);
            succeeded = (ArgSpecs_29 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeRetType_31)) == (MR_Integer) 1);
              if (succeeded)
                RetType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetType_31, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word FuncType_33;

              parse_tree__prog_type__construct_higher_order_func_type_5_p_0((MR_Integer) 0, ArgTypes_220, RetType_32, &FuncType_33);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuncType_33));
              }
            }
            else
            {
              MR_Word Var_150;
              MR_Word Specs_218;

              Var_150 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeRetType_31);
              Specs_218 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgSpecs_29, Var_150);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Result_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_218));
              }
            }
          }
          else
          {
            MR_Word Var_151;
            MR_Word Var_181;
            MR_Word Var_182;
            MR_Word Pieces_223;
            MR_Word Spec_224;

            Var_151 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
            Pieces_223 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_151, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[30])));
            Var_181 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), BeforeEqTerm_25);
            {
              Spec_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_224, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_compound_type\'/6"));
              MR_hl_field(MR_mktag(1), Spec_224, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_224, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_224, 3) = ((MR_Box) (Var_181));
              MR_hl_field(MR_mktag(1), Spec_224, 4) = ((MR_Box) (Pieces_223));
            }
            {
              Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Spec_224));
              MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_182));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_215 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompoundTypeKind_11, (MR_Integer) 0))));
          MR_Word ArgTypes_216;
          MR_Word Specs_217;

          parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[19])), VarSet_9, Args_215, (MR_Integer) 1, &ArgTypes_216, (MR_Word) ((MR_Unsigned) 0U), &Specs_217);
          if ((Specs_217 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word PredType_22;

            parse_tree__prog_type__construct_higher_order_pred_type_4_p_0((MR_Integer) 0, ArgTypes_216, &PredType_22);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredType_22));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_217));
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CompoundTypeKind_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BeforeIsTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompoundTypeKind_11, (MR_Integer) 1))));
              MR_Word AfterIsTerm_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompoundTypeKind_11, (MR_Integer) 2))));
              MR_Word MaybeType_36;

              parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(VarSet_9, ContextPieces_10, BeforeIsTerm_34, AfterIsTerm_35, (MR_Integer) 0, &MaybeType_36);
              if (((MR_tag((MR_Word) MaybeType_36)) == (MR_Integer) 0))
                *Result_12 = MaybeType_36;
              else
              if ((AllowHOInstInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
                *Result_12 = MaybeType_36;
              else
              {
                MR_Word Why_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), AllowHOInstInfo_7, (MR_Integer) 0))) & (MR_Integer) 15);

                *Result_12 = parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(ContextPieces_10, Why_38, VarSet_9, Term_8);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String PurityName_39 = ((MR_String) ((MR_hl_field(MR_mktag(3), CompoundTypeKind_11, (MR_Integer) 1))));
              MR_Word Purity_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompoundTypeKind_11, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word SubTerm_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CompoundTypeKind_11, (MR_Integer) 3))));
              MR_Word AfterEqTerm_305;
              MR_Word FuncArgs_306;
              MR_String Name_42;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_String Var_57;
              MR_Word Args_238;
              MR_Word BeforeEqTerm_239;

              succeeded = ((MR_tag((MR_Word) SubTerm_41)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_41, (MR_Integer) 0))));
                Args_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_41, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Name_42 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))));
                  succeeded = (strcmp(Name_42, (MR_String) "=") == 0);
                  if (succeeded)
                  {
                    succeeded = (Args_238 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      BeforeEqTerm_239 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_238, (MR_Integer) 0))));
                      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_238, (MR_Integer) 1))));
                      succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        AfterEqTerm_305 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))));
                        Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1))));
                        succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) BeforeEqTerm_239)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeEqTerm_239, (MR_Integer) 0))));
                            FuncArgs_306 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BeforeEqTerm_239, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 0);
                            if (succeeded)
                            {
                              Var_57 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0))));
                              succeeded = (strcmp(Var_57, (MR_String) "func") == 0);
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
                MR_Word Var_63;
                MR_Word ArgTypes_245;
                MR_Word ArgSpecs_248;
                MR_Word RetContextPieces_249;
                MR_Word MaybeRetType_250;
                MR_Word RetType_243;

                parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[36])), VarSet_9, FuncArgs_306, (MR_Integer) 1, &ArgTypes_245, (MR_Word) ((MR_Unsigned) 0U), &ArgSpecs_248);
                Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[17])));
                RetContextPieces_249 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10, Var_63);
                parse_tree__parse_type_name__parse_type_no_mode_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[10])), VarSet_9, RetContextPieces_249, AfterEqTerm_305, &MaybeRetType_250);
                succeeded = (ArgSpecs_248 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) MaybeRetType_250)) == (MR_Integer) 1);
                  if (succeeded)
                    RetType_243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetType_250, (MR_Integer) 0))));
                }
                if (succeeded)
                {
                  MR_Word Type_240;

                  parse_tree__prog_type__construct_higher_order_func_type_5_p_0(Purity_40, ArgTypes_245, RetType_243, &Type_240);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_240));
                  }
                }
                else
                {
                  MR_Word Var_73;
                  MR_Word Specs_241;

                  Var_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeRetType_250);
                  Specs_241 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgSpecs_248, Var_73);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *Result_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_241));
                  }
                }
              }
              else
              {
                MR_Word Args_286;
                MR_Word Var_74;
                MR_String Name_253;

                succeeded = ((MR_tag((MR_Word) SubTerm_41)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_41, (MR_Integer) 0))));
                  Args_286 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_41, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Name_253 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_74, (MR_Integer) 0))));
                    succeeded = (strcmp(Name_253, (MR_String) "pred") == 0);
                  }
                }
                if (succeeded)
                {
                  MR_Word ArgTypes_256;
                  MR_Word Specs_257;

                  parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(ContextPieces_10, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[19])), VarSet_9, Args_286, (MR_Integer) 1, &ArgTypes_256, (MR_Word) ((MR_Unsigned) 0U), &Specs_257);
                  if ((Specs_257 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Type_254;

                    parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(Purity_40, ArgTypes_256, &Type_254);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_254));
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *Result_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_257));
                    }
                }
                else
                {
                  MR_Word BeforeIsTerm_280;
                  MR_Word AfterIsTerm_281;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Args_260;
                  MR_String Name_261;

                  succeeded = ((MR_tag((MR_Word) SubTerm_41)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_41, (MR_Integer) 0))));
                    Args_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTerm_41, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_81)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Name_261 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_81, (MR_Integer) 0))));
                      succeeded = (strcmp(Name_261, (MR_String) "is") == 0);
                      if (succeeded)
                      {
                        succeeded = (Args_260 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          BeforeIsTerm_280 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_260, (MR_Integer) 0))));
                          Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_260, (MR_Integer) 1))));
                          succeeded = (Var_82 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            AfterIsTerm_281 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0))));
                            Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1))));
                            succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word MaybeType_271;

                    parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(VarSet_9, ContextPieces_10, BeforeIsTerm_280, AfterIsTerm_281, Purity_40, &MaybeType_271);
                    if (((MR_tag((MR_Word) MaybeType_271)) == (MR_Integer) 0))
                      *Result_12 = MaybeType_271;
                    else
                    if ((AllowHOInstInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
                      *Result_12 = MaybeType_271;
                    else
                    {
                      MR_Word Why_263 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), AllowHOInstInfo_7, (MR_Integer) 0))) & (MR_Integer) 15);

                      *Result_12 = parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(ContextPieces_10, Why_263, VarSet_9, Term_8);
                    }
                  }
                  else
                  {
                    MR_Word AlwaysPieces_49 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[35]));
                    MR_Word FormPieces_51;
                    MR_Word Var_102;
                    MR_Word Var_103;
                    MR_Word Var_104;
                    MR_Word Var_106;
                    MR_Word Var_109;
                    MR_Word Var_110;
                    MR_Word Var_118;
                    MR_Word Var_128;
                    MR_Word Var_129;
                    MR_Word Pieces_274;
                    MR_Word Spec_275;

                    if ((AllowHOInstInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
                      FormPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AlwaysPieces_49, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[57])));
                    else
                      FormPieces_51 = AlwaysPieces_49;
                    Var_102 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
                    {
                      Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (PurityName_39));
                    }
                    {
                      Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
                      MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[44])));
                    }
                    {
                      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[58])));
                      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_109));
                    }
                    {
                      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_106));
                    }
                    Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), FormPieces_51, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])));
                    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_104, Var_118);
                    Pieces_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_102, Var_103);
                    Var_128 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubTerm_41);
                    {
                      Spec_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_275, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_compound_type\'/6"));
                      MR_hl_field(MR_mktag(1), Spec_275, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_275, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(1), Spec_275, 3) = ((MR_Box) (Var_128));
                      MR_hl_field(MR_mktag(1), Spec_275, 4) = ((MR_Box) (Pieces_274));
                    }
                    {
                      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Spec_275));
                      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *Result_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_129));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String TermStr_18;
              MR_Word Pieces_19;
              MR_Word Spec_20;
              MR_Word Var_191;
              MR_Word Var_192;
              MR_Word Var_194;
              MR_Word Var_197;
              MR_Word Var_198;
              MR_Word Var_208;
              MR_Word Var_209;

              TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_9, Term_8);
              Var_191 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_10);
              {
                Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_198, 1) = ((MR_Box) (TermStr_18));
              }
              {
                Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (Var_198));
                MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])));
              }
              {
                Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[56])));
                MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_197));
              }
              {
                Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_194));
              }
              Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_191, Var_192);
              Var_208 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
              {
                Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_compound_type\'/6"));
                MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_208));
                MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
              }
              {
                Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (Spec_20));
                MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                *Result_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_209));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_and_mode_7_p_0(
  MR_Word MaybeInstConstraints_8,
  MR_Word MaybeRequireMode_9,
  MR_Word Why_10,
  MR_Word VarSet_11,
  MR_Word ContextPieces_12,
  MR_Word Term_13,
  MR_Word * MaybeTypeAndMode_14)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
    MR_Word TypeTerm_15;
    MR_Word ModeTerm_16;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 0))));
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
        succeeded = (strcmp(Var_32, (MR_String) "::") == 0);
        if (succeeded)
        {
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TypeTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
            succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModeTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
              succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeType_18;
      MR_Word MaybeMode_23;
      MR_Word Var_36;
      MR_Word Type_25;
      MR_Word Mode_26;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = (MR_Box) ((MR_Unsigned) (Why_10));
      }
      parse_tree__parse_type_name__parse_type_5_p_0(Var_36, VarSet_11, ContextPieces_12, TypeTerm_15, &MaybeType_18);
      if ((MaybeInstConstraints_8 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_6[10])), VarSet_11, ContextPieces_12, ModeTerm_16, &MaybeMode_23);
      else
      {
        MR_Word InstConstraints_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstConstraints_8, (MR_Integer) 0))));
        MR_Word MaybeMode0_20;

        parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) ((MR_Unsigned) 0U), VarSet_11, ContextPieces_12, ModeTerm_16, &MaybeMode0_20);
        if (((MR_tag((MR_Word) MaybeMode0_20)) == (MR_Integer) 0))
          MaybeMode_23 = MaybeMode0_20;
        else
        {
          MR_Word Mode0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode0_20, (MR_Integer) 0))));
          MR_Word Mode1_22;

          parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(InstConstraints_19, Mode0_21, &Mode1_22);
          {
            MaybeMode_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeMode_23, 0) = ((MR_Box) (Mode1_22));
          }
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeType_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_18, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeMode_23)) == (MR_Integer) 1);
        if (succeeded)
          Mode_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMode_23, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Type_25));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Mode_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTypeAndMode_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
        }
      }
      else
      {
        MR_Word Specs_27;
        MR_Word Var_41;
        MR_Word Var_42;

        Var_41 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeType_18);
        Var_42 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), MaybeMode_23);
        Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_41, Var_42);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeTypeAndMode_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_27));
        }
      }
    }
    else
      switch (MaybeRequireMode_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_43;
            MR_Word MaybeType_70;

            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = (MR_Box) ((MR_Unsigned) (Why_10));
            }
            parse_tree__parse_type_name__parse_type_5_p_0(Var_43, VarSet_11, ContextPieces_12, Term_13, &MaybeType_70);
            if (((MR_tag((MR_Word) MaybeType_70)) == (MR_Integer) 0))
              *MaybeTypeAndMode_14 = (MR_Word) (MaybeType_70);
            else
            {
              MR_Word Var_44;
              MR_Word Type_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_70, (MR_Integer) 0))));

              {
                Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Type_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeTypeAndMode_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_44));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Pieces_29;
            MR_Word Spec_30;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_63;
            MR_Word Var_64;

            Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[13])));
            Var_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_12, Var_59);
            Pieces_29 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_58);
            Var_63 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
            {
              Spec_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_type_name.parse_type_and_mode\'/7"));
              MR_hl_field(MR_mktag(1), Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(1), Spec_30, 3) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), Spec_30, 4) = ((MR_Box) (Pieces_29));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Spec_30));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeTypeAndMode_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
            }
          }
          break;
      }
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_12));
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String Name_4,
  MR_Word Args_5,
  MR_Word * KnownType_6)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(Name_4, 0)) {
        case (MR_Integer) 0:
          case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 61:
          if (MR_offset_streq(1, Name_4, (MR_String) "="))
            case_num_0 = (MR_Integer) 1;
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
              if (((MR_nth_code_unit(Name_4, 2)) == (MR_Integer) 116))
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
          if (((((((MR_nth_code_unit(Name_4, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Name_4, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Name_4, 3)) == (MR_Integer) 116))))
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
              MR_Word Var_26;

              {
                Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Args_5));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownType_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "="
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[0]));
            else
            {
              MR_Word Var_331 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_332 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_331 == (MR_Word) ((MR_Unsigned) 0U)))
                *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[0]));
              else
              {
                MR_Word Var_341 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_331, (MR_Integer) 1))));
                MR_Box Var_342 = (MR_hl_field(MR_mktag(1), Var_331, (MR_Integer) 0));

                if ((Var_341 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_41;

                  {
                    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_41, 0) = Var_332;
                    MR_hl_field(MR_mktag(1), Var_41, 1) = Var_342;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *KnownType_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_41));
                  }
                }
                else
                  *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[0]));
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
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[2]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            // case "float"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[5]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            // case "impure"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[6]));
            else
            {
              MR_Word Var_333 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_334 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_333 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_28;

                {
                  Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Name_4));
                  MR_hl_field(MR_mktag(3), Var_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_28, 3) = Var_334;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownType_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
                }
              }
              else
                *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[6]));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            // case "int"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[9]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            // case "int16"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[12]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            // case "int32"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[15]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            // case "int64"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[18]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            // case "int8"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[21]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 10:
          {
            // case "is"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[0]));
            else
            {
              MR_Word Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_336 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_335 == (MR_Word) ((MR_Unsigned) 0U)))
                *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[0]));
              else
              {
                MR_Word Var_343 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 1))));
                MR_Box Var_344 = (MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 0));

                if ((Var_343 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_33;

                  {
                    Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Var_33, 1) = Var_336;
                    MR_hl_field(MR_mktag(3), Var_33, 2) = Var_344;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *KnownType_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
                  }
                }
                else
                  *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[0]));
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
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (Args_5));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownType_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
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
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[6]));
            else
            {
              MR_Word Var_337 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_338 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_337 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_169;

                {
                  Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (Name_4));
                  MR_hl_field(MR_mktag(3), Var_169, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_169, 3) = Var_338;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownType_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_169));
                }
              }
              else
                *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[6]));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 13:
          {
            // case "semipure"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[6]));
            else
            {
              MR_Word Var_339 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
              MR_Box Var_340 = (MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0));

              if ((Var_339 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_206;

                {
                  Var_206 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_206, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_206, 1) = ((MR_Box) (Name_4));
                  MR_hl_field(MR_mktag(3), Var_206, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_206, 3) = Var_340;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *KnownType_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_206));
                }
              }
              else
                *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[6]));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            // case "string"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[23]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            // case "uint"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[26]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 16:
          {
            // case "uint16"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[29]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 17:
          {
            // case "uint32"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[32]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 18:
          {
            // case "uint64"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[35]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 19:
          {
            // case "uint8"
            ;
            if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
              *KnownType_6 = (MR_Word) (&parse_tree__parse_type_name_scalar_common_6[38]);
            else
              *KnownType_6 = (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_6[3]));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 20:
          {
            // case "{}"
            ;
            {
              MR_Word Var_46;

              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Args_5));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *KnownType_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_46));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(
  MR_Word ContextPieces_6,
  MR_Word Why_7,
  MR_Word VarSet_8,
  MR_Word Term_9)
{
  {
    MR_Word Result_10;
    MR_String TermStr_11;
    MR_String Place_12;
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_43;
    MR_Word Var_44;

    TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_9);
    Place_12 = ((&parse_tree__parse_type_name_vector_common_5[0 + Why_7]))->parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_0;
    Var_15 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_6);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TermStr_11));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Place_12));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[55])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_16);
    Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_9);
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.parse_type_name.no_ho_inst_allowed_result\'/4"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Result_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Result_10, 0) = ((MR_Box) (Var_44));
    }
    return Result_10;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_name__arg_context_pieces_3_f_0(
  MR_Word ContextPieces_5,
  MR_Word PorF_6,
  MR_Integer ArgNum_7)
{
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
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (ArgNum_7));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = (MR_Box) ((MR_Unsigned) (PorF_6));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[15])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (Var_11));
    }
    Var_8 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_9);
    HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_5, Var_8);
    return HeadVar__4_4;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Type_2;
    MR_Word conv0_Mode_3;

    parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Type_2, &conv0_Mode_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_Type_2));
    *wrapper_arg_3 = ((MR_Box) (conv0_Mode_3));
  }
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
  {
    MR_bool succeeded;
    MR_Word ArgTypes0_17;
    MR_Word ArgModes0_18;
    MR_Word PredOrFunc_19;
    MR_Word ArgTypes_20;
    MR_Word PredInstInfo_22;
    MR_Word Detism_23;

    mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__parse_type_name_scalar_common_3[1]), ArgTypeAndModes_12, &ArgTypes0_17, &ArgModes0_18);
    succeeded = (ArgSpecs_13 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) MaybeDetism_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Detism_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_15, (MR_Integer) 0))));
        if ((MaybeMaybeRetTypeAndMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          PredOrFunc_19 = (MR_Integer) 0;
          ArgTypes_20 = ArgTypes0_17;
          {
            PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredInstInfo_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
            MR_hl_field(MR_mktag(0), PredInstInfo_22, 1) = ((MR_Box) (ArgModes0_18));
            MR_hl_field(MR_mktag(0), PredInstInfo_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), PredInstInfo_22, 3) = (MR_Box) ((MR_Unsigned) (Detism_23));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word MaybeRetTypeAndMode_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeRetTypeAndMode_14, (MR_Integer) 0))));
          MR_Word RetTypeAndMode_25;
          MR_Word RetType_26;
          MR_Word RetMode_27;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word ArgModes_45;

          succeeded = ((MR_tag((MR_Word) MaybeRetTypeAndMode_24)) == (MR_Integer) 1);
          if (succeeded)
          {
            RetTypeAndMode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRetTypeAndMode_24, (MR_Integer) 0))));
            PredOrFunc_19 = (MR_Integer) 1;
            if (((MR_tag((MR_Word) RetTypeAndMode_25)) == (MR_Integer) 1))
            {
              RetType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypeAndMode_25, (MR_Integer) 0))));
              RetMode_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypeAndMode_25, (MR_Integer) 1))));
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_name.project_tm_type_and_mode\'/3", (MR_String) "type_only");
                return;
              }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (RetType_26));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (ArgSpecs_13));
            }
            ArgTypes_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes0_17, Var_34);
            Var_37 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (RetMode_27));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
            }
            ArgModes_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes0_18, Var_36);
            Var_38 = (MR_Word) ((MR_Unsigned) 0U);
            {
              PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredInstInfo_22, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
              MR_hl_field(MR_mktag(0), PredInstInfo_22, 1) = ((MR_Box) (ArgModes_45));
              MR_hl_field(MR_mktag(0), PredInstInfo_22, 2) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), PredInstInfo_22, 3) = (MR_Box) ((MR_Unsigned) (Detism_23));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Type_29;
      MR_Word Var_40;

      Var_40 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (PredInstInfo_22)));
      {
        Type_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Type_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Type_29, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_19));
        MR_hl_field(MR_mktag(3), Type_29, 2) = ((MR_Box) (ArgTypes_20));
        MR_hl_field(MR_mktag(3), Type_29, 3) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(3), Type_29, 4) = (MR_Box) ((MR_Unsigned) (Purity_11));
        MR_hl_field(MR_mktag(3), Type_29, 5) = NULL;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeType_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_29));
      }
    }
    else
    {
      MR_Word RetSpecs_30;
      MR_Word Specs_32;
      MR_Word Var_43;
      MR_Word Var_44;

      if ((MaybeMaybeRetTypeAndMode_14 == (MR_Word) ((MR_Unsigned) 0U)))
        RetSpecs_30 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeRetTypeAndMode_14, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0))
          RetSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
        else
          RetSpecs_30 = (MR_Word) ((MR_Unsigned) 0U);
      }
      Var_44 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), MaybeDetism_15);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RetSpecs_30, Var_44);
      Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ArgSpecs_13, Var_43);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeType_16 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_32));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_name____Unify____arg_context_func_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_name____Compare____arg_context_func_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_name____Unify____known_type_kind_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_name____Compare____known_type_kind_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0);
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
