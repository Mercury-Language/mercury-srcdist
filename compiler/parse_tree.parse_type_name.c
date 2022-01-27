/*
** Automatically generated from `parse_type_name.m'
** by the Mercury compiler,
** version rotd-2016-06-09
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module parse_tree.parse_type_name. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_type_name__init
ENDINIT
*/

#include "parse_tree.parse_type_name.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1[1];

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

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(
  MR_Word parse_tree__parse_type_name__V_36_36,
  MR_Word parse_tree__parse_type_name__V_37_37,
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_1,
  MR_Word parse_tree__parse_type_name__Varset_2,
  MR_Word parse_tree__parse_type_name__HeadVar__4_4,
  MR_Integer parse_tree__parse_type_name__ArgNum_5,
  MR_Word * parse_tree__parse_type_name__HeadVar__6_6,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(
  MR_Word parse_tree__parse_type_name__V_42_42,
  MR_Word parse_tree__parse_type_name__V_43_43,
  MR_Word parse_tree__parse_type_name__MaybeInstConstraints_1,
  MR_Word parse_tree__parse_type_name__MaybeRequireMode_2,
  MR_Word parse_tree__parse_type_name__Why_3,
  MR_Word parse_tree__parse_type_name__VarSet_4,
  MR_Word parse_tree__parse_type_name__HeadVar__6_6,
  MR_Integer parse_tree__parse_type_name__ArgNum_7,
  MR_Word * parse_tree__parse_type_name__HeadVar__8_8,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_10);

static MR_bool MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__parse_type_name__Name_4,
  MR_Word parse_tree__parse_type_name__Args_5,
  MR_Word * parse_tree__parse_type_name__KnownType_6);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1(
  MR_Box parse_tree__parse_type_name__closure_arg,
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word parse_tree__parse_type_name__Purity_11,
  MR_Word parse_tree__parse_type_name__ArgTypeAndModes_12,
  MR_Word parse_tree__parse_type_name__ArgSpecs_13,
  MR_Word parse_tree__parse_type_name__MaybeMaybeRetTypeAndMode_14,
  MR_Word parse_tree__parse_type_name__MaybeDetism_15,
  MR_Word * parse_tree__parse_type_name__MaybeType_16);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_24,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_130,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_25,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_type_name__parse_types_acc_8_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_1,
  MR_Word parse_tree__parse_type_name__VarSet_2,
  MR_Word parse_tree__parse_type_name__ContextPieces_3,
  MR_Word parse_tree__parse_type_name__HeadVar__4_4,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_6,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_8);

static MR_Word MR_CALL 
parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(
  MR_Word parse_tree__parse_type_name__ContextPieces_6,
  MR_Word parse_tree__parse_type_name__Why_7,
  MR_Word parse_tree__parse_type_name__VarSet_8,
  MR_Word parse_tree__parse_type_name__Term_9);

static void MR_CALL 
parse_tree__parse_type_name__parse_type_no_mode_5_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_6,
  MR_Word parse_tree__parse_type_name__Varset_7,
  MR_Word parse_tree__parse_type_name__ContextPieces_8,
  MR_Word parse_tree__parse_type_name__Term_9,
  MR_Word * parse_tree__parse_type_name__MaybeType_10);

static void MR_CALL 
parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word * parse_tree__parse_type_name__Type_2,
  MR_Word * parse_tree__parse_type_name__Mode_3);

static void MR_CALL 
parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(
  MR_Word parse_tree__parse_type_name__VarSet_7,
  MR_Word parse_tree__parse_type_name__ContextPieces_8,
  MR_Word parse_tree__parse_type_name__BeforeIsTerm_9,
  MR_Word parse_tree__parse_type_name__AfterIsTerm_10,
  MR_Word parse_tree__parse_type_name__Purity_11,
  MR_Word * parse_tree__parse_type_name__MaybeType_12);

static void MR_CALL 
parse_tree__parse_type_name__parse_compound_type_6_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_7,
  MR_Word parse_tree__parse_type_name__Term_8,
  MR_Word parse_tree__parse_type_name__VarSet_9,
  MR_Word parse_tree__parse_type_name__ContextPieces_10,
  MR_Word parse_tree__parse_type_name__CompoundTypeKind_11,
  MR_Word * parse_tree__parse_type_name__Result_12);

static MR_Word MR_CALL 
parse_tree__parse_type_name__arg_context_pieces_3_f_0(
  MR_Word parse_tree__parse_type_name__ContextPieces_5,
  MR_Word parse_tree__parse_type_name__PorF_6,
  MR_Integer parse_tree__parse_type_name__ArgNum_7);


static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_1[68][2];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_3[2][3];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_4[17][1];

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_6[1][6];


/* sealed */ struct parse_tree__parse_type_name__vector_common_type_5_0_s {
  const MR_String parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__parse_type_name__vector_common_type_5_0_s parse_tree__parse_type_name_vector_common_5[15];

/* sealed */ struct parse_tree__parse_type_name__vector_common_type_7_0_s {
  const MR_String parse_tree__parse_type_name__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer parse_tree__parse_type_name__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct parse_tree__parse_type_name__vector_common_type_7_0_s parse_tree__parse_type_name_vector_common_7[32];



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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a type."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "suffix."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "::mode"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: missing"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the return value of higher-order function type:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<arguments>)"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "by"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be preceded"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the operator"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: in a function type declaration,"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<arg_types>) = <ret_type>"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<arg_types>)"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<arg_types_modes>) = <ret_type_mode> is <detism>"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<arg_types_modes>) is <detism>"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be of one of the following forms:"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be followed by a higher order type,"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is neither."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[2])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unexpected"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[10])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should not be used"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with any arity other than"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument of higher-order"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[40])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the purity marker"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a higher order type"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have one of the forms"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<arguments>) is det"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<arguments>) = <return_argument> is det"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "contains"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "higher order inst information,"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but this is not allowed in"))
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
    ((MR_Box) (&parse_tree__parse_type_name_scalar_common_6[0])),
    ((MR_Box) (parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_4[17][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[15])))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_name_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
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

static /* final */ const struct parse_tree__parse_type_name__vector_common_type_7_0_s parse_tree__parse_type_name_vector_common_7[32] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) -1
  },
  /* row 1 */
  {
    (MR_String) "string",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "semipure",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    (MR_String) "float",
    (MR_Integer) -1
  },
  /* row 4 */
  {
    (MR_String) "character",
    (MR_Integer) 5
  },
  /* row 5 */
  {
    (MR_String) "impure",
    (MR_Integer) -1
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    (MR_String) "int",
    (MR_Integer) -1
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 10 */
  {
    (MR_String) "{}",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    (MR_String) "is",
    (MR_Integer) -1
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 24 */
  {
    (MR_String) "pure",
    (MR_Integer) -1
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 28 */
  {
    (MR_String) "=",
    (MR_Integer) -1
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 31 */
  {
    (MR_String) "pred",
    (MR_Integer) -1
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0 = {
  (MR_String) "allow_ho_inst_info",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_why_no_ho_inst_info_0
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1 = {
  (MR_String) "no_allow_ho_inst_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_allow_ho_inst_info_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_allow_ho_inst_info_0_1
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_allow_ho_inst_info_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "allow_ho_inst_info",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_allow_ho_inst_info_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_allow_ho_inst_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_allow_ho_inst_info_0
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_VA_TypeInfo_Struct2 parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__parse_type_name__cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_arg_context_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "arg_context_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__parse_type_name____vti_func_2builtin__type_ctor_info_int_0cord__ti_cord_1parse_tree__error_util__type_ctor_info_format_component_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_0 = {
  (MR_String) "kctk_tuple",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_1 = {
  (MR_String) "kctk_pure_func",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_2 = {
  (MR_String) "kctk_pure_pred",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_3 = {
  (MR_String) "kctk_is",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_4 = {
  (MR_String) "kctk_purity",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_compound_type_kind_1_5 = {
  (MR_String) "kctk_apply",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_compound_type_kind_1_5,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_compound_type_kind_1_3
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
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_compound_type_kind",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_compound_type_kind_1 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_compound_type_kind_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_compound_type_kind_1
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_0 = {
  (MR_String) "known_type_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__type_ctor_info_known_compound_type_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__parse_tree__parse_type_name__pti_known_compound_type_kind_1__pseudo_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_1 = {
  (MR_String) "known_type_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_known_type_kind_1_2 = {
  (MR_String) "known_type_bad_arity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_known_type_kind_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_known_type_kind_1_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "known_type_kind",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_known_type_kind_1 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_known_type_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_known_type_kind_1
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0 = {
  (MR_String) "dont_constrain_inst_vars",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_type_name__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__parse_type_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_maybe_constrain_inst_vars_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__parse_type_name__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
};

static const MR_DuFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_1 = {
  (MR_String) "constrain_some_inst_vars",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_type_name__parse_tree__parse_type_name__field_types_maybe_constrain_inst_vars_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_0[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_1[1] = {
  &parse_tree__parse_type_name__parse_tree__parse_type_name__du_functor_desc_maybe_constrain_inst_vars_0_1
};

static const MR_DuPtagLayout parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_maybe_constrain_inst_vars_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_type_name__parse_tree__parse_type_name__du_stag_ordered_maybe_constrain_inst_vars_0_1
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
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "maybe_constrain_inst_vars",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_name_ordered_maybe_constrain_inst_vars_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__du_ptag_ordered_maybe_constrain_inst_vars_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_constrain_inst_vars_0
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_0 = {
  (MR_String) "dont_require_tm_mode",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_maybe_require_tm_mode_0_1 = {
  (MR_String) "require_tm_mode",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "maybe_require_tm_mode",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_maybe_require_tm_mode_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_maybe_require_tm_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_maybe_require_tm_mode_0
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_0 = {
  (MR_String) "wnhii_type_ctor_arg",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_1 = {
  (MR_String) "wnhii_tuple_arg",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_2 = {
  (MR_String) "wnhii_pred_arg",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_3 = {
  (MR_String) "wnhii_func_arg",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_4 = {
  (MR_String) "wnhii_func_return_arg",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_5 = {
  (MR_String) "wnhii_type_qual",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_6 = {
  (MR_String) "wnhii_eqv_type_defn_body",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_7 = {
  (MR_String) "wnhii_solver_type_defn",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_8 = {
  (MR_String) "wnhii_class_constraint",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_9 = {
  (MR_String) "wnhii_mutable_decl",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_10 = {
  (MR_String) "wnhii_user_struct_sharing",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_11 = {
  (MR_String) "wnhii_ctgc_type_selector",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_12 = {
  (MR_String) "wnhii_pragma_struct_sharing",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_13 = {
  (MR_String) "wnhii_pragma_struct_reuse",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc parse_tree__parse_type_name__parse_tree__parse_type_name__enum_functor_desc_why_no_ho_inst_info_0_14 = {
  (MR_String) "wnhii_pragma_type_spec",
  (MR_Integer) 14
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001)),
  ((MR_Box) (parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001)),
  (MR_String) "parse_tree.parse_type_name",
  (MR_String) "why_no_ho_inst_info",
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_name_ordered_why_no_ho_inst_info_0 },
  {     parse_tree__parse_type_name__parse_tree__parse_type_name__enum_value_ordered_why_no_ho_inst_info_0 },
  (MR_Integer) 15,
  (MR_Integer) 4,
  parse_tree__parse_type_name__parse_tree__parse_type_name__functor_number_map_why_no_ho_inst_info_0
};

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(&parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    *parse_tree__parse_type_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____arg_context_func_0_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____arg_context_func_0_0(&parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    *parse_tree__parse_type_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), &parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_4));
    }
    *parse_tree__parse_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____known_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3,
  MR_Box parse_tree__parse_type_name__wrapper_arg_4)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____known_type_kind_1_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), &parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_4));
    }
    *parse_tree__parse_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0(&parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    *parse_tree__parse_type_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0(&parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    *parse_tree__parse_type_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0_10001(
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2));
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0_10001(
  MR_Box * parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_type_name__conv0_HeadVar__1_1;

    {
      parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0(&parse_tree__parse_type_name__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_type_name__wrapper_arg_2), ((MR_Word) parse_tree__parse_type_name__wrapper_arg_3));
    }
    *parse_tree__parse_type_name__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_type_name__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(
  MR_Word parse_tree__parse_type_name__V_36_36,
  MR_Word parse_tree__parse_type_name__V_37_37,
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_1,
  MR_Word parse_tree__parse_type_name__Varset_2,
  MR_Word parse_tree__parse_type_name__HeadVar__4_4,
  MR_Integer parse_tree__parse_type_name__ArgNum_5,
  MR_Word * parse_tree__parse_type_name__HeadVar__6_6,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    if ((parse_tree__parse_type_name__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_name__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_name__STATE_VARIABLE_Specs_8 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7;
      }
    else
      {
        MR_Word parse_tree__parse_type_name__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__Terms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_name__TypesTail_24;
        MR_Integer parse_tree__parse_type_name__V_30_30 = (parse_tree__parse_type_name__ArgNum_5 + (MR_Integer) 1);
        MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_31_31;
        MR_Word parse_tree__parse_type_name__V_33_33;
        MR_Word parse_tree__parse_type_name__V_49_49;
        MR_String parse_tree__parse_type_name__V_50_50;
        MR_Word parse_tree__parse_type_name__V_51_51;
        MR_Word parse_tree__parse_type_name__V_52_52;
        MR_Word parse_tree__parse_type_name__V_53_53;
        MR_Word parse_tree__parse_type_name__V_45_45;
        MR_Word parse_tree__parse_type_name__V_43_43;
        MR_Word parse_tree__parse_type_name__V_44_44;

        {
          parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(parse_tree__parse_type_name__V_36_36, parse_tree__parse_type_name__V_37_37, parse_tree__parse_type_name__AllowHOInstInfo_1, parse_tree__parse_type_name__Varset_2, parse_tree__parse_type_name__Terms_20, parse_tree__parse_type_name__V_30_30, &parse_tree__parse_type_name__TypesTail_24, parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7, &parse_tree__parse_type_name__STATE_VARIABLE_Specs_31_31);
        }
        {
          parse_tree__parse_type_name__V_33_33 = parse_tree__parse_type_name__arg_context_pieces_3_f_0(parse_tree__parse_type_name__V_36_36, parse_tree__parse_type_name__V_37_37, parse_tree__parse_type_name__ArgNum_5);
        }
        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Term_19)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_19, (MR_Integer) 0)));
            parse_tree__parse_type_name__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_19, (MR_Integer) 1)));
            parse_tree__parse_type_name__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_19, (MR_Integer) 2)));
            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_49_49)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_49_49, (MR_Integer) 0)));
                parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_50_50, (MR_String) "::") == 0);
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_51_51)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_51_51, (MR_Integer) 0)));
                        parse_tree__parse_type_name__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_51_51, (MR_Integer) 1)));
                        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_52_52)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_name__succeeded)
                          {
                            parse_tree__parse_type_name__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_52_52, (MR_Integer) 0)));
                            parse_tree__parse_type_name__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_52_52, (MR_Integer) 1)));
                            parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_name__succeeded)
          {
            MR_Word parse_tree__parse_type_name__TypeCtorInfo_48_80 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word parse_tree__parse_type_name__TSpecs_27;
            MR_Word parse_tree__parse_type_name__Pieces_47;
            MR_Word parse_tree__parse_type_name__Spec_48;
            MR_Word parse_tree__parse_type_name__V_67_67;
            MR_Word parse_tree__parse_type_name__V_68_68;
            MR_Word parse_tree__parse_type_name__V_71_71;
            MR_Word parse_tree__parse_type_name__V_72_72;
            MR_Word parse_tree__parse_type_name__V_73_73;
            MR_Word parse_tree__parse_type_name__V_74_74;
            MR_Word parse_tree__parse_type_name__V_75_75;

            {
              parse_tree__parse_type_name__V_68_68 = mercury__cord__from_list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_48_80, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[49]));
            }
            {
              parse_tree__parse_type_name__V_67_67 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_48_80, parse_tree__parse_type_name__V_33_33, parse_tree__parse_type_name__V_68_68);
            }
            {
              parse_tree__parse_type_name__Pieces_47 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_48_80, parse_tree__parse_type_name__V_67_67);
            }
            {
              parse_tree__parse_type_name__V_73_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__Term_19);
            }
            {
              parse_tree__parse_type_name__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_75_75, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_47));
            }
            {
              parse_tree__parse_type_name__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_74_74, 0) = ((MR_Box) (parse_tree__parse_type_name__V_75_75));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_name__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_72_72, 0) = ((MR_Box) (parse_tree__parse_type_name__V_73_73));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_72_72, 1) = ((MR_Box) (parse_tree__parse_type_name__V_74_74));
            }
            {
              parse_tree__parse_type_name__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_71_71, 0) = ((MR_Box) (parse_tree__parse_type_name__V_72_72));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_name__Spec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_48, 2) = ((MR_Box) (parse_tree__parse_type_name__V_71_71));
            }
            {
              parse_tree__parse_type_name__TSpecs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__TSpecs_27, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_48));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__TSpecs_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *parse_tree__parse_type_name__HeadVar__6_6 = parse_tree__parse_type_name__TypesTail_24;
            {
              *parse_tree__parse_type_name__STATE_VARIABLE_Specs_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__TSpecs_27, parse_tree__parse_type_name__STATE_VARIABLE_Specs_31_31);
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_name__MaybeType_86;

            {
              parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_1, parse_tree__parse_type_name__Varset_2, parse_tree__parse_type_name__V_33_33, parse_tree__parse_type_name__Term_19, &parse_tree__parse_type_name__MaybeType_86);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeType_86)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_type_name__TSpecs_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__MaybeType_86, (MR_Integer) 0)));

                *parse_tree__parse_type_name__HeadVar__6_6 = parse_tree__parse_type_name__TypesTail_24;
                {
                  *parse_tree__parse_type_name__STATE_VARIABLE_Specs_8 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__TSpecs_82, parse_tree__parse_type_name__STATE_VARIABLE_Specs_31_31);
                }
              }
            else
              {
                MR_Word parse_tree__parse_type_name__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeType_86, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_name__HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_26));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_type_name__TypesTail_24));
                }
                *parse_tree__parse_type_name__STATE_VARIABLE_Specs_8 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_31_31;
              }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(
  MR_Word parse_tree__parse_type_name__V_42_42,
  MR_Word parse_tree__parse_type_name__V_43_43,
  MR_Word parse_tree__parse_type_name__MaybeInstConstraints_1,
  MR_Word parse_tree__parse_type_name__MaybeRequireMode_2,
  MR_Word parse_tree__parse_type_name__Why_3,
  MR_Word parse_tree__parse_type_name__VarSet_4,
  MR_Word parse_tree__parse_type_name__HeadVar__6_6,
  MR_Integer parse_tree__parse_type_name__ArgNum_7,
  MR_Word * parse_tree__parse_type_name__HeadVar__8_8,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_10)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    if ((parse_tree__parse_type_name__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_name__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_name__STATE_VARIABLE_Specs_10 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_9;
      }
    else
      {
        MR_Word parse_tree__parse_type_name__Term_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__Terms_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_name__TypesAndModesTail_30;
        MR_Word parse_tree__parse_type_name__MaybeTypeAndMode_31;
        MR_Integer parse_tree__parse_type_name__V_36_36 = (parse_tree__parse_type_name__ArgNum_7 + (MR_Integer) 1);
        MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37;
        MR_Word parse_tree__parse_type_name__V_39_39;

        {
          parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(parse_tree__parse_type_name__V_42_42, parse_tree__parse_type_name__V_43_43, parse_tree__parse_type_name__MaybeInstConstraints_1, parse_tree__parse_type_name__MaybeRequireMode_2, parse_tree__parse_type_name__Why_3, parse_tree__parse_type_name__VarSet_4, parse_tree__parse_type_name__Terms_26, parse_tree__parse_type_name__V_36_36, &parse_tree__parse_type_name__TypesAndModesTail_30, parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_9, &parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37);
        }
        {
          parse_tree__parse_type_name__V_39_39 = parse_tree__parse_type_name__arg_context_pieces_3_f_0(parse_tree__parse_type_name__V_42_42, parse_tree__parse_type_name__V_43_43, parse_tree__parse_type_name__ArgNum_7);
        }
        {
          parse_tree__parse_type_name__parse_type_and_mode_7_p_0(parse_tree__parse_type_name__MaybeInstConstraints_1, parse_tree__parse_type_name__MaybeRequireMode_2, parse_tree__parse_type_name__Why_3, parse_tree__parse_type_name__VarSet_4, parse_tree__parse_type_name__V_39_39, parse_tree__parse_type_name__Term_25, &parse_tree__parse_type_name__MaybeTypeAndMode_31);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeTypeAndMode_31)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_type_name__TMSpecs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__MaybeTypeAndMode_31, (MR_Integer) 0)));

            *parse_tree__parse_type_name__HeadVar__8_8 = parse_tree__parse_type_name__TypesAndModesTail_30;
            {
              *parse_tree__parse_type_name__STATE_VARIABLE_Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__TMSpecs_33, parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37);
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_name__TypeAndMode_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeTypeAndMode_31, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_type_name__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__TypeAndMode_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_type_name__TypesAndModesTail_30));
            }
            *parse_tree__parse_type_name__STATE_VARIABLE_Specs_10 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37;
          }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
  MR_String parse_tree__parse_type_name__Name_4,
  MR_Word parse_tree__parse_type_name__Args_5,
  MR_Word * parse_tree__parse_type_name__KnownType_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__slot_0;
    MR_String parse_tree__parse_type_name__str_1;

    /* hashed string jump switch */
    /* compute the hash value of the input string */
    parse_tree__parse_type_name__slot_0 = ((MR_hash_string6(parse_tree__parse_type_name__Name_4)) & (MR_Integer) 31);
    /* hash chain loop */
    do
      {
        /* lookup the string for this hash slot */
        parse_tree__parse_type_name__str_1 = ((&parse_tree__parse_type_name_vector_common_7[0 + parse_tree__parse_type_name__slot_0]))->parse_tree__parse_type_name__vector_common_type_7_0__vct_7_f_0;
        /* did we find a match? */
        if ((((parse_tree__parse_type_name__str_1 != NULL)) && ((strcmp(parse_tree__parse_type_name__str_1, parse_tree__parse_type_name__Name_4) == 0))))
          {
            /* we found a match; dispatch to the corresponding code */
            switch (parse_tree__parse_type_name__slot_0) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* case "" */
                  {
                    MR_Word parse_tree__parse_type_name__V_26_26;

                    {
                      parse_tree__parse_type_name__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_26_26, 1) = ((MR_Box) (parse_tree__parse_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_26_26));
                    }
                    parse_tree__parse_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  /* case "string" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) &parse_tree__parse_type_name_scalar_common_4[16];
                    }
                  else
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[9]);
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* case "semipure" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[12]);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_195_195 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__parse_type_name__V_136_136;

                          {
                            parse_tree__parse_type_name__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_136_136, 1) = ((MR_Box) (parse_tree__parse_type_name__Name_4));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_136_136, 2) = ((MR_Box) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_136_136, 3) = parse_tree__parse_type_name__V_195_195;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_136_136));
                          }
                        }
                      else
                        {
                          *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[12]);
                        }
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  /* case "float" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) &parse_tree__parse_type_name_scalar_common_4[11];
                    }
                  else
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[9]);
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  /* case "character" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) &parse_tree__parse_type_name_scalar_common_4[8];
                    }
                  else
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[9]);
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  /* case "impure" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[12]);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_189_189 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__parse_type_name__V_28_28;

                          {
                            parse_tree__parse_type_name__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_28_28, 1) = ((MR_Box) (parse_tree__parse_type_name__Name_4));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_28_28, 2) = ((MR_Box) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_28_28, 3) = parse_tree__parse_type_name__V_189_189;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_28_28));
                          }
                        }
                      else
                        {
                          *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[12]);
                        }
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 8:
                {
                  /* case "int" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) &parse_tree__parse_type_name_scalar_common_4[14];
                    }
                  else
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[9]);
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 10:
                {
                  /* case "{}" */
                  {
                    MR_Word parse_tree__parse_type_name__V_46_46;

                    {
                      parse_tree__parse_type_name__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_46_46, 0) = ((MR_Box) (parse_tree__parse_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_46_46));
                    }
                    parse_tree__parse_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  /* case "is" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[6]);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_191_191 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[6]);
                        }
                      else
                        {
                          MR_Word parse_tree__parse_type_name__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_190_190, (MR_Integer) 1)));
                          MR_Box parse_tree__parse_type_name__V_199_199 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_190_190, (MR_Integer) 0));

                          if ((parse_tree__parse_type_name__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word parse_tree__parse_type_name__V_33_33;

                              {
                                parse_tree__parse_type_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_33_33, 1) = parse_tree__parse_type_name__V_191_191;
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_33_33, 2) = parse_tree__parse_type_name__V_199_199;
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__parse_type_name__KnownType_6 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_33_33));
                              }
                            }
                          else
                            {
                              *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[6]);
                            }
                        }
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 24:
                {
                  /* case "pure" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[12]);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_193_193 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__parse_type_name__V_99_99;

                          {
                            parse_tree__parse_type_name__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_99_99, 1) = ((MR_Box) (parse_tree__parse_type_name__Name_4));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_99_99, 2) = ((MR_Box) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_99_99, 3) = parse_tree__parse_type_name__V_193_193;
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__KnownType_6 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_99_99));
                          }
                        }
                      else
                        {
                          *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[12]);
                        }
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 28:
                {
                  /* case "=" */
                  if ((parse_tree__parse_type_name__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[6]);
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 1)));
                      MR_Box parse_tree__parse_type_name__V_187_187 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_5, (MR_Integer) 0));

                      if ((parse_tree__parse_type_name__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[6]);
                        }
                      else
                        {
                          MR_Word parse_tree__parse_type_name__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_186_186, (MR_Integer) 1)));
                          MR_Box parse_tree__parse_type_name__V_197_197 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_186_186, (MR_Integer) 0));

                          if ((parse_tree__parse_type_name__V_196_196 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word parse_tree__parse_type_name__V_41_41;

                              {
                                parse_tree__parse_type_name__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_41_41, 0) = parse_tree__parse_type_name__V_187_187;
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_41_41, 1) = parse_tree__parse_type_name__V_197_197;
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                *parse_tree__parse_type_name__KnownType_6 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_41_41));
                              }
                            }
                          else
                            {
                              *parse_tree__parse_type_name__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_type_name_scalar_common_4[6]);
                            }
                        }
                    }
                  parse_tree__parse_type_name__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 31:
                {
                  /* case "pred" */
                  {
                    MR_Word parse_tree__parse_type_name__V_38_38;

                    {
                      parse_tree__parse_type_name__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__V_38_38, 0) = ((MR_Box) (parse_tree__parse_type_name__Args_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_type_name__KnownType_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_38_38));
                    }
                    parse_tree__parse_type_name__succeeded = MR_TRUE;
                  }
                }
                break;
            }
            /* jump out of search loop */
            goto label_0;
          }
        else
          {
            /* no match yet, so get next slot in hash chain */
            parse_tree__parse_type_name__slot_0 = ((&parse_tree__parse_type_name_vector_common_7[0 + parse_tree__parse_type_name__slot_0]))->parse_tree__parse_type_name__vector_common_type_7_0__vct_7_f_1;
          }
      }
    while ((parse_tree__parse_type_name__slot_0 >= (MR_Integer) 0));
    parse_tree__parse_type_name__succeeded = MR_FALSE;
  label_0:;
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0_1(
  MR_Box parse_tree__parse_type_name__closure_arg,
  MR_Box parse_tree__parse_type_name__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_2,
  MR_Box * parse_tree__parse_type_name__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_type_name__closure = parse_tree__parse_type_name__closure_arg;
    MR_Word parse_tree__parse_type_name__conv1_Type_2;
    MR_Word parse_tree__parse_type_name__conv0_Mode_3;

    {
      parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(((MR_Word) parse_tree__parse_type_name__wrapper_arg_1), &parse_tree__parse_type_name__conv1_Type_2, &parse_tree__parse_type_name__conv0_Mode_3);
    }
    *parse_tree__parse_type_name__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_name__conv1_Type_2));
    *parse_tree__parse_type_name__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_type_name__conv0_Mode_3));
  }
}

static void MR_CALL 
parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(
  MR_Word parse_tree__parse_type_name__Purity_11,
  MR_Word parse_tree__parse_type_name__ArgTypeAndModes_12,
  MR_Word parse_tree__parse_type_name__ArgSpecs_13,
  MR_Word parse_tree__parse_type_name__MaybeMaybeRetTypeAndMode_14,
  MR_Word parse_tree__parse_type_name__MaybeDetism_15,
  MR_Word * parse_tree__parse_type_name__MaybeType_16)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    MR_Word parse_tree__parse_type_name__ArgTypes0_17;
    MR_Word parse_tree__parse_type_name__ArgModes0_18;
    MR_Word parse_tree__parse_type_name__PredOrFunc_19;
    MR_Word parse_tree__parse_type_name__ArgTypes_20;
    MR_Word parse_tree__parse_type_name__PredInstInfo_22;
    MR_Word parse_tree__parse_type_name__Detism_23;

    {
      mercury__list__map2_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__parse_type_name__TypeCtorInfo_50_50, parse_tree__parse_type_name__TypeCtorInfo_51_51, (MR_Word) &parse_tree__parse_type_name_scalar_common_3[1], parse_tree__parse_type_name__ArgTypeAndModes_12, &parse_tree__parse_type_name__ArgTypes0_17, &parse_tree__parse_type_name__ArgModes0_18);
    }
    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__ArgSpecs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_name__succeeded)
      {
        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeDetism_15)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__Detism_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeDetism_15, (MR_Integer) 0)));
            if ((parse_tree__parse_type_name__MaybeMaybeRetTypeAndMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                parse_tree__parse_type_name__PredOrFunc_19 = (MR_Integer) 0;
                parse_tree__parse_type_name__ArgTypes_20 = parse_tree__parse_type_name__ArgTypes0_17;
                {
                  parse_tree__parse_type_name__PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 0) = ((MR_Box) (parse_tree__parse_type_name__PredOrFunc_19));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 1) = ((MR_Box) (parse_tree__parse_type_name__ArgModes0_18));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 3) = ((MR_Box) (parse_tree__parse_type_name__Detism_23));
                }
                parse_tree__parse_type_name__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word parse_tree__parse_type_name__MaybeRetTypeAndMode_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeMaybeRetTypeAndMode_14, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_name__RetTypeAndMode_25;
                MR_Word parse_tree__parse_type_name__RetType_26;
                MR_Word parse_tree__parse_type_name__RetMode_27;
                MR_Word parse_tree__parse_type_name__V_34_34;
                MR_Word parse_tree__parse_type_name__V_35_35;
                MR_Word parse_tree__parse_type_name__V_36_36;
                MR_Word parse_tree__parse_type_name__V_37_37;
                MR_Word parse_tree__parse_type_name__V_38_38;
                MR_Word parse_tree__parse_type_name__ArgModes_45;

                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeRetTypeAndMode_24)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__RetTypeAndMode_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeRetTypeAndMode_24, (MR_Integer) 0)));
                    parse_tree__parse_type_name__PredOrFunc_19 = (MR_Integer) 1;
                    if (((MR_tag((MR_Word) parse_tree__parse_type_name__RetTypeAndMode_25)) == (MR_mktag((MR_Integer) 1))))
                      {
                        parse_tree__parse_type_name__RetType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__RetTypeAndMode_25, (MR_Integer) 0)));
                        parse_tree__parse_type_name__RetMode_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__RetTypeAndMode_25, (MR_Integer) 1)));
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_name.project_tm_type_and_mode\'/3", (MR_String) "type_only");
                          return;
                        }
                      }
                    parse_tree__parse_type_name__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      parse_tree__parse_type_name__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_34_34, 0) = ((MR_Box) (parse_tree__parse_type_name__RetType_26));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_34_34, 1) = ((MR_Box) (parse_tree__parse_type_name__V_35_35));
                    }
                    {
                      parse_tree__parse_type_name__ArgTypes_20 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_50_50, parse_tree__parse_type_name__ArgTypes0_17, parse_tree__parse_type_name__V_34_34);
                    }
                    parse_tree__parse_type_name__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      parse_tree__parse_type_name__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_36_36, 0) = ((MR_Box) (parse_tree__parse_type_name__RetMode_27));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_36_36, 1) = ((MR_Box) (parse_tree__parse_type_name__V_37_37));
                    }
                    {
                      parse_tree__parse_type_name__ArgModes_45 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_51_51, parse_tree__parse_type_name__ArgModes0_18, parse_tree__parse_type_name__V_36_36);
                    }
                    parse_tree__parse_type_name__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      parse_tree__parse_type_name__PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 0) = ((MR_Box) (parse_tree__parse_type_name__PredOrFunc_19));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 1) = ((MR_Box) (parse_tree__parse_type_name__ArgModes_45));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 2) = ((MR_Box) (parse_tree__parse_type_name__V_38_38));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__PredInstInfo_22, 3) = ((MR_Box) (parse_tree__parse_type_name__Detism_23));
                    }
                    parse_tree__parse_type_name__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (parse_tree__parse_type_name__succeeded)
      {
        MR_Word parse_tree__parse_type_name__Type_29;
        MR_Word parse_tree__parse_type_name__V_40_40;

        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        parse_tree__parse_type_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_name__PredInstInfo_22);
        {
          parse_tree__parse_type_name__Type_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__Type_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__Type_29, 1) = ((MR_Box) (parse_tree__parse_type_name__PredOrFunc_19));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__Type_29, 2) = ((MR_Box) (parse_tree__parse_type_name__ArgTypes_20));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__Type_29, 3) = ((MR_Box) (parse_tree__parse_type_name__V_40_40));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__Type_29, 4) = ((MR_Box) (parse_tree__parse_type_name__Purity_11));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__Type_29, 5) = NULL;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_name__MaybeType_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_29));
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_name__TypeCtorInfo_52_52;
        MR_Word parse_tree__parse_type_name__RetSpecs_30;
        MR_Word parse_tree__parse_type_name__Specs_32;
        MR_Word parse_tree__parse_type_name__V_43_43;
        MR_Word parse_tree__parse_type_name__V_44_44;

        if ((parse_tree__parse_type_name__MaybeMaybeRetTypeAndMode_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__parse_type_name__RetSpecs_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_name__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeMaybeRetTypeAndMode_14, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__parse_type_name__V_54_54)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_name__RetSpecs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_54_54, (MR_Integer) 0)));
            else
              parse_tree__parse_type_name__RetSpecs_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        parse_tree__parse_type_name__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        {
          parse_tree__parse_type_name__V_44_44 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0, parse_tree__parse_type_name__MaybeDetism_15);
        }
        {
          parse_tree__parse_type_name__V_43_43 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_52_52, parse_tree__parse_type_name__RetSpecs_30, parse_tree__parse_type_name__V_44_44);
        }
        {
          parse_tree__parse_type_name__Specs_32 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_52_52, parse_tree__parse_type_name__ArgSpecs_13, parse_tree__parse_type_name__V_43_43);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_name__MaybeType_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_32));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____why_no_ho_inst_info_0_0(
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__Cast_HeadVar1_4, parse_tree__parse_type_name__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____why_no_ho_inst_info_0_0(
  MR_Word parse_tree__parse_type_name__HeadVar__2_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__HeadVar__2_1 == parse_tree__parse_type_name__HeadVar__2_2);

    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_require_tm_mode_0_0(
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__Cast_HeadVar1_4, parse_tree__parse_type_name__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_require_tm_mode_0_0(
  MR_Word parse_tree__parse_type_name__HeadVar__2_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__HeadVar__2_1 == parse_tree__parse_type_name__HeadVar__2_2);

    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____maybe_constrain_inst_vars_0_0(
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_8 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__CastY_9 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_8 == parse_tree__parse_type_name__CastY_9);
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((parse_tree__parse_type_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__parse_type_name__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
      else
        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word parse_tree__parse_type_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

        if ((parse_tree__parse_type_name__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__parse_type_name__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_type_name_scalar_common_3[0], parse_tree__parse_type_name__HeadVar__1_1, ((MR_Box) (parse_tree__parse_type_name__V_11_11)), ((MR_Box) (parse_tree__parse_type_name__V_7_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____maybe_constrain_inst_vars_0_0(
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_7 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_type_name__CastY_8 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_7 == parse_tree__parse_type_name__CastY_8);
    if (parse_tree__parse_type_name__succeeded)
      parse_tree__parse_type_name__succeeded = MR_TRUE;
    else
    if ((parse_tree__parse_type_name__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer parse_tree__parse_type_name__CastX_3 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
        MR_Integer parse_tree__parse_type_name__CastY_4 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastY_4 == parse_tree__parse_type_name__CastX_3);
      }
    else
      {
        MR_Word parse_tree__parse_type_name__TypeInfo_9_9;
        MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__V_6_6;

        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__parse_type_name__TypeInfo_9_9 = (MR_Word) &parse_tree__parse_type_name_scalar_common_3[0];
            {
              parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_9_9, ((MR_Box) (parse_tree__parse_type_name__V_5_5)), ((MR_Box) (parse_tree__parse_type_name__V_6_6)));
            }
          }
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_24,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_22 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__CastY_23 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_22 == parse_tree__parse_type_name__CastY_23);
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_type_name__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_31_31, parse_tree__parse_type_name__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_type_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_type_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(parse_tree__parse_type_name__TypeInfo_for_T_24, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_30_30, parse_tree__parse_type_name__V_13_13);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer parse_tree__parse_type_name__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer parse_tree__parse_type_name__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_29_29, parse_tree__parse_type_name__V_21_21);
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
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_11,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_9 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_type_name__CastY_10 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_9 == parse_tree__parse_type_name__CastY_10);
    if (parse_tree__parse_type_name__succeeded)
      parse_tree__parse_type_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_type_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_4_4;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__parse_type_name__V_3_3, parse_tree__parse_type_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_6_6;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name____Unify____known_compound_type_kind_1_0(parse_tree__parse_type_name__TypeInfo_for_T_11, parse_tree__parse_type_name__V_5_5, parse_tree__parse_type_name__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer parse_tree__parse_type_name__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer parse_tree__parse_type_name__V_8_8;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_7_7 == parse_tree__parse_type_name__V_8_8);
              }
          }
          break;
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name____Compare____known_compound_type_kind_1_0(
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_130,
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_128 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__CastY_129 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_128 == parse_tree__parse_type_name__CastY_129);
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_type_name__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_130, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_148_148, parse_tree__parse_type_name__V_5_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__parse_type_name__V_142_142 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));
            MR_Box parse_tree__parse_type_name__V_143_143 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box parse_tree__parse_type_name__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0));
                  MR_Box parse_tree__parse_type_name__V_26_26 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1));
                  MR_Word parse_tree__parse_type_name__V_27_27;

                  {
                    mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_130, &parse_tree__parse_type_name__V_27_27, parse_tree__parse_type_name__V_143_143, parse_tree__parse_type_name__V_25_25);
                  }
                  parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_27_27 == (MR_Integer) 0);
                  parse_tree__parse_type_name__succeeded = !(parse_tree__parse_type_name__succeeded);
                  if (parse_tree__parse_type_name__succeeded)
                    *parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__V_27_27;
                  else
                    {
                      mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_130, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_142_142, parse_tree__parse_type_name__V_26_26);
                    }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_type_name__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_type_name__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__list____Compare____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_130, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_144_144, parse_tree__parse_type_name__V_49_49);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__parse_type_name__V_140_140 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2));
                MR_Box parse_tree__parse_type_name__V_141_141 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box parse_tree__parse_type_name__V_71_71 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1));
                          MR_Box parse_tree__parse_type_name__V_72_72 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 2));
                          MR_Word parse_tree__parse_type_name__V_73_73;

                          {
                            mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_130, &parse_tree__parse_type_name__V_73_73, parse_tree__parse_type_name__V_141_141, parse_tree__parse_type_name__V_71_71);
                          }
                          parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_73_73 == (MR_Integer) 0);
                          parse_tree__parse_type_name__succeeded = !(parse_tree__parse_type_name__succeeded);
                          if (parse_tree__parse_type_name__succeeded)
                            *parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__V_73_73;
                          else
                            {
                              mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_130, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_140_140, parse_tree__parse_type_name__V_72_72);
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box parse_tree__parse_type_name__V_145_145 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 3));
                MR_Word parse_tree__parse_type_name__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2)));
                MR_String parse_tree__parse_type_name__V_147_147 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String parse_tree__parse_type_name__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word parse_tree__parse_type_name__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Box parse_tree__parse_type_name__V_105_105 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 3));
                          MR_Word parse_tree__parse_type_name__V_106_106;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__parse_type_name__V_106_106, parse_tree__parse_type_name__V_147_147, parse_tree__parse_type_name__V_103_103);
                          }
                          parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_106_106 == (MR_Integer) 0);
                          parse_tree__parse_type_name__succeeded = !(parse_tree__parse_type_name__succeeded);
                          if (parse_tree__parse_type_name__succeeded)
                            *parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__V_106_106;
                          else
                            {
                              MR_Word parse_tree__parse_type_name__V_107_107;
                              MR_Integer parse_tree__parse_type_name__V_149_149 = (MR_Integer) parse_tree__parse_type_name__V_146_146;
                              MR_Integer parse_tree__parse_type_name__V_150_150 = (MR_Integer) parse_tree__parse_type_name__V_104_104;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__parse_type_name__V_107_107, parse_tree__parse_type_name__V_149_149, parse_tree__parse_type_name__V_150_150);
                              }
                              parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_107_107 == (MR_Integer) 0);
                              parse_tree__parse_type_name__succeeded = !(parse_tree__parse_type_name__succeeded);
                              if (parse_tree__parse_type_name__succeeded)
                                *parse_tree__parse_type_name__HeadVar__1_1 = parse_tree__parse_type_name__V_107_107;
                              else
                                {
                                  mercury__builtin__compare_3_p_0(parse_tree__parse_type_name__TypeInfo_for_T_130, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_145_145, parse_tree__parse_type_name__V_105_105);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__parse_type_name__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word parse_tree__parse_type_name__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__list____Compare____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_130, parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_139_139, parse_tree__parse_type_name__V_127_127);
                          }
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
  MR_Word parse_tree__parse_type_name__TypeInfo_for_T_25,
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_23 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_type_name__CastY_24 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_23 == parse_tree__parse_type_name__CastY_24);
    if (parse_tree__parse_type_name__succeeded)
      parse_tree__parse_type_name__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_type_name__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_4_4;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_3_3, parse_tree__parse_type_name__V_4_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box parse_tree__parse_type_name__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0));
            MR_Box parse_tree__parse_type_name__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1));
            MR_Box parse_tree__parse_type_name__V_7_7;
            MR_Box parse_tree__parse_type_name__V_8_8;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0));
                parse_tree__parse_type_name__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));
                {
                  parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_5_5, parse_tree__parse_type_name__V_7_7);
                }
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_6_6, parse_tree__parse_type_name__V_8_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_type_name__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__V_10_10;

            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
                {
                  parse_tree__parse_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_9_9, parse_tree__parse_type_name__V_10_10);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box parse_tree__parse_type_name__V_11_11 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1));
                MR_Box parse_tree__parse_type_name__V_12_12 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 2));
                MR_Box parse_tree__parse_type_name__V_13_13;
                MR_Box parse_tree__parse_type_name__V_14_14;

                parse_tree__parse_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1));
                    parse_tree__parse_type_name__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2));
                    {
                      parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_11_11, parse_tree__parse_type_name__V_13_13);
                    }
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_12_12, parse_tree__parse_type_name__V_14_14);
                      }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String parse_tree__parse_type_name__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_type_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 2)));
                MR_Box parse_tree__parse_type_name__V_17_17 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 3));
                MR_String parse_tree__parse_type_name__V_18_18;
                MR_Word parse_tree__parse_type_name__V_19_19;
                MR_Box parse_tree__parse_type_name__V_20_20;

                parse_tree__parse_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_type_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 2)));
                    parse_tree__parse_type_name__V_20_20 = (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 3));
                    parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_15_15, parse_tree__parse_type_name__V_18_18) == 0);
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_16_16 == parse_tree__parse_type_name__V_19_19);
                        if (parse_tree__parse_type_name__succeeded)
                          {
                            parse_tree__parse_type_name__succeeded = mercury__builtin__unify_2_p_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_17_17, parse_tree__parse_type_name__V_20_20);
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word parse_tree__parse_type_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_type_name__V_22_22;

                parse_tree__parse_type_name__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      parse_tree__parse_type_name__succeeded = mercury__list____Unify____list_1_0(parse_tree__parse_type_name__TypeInfo_for_T_25, parse_tree__parse_type_name__V_21_21, parse_tree__parse_type_name__V_22_22);
                    }
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____arg_context_func_0_0(
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__Cast_HeadVar1_4 = parse_tree__parse_type_name__HeadVar__2_2;
    MR_Word parse_tree__parse_type_name__Cast_HeadVar2_5 = parse_tree__parse_type_name__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__parse_type_name_scalar_common_2[0], parse_tree__parse_type_name__HeadVar__1_1, ((MR_Box) (parse_tree__parse_type_name__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__parse_type_name__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____arg_context_func_0_0(
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__Cast_HeadVar1_3 = parse_tree__parse_type_name__HeadVar__1_1;
    MR_Word parse_tree__parse_type_name__Cast_HeadVar2_4 = parse_tree__parse_type_name__HeadVar__2_2;

    {
      parse_tree__parse_type_name__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__parse_type_name__Cast_HeadVar1_3, (MR_Word) parse_tree__parse_type_name__Cast_HeadVar2_4);
    }
    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name____Compare____allow_ho_inst_info_0_0(
  MR_Word * parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2,
  MR_Word parse_tree__parse_type_name__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_8 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;
    MR_Integer parse_tree__parse_type_name__CastY_9 = (MR_Integer) parse_tree__parse_type_name__HeadVar__3_3;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_8 == parse_tree__parse_type_name__CastY_9);
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((parse_tree__parse_type_name__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((parse_tree__parse_type_name__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 0;
      else
        *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word parse_tree__parse_type_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));

        if ((parse_tree__parse_type_name__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_name__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word parse_tree__parse_type_name__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer parse_tree__parse_type_name__V_12_12 = (MR_Integer) parse_tree__parse_type_name__V_11_11;
            MR_Integer parse_tree__parse_type_name__V_13_13 = (MR_Integer) parse_tree__parse_type_name__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_type_name__HeadVar__1_1, parse_tree__parse_type_name__V_12_12, parse_tree__parse_type_name__V_13_13);
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name____Unify____allow_ho_inst_info_0_0(
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word parse_tree__parse_type_name__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Integer parse_tree__parse_type_name__CastX_7 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
    MR_Integer parse_tree__parse_type_name__CastY_8 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

    parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastX_7 == parse_tree__parse_type_name__CastY_8);
    if (parse_tree__parse_type_name__succeeded)
      parse_tree__parse_type_name__succeeded = MR_TRUE;
    else
    if ((parse_tree__parse_type_name__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer parse_tree__parse_type_name__CastX_3 = (MR_Integer) parse_tree__parse_type_name__HeadVar__1_1;
        MR_Integer parse_tree__parse_type_name__CastY_4 = (MR_Integer) parse_tree__parse_type_name__HeadVar__2_2;

        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__CastY_4 == parse_tree__parse_type_name__CastX_3);
      }
    else
      {
        MR_Word parse_tree__parse_type_name__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__V_6_6;

        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__2_2, (MR_Integer) 0)));
            parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_5_5 == parse_tree__parse_type_name__V_6_6);
          }
      }
    return parse_tree__parse_type_name__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_types_acc_8_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_1,
  MR_Word parse_tree__parse_type_name__VarSet_2,
  MR_Word parse_tree__parse_type_name__ContextPieces_3,
  MR_Word parse_tree__parse_type_name__HeadVar__4_4,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_6,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_type_name__succeeded;

        if ((parse_tree__parse_type_name__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__parse_type_name__STATE_VARIABLE_Specs_8 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7;
            *parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_6 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5;
          }
        else
          {
            MR_Word parse_tree__parse_type_name__Term_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__Terms_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_name__TermResult_25;
            MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32;
            MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33;

            {
              parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_1, parse_tree__parse_type_name__VarSet_2, parse_tree__parse_type_name__ContextPieces_3, parse_tree__parse_type_name__Term_21, &parse_tree__parse_type_name__TermResult_25);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_name__TermResult_25)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_type_name__TermSpecs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__TermResult_25, (MR_Integer) 0)));

                {
                  parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__TermSpecs_27, parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7);
                }
                parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5;
              }
            else
              {
                MR_Word parse_tree__parse_type_name__Type_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__TermResult_25, (MR_Integer) 0)));

                {
                  parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_26));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33, 1) = ((MR_Box) (parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5));
                }
                parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7;
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_type_name__HeadVar__4__tmp_copy_4 = parse_tree__parse_type_name__Terms_22;
              MR_Word parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0__tmp_copy_5 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_33_33;
              MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0__tmp_copy_7 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_32_32;

              parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_7 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0__tmp_copy_7;
              parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0_5 = parse_tree__parse_type_name__STATE_VARIABLE_RevTypes_0__tmp_copy_5;
              parse_tree__parse_type_name__HeadVar__4_4 = parse_tree__parse_type_name__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(
  MR_Word parse_tree__parse_type_name__ContextPieces_6,
  MR_Word parse_tree__parse_type_name__Why_7,
  MR_Word parse_tree__parse_type_name__VarSet_8,
  MR_Word parse_tree__parse_type_name__Term_9)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__Result_10;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_52_52;
    MR_String parse_tree__parse_type_name__TermStr_11;
    MR_String parse_tree__parse_type_name__Place_12;
    MR_Word parse_tree__parse_type_name__Pieces_13;
    MR_Word parse_tree__parse_type_name__Spec_14;
    MR_Word parse_tree__parse_type_name__V_15_15;
    MR_Word parse_tree__parse_type_name__V_16_16;
    MR_Word parse_tree__parse_type_name__V_18_18;
    MR_Word parse_tree__parse_type_name__V_21_21;
    MR_Word parse_tree__parse_type_name__V_22_22;
    MR_Word parse_tree__parse_type_name__V_23_23;
    MR_Word parse_tree__parse_type_name__V_26_26;
    MR_Word parse_tree__parse_type_name__V_29_29;
    MR_Word parse_tree__parse_type_name__V_32_32;
    MR_Word parse_tree__parse_type_name__V_33_33;
    MR_Word parse_tree__parse_type_name__V_42_42;
    MR_Word parse_tree__parse_type_name__V_43_43;
    MR_Word parse_tree__parse_type_name__V_44_44;
    MR_Word parse_tree__parse_type_name__V_45_45;
    MR_Word parse_tree__parse_type_name__V_46_46;
    MR_Word parse_tree__parse_type_name__V_49_49;

    {
      parse_tree__parse_type_name__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_51_51, parse_tree__parse_type_name__VarSet_8, parse_tree__parse_type_name__Term_9);
    }
    parse_tree__parse_type_name__Place_12 = ((&parse_tree__parse_type_name_vector_common_5[0 + parse_tree__parse_type_name__Why_7]))->parse_tree__parse_type_name__vector_common_type_5_0__vct_5_f_0;
    parse_tree__parse_type_name__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      parse_tree__parse_type_name__V_15_15 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_52_52, parse_tree__parse_type_name__ContextPieces_6);
    }
    {
      parse_tree__parse_type_name__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_22_22, 1) = ((MR_Box) (parse_tree__parse_type_name__TermStr_11));
    }
    {
      parse_tree__parse_type_name__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_33_33, 1) = ((MR_Box) (parse_tree__parse_type_name__Place_12));
    }
    {
      parse_tree__parse_type_name__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_32_32, 0) = ((MR_Box) (parse_tree__parse_type_name__V_33_33));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])));
    }
    {
      parse_tree__parse_type_name__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_29_29, 1) = ((MR_Box) (parse_tree__parse_type_name__V_32_32));
    }
    {
      parse_tree__parse_type_name__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_26_26, 1) = ((MR_Box) (parse_tree__parse_type_name__V_29_29));
    }
    {
      parse_tree__parse_type_name__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_23_23, 1) = ((MR_Box) (parse_tree__parse_type_name__V_26_26));
    }
    {
      parse_tree__parse_type_name__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_21_21, 0) = ((MR_Box) (parse_tree__parse_type_name__V_22_22));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_21_21, 1) = ((MR_Box) (parse_tree__parse_type_name__V_23_23));
    }
    {
      parse_tree__parse_type_name__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_18_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[64])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_18_18, 1) = ((MR_Box) (parse_tree__parse_type_name__V_21_21));
    }
    {
      parse_tree__parse_type_name__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_16_16, 1) = ((MR_Box) (parse_tree__parse_type_name__V_18_18));
    }
    {
      parse_tree__parse_type_name__Pieces_13 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_52_52, parse_tree__parse_type_name__V_15_15, parse_tree__parse_type_name__V_16_16);
    }
    {
      parse_tree__parse_type_name__V_44_44 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_51_51, parse_tree__parse_type_name__Term_9);
    }
    {
      parse_tree__parse_type_name__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_46_46, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_13));
    }
    {
      parse_tree__parse_type_name__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_45_45, 0) = ((MR_Box) (parse_tree__parse_type_name__V_46_46));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_name__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_name__V_44_44));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_43_43, 1) = ((MR_Box) (parse_tree__parse_type_name__V_45_45));
    }
    {
      parse_tree__parse_type_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_42_42, 0) = ((MR_Box) (parse_tree__parse_type_name__V_43_43));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_name__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_14, 2) = ((MR_Box) (parse_tree__parse_type_name__V_42_42));
    }
    {
      parse_tree__parse_type_name__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_49_49, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_14));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_name__Result_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Result_10, 0) = ((MR_Box) (parse_tree__parse_type_name__V_49_49));
    }
    return parse_tree__parse_type_name__Result_10;
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_type_no_mode_5_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_6,
  MR_Word parse_tree__parse_type_name__Varset_7,
  MR_Word parse_tree__parse_type_name__ContextPieces_8,
  MR_Word parse_tree__parse_type_name__Term_9,
  MR_Word * parse_tree__parse_type_name__MaybeType_10)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Term_9)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_name__V_17_17;
    MR_String parse_tree__parse_type_name__V_18_18;
    MR_Word parse_tree__parse_type_name__V_19_19;
    MR_Word parse_tree__parse_type_name__V_20_20;
    MR_Word parse_tree__parse_type_name__V_21_21;
    MR_Word parse_tree__parse_type_name__V_13_13;
    MR_Word parse_tree__parse_type_name__V_11_11;
    MR_Word parse_tree__parse_type_name__V_12_12;

    if (parse_tree__parse_type_name__succeeded)
      {
        parse_tree__parse_type_name__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_name__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_name__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_17_17)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_17_17, (MR_Integer) 0)));
            parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_18_18, (MR_String) "::") == 0);
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_19_19, (MR_Integer) 0)));
                    parse_tree__parse_type_name__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_19_19, (MR_Integer) 1)));
                    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_20_20, (MR_Integer) 0)));
                        parse_tree__parse_type_name__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_20_20, (MR_Integer) 1)));
                        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_name__succeeded)
      {
        MR_Word parse_tree__parse_type_name__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        MR_Word parse_tree__parse_type_name__Pieces_15;
        MR_Word parse_tree__parse_type_name__Spec_16;
        MR_Word parse_tree__parse_type_name__V_35_35;
        MR_Word parse_tree__parse_type_name__V_36_36;
        MR_Word parse_tree__parse_type_name__V_39_39;
        MR_Word parse_tree__parse_type_name__V_40_40;
        MR_Word parse_tree__parse_type_name__V_41_41;
        MR_Word parse_tree__parse_type_name__V_42_42;
        MR_Word parse_tree__parse_type_name__V_43_43;
        MR_Word parse_tree__parse_type_name__V_46_46;

        {
          parse_tree__parse_type_name__V_36_36 = mercury__cord__from_list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_48_48, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[49]));
        }
        {
          parse_tree__parse_type_name__V_35_35 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_48_48, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__V_36_36);
        }
        {
          parse_tree__parse_type_name__Pieces_15 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_48_48, parse_tree__parse_type_name__V_35_35);
        }
        {
          parse_tree__parse_type_name__V_41_41 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__Term_9);
        }
        {
          parse_tree__parse_type_name__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_15));
        }
        {
          parse_tree__parse_type_name__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_42_42, 0) = ((MR_Box) (parse_tree__parse_type_name__V_43_43));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_name__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_name__V_41_41));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_40_40, 1) = ((MR_Box) (parse_tree__parse_type_name__V_42_42));
        }
        {
          parse_tree__parse_type_name__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, 0) = ((MR_Box) (parse_tree__parse_type_name__V_40_40));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_name__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_16, 2) = ((MR_Box) (parse_tree__parse_type_name__V_39_39));
        }
        {
          parse_tree__parse_type_name__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_46_46, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_16));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_name__MaybeType_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_46_46));
        }
      }
    else
      {
        parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_6, parse_tree__parse_type_name__Varset_7, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__Term_9, parse_tree__parse_type_name__MaybeType_10);
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__project_tm_type_and_mode_3_p_0(
  MR_Word parse_tree__parse_type_name__HeadVar__1_1,
  MR_Word * parse_tree__parse_type_name__Type_2,
  MR_Word * parse_tree__parse_type_name__Mode_3)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_type_name__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        *parse_tree__parse_type_name__Type_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 0)));
        *parse_tree__parse_type_name__Mode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__1_1, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.parse_type_name.project_tm_type_and_mode\'/3", (MR_String) "type_only");
          return;
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(
  MR_Word parse_tree__parse_type_name__VarSet_7,
  MR_Word parse_tree__parse_type_name__ContextPieces_8,
  MR_Word parse_tree__parse_type_name__BeforeIsTerm_9,
  MR_Word parse_tree__parse_type_name__AfterIsTerm_10,
  MR_Word parse_tree__parse_type_name__Purity_11,
  MR_Word * parse_tree__parse_type_name__MaybeType_12)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__MaybeDetism_13;
    MR_Word parse_tree__parse_type_name__RetTerm_15;
    MR_Word parse_tree__parse_type_name__ArgTerms_17;
    MR_Word parse_tree__parse_type_name__FuncTerm_14;
    MR_Word parse_tree__parse_type_name__V_28_28;
    MR_String parse_tree__parse_type_name__V_29_29;
    MR_Word parse_tree__parse_type_name__V_30_30;
    MR_Word parse_tree__parse_type_name__V_31_31;
    MR_Word parse_tree__parse_type_name__V_32_32;
    MR_Word parse_tree__parse_type_name__V_33_33;
    MR_String parse_tree__parse_type_name__V_34_34;
    MR_Word parse_tree__parse_type_name__V_16_16;
    MR_Word parse_tree__parse_type_name__V_18_18;

    {
      parse_tree__parse_inst_mode_name__parse_determinism_3_p_0(parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__AfterIsTerm_10, &parse_tree__parse_type_name__MaybeDetism_13);
    }
    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__BeforeIsTerm_9)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__parse_type_name__succeeded)
      {
        parse_tree__parse_type_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeIsTerm_9, (MR_Integer) 0)));
        parse_tree__parse_type_name__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeIsTerm_9, (MR_Integer) 1)));
        parse_tree__parse_type_name__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeIsTerm_9, (MR_Integer) 2)));
        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_28_28)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_28_28, (MR_Integer) 0)));
            parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_29_29, (MR_String) "=") == 0);
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__FuncTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_30_30, (MR_Integer) 0)));
                    parse_tree__parse_type_name__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_30_30, (MR_Integer) 1)));
                    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_31_31)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__RetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_31_31, (MR_Integer) 0)));
                        parse_tree__parse_type_name__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_31_31, (MR_Integer) 1)));
                        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_type_name__succeeded)
                          {
                            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__FuncTerm_14)) == (MR_mktag((MR_Integer) 0)));
                            if (parse_tree__parse_type_name__succeeded)
                              {
                                parse_tree__parse_type_name__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__FuncTerm_14, (MR_Integer) 0)));
                                parse_tree__parse_type_name__ArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__FuncTerm_14, (MR_Integer) 1)));
                                parse_tree__parse_type_name__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__FuncTerm_14, (MR_Integer) 2)));
                                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_33_33)) == (MR_mktag((MR_Integer) 0)));
                                if (parse_tree__parse_type_name__succeeded)
                                  {
                                    parse_tree__parse_type_name__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_33_33, (MR_Integer) 0)));
                                    parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_34_34, (MR_String) "func") == 0);
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_name__succeeded)
      {
        MR_Word parse_tree__parse_type_name__TypeCtorInfo_112_112;
        MR_Word parse_tree__parse_type_name__ArgTypeAndModes_20;
        MR_Word parse_tree__parse_type_name__ArgTMSpecs_21;
        MR_Word parse_tree__parse_type_name__RetContextPieces_22;
        MR_Word parse_tree__parse_type_name__MaybeRetTypeAndMode_23;
        MR_Word parse_tree__parse_type_name__V_41_41;
        MR_Word parse_tree__parse_type_name__V_51_51;

        {
          parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(parse_tree__parse_type_name__ContextPieces_8, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 3, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ArgTerms_17, (MR_Integer) 1, &parse_tree__parse_type_name__ArgTypeAndModes_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__ArgTMSpecs_21);
        }
        parse_tree__parse_type_name__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_type_name__V_41_41 = mercury__cord__from_list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_112_112, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[17]));
        }
        {
          parse_tree__parse_type_name__RetContextPieces_22 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_112_112, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__V_41_41);
        }
        {
          parse_tree__parse_type_name__parse_type_and_mode_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 4, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__RetContextPieces_22, parse_tree__parse_type_name__RetTerm_15, &parse_tree__parse_type_name__MaybeRetTypeAndMode_23);
        }
        {
          parse_tree__parse_type_name__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_51_51, 0) = ((MR_Box) (parse_tree__parse_type_name__MaybeRetTypeAndMode_23));
        }
        {
          parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__parse_type_name__Purity_11, parse_tree__parse_type_name__ArgTypeAndModes_20, parse_tree__parse_type_name__ArgTMSpecs_21, parse_tree__parse_type_name__V_51_51, parse_tree__parse_type_name__MaybeDetism_13, parse_tree__parse_type_name__MaybeType_12);
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_name__ArgTerms_106;
        MR_Word parse_tree__parse_type_name__V_52_52;
        MR_String parse_tree__parse_type_name__V_53_53;
        MR_Word parse_tree__parse_type_name__V_24_24;

        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__BeforeIsTerm_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeIsTerm_9, (MR_Integer) 0)));
            parse_tree__parse_type_name__ArgTerms_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeIsTerm_9, (MR_Integer) 1)));
            parse_tree__parse_type_name__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeIsTerm_9, (MR_Integer) 2)));
            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_52_52)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_52_52, (MR_Integer) 0)));
                parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_53_53, (MR_String) "pred") == 0);
              }
          }
        if (parse_tree__parse_type_name__succeeded)
          {
            MR_Word parse_tree__parse_type_name__ArgTypeAndModes_104;
            MR_Word parse_tree__parse_type_name__ArgTMSpecs_105;

            {
              parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_95_97_110_100_95_109_111_100_101_115_95_95_104_111_49_95_95_91_55_93_95_48_10_p_0(parse_tree__parse_type_name__ContextPieces_8, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 2, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ArgTerms_106, (MR_Integer) 1, &parse_tree__parse_type_name__ArgTypeAndModes_104, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__ArgTMSpecs_105);
            }
            {
              parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_104_111_95_116_121_112_101_95_97_110_100_95_105_110_115_116_95_50_95_95_91_49_44_32_50_93_95_48_8_p_0(parse_tree__parse_type_name__Purity_11, parse_tree__parse_type_name__ArgTypeAndModes_104, parse_tree__parse_type_name__ArgTMSpecs_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_name__MaybeDetism_13, parse_tree__parse_type_name__MaybeType_12);
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_name__TypeCtorInfo_115_115 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            MR_String parse_tree__parse_type_name__BeforeIsTermStr_25;
            MR_Word parse_tree__parse_type_name__HOPieces_26;
            MR_Word parse_tree__parse_type_name__HOSpec_27;
            MR_Word parse_tree__parse_type_name__V_63_63;
            MR_Word parse_tree__parse_type_name__V_66_66;
            MR_Word parse_tree__parse_type_name__V_68_68;
            MR_Word parse_tree__parse_type_name__V_71_71;
            MR_Word parse_tree__parse_type_name__V_73_73;
            MR_Word parse_tree__parse_type_name__V_76_76;
            MR_Word parse_tree__parse_type_name__V_79_79;
            MR_Word parse_tree__parse_type_name__V_81_81;
            MR_Word parse_tree__parse_type_name__V_84_84;
            MR_Word parse_tree__parse_type_name__V_85_85;
            MR_Word parse_tree__parse_type_name__V_94_94;
            MR_Word parse_tree__parse_type_name__V_95_95;
            MR_Word parse_tree__parse_type_name__V_96_96;
            MR_Word parse_tree__parse_type_name__V_97_97;
            MR_Word parse_tree__parse_type_name__V_98_98;
            MR_Word parse_tree__parse_type_name__V_101_101;

            {
              parse_tree__parse_type_name__BeforeIsTermStr_25 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_115_115, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__BeforeIsTerm_9);
            }
            {
              parse_tree__parse_type_name__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_85_85, 1) = ((MR_Box) (parse_tree__parse_type_name__BeforeIsTermStr_25));
            }
            {
              parse_tree__parse_type_name__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_84_84, 0) = ((MR_Box) (parse_tree__parse_type_name__V_85_85));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[46])));
            }
            {
              parse_tree__parse_type_name__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[63])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_81_81, 1) = ((MR_Box) (parse_tree__parse_type_name__V_84_84));
            }
            {
              parse_tree__parse_type_name__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 1) = ((MR_Box) (parse_tree__parse_type_name__V_81_81));
            }
            {
              parse_tree__parse_type_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[62])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_76_76, 1) = ((MR_Box) (parse_tree__parse_type_name__V_79_79));
            }
            {
              parse_tree__parse_type_name__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_73_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[61])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_73_73, 1) = ((MR_Box) (parse_tree__parse_type_name__V_76_76));
            }
            {
              parse_tree__parse_type_name__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_71_71, 1) = ((MR_Box) (parse_tree__parse_type_name__V_73_73));
            }
            {
              parse_tree__parse_type_name__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_68_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[60])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_68_68, 1) = ((MR_Box) (parse_tree__parse_type_name__V_71_71));
            }
            {
              parse_tree__parse_type_name__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_66_66, 1) = ((MR_Box) (parse_tree__parse_type_name__V_68_68));
            }
            {
              parse_tree__parse_type_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_63_63, 1) = ((MR_Box) (parse_tree__parse_type_name__V_66_66));
            }
            {
              parse_tree__parse_type_name__HOPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HOPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[58])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HOPieces_26, 1) = ((MR_Box) (parse_tree__parse_type_name__V_63_63));
            }
            {
              parse_tree__parse_type_name__V_96_96 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_115_115, parse_tree__parse_type_name__AfterIsTerm_10);
            }
            {
              parse_tree__parse_type_name__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_98_98, 0) = ((MR_Box) (parse_tree__parse_type_name__HOPieces_26));
            }
            {
              parse_tree__parse_type_name__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_97_97, 0) = ((MR_Box) (parse_tree__parse_type_name__V_98_98));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_name__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_95_95, 0) = ((MR_Box) (parse_tree__parse_type_name__V_96_96));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_95_95, 1) = ((MR_Box) (parse_tree__parse_type_name__V_97_97));
            }
            {
              parse_tree__parse_type_name__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_94_94, 0) = ((MR_Box) (parse_tree__parse_type_name__V_95_95));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_name__HOSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HOSpec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HOSpec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__HOSpec_27, 2) = ((MR_Box) (parse_tree__parse_type_name__V_94_94));
            }
            {
              parse_tree__parse_type_name__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_101_101, 0) = ((MR_Box) (parse_tree__parse_type_name__HOSpec_27));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_name__MaybeType_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_101_101));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_name__parse_compound_type_6_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_7,
  MR_Word parse_tree__parse_type_name__Term_8,
  MR_Word parse_tree__parse_type_name__VarSet_9,
  MR_Word parse_tree__parse_type_name__ContextPieces_10,
  MR_Word parse_tree__parse_type_name__CompoundTypeKind_11,
  MR_Word * parse_tree__parse_type_name__Result_12)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_type_name__CompoundTypeKind_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_type_name__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_name__ArgsResult_14;

          {
            parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[5]), parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__Args_13, &parse_tree__parse_type_name__ArgsResult_14);
          }
          if (((MR_tag((MR_Word) parse_tree__parse_type_name__ArgsResult_14)) == (MR_mktag((MR_Integer) 0))))
            *parse_tree__parse_type_name__Result_12 = (MR_Word) parse_tree__parse_type_name__ArgsResult_14;
          else
            {
              MR_Word parse_tree__parse_type_name__ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__ArgsResult_14, (MR_Integer) 0)));
              MR_Word parse_tree__parse_type_name__V_228_228;

              {
                parse_tree__parse_type_name__V_228_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_228_228, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_228_228, 1) = ((MR_Box) (parse_tree__parse_type_name__ArgTypes_15));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_228_228, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_228_228));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_type_name__BeforeEqTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_name__AfterEqTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 1)));
          MR_Word parse_tree__parse_type_name__FuncArgs_27;
          MR_Word parse_tree__parse_type_name__V_137_137;
          MR_String parse_tree__parse_type_name__V_138_138;
          MR_Word parse_tree__parse_type_name__V_28_28;

          parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__BeforeEqTerm_25)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__parse_type_name__succeeded)
            {
              parse_tree__parse_type_name__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeEqTerm_25, (MR_Integer) 0)));
              parse_tree__parse_type_name__FuncArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeEqTerm_25, (MR_Integer) 1)));
              parse_tree__parse_type_name__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeEqTerm_25, (MR_Integer) 2)));
              parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_137_137)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__parse_type_name__succeeded)
                {
                  parse_tree__parse_type_name__V_138_138 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_137_137, (MR_Integer) 0)));
                  parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_138_138, (MR_String) "func") == 0);
                }
            }
          if (parse_tree__parse_type_name__succeeded)
            {
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_355_355;
              MR_Word parse_tree__parse_type_name__ArgSpecs_29;
              MR_Word parse_tree__parse_type_name__RetContextPieces_30;
              MR_Word parse_tree__parse_type_name__MaybeRetType_31;
              MR_Word parse_tree__parse_type_name__V_144_144;
              MR_Word parse_tree__parse_type_name__ArgTypes_235;
              MR_Word parse_tree__parse_type_name__RetType_32;

              {
                parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(parse_tree__parse_type_name__ContextPieces_10, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[2]), parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__FuncArgs_27, (MR_Integer) 1, &parse_tree__parse_type_name__ArgTypes_235, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__ArgSpecs_29);
              }
              parse_tree__parse_type_name__TypeCtorInfo_355_355 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_type_name__V_144_144 = mercury__cord__from_list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_355_355, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[17]));
              }
              {
                parse_tree__parse_type_name__RetContextPieces_30 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_355_355, parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__V_144_144);
              }
              {
                parse_tree__parse_type_name__parse_type_no_mode_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[3]), parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__RetContextPieces_30, parse_tree__parse_type_name__AfterEqTerm_26, &parse_tree__parse_type_name__MaybeRetType_31);
              }
              parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__ArgSpecs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (parse_tree__parse_type_name__succeeded)
                {
                  parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeRetType_31)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_type_name__succeeded)
                    parse_tree__parse_type_name__RetType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeRetType_31, (MR_Integer) 0)));
                }
              if (parse_tree__parse_type_name__succeeded)
                {
                  MR_Word parse_tree__parse_type_name__FuncType_33;

                  mercury__private_builtin__dummy_var = (MR_Integer) 0;
                  {
                    parse_tree__prog_type__construct_higher_order_func_type_5_p_0((MR_Integer) 0, parse_tree__parse_type_name__ArgTypes_235, parse_tree__parse_type_name__RetType_32, &parse_tree__parse_type_name__FuncType_33);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__parse_type_name__Result_12 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__FuncType_33));
                  }
                }
              else
                {
                  MR_Word parse_tree__parse_type_name__V_155_155;
                  MR_Word parse_tree__parse_type_name__Specs_233;

                  {
                    parse_tree__parse_type_name__V_155_155 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_name__MaybeRetType_31);
                  }
                  {
                    parse_tree__parse_type_name__Specs_233 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__ArgSpecs_29, parse_tree__parse_type_name__V_155_155);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_type_name__Result_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_233));
                  }
                }
            }
          else
            {
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_358_358 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              MR_Word parse_tree__parse_type_name__V_156_156;
              MR_Word parse_tree__parse_type_name__V_185_185;
              MR_Word parse_tree__parse_type_name__V_186_186;
              MR_Word parse_tree__parse_type_name__V_187_187;
              MR_Word parse_tree__parse_type_name__V_188_188;
              MR_Word parse_tree__parse_type_name__V_189_189;
              MR_Word parse_tree__parse_type_name__V_192_192;
              MR_Word parse_tree__parse_type_name__Pieces_238;
              MR_Word parse_tree__parse_type_name__Spec_239;

              {
                parse_tree__parse_type_name__V_156_156 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_358_358, parse_tree__parse_type_name__ContextPieces_10);
              }
              {
                parse_tree__parse_type_name__Pieces_238 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_358_358, parse_tree__parse_type_name__V_156_156, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[30]));
              }
              {
                parse_tree__parse_type_name__V_187_187 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__BeforeEqTerm_25);
              }
              {
                parse_tree__parse_type_name__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_189_189, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_238));
              }
              {
                parse_tree__parse_type_name__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_188_188, 0) = ((MR_Box) (parse_tree__parse_type_name__V_189_189));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_188_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_186_186, 0) = ((MR_Box) (parse_tree__parse_type_name__V_187_187));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_186_186, 1) = ((MR_Box) (parse_tree__parse_type_name__V_188_188));
              }
              {
                parse_tree__parse_type_name__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_185_185, 0) = ((MR_Box) (parse_tree__parse_type_name__V_186_186));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_185_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__Spec_239 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_239, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_239, 2) = ((MR_Box) (parse_tree__parse_type_name__V_185_185));
              }
              {
                parse_tree__parse_type_name__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_192_192, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_239));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_192_192));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_type_name__Args_230 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_name__ArgTypes_231;
          MR_Word parse_tree__parse_type_name__Specs_232;

          {
            parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(parse_tree__parse_type_name__ContextPieces_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[4]), parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Args_230, (MR_Integer) 1, &parse_tree__parse_type_name__ArgTypes_231, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__Specs_232);
          }
          if ((parse_tree__parse_type_name__Specs_232 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word parse_tree__parse_type_name__PredType_22;

              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              {
                parse_tree__prog_type__construct_higher_order_pred_type_4_p_0((MR_Integer) 0, parse_tree__parse_type_name__ArgTypes_231, &parse_tree__parse_type_name__PredType_22);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__PredType_22));
              }
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_name__Result_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_232));
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_type_name__BeforeIsTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 1)));
              MR_Word parse_tree__parse_type_name__AfterIsTerm_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 2)));
              MR_Word parse_tree__parse_type_name__MaybeType_36;

              {
                parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__BeforeIsTerm_34, parse_tree__parse_type_name__AfterIsTerm_35, (MR_Integer) 0, &parse_tree__parse_type_name__MaybeType_36);
              }
              if (((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeType_36)) == (MR_mktag((MR_Integer) 0))))
                *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__MaybeType_36;
              else
              if ((parse_tree__parse_type_name__AllowHOInstInfo_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__MaybeType_36;
              else
                {
                  MR_Word parse_tree__parse_type_name__Why_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__AllowHOInstInfo_7, (MR_Integer) 0)));

                  {
                    *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__Why_38, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String parse_tree__parse_type_name__PurityName_39 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 1)));
              MR_Word parse_tree__parse_type_name__Purity_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 2)));
              MR_Word parse_tree__parse_type_name__SubTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__CompoundTypeKind_11, (MR_Integer) 3)));
              MR_Word parse_tree__parse_type_name__AfterEqTerm_320;
              MR_Word parse_tree__parse_type_name__FuncArgs_321;
              MR_String parse_tree__parse_type_name__Name_42;
              MR_Word parse_tree__parse_type_name__V_53_53;
              MR_Word parse_tree__parse_type_name__V_54_54;
              MR_Word parse_tree__parse_type_name__V_55_55;
              MR_Word parse_tree__parse_type_name__V_56_56;
              MR_String parse_tree__parse_type_name__V_57_57;
              MR_Word parse_tree__parse_type_name__Args_253;
              MR_Word parse_tree__parse_type_name__BeforeEqTerm_254;
              MR_Word parse_tree__parse_type_name__V_43_43;
              MR_Word parse_tree__parse_type_name__V_44_44;

              parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__SubTerm_41)) == (MR_mktag((MR_Integer) 0)));
              if (parse_tree__parse_type_name__succeeded)
                {
                  parse_tree__parse_type_name__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 0)));
                  parse_tree__parse_type_name__Args_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 1)));
                  parse_tree__parse_type_name__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 2)));
                  parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_53_53)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__parse_type_name__succeeded)
                    {
                      parse_tree__parse_type_name__Name_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_53_53, (MR_Integer) 0)));
                      parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__Name_42, (MR_String) "=") == 0);
                      if (parse_tree__parse_type_name__succeeded)
                        {
                          parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Args_253)) == (MR_mktag((MR_Integer) 1)));
                          if (parse_tree__parse_type_name__succeeded)
                            {
                              parse_tree__parse_type_name__BeforeEqTerm_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_253, (MR_Integer) 0)));
                              parse_tree__parse_type_name__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_253, (MR_Integer) 1)));
                              parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_54_54)) == (MR_mktag((MR_Integer) 1)));
                              if (parse_tree__parse_type_name__succeeded)
                                {
                                  parse_tree__parse_type_name__AfterEqTerm_320 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_54_54, (MR_Integer) 0)));
                                  parse_tree__parse_type_name__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_54_54, (MR_Integer) 1)));
                                  parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (parse_tree__parse_type_name__succeeded)
                                    {
                                      parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__BeforeEqTerm_254)) == (MR_mktag((MR_Integer) 0)));
                                      if (parse_tree__parse_type_name__succeeded)
                                        {
                                          parse_tree__parse_type_name__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeEqTerm_254, (MR_Integer) 0)));
                                          parse_tree__parse_type_name__FuncArgs_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeEqTerm_254, (MR_Integer) 1)));
                                          parse_tree__parse_type_name__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__BeforeEqTerm_254, (MR_Integer) 2)));
                                          parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_56_56)) == (MR_mktag((MR_Integer) 0)));
                                          if (parse_tree__parse_type_name__succeeded)
                                            {
                                              parse_tree__parse_type_name__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_56_56, (MR_Integer) 0)));
                                              parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_57_57, (MR_String) "func") == 0);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (parse_tree__parse_type_name__succeeded)
                {
                  MR_Word parse_tree__parse_type_name__TypeCtorInfo_362_362;
                  MR_Word parse_tree__parse_type_name__V_63_63;
                  MR_Word parse_tree__parse_type_name__ArgTypes_260;
                  MR_Word parse_tree__parse_type_name__ArgSpecs_263;
                  MR_Word parse_tree__parse_type_name__RetContextPieces_264;
                  MR_Word parse_tree__parse_type_name__MaybeRetType_265;
                  MR_Word parse_tree__parse_type_name__RetType_258;

                  {
                    parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(parse_tree__parse_type_name__ContextPieces_10, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[2]), parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__FuncArgs_321, (MR_Integer) 1, &parse_tree__parse_type_name__ArgTypes_260, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__ArgSpecs_263);
                  }
                  parse_tree__parse_type_name__TypeCtorInfo_362_362 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                  {
                    parse_tree__parse_type_name__V_63_63 = mercury__cord__from_list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_362_362, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[17]));
                  }
                  {
                    parse_tree__parse_type_name__RetContextPieces_264 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_362_362, parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__V_63_63);
                  }
                  {
                    parse_tree__parse_type_name__parse_type_no_mode_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[3]), parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__RetContextPieces_264, parse_tree__parse_type_name__AfterEqTerm_320, &parse_tree__parse_type_name__MaybeRetType_265);
                  }
                  parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__ArgSpecs_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (parse_tree__parse_type_name__succeeded)
                    {
                      parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeRetType_265)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_type_name__succeeded)
                        parse_tree__parse_type_name__RetType_258 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeRetType_265, (MR_Integer) 0)));
                    }
                  if (parse_tree__parse_type_name__succeeded)
                    {
                      MR_Word parse_tree__parse_type_name__Type_255;

                      mercury__private_builtin__dummy_var = (MR_Integer) 0;
                      {
                        parse_tree__prog_type__construct_higher_order_func_type_5_p_0(parse_tree__parse_type_name__Purity_40, parse_tree__parse_type_name__ArgTypes_260, parse_tree__parse_type_name__RetType_258, &parse_tree__parse_type_name__Type_255);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_type_name__Result_12 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_255));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__V_73_73;
                      MR_Word parse_tree__parse_type_name__Specs_256;

                      {
                        parse_tree__parse_type_name__V_73_73 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_name__MaybeRetType_265);
                      }
                      {
                        parse_tree__parse_type_name__Specs_256 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__ArgSpecs_263, parse_tree__parse_type_name__V_73_73);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_type_name__Result_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_256));
                      }
                    }
                }
              else
                {
                  MR_Word parse_tree__parse_type_name__Args_301;
                  MR_Word parse_tree__parse_type_name__V_74_74;
                  MR_String parse_tree__parse_type_name__Name_268;
                  MR_Word parse_tree__parse_type_name__V_45_45;

                  parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__SubTerm_41)) == (MR_mktag((MR_Integer) 0)));
                  if (parse_tree__parse_type_name__succeeded)
                    {
                      parse_tree__parse_type_name__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 0)));
                      parse_tree__parse_type_name__Args_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 1)));
                      parse_tree__parse_type_name__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 2)));
                      parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_74_74)) == (MR_mktag((MR_Integer) 0)));
                      if (parse_tree__parse_type_name__succeeded)
                        {
                          parse_tree__parse_type_name__Name_268 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_74_74, (MR_Integer) 0)));
                          parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__Name_268, (MR_String) "pred") == 0);
                        }
                    }
                  if (parse_tree__parse_type_name__succeeded)
                    {
                      MR_Word parse_tree__parse_type_name__ArgTypes_271;
                      MR_Word parse_tree__parse_type_name__Specs_272;

                      {
                        parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_116_121_112_101_115_95_110_111_95_109_111_100_101_115_95_95_104_111_50_95_95_91_53_93_95_48_8_p_0(parse_tree__parse_type_name__ContextPieces_10, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[4]), parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Args_301, (MR_Integer) 1, &parse_tree__parse_type_name__ArgTypes_271, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__Specs_272);
                      }
                      if ((parse_tree__parse_type_name__Specs_272 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word parse_tree__parse_type_name__Type_269;

                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                          {
                            parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(parse_tree__parse_type_name__Purity_40, parse_tree__parse_type_name__ArgTypes_271, &parse_tree__parse_type_name__Type_269);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__Result_12 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_269));
                          }
                        }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *parse_tree__parse_type_name__Result_12 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_272));
                        }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__BeforeIsTerm_295;
                      MR_Word parse_tree__parse_type_name__AfterIsTerm_296;
                      MR_Word parse_tree__parse_type_name__V_81_81;
                      MR_Word parse_tree__parse_type_name__V_82_82;
                      MR_Word parse_tree__parse_type_name__V_83_83;
                      MR_Word parse_tree__parse_type_name__Args_275;
                      MR_String parse_tree__parse_type_name__Name_276;
                      MR_Word parse_tree__parse_type_name__V_48_48;

                      parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__SubTerm_41)) == (MR_mktag((MR_Integer) 0)));
                      if (parse_tree__parse_type_name__succeeded)
                        {
                          parse_tree__parse_type_name__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 0)));
                          parse_tree__parse_type_name__Args_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 1)));
                          parse_tree__parse_type_name__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__SubTerm_41, (MR_Integer) 2)));
                          parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_81_81)) == (MR_mktag((MR_Integer) 0)));
                          if (parse_tree__parse_type_name__succeeded)
                            {
                              parse_tree__parse_type_name__Name_276 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_81_81, (MR_Integer) 0)));
                              parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__Name_276, (MR_String) "is") == 0);
                              if (parse_tree__parse_type_name__succeeded)
                                {
                                  parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Args_275)) == (MR_mktag((MR_Integer) 1)));
                                  if (parse_tree__parse_type_name__succeeded)
                                    {
                                      parse_tree__parse_type_name__BeforeIsTerm_295 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_275, (MR_Integer) 0)));
                                      parse_tree__parse_type_name__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Args_275, (MR_Integer) 1)));
                                      parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_82_82)) == (MR_mktag((MR_Integer) 1)));
                                      if (parse_tree__parse_type_name__succeeded)
                                        {
                                          parse_tree__parse_type_name__AfterIsTerm_296 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_82_82, (MR_Integer) 0)));
                                          parse_tree__parse_type_name__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_82_82, (MR_Integer) 1)));
                                          parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        }
                                    }
                                }
                            }
                        }
                      if (parse_tree__parse_type_name__succeeded)
                        {
                          MR_Word parse_tree__parse_type_name__MaybeType_286;

                          {
                            parse_tree__parse_type_name__parse_ho_type_and_inst_6_p_0(parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__BeforeIsTerm_295, parse_tree__parse_type_name__AfterIsTerm_296, parse_tree__parse_type_name__Purity_40, &parse_tree__parse_type_name__MaybeType_286);
                          }
                          if (((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeType_286)) == (MR_mktag((MR_Integer) 0))))
                            *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__MaybeType_286;
                          else
                          if ((parse_tree__parse_type_name__AllowHOInstInfo_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__MaybeType_286;
                          else
                            {
                              MR_Word parse_tree__parse_type_name__Why_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__AllowHOInstInfo_7, (MR_Integer) 0)));

                              {
                                *parse_tree__parse_type_name__Result_12 = parse_tree__parse_type_name__no_ho_inst_allowed_result_4_f_0(parse_tree__parse_type_name__ContextPieces_10, parse_tree__parse_type_name__Why_278, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
                              }
                            }
                        }
                      else
                        {
                          MR_Word parse_tree__parse_type_name__TypeCtorInfo_368_368;
                          MR_Word parse_tree__parse_type_name__AlwaysPieces_49 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[35]);
                          MR_Word parse_tree__parse_type_name__FormPieces_51;
                          MR_Word parse_tree__parse_type_name__V_102_102;
                          MR_Word parse_tree__parse_type_name__V_103_103;
                          MR_Word parse_tree__parse_type_name__V_104_104;
                          MR_Word parse_tree__parse_type_name__V_106_106;
                          MR_Word parse_tree__parse_type_name__V_109_109;
                          MR_Word parse_tree__parse_type_name__V_110_110;
                          MR_Word parse_tree__parse_type_name__V_118_118;
                          MR_Word parse_tree__parse_type_name__V_127_127;
                          MR_Word parse_tree__parse_type_name__V_128_128;
                          MR_Word parse_tree__parse_type_name__V_129_129;
                          MR_Word parse_tree__parse_type_name__V_130_130;
                          MR_Word parse_tree__parse_type_name__V_131_131;
                          MR_Word parse_tree__parse_type_name__V_134_134;
                          MR_Word parse_tree__parse_type_name__Pieces_289;
                          MR_Word parse_tree__parse_type_name__Spec_290;

                          if ((parse_tree__parse_type_name__AllowHOInstInfo_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              {
                                parse_tree__parse_type_name__FormPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__parse_type_name__AlwaysPieces_49, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[56]));
                              }
                            }
                          else
                            parse_tree__parse_type_name__FormPieces_51 = parse_tree__parse_type_name__AlwaysPieces_49;
                          parse_tree__parse_type_name__TypeCtorInfo_368_368 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                          {
                            parse_tree__parse_type_name__V_102_102 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_368_368, parse_tree__parse_type_name__ContextPieces_10);
                          }
                          {
                            parse_tree__parse_type_name__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_110_110, 1) = ((MR_Box) (parse_tree__parse_type_name__PurityName_39));
                          }
                          {
                            parse_tree__parse_type_name__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_109_109, 0) = ((MR_Box) (parse_tree__parse_type_name__V_110_110));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[44])));
                          }
                          {
                            parse_tree__parse_type_name__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[57])));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_106_106, 1) = ((MR_Box) (parse_tree__parse_type_name__V_109_109));
                          }
                          {
                            parse_tree__parse_type_name__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_104_104, 1) = ((MR_Box) (parse_tree__parse_type_name__V_106_106));
                          }
                          {
                            parse_tree__parse_type_name__V_118_118 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_368_368, parse_tree__parse_type_name__FormPieces_51, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4]));
                          }
                          {
                            parse_tree__parse_type_name__V_103_103 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_368_368, parse_tree__parse_type_name__V_104_104, parse_tree__parse_type_name__V_118_118);
                          }
                          {
                            parse_tree__parse_type_name__Pieces_289 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_368_368, parse_tree__parse_type_name__V_102_102, parse_tree__parse_type_name__V_103_103);
                          }
                          {
                            parse_tree__parse_type_name__V_129_129 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__SubTerm_41);
                          }
                          {
                            parse_tree__parse_type_name__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_131_131, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_289));
                          }
                          {
                            parse_tree__parse_type_name__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_130_130, 0) = ((MR_Box) (parse_tree__parse_type_name__V_131_131));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            parse_tree__parse_type_name__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_128_128, 0) = ((MR_Box) (parse_tree__parse_type_name__V_129_129));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_128_128, 1) = ((MR_Box) (parse_tree__parse_type_name__V_130_130));
                          }
                          {
                            parse_tree__parse_type_name__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_127_127, 0) = ((MR_Box) (parse_tree__parse_type_name__V_128_128));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            parse_tree__parse_type_name__Spec_290 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_290, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_290, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_290, 2) = ((MR_Box) (parse_tree__parse_type_name__V_127_127));
                          }
                          {
                            parse_tree__parse_type_name__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_134_134, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_290));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            *parse_tree__parse_type_name__Result_12 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_134_134));
                          }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_349_349 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_350_350;
              MR_String parse_tree__parse_type_name__TermStr_18;
              MR_Word parse_tree__parse_type_name__Pieces_19;
              MR_Word parse_tree__parse_type_name__Spec_20;
              MR_Word parse_tree__parse_type_name__V_201_201;
              MR_Word parse_tree__parse_type_name__V_202_202;
              MR_Word parse_tree__parse_type_name__V_204_204;
              MR_Word parse_tree__parse_type_name__V_207_207;
              MR_Word parse_tree__parse_type_name__V_208_208;
              MR_Word parse_tree__parse_type_name__V_217_217;
              MR_Word parse_tree__parse_type_name__V_218_218;
              MR_Word parse_tree__parse_type_name__V_219_219;
              MR_Word parse_tree__parse_type_name__V_220_220;
              MR_Word parse_tree__parse_type_name__V_221_221;
              MR_Word parse_tree__parse_type_name__V_224_224;

              {
                parse_tree__parse_type_name__TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_349_349, parse_tree__parse_type_name__VarSet_9, parse_tree__parse_type_name__Term_8);
              }
              parse_tree__parse_type_name__TypeCtorInfo_350_350 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_type_name__V_201_201 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_350_350, parse_tree__parse_type_name__ContextPieces_10);
              }
              {
                parse_tree__parse_type_name__V_208_208 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_208_208, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_208_208, 1) = ((MR_Box) (parse_tree__parse_type_name__TermStr_18));
              }
              {
                parse_tree__parse_type_name__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_207_207, 0) = ((MR_Box) (parse_tree__parse_type_name__V_208_208));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])));
              }
              {
                parse_tree__parse_type_name__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_204_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[55])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_204_204, 1) = ((MR_Box) (parse_tree__parse_type_name__V_207_207));
              }
              {
                parse_tree__parse_type_name__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_202_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_202_202, 1) = ((MR_Box) (parse_tree__parse_type_name__V_204_204));
              }
              {
                parse_tree__parse_type_name__Pieces_19 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_350_350, parse_tree__parse_type_name__V_201_201, parse_tree__parse_type_name__V_202_202);
              }
              {
                parse_tree__parse_type_name__V_219_219 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_349_349, parse_tree__parse_type_name__Term_8);
              }
              {
                parse_tree__parse_type_name__V_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_221_221, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_19));
              }
              {
                parse_tree__parse_type_name__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_220_220, 0) = ((MR_Box) (parse_tree__parse_type_name__V_221_221));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_220_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_218_218, 0) = ((MR_Box) (parse_tree__parse_type_name__V_219_219));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_218_218, 1) = ((MR_Box) (parse_tree__parse_type_name__V_220_220));
              }
              {
                parse_tree__parse_type_name__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_217_217, 0) = ((MR_Box) (parse_tree__parse_type_name__V_218_218));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_217_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_20, 2) = ((MR_Box) (parse_tree__parse_type_name__V_217_217));
              }
              {
                parse_tree__parse_type_name__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_224_224, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_20));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_224_224, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_name__Result_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_224_224));
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_name__arg_context_pieces_3_f_0(
  MR_Word parse_tree__parse_type_name__ContextPieces_5,
  MR_Word parse_tree__parse_type_name__PorF_6,
  MR_Integer parse_tree__parse_type_name__ArgNum_7)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__HeadVar__4_4;
    MR_Word parse_tree__parse_type_name__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_type_name__V_8_8;
    MR_Word parse_tree__parse_type_name__V_9_9;
    MR_Word parse_tree__parse_type_name__V_11_11;
    MR_Word parse_tree__parse_type_name__V_14_14;
    MR_Word parse_tree__parse_type_name__V_15_15;
    MR_Word parse_tree__parse_type_name__V_16_16;
    MR_Word parse_tree__parse_type_name__V_19_19;
    MR_Word parse_tree__parse_type_name__V_20_20;

    {
      parse_tree__parse_type_name__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_15_15, 1) = ((MR_Box) (parse_tree__parse_type_name__ArgNum_7));
    }
    {
      parse_tree__parse_type_name__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_20_20, 1) = ((MR_Box) (parse_tree__parse_type_name__PorF_6));
    }
    {
      parse_tree__parse_type_name__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_19_19, 0) = ((MR_Box) (parse_tree__parse_type_name__V_20_20));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[15])));
    }
    {
      parse_tree__parse_type_name__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_16_16, 1) = ((MR_Box) (parse_tree__parse_type_name__V_19_19));
    }
    {
      parse_tree__parse_type_name__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_14_14, 0) = ((MR_Box) (parse_tree__parse_type_name__V_15_15));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_14_14, 1) = ((MR_Box) (parse_tree__parse_type_name__V_16_16));
    }
    {
      parse_tree__parse_type_name__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_11_11, 1) = ((MR_Box) (parse_tree__parse_type_name__V_14_14));
    }
    {
      parse_tree__parse_type_name__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_9_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_9_9, 1) = ((MR_Box) (parse_tree__parse_type_name__V_11_11));
    }
    {
      parse_tree__parse_type_name__V_8_8 = mercury__cord__from_list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_27_27, parse_tree__parse_type_name__V_9_9);
    }
    {
      parse_tree__parse_type_name__HeadVar__4_4 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_27_27, parse_tree__parse_type_name__ContextPieces_5, parse_tree__parse_type_name__V_8_8);
    }
    return parse_tree__parse_type_name__HeadVar__4_4;
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__is_known_type_name_1_p_0(
  MR_String parse_tree__parse_type_name__Name_2)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    {
      MR_Word parse_tree__parse_type_name__V_3_3;

      {
        parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_type_name__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__V_3_3);
      }
    }
    if (!(parse_tree__parse_type_name__succeeded))
      parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__Name_2, (MR_String) "func") == 0);
    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_and_mode_7_p_0(
  MR_Word parse_tree__parse_type_name__MaybeInstConstraints_8,
  MR_Word parse_tree__parse_type_name__MaybeRequireMode_9,
  MR_Word parse_tree__parse_type_name__Why_10,
  MR_Word parse_tree__parse_type_name__VarSet_11,
  MR_Word parse_tree__parse_type_name__ContextPieces_12,
  MR_Word parse_tree__parse_type_name__Term_13,
  MR_Word * parse_tree__parse_type_name__MaybeTypeAndMode_14)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__Term_13)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_name__TypeTerm_15;
    MR_Word parse_tree__parse_type_name__ModeTerm_16;
    MR_Word parse_tree__parse_type_name__V_31_31;
    MR_String parse_tree__parse_type_name__V_32_32;
    MR_Word parse_tree__parse_type_name__V_33_33;
    MR_Word parse_tree__parse_type_name__V_34_34;
    MR_Word parse_tree__parse_type_name__V_35_35;
    MR_Word parse_tree__parse_type_name___Context_17;

    if (parse_tree__parse_type_name__succeeded)
      {
        parse_tree__parse_type_name__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_13, (MR_Integer) 0)));
        parse_tree__parse_type_name__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_13, (MR_Integer) 1)));
        parse_tree__parse_type_name___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_13, (MR_Integer) 2)));
        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_31_31)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_31_31, (MR_Integer) 0)));
            parse_tree__parse_type_name__succeeded = (strcmp(parse_tree__parse_type_name__V_32_32, (MR_String) "::") == 0);
            if (parse_tree__parse_type_name__succeeded)
              {
                parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_33_33)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_name__succeeded)
                  {
                    parse_tree__parse_type_name__TypeTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_33_33, (MR_Integer) 0)));
                    parse_tree__parse_type_name__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_33_33, (MR_Integer) 1)));
                    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_name__succeeded)
                      {
                        parse_tree__parse_type_name__ModeTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_34_34, (MR_Integer) 0)));
                        parse_tree__parse_type_name__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_34_34, (MR_Integer) 1)));
                        parse_tree__parse_type_name__succeeded = (parse_tree__parse_type_name__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_name__succeeded)
      {
        MR_Word parse_tree__parse_type_name__MaybeType_18;
        MR_Word parse_tree__parse_type_name__MaybeMode_23;
        MR_Word parse_tree__parse_type_name__V_36_36;
        MR_Word parse_tree__parse_type_name__Type_25;
        MR_Word parse_tree__parse_type_name__Mode_26;

        {
          parse_tree__parse_type_name__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_36_36, 0) = ((MR_Box) (parse_tree__parse_type_name__Why_10));
        }
        {
          parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__V_36_36, parse_tree__parse_type_name__VarSet_11, parse_tree__parse_type_name__ContextPieces_12, parse_tree__parse_type_name__TypeTerm_15, &parse_tree__parse_type_name__MaybeType_18);
        }
        if ((parse_tree__parse_type_name__MaybeInstConstraints_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[1]), parse_tree__parse_type_name__VarSet_11, parse_tree__parse_type_name__ContextPieces_12, parse_tree__parse_type_name__ModeTerm_16, &parse_tree__parse_type_name__MaybeMode_23);
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_name__InstConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeInstConstraints_8, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_name__MaybeMode0_20;

            {
              parse_tree__parse_inst_mode_name__parse_mode_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_name__VarSet_11, parse_tree__parse_type_name__ContextPieces_12, parse_tree__parse_type_name__ModeTerm_16, &parse_tree__parse_type_name__MaybeMode0_20);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeMode0_20)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_name__MaybeMode_23 = parse_tree__parse_type_name__MaybeMode0_20;
            else
              {
                MR_Word parse_tree__parse_type_name__Mode0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeMode0_20, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_name__Mode1_22;

                {
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__parse_type_name__InstConstraints_19, parse_tree__parse_type_name__Mode0_21, &parse_tree__parse_type_name__Mode1_22);
                }
                {
                  parse_tree__parse_type_name__MaybeMode_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeMode_23, 0) = ((MR_Box) (parse_tree__parse_type_name__Mode1_22));
                }
              }
          }
        parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeType_18)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_name__succeeded)
          {
            parse_tree__parse_type_name__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeType_18, (MR_Integer) 0)));
            parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeMode_23)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_name__succeeded)
              parse_tree__parse_type_name__Mode_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeMode_23, (MR_Integer) 0)));
          }
        if (parse_tree__parse_type_name__succeeded)
          {
            MR_Word parse_tree__parse_type_name__V_40_40;

            {
              parse_tree__parse_type_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_25));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_40_40, 1) = ((MR_Box) (parse_tree__parse_type_name__Mode_26));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_type_name__MaybeTypeAndMode_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_40_40));
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_name__Specs_27;
            MR_Word parse_tree__parse_type_name__V_41_41;
            MR_Word parse_tree__parse_type_name__V_42_42;

            {
              parse_tree__parse_type_name__V_41_41 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_name__MaybeType_18);
            }
            {
              parse_tree__parse_type_name__V_42_42 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__parse_type_name__MaybeMode_23);
            }
            {
              parse_tree__parse_type_name__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__V_41_41, parse_tree__parse_type_name__V_42_42);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_name__MaybeTypeAndMode_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_27));
            }
          }
      }
    else
      switch (parse_tree__parse_type_name__MaybeRequireMode_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_type_name__V_43_43;
            MR_Word parse_tree__parse_type_name__MaybeType_75;

            {
              parse_tree__parse_type_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_name__Why_10));
            }
            {
              parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__V_43_43, parse_tree__parse_type_name__VarSet_11, parse_tree__parse_type_name__ContextPieces_12, parse_tree__parse_type_name__Term_13, &parse_tree__parse_type_name__MaybeType_75);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeType_75)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__parse_type_name__MaybeTypeAndMode_14 = (MR_Word) parse_tree__parse_type_name__MaybeType_75;
            else
              {
                MR_Word parse_tree__parse_type_name__V_44_44;
                MR_Word parse_tree__parse_type_name__Type_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeType_75, (MR_Integer) 0)));

                {
                  parse_tree__parse_type_name__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_44_44, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_71));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_name__MaybeTypeAndMode_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_44_44));
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_type_name__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word parse_tree__parse_type_name__Pieces_29;
            MR_Word parse_tree__parse_type_name__Spec_30;
            MR_Word parse_tree__parse_type_name__V_58_58;
            MR_Word parse_tree__parse_type_name__V_59_59;
            MR_Word parse_tree__parse_type_name__V_62_62;
            MR_Word parse_tree__parse_type_name__V_63_63;
            MR_Word parse_tree__parse_type_name__V_64_64;
            MR_Word parse_tree__parse_type_name__V_65_65;
            MR_Word parse_tree__parse_type_name__V_66_66;
            MR_Word parse_tree__parse_type_name__V_69_69;

            {
              parse_tree__parse_type_name__V_59_59 = mercury__cord__from_list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_84_84, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[13]));
            }
            {
              parse_tree__parse_type_name__V_58_58 = mercury__cord__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_84_84, parse_tree__parse_type_name__ContextPieces_12, parse_tree__parse_type_name__V_59_59);
            }
            {
              parse_tree__parse_type_name__Pieces_29 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_84_84, parse_tree__parse_type_name__V_58_58);
            }
            {
              parse_tree__parse_type_name__V_64_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__Term_13);
            }
            {
              parse_tree__parse_type_name__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_66_66, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_29));
            }
            {
              parse_tree__parse_type_name__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_65_65, 0) = ((MR_Box) (parse_tree__parse_type_name__V_66_66));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_name__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_63_63, 0) = ((MR_Box) (parse_tree__parse_type_name__V_64_64));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_63_63, 1) = ((MR_Box) (parse_tree__parse_type_name__V_65_65));
            }
            {
              parse_tree__parse_type_name__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_62_62, 0) = ((MR_Box) (parse_tree__parse_type_name__V_63_63));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_name__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_30, 2) = ((MR_Box) (parse_tree__parse_type_name__V_62_62));
            }
            {
              parse_tree__parse_type_name__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_69_69, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_30));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_name__MaybeTypeAndMode_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_69_69));
            }
          }
          break;
      }
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_and_modes_10_p_0(
  MR_Word parse_tree__parse_type_name__MaybeInstConstraints_1,
  MR_Word parse_tree__parse_type_name__MaybeRequireMode_2,
  MR_Word parse_tree__parse_type_name__Why_3,
  MR_Word parse_tree__parse_type_name__VarSet_4,
  MR_Word parse_tree__parse_type_name__ArgContextFunc_5,
  MR_Word parse_tree__parse_type_name__HeadVar__6_6,
  MR_Integer parse_tree__parse_type_name__ArgNum_7,
  MR_Word * parse_tree__parse_type_name__HeadVar__8_8,
  MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__parse_type_name__STATE_VARIABLE_Specs_10)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    if ((parse_tree__parse_type_name__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_name__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_name__STATE_VARIABLE_Specs_10 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_9;
      }
    else
      {
        MR_Word parse_tree__parse_type_name__Term_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__Terms_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_name__TypesAndModesTail_30;
        MR_Word parse_tree__parse_type_name__MaybeTypeAndMode_31;
        MR_Integer parse_tree__parse_type_name__V_36_36 = (parse_tree__parse_type_name__ArgNum_7 + (MR_Integer) 1);
        MR_Word parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37;
        MR_Word parse_tree__parse_type_name__V_39_39;
        MR_Box MR_CALL (* parse_tree__parse_type_name__func_0)(MR_Box, MR_Box);
        MR_Box parse_tree__parse_type_name__conv1_V_39_39;

        {
          parse_tree__parse_type_name__parse_type_and_modes_10_p_0(parse_tree__parse_type_name__MaybeInstConstraints_1, parse_tree__parse_type_name__MaybeRequireMode_2, parse_tree__parse_type_name__Why_3, parse_tree__parse_type_name__VarSet_4, parse_tree__parse_type_name__ArgContextFunc_5, parse_tree__parse_type_name__Terms_26, parse_tree__parse_type_name__V_36_36, &parse_tree__parse_type_name__TypesAndModesTail_30, parse_tree__parse_type_name__STATE_VARIABLE_Specs_0_9, &parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37);
        }
        parse_tree__parse_type_name__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__ArgContextFunc_5, (MR_Integer) 1)));
        {
          parse_tree__parse_type_name__conv1_V_39_39 = parse_tree__parse_type_name__func_0(((MR_Box) parse_tree__parse_type_name__ArgContextFunc_5), ((MR_Box) (parse_tree__parse_type_name__ArgNum_7)));
        }
        parse_tree__parse_type_name__V_39_39 = ((MR_Word) parse_tree__parse_type_name__conv1_V_39_39);
        {
          parse_tree__parse_type_name__parse_type_and_mode_7_p_0(parse_tree__parse_type_name__MaybeInstConstraints_1, parse_tree__parse_type_name__MaybeRequireMode_2, parse_tree__parse_type_name__Why_3, parse_tree__parse_type_name__VarSet_4, parse_tree__parse_type_name__V_39_39, parse_tree__parse_type_name__Term_25, &parse_tree__parse_type_name__MaybeTypeAndMode_31);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_type_name__MaybeTypeAndMode_31)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_type_name__TMSpecs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__MaybeTypeAndMode_31, (MR_Integer) 0)));

            *parse_tree__parse_type_name__HeadVar__8_8 = parse_tree__parse_type_name__TypesAndModesTail_30;
            {
              *parse_tree__parse_type_name__STATE_VARIABLE_Specs_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_name__TMSpecs_33, parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37);
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_name__TypeAndMode_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__MaybeTypeAndMode_31, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_type_name__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__TypeAndMode_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_type_name__TypesAndModesTail_30));
            }
            *parse_tree__parse_type_name__STATE_VARIABLE_Specs_10 = parse_tree__parse_type_name__STATE_VARIABLE_Specs_37_37;
          }
      }
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_types_5_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_6,
  MR_Word parse_tree__parse_type_name__VarSet_7,
  MR_Word parse_tree__parse_type_name__ContextPieces_8,
  MR_Word parse_tree__parse_type_name__Terms_9,
  MR_Word * parse_tree__parse_type_name__Result_10)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__RevTypes_11;
    MR_Word parse_tree__parse_type_name__Specs_12;

    {
      parse_tree__parse_type_name__parse_types_acc_8_p_0(parse_tree__parse_type_name__AllowHOInstInfo_6, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__Terms_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__RevTypes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_name__Specs_12);
    }
    if ((parse_tree__parse_type_name__Specs_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_type_name__V_17_17;

        {
          parse_tree__parse_type_name__V_17_17 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_name__RevTypes_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_name__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_17_17));
        }
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *parse_tree__parse_type_name__Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_12));
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_types_3_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_4,
  MR_Word parse_tree__parse_type_name__Terms_5,
  MR_Word * parse_tree__parse_type_name__Types_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__VarSet_7;
    MR_Word parse_tree__parse_type_name__ContextPieces_8;
    MR_Word parse_tree__parse_type_name__V_9_9;

    {
      parse_tree__parse_type_name__VarSet_7 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__parse_type_name__ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__parse_type_name__parse_types_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_4, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__Terms_5, &parse_tree__parse_type_name__V_9_9);
    }
    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_9_9)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__Types_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_9_9, (MR_Integer) 0)));
    return parse_tree__parse_type_name__succeeded;
  }
}

void MR_CALL 
parse_tree__parse_type_name__parse_type_5_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_6,
  MR_Word parse_tree__parse_type_name__VarSet_7,
  MR_Word parse_tree__parse_type_name__ContextPieces_8,
  MR_Word parse_tree__parse_type_name__Term_9,
  MR_Word * parse_tree__parse_type_name__Result_10)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_type_name__Term_9)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_type_name__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_name__FunctorContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Term_9, (MR_Integer) 2)));

        switch (MR_tag((MR_Word) parse_tree__parse_type_name__Functor_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__parse_type_name__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Functor_14, (MR_Integer) 0)));
              MR_Word parse_tree__parse_type_name__KnownTypeKind_27;

              {
                parse_tree__parse_type_name__succeeded = parse_tree__parse_type_name__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__parse_type_name__Name_26, parse_tree__parse_type_name__ArgTerms_15, &parse_tree__parse_type_name__KnownTypeKind_27);
              }
              if (parse_tree__parse_type_name__succeeded)
                switch (MR_tag((MR_Word) parse_tree__parse_type_name__KnownTypeKind_27)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word parse_tree__parse_type_name__Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__KnownTypeKind_27, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_type_name__Result_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Type_28));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word parse_tree__parse_type_name__CompoundTypeKind_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__KnownTypeKind_27, (MR_Integer) 0)));

                      {
                        parse_tree__parse_type_name__parse_compound_type_6_p_0(parse_tree__parse_type_name__AllowHOInstInfo_6, parse_tree__parse_type_name__Term_9, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__CompoundTypeKind_29, parse_tree__parse_type_name__Result_10);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word parse_tree__parse_type_name__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                      MR_Integer parse_tree__parse_type_name__ExpectedArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), parse_tree__parse_type_name__KnownTypeKind_27, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_type_name__V_37_37;
                      MR_Word parse_tree__parse_type_name__V_38_38;
                      MR_Word parse_tree__parse_type_name__V_40_40;
                      MR_Word parse_tree__parse_type_name__V_43_43;
                      MR_Word parse_tree__parse_type_name__V_44_44;
                      MR_Word parse_tree__parse_type_name__V_45_45;
                      MR_Word parse_tree__parse_type_name__V_48_48;
                      MR_Word parse_tree__parse_type_name__V_51_51;
                      MR_Word parse_tree__parse_type_name__V_52_52;
                      MR_Word parse_tree__parse_type_name__V_61_61;
                      MR_Word parse_tree__parse_type_name__V_62_62;
                      MR_Word parse_tree__parse_type_name__V_63_63;
                      MR_Word parse_tree__parse_type_name__V_64_64;
                      MR_Word parse_tree__parse_type_name__V_67_67;
                      MR_Word parse_tree__parse_type_name__Pieces_99;
                      MR_Word parse_tree__parse_type_name__Spec_100;

                      {
                        parse_tree__parse_type_name__V_37_37 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_113_113, parse_tree__parse_type_name__ContextPieces_8);
                      }
                      {
                        parse_tree__parse_type_name__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_44_44, 1) = ((MR_Box) (parse_tree__parse_type_name__Name_26));
                      }
                      {
                        parse_tree__parse_type_name__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_52_52, 1) = ((MR_Box) (parse_tree__parse_type_name__ExpectedArity_30));
                      }
                      {
                        parse_tree__parse_type_name__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_51_51, 0) = ((MR_Box) (parse_tree__parse_type_name__V_52_52));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[4])));
                      }
                      {
                        parse_tree__parse_type_name__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[52])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_48_48, 1) = ((MR_Box) (parse_tree__parse_type_name__V_51_51));
                      }
                      {
                        parse_tree__parse_type_name__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[51])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_45_45, 1) = ((MR_Box) (parse_tree__parse_type_name__V_48_48));
                      }
                      {
                        parse_tree__parse_type_name__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_name__V_44_44));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_43_43, 1) = ((MR_Box) (parse_tree__parse_type_name__V_45_45));
                      }
                      {
                        parse_tree__parse_type_name__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[50])));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_40_40, 1) = ((MR_Box) (parse_tree__parse_type_name__V_43_43));
                      }
                      {
                        parse_tree__parse_type_name__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_38_38, 1) = ((MR_Box) (parse_tree__parse_type_name__V_40_40));
                      }
                      {
                        parse_tree__parse_type_name__Pieces_99 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_113_113, parse_tree__parse_type_name__V_37_37, parse_tree__parse_type_name__V_38_38);
                      }
                      {
                        parse_tree__parse_type_name__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_64_64, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_99));
                      }
                      {
                        parse_tree__parse_type_name__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_63_63, 0) = ((MR_Box) (parse_tree__parse_type_name__V_64_64));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__parse_type_name__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_62_62, 0) = ((MR_Box) (parse_tree__parse_type_name__FunctorContext_16));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_62_62, 1) = ((MR_Box) (parse_tree__parse_type_name__V_63_63));
                      }
                      {
                        parse_tree__parse_type_name__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_61_61, 0) = ((MR_Box) (parse_tree__parse_type_name__V_62_62));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        parse_tree__parse_type_name__Spec_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                        MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_100, 2) = ((MR_Box) (parse_tree__parse_type_name__V_61_61));
                      }
                      {
                        parse_tree__parse_type_name__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_67_67, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_100));
                        MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_type_name__Result_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_67_67));
                      }
                    }
                    break;
                }
              else
                {
                  MR_Word parse_tree__parse_type_name__NameResult_31;

                  {
                    parse_tree__parse_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__Term_9, &parse_tree__parse_type_name__NameResult_31);
                  }
                  if (((MR_tag((MR_Word) parse_tree__parse_type_name__NameResult_31)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word parse_tree__parse_type_name__Specs_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__NameResult_31, (MR_Integer) 0)));

                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        *parse_tree__parse_type_name__Result_10 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__Specs_103));
                      }
                    }
                  else
                    {
                      MR_Word parse_tree__parse_type_name__SymName_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__NameResult_31, (MR_Integer) 0)));
                      MR_Word parse_tree__parse_type_name__SymNameArgTerms_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__NameResult_31, (MR_Integer) 1)));
                      MR_Word parse_tree__parse_type_name__SymNameArgsResult_34;

                      {
                        parse_tree__parse_type_name__parse_types_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_4[0]), parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__SymNameArgTerms_33, &parse_tree__parse_type_name__SymNameArgsResult_34);
                      }
                      if (((MR_tag((MR_Word) parse_tree__parse_type_name__SymNameArgsResult_34)) == (MR_mktag((MR_Integer) 0))))
                        *parse_tree__parse_type_name__Result_10 = (MR_Word) parse_tree__parse_type_name__SymNameArgsResult_34;
                      else
                        {
                          MR_Word parse_tree__parse_type_name__ArgTypes_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__SymNameArgsResult_34, (MR_Integer) 0)));
                          MR_Word parse_tree__parse_type_name__V_71_71;

                          {
                            parse_tree__parse_type_name__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_71_71, 0) = ((MR_Box) (parse_tree__parse_type_name__SymName_32));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_71_71, 1) = ((MR_Box) (parse_tree__parse_type_name__ArgTypes_35));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_71_71, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            *parse_tree__parse_type_name__Result_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_71_71));
                          }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_111_111;
              MR_String parse_tree__parse_type_name__TermStr_23;
              MR_Word parse_tree__parse_type_name__Pieces_24;
              MR_Word parse_tree__parse_type_name__Spec_25;
              MR_Word parse_tree__parse_type_name__V_73_73;
              MR_Word parse_tree__parse_type_name__V_74_74;
              MR_Word parse_tree__parse_type_name__V_76_76;
              MR_Word parse_tree__parse_type_name__V_79_79;
              MR_Word parse_tree__parse_type_name__V_80_80;
              MR_Word parse_tree__parse_type_name__V_89_89;
              MR_Word parse_tree__parse_type_name__V_90_90;
              MR_Word parse_tree__parse_type_name__V_91_91;
              MR_Word parse_tree__parse_type_name__V_92_92;
              MR_Word parse_tree__parse_type_name__V_95_95;

              {
                parse_tree__parse_type_name__TermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__Term_9);
              }
              parse_tree__parse_type_name__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_type_name__V_73_73 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_111_111, parse_tree__parse_type_name__ContextPieces_8);
              }
              {
                parse_tree__parse_type_name__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_80_80, 1) = ((MR_Box) (parse_tree__parse_type_name__TermStr_23));
              }
              {
                parse_tree__parse_type_name__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 0) = ((MR_Box) (parse_tree__parse_type_name__V_80_80));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[6])));
              }
              {
                parse_tree__parse_type_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[50])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_76_76, 1) = ((MR_Box) (parse_tree__parse_type_name__V_79_79));
              }
              {
                parse_tree__parse_type_name__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_74_74, 1) = ((MR_Box) (parse_tree__parse_type_name__V_76_76));
              }
              {
                parse_tree__parse_type_name__Pieces_24 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_111_111, parse_tree__parse_type_name__V_73_73, parse_tree__parse_type_name__V_74_74);
              }
              {
                parse_tree__parse_type_name__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_92_92, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_24));
              }
              {
                parse_tree__parse_type_name__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_91_91, 0) = ((MR_Box) (parse_tree__parse_type_name__V_92_92));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_90_90, 0) = ((MR_Box) (parse_tree__parse_type_name__FunctorContext_16));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_90_90, 1) = ((MR_Box) (parse_tree__parse_type_name__V_91_91));
              }
              {
                parse_tree__parse_type_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_89_89, 0) = ((MR_Box) (parse_tree__parse_type_name__V_90_90));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_25, 2) = ((MR_Box) (parse_tree__parse_type_name__V_89_89));
              }
              {
                parse_tree__parse_type_name__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_95_95, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_25));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_name__Result_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_95_95));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__parse_type_name__TypeCtorInfo_111_111;
              MR_String parse_tree__parse_type_name__TermStr_23;
              MR_Word parse_tree__parse_type_name__Pieces_24;
              MR_Word parse_tree__parse_type_name__Spec_25;
              MR_Word parse_tree__parse_type_name__V_73_73;
              MR_Word parse_tree__parse_type_name__V_74_74;
              MR_Word parse_tree__parse_type_name__V_76_76;
              MR_Word parse_tree__parse_type_name__V_79_79;
              MR_Word parse_tree__parse_type_name__V_80_80;
              MR_Word parse_tree__parse_type_name__V_89_89;
              MR_Word parse_tree__parse_type_name__V_90_90;
              MR_Word parse_tree__parse_type_name__V_91_91;
              MR_Word parse_tree__parse_type_name__V_92_92;
              MR_Word parse_tree__parse_type_name__V_95_95;

              {
                parse_tree__parse_type_name__TermStr_23 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__Term_9);
              }
              parse_tree__parse_type_name__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                parse_tree__parse_type_name__V_73_73 = mercury__cord__list_1_f_0(parse_tree__parse_type_name__TypeCtorInfo_111_111, parse_tree__parse_type_name__ContextPieces_8);
              }
              {
                parse_tree__parse_type_name__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), parse_tree__parse_type_name__V_80_80, 1) = ((MR_Box) (parse_tree__parse_type_name__TermStr_23));
              }
              {
                parse_tree__parse_type_name__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 0) = ((MR_Box) (parse_tree__parse_type_name__V_80_80));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_name_scalar_common_1[6])));
              }
              {
                parse_tree__parse_type_name__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_name_scalar_common_1[50])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_76_76, 1) = ((MR_Box) (parse_tree__parse_type_name__V_79_79));
              }
              {
                parse_tree__parse_type_name__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_74_74, 1) = ((MR_Box) (parse_tree__parse_type_name__V_76_76));
              }
              {
                parse_tree__parse_type_name__Pieces_24 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_name__TypeCtorInfo_111_111, parse_tree__parse_type_name__V_73_73, parse_tree__parse_type_name__V_74_74);
              }
              {
                parse_tree__parse_type_name__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_92_92, 0) = ((MR_Box) (parse_tree__parse_type_name__Pieces_24));
              }
              {
                parse_tree__parse_type_name__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_91_91, 0) = ((MR_Box) (parse_tree__parse_type_name__V_92_92));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_90_90, 0) = ((MR_Box) (parse_tree__parse_type_name__FunctorContext_16));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_90_90, 1) = ((MR_Box) (parse_tree__parse_type_name__V_91_91));
              }
              {
                parse_tree__parse_type_name__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_89_89, 0) = ((MR_Box) (parse_tree__parse_type_name__V_90_90));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_type_name__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__Spec_25, 2) = ((MR_Box) (parse_tree__parse_type_name__V_89_89));
              }
              {
                parse_tree__parse_type_name__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_95_95, 0) = ((MR_Box) (parse_tree__parse_type_name__Spec_25));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_name__Result_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_95_95));
              }
            }
            break;
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_name__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Term_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_name__Var_13;
        MR_Word parse_tree__parse_type_name__V_97_97;
        MR_Word parse_tree__parse_type_name__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__Term_9, (MR_Integer) 1)));

        {
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_name__Var0_11, &parse_tree__parse_type_name__Var_13);
        }
        {
          parse_tree__parse_type_name__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_97_97, 0) = ((MR_Box) (parse_tree__parse_type_name__Var_13));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_name__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_name__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_name__V_97_97));
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__parse_type_name__maybe_parse_type_3_p_0(
  MR_Word parse_tree__parse_type_name__AllowHOInstInfo_4,
  MR_Word parse_tree__parse_type_name__Term_5,
  MR_Word * parse_tree__parse_type_name__Type_6)
{
  {
    MR_bool parse_tree__parse_type_name__succeeded;
    MR_Word parse_tree__parse_type_name__VarSet_7;
    MR_Word parse_tree__parse_type_name__ContextPieces_8;
    MR_Word parse_tree__parse_type_name__V_9_9;

    {
      parse_tree__parse_type_name__VarSet_7 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
    {
      parse_tree__parse_type_name__ContextPieces_8 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__parse_type_name__parse_type_5_p_0(parse_tree__parse_type_name__AllowHOInstInfo_4, parse_tree__parse_type_name__VarSet_7, parse_tree__parse_type_name__ContextPieces_8, parse_tree__parse_type_name__Term_5, &parse_tree__parse_type_name__V_9_9);
    }
    parse_tree__parse_type_name__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_name__V_9_9)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_name__succeeded)
      *parse_tree__parse_type_name__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_name__V_9_9, (MR_Integer) 0)));
    return parse_tree__parse_type_name__succeeded;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_type_name. */
