/*
** Automatically generated from `rtti_implementation.m'
** by the Mercury compiler,
** version rotd-2023-02-25
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


// :- module rtti_implementation.
// :- implementation.

/*
INIT mercury__rtti_implementation__init
ENDINIT
*/

#include "rtti_implementation.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_names_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_types_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_functor_desc_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_sectag_alternatives_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_enum_functor_desc_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_exist_info_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_foreign_enum_functor_desc_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_notag_functor_desc_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_pseudo_type_info_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_ptag_entry_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4;

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_sectag_locn_0[5];

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_sectag_locn_0[5];

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_sectag_locn_0[5];

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_info_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_47;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_48;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_49;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_50;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_51;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_52;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_53;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_54;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_55;

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_type_ctor_rep_0[56];

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_type_ctor_rep_0[56];

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_rep_0[56];

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_functors_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_info_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_layout_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeclass_info_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0;

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeinfo_locn_0[1];

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0;

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0;

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_unify_or_compare_pred_0[1];

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_unify_or_compare_pred_0[1];

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_unify_or_compare_pred_0[1];

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6);

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_16);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6);

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_16);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Integer Start_5,
  MR_Integer Max_6);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static MR_Word MR_CALL 
mercury__rtti_implementation__map__ho10_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14);

static void MR_CALL 
mercury__rtti_implementation__det_unimplemented_1_p_0(
  MR_String S_2);

static MR_bool MR_CALL 
mercury__rtti_implementation__semidet_unimplemented_1_p_0(
  MR_String S_2);

static MR_String MR_CALL 
mercury__rtti_implementation__null_string_0_f_0(void);

static MR_bool MR_CALL 
mercury__rtti_implementation__null_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Box HeadVar__1_1);

static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0(
  MR_Box HeadVar__1_1);

static MR_Box MR_CALL 
mercury__rtti_implementation__unsafe_index_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Integer HeadVar__1_4,
  MR_Box HeadVar__2_5);

static MR_bool MR_CALL 
mercury__rtti_implementation__search_arg_names_5_p_0(
  MR_Word ArgNames_6,
  MR_Integer I_7,
  MR_Integer Arity_8,
  MR_String Name_9,
  MR_Integer * Index_10);

static MR_Word MR_CALL 
mercury__rtti_implementation__get_type_layout_1_f_0(
  MR_Word TypeCtorInfo_1);

static void MR_CALL 
mercury__rtti_implementation__type_ctor_compare_pred_1_f_0(
  MR_Word TypeCtorInfo_1);

static void MR_CALL 
mercury__rtti_implementation__type_ctor_unify_pred_1_f_0(
  MR_Word TypeCtorInfo_1);

static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0(
  MR_Word TypeInfo_4,
  MR_Integer Index_5);

static MR_String MR_CALL 
mercury__rtti_implementation__get_target_lang_rep_1_f_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1);

static MR_bool MR_CALL 
mercury__rtti_implementation__same_pointer_value_untyped_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word TypeInfo_for_U_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2);

static void MR_CALL 
mercury__rtti_implementation__get_arg_type_info_2_9_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfoParams_10,
  MR_Word TypeInfo_11,
  MR_Box Term_12,
  MR_Word FunctorDesc_13,
  MR_Integer Offset_14,
  MR_Integer I_15,
  MR_Integer Max_16,
  MR_Word STATE_VARIABLE_ArgTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_ArgTypeInfo_21);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(
  MR_Integer I_15,
  MR_Integer Max_16,
  MR_Word STATE_VARIABLE_ArgTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_ArgTypeInfo_21);

static MR_Word MR_CALL 
mercury__rtti_implementation__create_pseudo_type_info_2_f_0(
  MR_Word TypeInfo_4,
  MR_Word PseudoTypeInfo_5);

static void MR_CALL 
mercury__rtti_implementation__compare_pseudo_type_info_args_3_p_0(
  MR_Word * Res_4,
  MR_Word Args1_5,
  MR_Word Args2_6);

static void MR_CALL 
mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0(
  MR_Word * Res_4,
  MR_Word PTI1_5,
  MR_Word PTI2_6);

static MR_Word MR_CALL 
mercury__rtti_implementation__collapse_equivalences_pseudo_1_f_0(
  MR_Word PTI_3);

static void MR_CALL 
mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0(
  MR_Integer Loc_6,
  MR_Integer Arity_7,
  MR_Word * Result_8,
  MR_Word TypeInfoA_9,
  MR_Word TypeInfoB_10);

static void MR_CALL 
mercury__rtti_implementation__compare_type_ctor_infos_3_p_0(
  MR_Word * Res_4,
  MR_Word TypeCtorInfo1_5,
  MR_Word TypeCtorInfo2_6);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
mercury__rtti_implementation__handle_usereq_type_9_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_23,
  MR_Box tscc_proc_2_input_2_Term_10,
  MR_Word tscc_proc_2_input_3_TypeInfo_11,
  MR_Word tscc_proc_2_input_4_TypeCtorInfo_12,
  MR_Word tscc_proc_2_input_5_TypeCtorRep_13,
  MR_String * tscc_output_ptr_1_Functor_15,
  MR_Integer * tscc_output_ptr_2_Ordinal_16,
  MR_Integer * tscc_output_ptr_3_Arity_17,
  MR_Word * tscc_output_ptr_4_Arguments_18);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(
  MR_Word TypeCtorInfo_12,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Box Var_15,
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Integer Start_5,
  MR_Integer Max_6);

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Box Var_15,
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_20);

static MR_Word MR_CALL 
mercury__rtti_implementation__get_arg_univ_5_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box Term_7,
  MR_Word TypeInfo_8,
  MR_Word SecTagLocn_9,
  MR_Word FunctorDesc_10,
  MR_Integer Index_11);

static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void);

static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void);

static uint8_t MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void);

static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(
  MR_Box HeadVar__1_1);

static MR_Integer MR_CALL 
mercury__rtti_implementation__unsafe_get_foreign_enum_value_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_3);

static MR_Integer MR_CALL 
mercury__rtti_implementation__unsafe_get_enum_value_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_3);

static MR_String MR_CALL 
mercury__rtti_implementation__foreign_enum_functor_name_1_f_0(
  MR_Word ForeignEnumFunctorDesc_3);

static MR_Word MR_CALL 
mercury__rtti_implementation__foreign_enum_functor_desc_3_f_0(
  MR_Word HeadVar__1_5,
  MR_Integer HeadVar__2_6,
  MR_Word HeadVar__3_7);

static MR_String MR_CALL 
mercury__rtti_implementation__enum_functor_name_1_f_0(
  MR_Word EnumFunctorDesc_3);

static void MR_CALL 
mercury__rtti_implementation__det_index_or_search_enum_functor_ordinal_3_p_0(
  MR_Word TypeCtorInfo_4,
  MR_Integer EnumValue_5,
  MR_Integer * Ordinal_6);

static void MR_CALL 
mercury__rtti_implementation__index_enum_functor_desc_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Integer HeadVar__2_5,
  MR_Word * HeadVar__3_6);

static int32_t MR_CALL 
mercury__rtti_implementation__du_functor_ordinal_1_f_0(
  MR_Word DuFunctorDesc_3);

static int16_t MR_CALL 
mercury__rtti_implementation__du_functor_arity_1_f_0(
  MR_Word DuFunctorDesc_3);

static MR_String MR_CALL 
mercury__rtti_implementation__du_functor_name_1_f_0(
  MR_Word DuFunctorDesc_3);

static MR_Word MR_CALL 
mercury__rtti_implementation__get_type_ctor_functors_1_f_0(
  MR_Word HeadVar__1_3);

static void MR_CALL 
mercury__rtti_implementation__det_index_or_search_sectag_functor_3_p_0(
  MR_Word PTagEntry_4,
  MR_Integer SecTag_5,
  MR_Word * FunctorDesc_6);

static void MR_CALL 
mercury__rtti_implementation__index_sectag_functor_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Integer HeadVar__2_5,
  MR_Word * HeadVar__3_6);

static MR_Word MR_CALL 
mercury__rtti_implementation__sectag_locn_1_f_0(
  MR_Word HeadVar__1_3);

static void MR_CALL 
mercury__rtti_implementation__det_index_or_search_ptag_layout_3_p_0(
  MR_Word TypeCtorInfo_4,
  uint8_t PTag_5,
  MR_Word * PTagEntry_6);

static void MR_CALL 
mercury__rtti_implementation__handle_usereq_type_9_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18);

static void MR_CALL 
mercury__rtti_implementation__det_dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_U_7,
  MR_Box Term_3,
  MR_Box * Actual_4);

static MR_bool MR_CALL 
mercury__rtti_implementation__quote_special_escape_char_2_p_0(
  MR_Char HeadVar__1_1,
  MR_String * HeadVar__2_2);

static void MR_CALL 
mercury__rtti_implementation__get_functor_notag_7_p_0(
  MR_Word TypeCtorRep_8,
  MR_Word TypeCtorInfo_9,
  MR_Integer FunctorNumber_10,
  MR_String * FunctorName_11,
  MR_Integer * Arity_12,
  MR_Word * PseudoTypeInfoList_13,
  MR_Word * Names_14);

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6);

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_18);

static void MR_CALL 
mercury__rtti_implementation__compare_type_info_args_5_p_0(
  MR_Integer Loc_6,
  MR_Integer Arity_7,
  MR_Word * Result_8,
  MR_Word TypeInfoA_9,
  MR_Word TypeInfoB_10);

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_54_44_32_55_93_95_48_6_p_0(
  MR_Integer Loc_7,
  MR_Integer TupleArity_8,
  MR_Word TypeInfo_9,
  MR_Word * Result_10);

static MR_Integer MR_CALL 
mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(
  MR_Word HeadVar__1_3);

static MR_bool MR_CALL 
mercury__rtti_implementation__unify_tuple_pos_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Integer Loc_6,
  MR_Integer TupleArity_7,
  MR_Word TypeInfo_8,
  MR_Box TermA_9,
  MR_Box TermB_10);

static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(
  MR_Word TypeInfo_4,
  MR_Integer Index_5);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____arg_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____arg_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____du_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____enum_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____enum_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____exist_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____exist_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____notag_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____notag_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____pseudo_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____pseudo_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____ptag_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____ptag_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____sectag_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____sectag_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_functors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____type_functors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____type_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeclass_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____typeclass_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeinfo_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____typeinfo_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtti_implementation_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtti_implementation_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtti_implementation_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 39)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_5[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_names_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0 = {
  (MR_String) "arg_names",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____arg_names_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____arg_names_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "arg_names",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_names_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_types_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0 = {
  (MR_String) "arg_types",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____arg_types_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____arg_types_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "arg_types",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_types_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_functor_desc_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0 = {
  (MR_String) "du_functor_desc",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_functor_desc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____du_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____du_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "du_functor_desc",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_du_functor_desc_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_sectag_alternatives_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0 = {
  (MR_String) "du_sectag_alternatives",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_sectag_alternatives_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "du_sectag_alternatives",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_du_sectag_alternatives_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_enum_functor_desc_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0 = {
  (MR_String) "enum_functor_desc",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_enum_functor_desc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____enum_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____enum_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "enum_functor_desc",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_enum_functor_desc_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_exist_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0 = {
  (MR_String) "exist_info",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_exist_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____exist_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____exist_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "exist_info",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_exist_info_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_foreign_enum_functor_desc_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0 = {
  (MR_String) "foreign_enum_functor_desc",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_foreign_enum_functor_desc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "foreign_enum_functor_desc",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_foreign_enum_functor_desc_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_notag_functor_desc_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0 = {
  (MR_String) "notag_functor_desc",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_notag_functor_desc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____notag_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____notag_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "notag_functor_desc",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_notag_functor_desc_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_pseudo_type_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0 = {
  (MR_String) "pseudo_type_info",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_pseudo_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____pseudo_type_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____pseudo_type_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "pseudo_type_info",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_pseudo_type_info_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_ptag_entry_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0 = {
  (MR_String) "ptag_entry",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_ptag_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____ptag_entry_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____ptag_entry_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "ptag_entry",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_ptag_entry_0,

};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0 = {
  (MR_String) "stag_none",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1 = {
  (MR_String) "stag_none_direct_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2 = {
  (MR_String) "stag_local_rest_of_word",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3 = {
  (MR_String) "stag_remote",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4 = {
  (MR_String) "stag_variable",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_sectag_locn_0[5] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4
};

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_sectag_locn_0[5] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4
};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_sectag_locn_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_sectag_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtti_implementation____Unify____sectag_locn_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____sectag_locn_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "sectag_locn",
  { mercury__rtti_implementation__rtti_implementation__enum_name_ordered_sectag_locn_0 },
  { mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_sectag_locn_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_sectag_locn_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0 = {
  (MR_String) "type_ctor_info",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_ctor_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_ctor_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_ctor_info",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_info_0,

};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0 = {
  (MR_String) "tcr_enum",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1 = {
  (MR_String) "tcr_enum_usereq",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2 = {
  (MR_String) "tcr_du",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3 = {
  (MR_String) "tcr_du_usereq",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4 = {
  (MR_String) "tcr_notag",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5 = {
  (MR_String) "tcr_notag_usereq",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6 = {
  (MR_String) "tcr_equiv",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7 = {
  (MR_String) "tcr_func",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8 = {
  (MR_String) "tcr_int",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9 = {
  (MR_String) "tcr_uint",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10 = {
  (MR_String) "tcr_char",
  INT32_C(10)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11 = {
  (MR_String) "tcr_float",
  INT32_C(11)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12 = {
  (MR_String) "tcr_string",
  INT32_C(12)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13 = {
  (MR_String) "tcr_pred",
  INT32_C(13)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14 = {
  (MR_String) "tcr_subgoal",
  INT32_C(14)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15 = {
  (MR_String) "tcr_void",
  INT32_C(15)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16 = {
  (MR_String) "tcr_c_pointer",
  INT32_C(16)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17 = {
  (MR_String) "tcr_typeinfo",
  INT32_C(17)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18 = {
  (MR_String) "tcr_typeclassinfo",
  INT32_C(18)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19 = {
  (MR_String) "tcr_array",
  INT32_C(19)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20 = {
  (MR_String) "tcr_succip",
  INT32_C(20)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21 = {
  (MR_String) "tcr_hp",
  INT32_C(21)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22 = {
  (MR_String) "tcr_curfr",
  INT32_C(22)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23 = {
  (MR_String) "tcr_maxfr",
  INT32_C(23)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24 = {
  (MR_String) "tcr_redofr",
  INT32_C(24)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25 = {
  (MR_String) "tcr_redoip",
  INT32_C(25)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26 = {
  (MR_String) "tcr_trail_ptr",
  INT32_C(26)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27 = {
  (MR_String) "tcr_ticket",
  INT32_C(27)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28 = {
  (MR_String) "tcr_notag_ground",
  INT32_C(28)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29 = {
  (MR_String) "tcr_notag_ground_usereq",
  INT32_C(29)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30 = {
  (MR_String) "tcr_equiv_ground",
  INT32_C(30)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31 = {
  (MR_String) "tcr_tuple",
  INT32_C(31)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32 = {
  (MR_String) "tcr_reserved_addr",
  INT32_C(32)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33 = {
  (MR_String) "tcr_reserved_addr_usereq",
  INT32_C(33)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34 = {
  (MR_String) "tcr_type_ctor_info",
  INT32_C(34)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35 = {
  (MR_String) "tcr_base_typeclass_info",
  INT32_C(35)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36 = {
  (MR_String) "tcr_type_desc",
  INT32_C(36)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37 = {
  (MR_String) "tcr_type_ctor_desc",
  INT32_C(37)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38 = {
  (MR_String) "tcr_foreign",
  INT32_C(38)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39 = {
  (MR_String) "tcr_reference",
  INT32_C(39)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40 = {
  (MR_String) "tcr_stable_c_pointer",
  INT32_C(40)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41 = {
  (MR_String) "tcr_stable_foreign",
  INT32_C(41)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42 = {
  (MR_String) "tcr_pseudo_type_desc",
  INT32_C(42)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43 = {
  (MR_String) "tcr_dummy",
  INT32_C(43)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44 = {
  (MR_String) "tcr_bitmap",
  INT32_C(44)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45 = {
  (MR_String) "tcr_foreign_enum",
  INT32_C(45)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46 = {
  (MR_String) "tcr_foreign_enum_usereq",
  INT32_C(46)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_47 = {
  (MR_String) "tcr_int8",
  INT32_C(47)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_48 = {
  (MR_String) "tcr_uint8",
  INT32_C(48)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_49 = {
  (MR_String) "tcr_int16",
  INT32_C(49)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_50 = {
  (MR_String) "tcr_uint16",
  INT32_C(50)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_51 = {
  (MR_String) "tcr_int32",
  INT32_C(51)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_52 = {
  (MR_String) "tcr_uint32",
  INT32_C(52)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_53 = {
  (MR_String) "tcr_int64",
  INT32_C(53)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_54 = {
  (MR_String) "tcr_uint64",
  INT32_C(54)
};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_55 = {
  (MR_String) "tcr_unknown",
  INT32_C(55)
};

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_type_ctor_rep_0[56] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_47,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_48,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_49,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_50,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_51,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_52,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_53,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_54,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_55
};

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_type_ctor_rep_0[56] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_49,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_51,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_53,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_47,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_50,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_52,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_54,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_48,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_55,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15
};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_rep_0[56] = {
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 25,
  (MR_Integer) 28,
  (MR_Integer) 11,
  (MR_Integer) 17,
  (MR_Integer) 19,
  (MR_Integer) 49,
  (MR_Integer) 4,
  (MR_Integer) 13,
  (MR_Integer) 38,
  (MR_Integer) 29,
  (MR_Integer) 39,
  (MR_Integer) 55,
  (MR_Integer) 3,
  (MR_Integer) 48,
  (MR_Integer) 47,
  (MR_Integer) 0,
  (MR_Integer) 40,
  (MR_Integer) 18,
  (MR_Integer) 5,
  (MR_Integer) 24,
  (MR_Integer) 31,
  (MR_Integer) 32,
  (MR_Integer) 42,
  (MR_Integer) 41,
  (MR_Integer) 26,
  (MR_Integer) 27,
  (MR_Integer) 12,
  (MR_Integer) 43,
  (MR_Integer) 34,
  (MR_Integer) 35,
  (MR_Integer) 45,
  (MR_Integer) 1,
  (MR_Integer) 46,
  (MR_Integer) 44,
  (MR_Integer) 14,
  (MR_Integer) 33,
  (MR_Integer) 36,
  (MR_Integer) 37,
  (MR_Integer) 30,
  (MR_Integer) 8,
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 23,
  (MR_Integer) 53,
  (MR_Integer) 20,
  (MR_Integer) 50,
  (MR_Integer) 21,
  (MR_Integer) 51,
  (MR_Integer) 22,
  (MR_Integer) 52,
  (MR_Integer) 54
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_rep_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_ctor_rep_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_ctor_rep_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_ctor_rep",
  { mercury__rtti_implementation__rtti_implementation__enum_name_ordered_type_ctor_rep_0 },
  { mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_type_ctor_rep_0 },
  (MR_Integer) 56,
  UINT16_C(12),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_rep_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_functors_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0 = {
  (MR_String) "type_functors",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_functors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_functors_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_functors_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_functors",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_functors_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0 = {
  (MR_String) "type_info",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_info",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_info_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_layout_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0 = {
  (MR_String) "type_layout",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_layout_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_layout_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_layout_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_layout",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_layout_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeclass_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0 = {
  (MR_String) "typeclass_info",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeclass_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____typeclass_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____typeclass_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "typeclass_info",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_typeclass_info_0,

};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeinfo_locn_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0 = {
  (MR_String) "typeinfo_locn",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeinfo_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____typeinfo_locn_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____typeinfo_locn_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "typeinfo_locn",
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0 },
  { &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_typeinfo_locn_0,

};

static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0 = {
  (MR_String) "unify_or_compare_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_unify_or_compare_pred_0[1] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0
};

static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_unify_or_compare_pred_0[1] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0
};

static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_unify_or_compare_pred_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_unify_or_compare_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "unify_or_compare_pred",
  { mercury__rtti_implementation__rtti_implementation__enum_name_ordered_unify_or_compare_pred_0 },
  { mercury__rtti_implementation__rtti_implementation__enum_ordinal_ordered_unify_or_compare_pred_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__rtti_implementation__rtti_implementation__functor_number_map_unify_or_compare_pred_0,

};

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6)
{
  MR_bool succeeded = (Start_5 <= Max_6);
  MR_Word Results_8;

  if (succeeded)
  {
    MR_Word Res_9;
    MR_Integer Var_11;
    MR_Word * AddrSCCcallarg_10_15;

    Res_9 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(Var_14, Start_5);
    Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
    {
      Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Results_8, 0) = ((MR_Box) (Res_9));
      MR_hl_field(1, Results_8, 1) = NULL;
    }
    AddrSCCcallarg_10_15 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
    mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_95_95_49_4_p_0(Var_14, Var_11, Max_6, AddrSCCcallarg_10_15);
  }
  else
    Results_8 = (MR_Word) ((MR_Unsigned) 0U);
  return Results_8;
}

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Start_5 <= Max_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Res_9;
      MR_Integer Var_11;
      MR_Word Results_8;
      MR_Word * AddrSCCcallarg_10_15;
      MR_Integer next_value_of_Start_5;
      MR_Word * next_value_of_AddrOfResults_16;

      Res_9 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(Var_14, Start_5);
      Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
      {
        Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Results_8, 0) = ((MR_Box) (Res_9));
        MR_hl_field(1, Results_8, 1) = NULL;
      }
      AddrSCCcallarg_10_15 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
      *AddrOfResults_16 = Results_8;
      // direct tailcall eliminated
      ;
      next_value_of_Start_5 = Var_11;
      next_value_of_AddrOfResults_16 = AddrSCCcallarg_10_15;
      Start_5 = next_value_of_Start_5;
      AddrOfResults_16 = next_value_of_AddrOfResults_16;
      continue;
    }
    else
      *AddrOfResults_16 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6)
{
  MR_bool succeeded = (Start_5 <= Max_6);
  MR_Word Results_8;

  if (succeeded)
  {
    MR_Word Res_9;
    MR_Integer Var_11;
    MR_Word * AddrSCCcallarg_10_15;

    Res_9 = mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0(Var_14, Start_5);
    Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
    {
      Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Results_8, 0) = ((MR_Box) (Res_9));
      MR_hl_field(1, Results_8, 1) = NULL;
    }
    AddrSCCcallarg_10_15 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
    mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_95_95_49_4_p_0(Var_14, Var_11, Max_6, AddrSCCcallarg_10_15);
  }
  else
    Results_8 = (MR_Word) ((MR_Unsigned) 0U);
  return Results_8;
}

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Start_5 <= Max_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Res_9;
      MR_Integer Var_11;
      MR_Word Results_8;
      MR_Word * AddrSCCcallarg_10_15;
      MR_Integer next_value_of_Start_5;
      MR_Word * next_value_of_AddrOfResults_16;

      Res_9 = mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0(Var_14, Start_5);
      Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
      {
        Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Results_8, 0) = ((MR_Box) (Res_9));
        MR_hl_field(1, Results_8, 1) = NULL;
      }
      AddrSCCcallarg_10_15 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
      *AddrOfResults_16 = Results_8;
      // direct tailcall eliminated
      ;
      next_value_of_Start_5 = Var_11;
      next_value_of_AddrOfResults_16 = AddrSCCcallarg_10_15;
      Start_5 = next_value_of_Start_5;
      AddrOfResults_16 = next_value_of_AddrOfResults_16;
      continue;
    }
    else
      *AddrOfResults_16 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6)
{
  MR_bool succeeded = (Start_5 <= Max_6);
  MR_Word Results_8;

  if (succeeded)
    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_pti_from_arg_types");
  else
    Results_8 = (MR_Word) ((MR_Unsigned) 0U);
  return Results_8;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Integer Start_5,
  MR_Integer Max_6)
{
  MR_bool succeeded = (Start_5 <= Max_6);
  MR_Word Results_8;

  if (succeeded)
    mercury__private_builtin__sorry_1_p_0((MR_String) "arg_names_index/2");
  else
    Results_8 = (MR_Word) ((MR_Unsigned) 0U);
  return Results_8;
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
}

static MR_Word MR_CALL 
mercury__rtti_implementation__map__ho10_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(Var_12, HeadVar__2_2);
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_13;

    Var_8 = mercury__rtti_implementation__create_pseudo_type_info_2_f_0(Var_12, Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_13);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_13;
      MR_Word HeadVar__3_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      Var_8 = mercury__rtti_implementation__create_pseudo_type_info_2_f_0(Var_12, Var_6);
      {
        HeadVar__3_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_15, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_15, 1) = NULL;
      }
      AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_15, (MR_Integer) 1)));
      *AddrOfHeadVar__3_14 = HeadVar__3_15;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_14 = AddrSCCcallarg_9_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_116_116_105_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_117_110_105_102_121_95_111_114_95_99_111_109_112_97_114_101_95_112_114_101_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_116_116_105_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_117_110_105_102_121_95_111_114_95_99_111_109_112_97_114_101_95_112_114_101_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__rtti_implementation____Compare____typeinfo_locn_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeinfo_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____typeclass_info_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeclass_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____type_layout_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_layout_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____type_info_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____type_functors_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_functors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_rep_0_0(
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
mercury__rtti_implementation____Unify____type_ctor_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_info_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____sectag_locn_0_0(
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
mercury__rtti_implementation____Unify____sectag_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____ptag_entry_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____ptag_entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____pseudo_type_info_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____pseudo_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____notag_functor_desc_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____notag_functor_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____exist_info_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____exist_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____enum_functor_desc_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____enum_functor_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____du_functor_desc_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_functor_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____arg_types_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation____Compare____arg_names_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation__det_unimplemented_1_p_0(
  MR_String S_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__det_unimplemented_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", S_2);
      return;
    }
}

static MR_bool MR_CALL 
mercury__rtti_implementation__semidet_unimplemented_1_p_0(
  MR_String S_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__semidet_unimplemented_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", S_2);
    succeeded = MR_TRUE;
  }
  else
  {
{
#define MR_PROC_LABEL mercury__rtti_implementation__semidet_unimplemented_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

static MR_String MR_CALL 
mercury__rtti_implementation__null_string_0_f_0(void)
{
  MR_String Str_1;

{
#define MR_PROC_LABEL mercury__rtti_implementation__null_string_0_f_0

	MR_String Str;

		{

    Str = NULL;


		;}
#undef MR_PROC_LABEL
	Str_1  = Str;
}
  return Str_1;
}

static MR_bool MR_CALL 
mercury__rtti_implementation__null_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Box HeadVar__1_1)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0(HeadVar__1_1);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0(
  MR_Box HeadVar__1_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0

	MR_Word S;
	MR_bool SUCCESS_INDICATOR;

	S = (MR_Word) HeadVar__1_1 ;
		{

    SUCCESS_INDICATOR = ((void *)S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static MR_Box MR_CALL 
mercury__rtti_implementation__unsafe_index_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Integer HeadVar__1_4,
  MR_Box HeadVar__2_5)
{
  MR_Box HeadVar__3_6;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
  return HeadVar__3_6;
}

static MR_bool MR_CALL 
mercury__rtti_implementation__search_arg_names_5_p_0(
  MR_Word ArgNames_6,
  MR_Integer I_7,
  MR_Integer Arity_8,
  MR_String Name_9,
  MR_Integer * Index_10)
{
  MR_bool succeeded = (I_7 < Arity_8);
  MR_String Var_14;

  if (succeeded)
  {
    Var_14 = (MR_String) "arg_names_index/2";
    mercury__private_builtin__sorry_1_p_0(Var_14);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtti_implementation__type_ctor_search_functor_number_map_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Integer HeadVar__2_5,
  MR_Integer * HeadVar__3_6)
{
  mercury__private_builtin__sorry_1_p_0((MR_String) "type_ctor_search_functor_number_map/3");
  return MR_TRUE;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__get_type_layout_1_f_0(
  MR_Word TypeCtorInfo_1)
{
  MR_Word TypeLayout_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_layout_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word TypeLayout;

	TypeCtorInfo = TypeCtorInfo_1 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeLayout = (MR_Word) &(MR_type_ctor_layout(tci));


		;}
#undef MR_PROC_LABEL
	TypeLayout_2  = TypeLayout;
}
  return TypeLayout_2;
}

MR_String MR_CALL 
mercury__rtti_implementation__type_ctor_module_name_1_f_0(
  MR_Word TypeCtorInfo_1)
{
  MR_String Name_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_module_name_1_f_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_1 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Name_2  = Name;
}
  return Name_2;
}

static void MR_CALL 
mercury__rtti_implementation__type_ctor_compare_pred_1_f_0(
  MR_Word TypeCtorInfo_1)
{
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_compare_pred_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word ComparePred;

	TypeCtorInfo = TypeCtorInfo_1 ;
		{

    MR_TypeCtorInfo tci;

    tci = (MR_TypeCtorInfo) TypeCtorInfo;
    ComparePred = (MR_Integer) tci->MR_type_ctor_compare_pred;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
mercury__rtti_implementation__type_ctor_unify_pred_1_f_0(
  MR_Word TypeCtorInfo_1)
{
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_unify_pred_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word UnifyPred;

	TypeCtorInfo = TypeCtorInfo_1 ;
		{

    MR_TypeCtorInfo tci;

    tci = (MR_TypeCtorInfo) TypeCtorInfo;
    UnifyPred = (MR_Integer) tci->MR_type_ctor_unify_pred;


		;}
#undef MR_PROC_LABEL
}
}

MR_Integer MR_CALL 
mercury__rtti_implementation__type_ctor_arity_1_f_0(
  MR_Word TypeCtorInfo_1)
{
  MR_Integer Arity_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_arity_1_f_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo_1 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity_2  = Arity;
}
  return Arity_2;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0(
  MR_Word TypeInfo_4,
  MR_Integer Index_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index_as_pti");
  HeadVar__3_3 = (MR_Word) (TypeInfo_4);
  return HeadVar__3_3;
}

static MR_String MR_CALL 
mercury__rtti_implementation__get_target_lang_rep_1_f_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(HeadVar__1_1);
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mercury__rtti_implementation__same_pointer_value_untyped_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word TypeInfo_for_U_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) HeadVar__1_1 ;
	T2 = (MR_Word) HeadVar__2_2 ;
		{

    SUCCESS_INDICATOR = (T1 == T2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation__get_arg_type_info_2_9_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word TypeInfoParams_10,
  MR_Word TypeInfo_11,
  MR_Box Term_12,
  MR_Word FunctorDesc_13,
  MR_Integer Offset_14,
  MR_Integer I_15,
  MR_Integer Max_16,
  MR_Word STATE_VARIABLE_ArgTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_ArgTypeInfo_21)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(I_15, Max_16, STATE_VARIABLE_ArgTypeInfo_0_20, STATE_VARIABLE_ArgTypeInfo_21);
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(
  MR_Integer I_15,
  MR_Integer Max_16,
  MR_Word STATE_VARIABLE_ArgTypeInfo_0_20,
  MR_Word * STATE_VARIABLE_ArgTypeInfo_21)
{
  MR_bool succeeded = (I_15 < Max_16);

  if (succeeded)
    {
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_pti_from_type_info_index");
      return;
    }
  else
    *STATE_VARIABLE_ArgTypeInfo_21 = STATE_VARIABLE_ArgTypeInfo_0_20;
}

void MR_CALL 
mercury__rtti_implementation__univ_named_arg_2_7_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Box Term_8,
  MR_Word TypeInfo_9,
  MR_Word TypeCtorInfo_10,
  MR_Word TypeCtorRep_11,
  MR_Word NonCanon_12,
  MR_String Name_13,
  MR_Word * MaybeArgument_14)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_50_7_p_2(TypeInfo_for_T_35, Term_8, TypeInfo_9, TypeCtorRep_11, Name_13, MaybeArgument_14);
}

void MR_CALL 
mercury__rtti_implementation__univ_named_arg_2_7_p_1(
  MR_Word TypeInfo_for_T_35,
  MR_Box Term_8,
  MR_Word TypeInfo_9,
  MR_Word TypeCtorInfo_10,
  MR_Word TypeCtorRep_11,
  MR_Word NonCanon_12,
  MR_String Name_13,
  MR_Word * MaybeArgument_14)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_49_7_p_1(TypeInfo_for_T_35, Term_8, TypeInfo_9, TypeCtorRep_11, Name_13, MaybeArgument_14);
}

void MR_CALL 
mercury__rtti_implementation__univ_named_arg_2_7_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Box Term_8,
  MR_Word TypeInfo_9,
  MR_Word TypeCtorInfo_10,
  MR_Word TypeCtorRep_11,
  MR_Word NonCanon_12,
  MR_String Name_13,
  MR_Word * MaybeArgument_14)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_48_7_p_0(TypeInfo_for_T_35, Term_8, TypeInfo_9, TypeCtorRep_11, Name_13, MaybeArgument_14);
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_1(
  MR_Word TypeInfo_for_T_151,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_49_9_p_1(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, Functor_15, Ordinal_16, Arity_17, Arguments_18);
}

static MR_Word MR_CALL 
mercury__rtti_implementation__create_pseudo_type_info_2_f_0(
  MR_Word TypeInfo_4,
  MR_Word PseudoTypeInfo_5)
{
  MR_Word ArgPseudoTypeInfo_6;

  mercury__private_builtin__sorry_1_p_0((MR_String) "is_exist_pseudo_type_info/2");
  return ArgPseudoTypeInfo_6;
}

static void MR_CALL 
mercury__rtti_implementation__compare_pseudo_type_info_args_3_p_0(
  MR_Word * Res_4,
  MR_Word Args1_5,
  MR_Word Args2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Args1_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((Args2_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *Res_4 = (MR_Integer) 0;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.compare_pseudo_type_info_args\'/3", (MR_String) "argument list mismatch");
          return;
        }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, Args1_5, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, Args1_5, (MR_Integer) 0))));

      if ((Args2_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.compare_pseudo_type_info_args\'/3", (MR_String) "argument list mismatch");
          return;
        }
      else
      {
        MR_Word H2_9 = ((MR_Word) ((MR_hl_field(1, Args2_6, (MR_Integer) 0))));
        MR_Word T2_10 = ((MR_Word) ((MR_hl_field(1, Args2_6, (MR_Integer) 1))));
        MR_Word ResPTI_11;

        mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0(&ResPTI_11, Var_21, H2_9);
        switch (ResPTI_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *Res_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            {
              MR_Word next_value_of_Args1_5 = Var_20;
              MR_Word next_value_of_Args2_6 = T2_10;

              // direct tailcall eliminated
              ;
              Args1_5 = next_value_of_Args1_5;
              Args2_6 = next_value_of_Args2_6;
              continue;
            }
            break;
          case (MR_Integer) 2:
            *Res_4 = (MR_Integer) 2;
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0(
  MR_Word * Res_4,
  MR_Word PTI1_5,
  MR_Word PTI2_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) ((MR_Box) (PTI1_5)) ;
	T2 = (MR_Word) ((MR_Box) (PTI2_6)) ;
		{

    SUCCESS_INDICATOR = (T1 == T2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *Res_4 = (MR_Integer) 0;
  else
  {
    MR_Word NewPTI1_7;
    MR_Word NewPTI2_8;

    NewPTI1_7 = mercury__rtti_implementation__collapse_equivalences_pseudo_1_f_0(PTI1_5);
    NewPTI2_8 = mercury__rtti_implementation__collapse_equivalences_pseudo_1_f_0(PTI2_6);
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) ((MR_Box) (NewPTI1_7)) ;
	T2 = (MR_Word) ((MR_Box) (NewPTI2_8)) ;
		{

    SUCCESS_INDICATOR = (T1 == T2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *Res_4 = (MR_Integer) 0;
    else
    {
      MR_Integer VarNum2_10;
      MR_String Var_30;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        {
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "pseudo_type_info_is_variable");
          return;
        }
        succeeded = MR_TRUE;
      }
      else
      {
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      }
      if (succeeded)
      {
        VarNum2_10 = (MR_Integer) -1;
        Var_30 = (MR_String) "pseudo_type_info_is_variable";
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", Var_30);
            return;
          }
          succeeded = MR_TRUE;
        }
        else
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        }
      }
      if (succeeded)
      {
        succeeded = ((MR_Integer) -1 < VarNum2_10);
        if (succeeded)
          *Res_4 = (MR_Integer) 1;
        else
        {
          succeeded = ((MR_Integer) -1 == VarNum2_10);
          if (succeeded)
            *Res_4 = (MR_Integer) 0;
          else
            *Res_4 = (MR_Integer) 2;
        }
      }
      else
      {
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "pseudo_type_info_is_variable");
            return;
          }
          succeeded = MR_TRUE;
        }
        else
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        }
        if (succeeded)
          *Res_4 = (MR_Integer) 1;
        else
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            {
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "pseudo_type_info_is_variable");
              return;
            }
            succeeded = MR_TRUE;
          }
          else
          {
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_pseudo_type_infos_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          }
          if (succeeded)
            *Res_4 = (MR_Integer) 2;
          else
            {
              mercury__private_builtin__sorry_1_p_0((MR_String) "pseudo_type_ctor_and_args/3");
              return;
            }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__collapse_equivalences_pseudo_1_f_0(
  MR_Word PTI_3)
{
  MR_Word NewPTI_4;

  mercury__private_builtin__sorry_1_p_0((MR_String) "pseudo_type_ctor_and_args/3");
  return NewPTI_4;
}

static void MR_CALL 
mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0(
  MR_Integer Loc_6,
  MR_Integer Arity_7,
  MR_Word * Result_8,
  MR_Word TypeInfoA_9,
  MR_Word TypeInfoB_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Loc_6 > Arity_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Result_8 = (MR_Integer) 0;
    else
    {
      MR_Word SubTypeInfoA_11;
      MR_Word SubTypeInfoB_12;
      MR_Word SubResult_13;
      MR_Word TypeCtorInfo1_16;
      MR_Word TypeCtorInfo2_17;
      MR_Word ModNameRes_18;
      MR_String Var_23;
      MR_String Var_24;
      MR_Integer Var_35;

      SubTypeInfoA_11 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(TypeInfoA_9, Loc_6);
      SubTypeInfoB_12 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(TypeInfoB_10, Loc_6);
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = SubTypeInfoA_11 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo1_16  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = SubTypeInfoB_12 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo2_17  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_16 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_23  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_17 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_24  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_23 ;
	S2 = Var_24 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_35  = Res;
}
      succeeded = (Var_35 < (MR_Integer) 0);
      if (succeeded)
        ModNameRes_18 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_35 == (MR_Integer) 0);
        if (succeeded)
          ModNameRes_18 = (MR_Integer) 0;
        else
          ModNameRes_18 = (MR_Integer) 2;
      }
      switch (ModNameRes_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          SubResult_13 = ModNameRes_18;
          break;
        case (MR_Integer) 0:
          {
            MR_Word NameRes_19;
            MR_String Var_25;
            MR_String Var_26;
            MR_Integer Var_37;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_16 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_25  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_17 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_26  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_25 ;
	S2 = Var_26 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_37  = Res;
}
            succeeded = (Var_37 < (MR_Integer) 0);
            if (succeeded)
              NameRes_19 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_37 == (MR_Integer) 0);
              if (succeeded)
                NameRes_19 = (MR_Integer) 0;
              else
                NameRes_19 = (MR_Integer) 2;
            }
            switch (NameRes_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                SubResult_13 = NameRes_19;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorRep_39;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo1_16 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_39  = TypeCtorRep;
}
                  switch (TypeCtorRep_39) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 7:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 13:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 31:
                      succeeded = MR_TRUE;
                      break;
                  }
                  if (succeeded)
                    {
                      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
                      return;
                    }
                  else
                  {
                    MR_Integer Arity1_29;
                    MR_Integer Arity2_30;
                    MR_Word ArityRes_31;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo1_16 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity1_29  = Arity;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo2_17 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity2_30  = Arity;
}
                    succeeded = (Arity1_29 < Arity2_30);
                    if (succeeded)
                      ArityRes_31 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Arity1_29 == Arity2_30);
                      if (succeeded)
                        ArityRes_31 = (MR_Integer) 0;
                      else
                        ArityRes_31 = (MR_Integer) 2;
                    }
                    switch (ArityRes_31) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        SubResult_13 = ArityRes_31;
                        break;
                      case (MR_Integer) 0:
                        mercury__rtti_implementation__compare_type_info_args_5_p_0((MR_Integer) 1, Arity1_29, &SubResult_13, SubTypeInfoA_11, SubTypeInfoB_12);
                        break;
                    }
                  }
                }
                break;
            }
          }
          break;
      }
      switch (SubResult_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Result_8 = SubResult_13;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Loc_6 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Loc_6 = Var_14;

            // direct tailcall eliminated
            ;
            Loc_6 = next_value_of_Loc_6;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__rtti_implementation__compare_type_ctor_infos_3_p_0(
  MR_Word * Res_4,
  MR_Word TypeCtorInfo1_5,
  MR_Word TypeCtorInfo2_6)
{
  MR_bool succeeded;
  MR_Word ModNameRes_7;
  MR_String Var_11;
  MR_String Var_12;
  MR_Integer Var_17;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_11  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_6 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_12  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_11 ;
	S2 = Var_12 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_17  = Res;
}
  succeeded = (Var_17 < (MR_Integer) 0);
  if (succeeded)
    ModNameRes_7 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_17 == (MR_Integer) 0);
    if (succeeded)
      ModNameRes_7 = (MR_Integer) 0;
    else
      ModNameRes_7 = (MR_Integer) 2;
  }
  switch (ModNameRes_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Res_4 = ModNameRes_7;
      break;
    case (MR_Integer) 0:
      {
        MR_Word NameRes_8;
        MR_String Var_13;
        MR_String Var_14;
        MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_13  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_6 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_14  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_13 ;
	S2 = Var_14 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
        succeeded = (Var_19 < (MR_Integer) 0);
        if (succeeded)
          NameRes_8 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 == (MR_Integer) 0);
          if (succeeded)
            NameRes_8 = (MR_Integer) 0;
          else
            NameRes_8 = (MR_Integer) 2;
        }
        switch (NameRes_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *Res_4 = NameRes_8;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Arity1_9;
              MR_Integer Arity2_10;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo1_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity1_9  = Arity;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_ctor_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo2_6 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity2_10  = Arity;
}
              succeeded = (Arity1_9 < Arity2_10);
              if (succeeded)
                *Res_4 = (MR_Integer) 1;
              else
              {
                succeeded = (Arity1_9 == Arity2_10);
                if (succeeded)
                  *Res_4 = (MR_Integer) 0;
                else
                  *Res_4 = (MR_Integer) 2;
              }
            }
            break;
        }
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation__univ_named_arg_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Word * Argument_8)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_50_4_p_2(TypeInfo_for_T_13, Term_5, Name_7, Argument_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_50_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Word * Argument_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_9;
  MR_Word TypeCtorInfo_10;
  MR_Word TypeCtorRep_11;
  MR_Word MaybeArgument_12;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_13 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_9  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_50_4_p_2

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_9 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_10  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_50_4_p_2

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_10 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_11  = TypeCtorRep;
}
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_50_7_p_2(TypeInfo_for_T_13, Term_5, TypeInfo_9, TypeCtorRep_11, Name_7, &MaybeArgument_12);
  succeeded = (MaybeArgument_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *Argument_8 = ((MR_Word) ((MR_hl_field(1, MaybeArgument_12, (MR_Integer) 0))));
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_50_7_p_2(
  MR_Word TypeInfo_for_T_35,
  MR_Box Term_8,
  MR_Word TypeInfo_9,
  MR_Word TypeCtorRep_11,
  MR_String Name_13,
  MR_Word * MaybeArgument_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (TypeCtorRep_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 19:
      case (MR_Integer) 35:
      case (MR_Integer) 44:
      case (MR_Integer) 16:
      case (MR_Integer) 10:
      case (MR_Integer) 22:
      case (MR_Integer) 43:
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 6:
      case (MR_Integer) 30:
      case (MR_Integer) 11:
      case (MR_Integer) 38:
      case (MR_Integer) 45:
      case (MR_Integer) 46:
      case (MR_Integer) 7:
      case (MR_Integer) 21:
      case (MR_Integer) 8:
      case (MR_Integer) 49:
      case (MR_Integer) 51:
      case (MR_Integer) 53:
      case (MR_Integer) 47:
      case (MR_Integer) 23:
      case (MR_Integer) 4:
      case (MR_Integer) 28:
      case (MR_Integer) 29:
      case (MR_Integer) 5:
      case (MR_Integer) 13:
      case (MR_Integer) 42:
      case (MR_Integer) 24:
      case (MR_Integer) 25:
      case (MR_Integer) 39:
      case (MR_Integer) 32:
      case (MR_Integer) 33:
      case (MR_Integer) 40:
      case (MR_Integer) 41:
      case (MR_Integer) 12:
      case (MR_Integer) 14:
      case (MR_Integer) 20:
      case (MR_Integer) 27:
      case (MR_Integer) 26:
      case (MR_Integer) 31:
      case (MR_Integer) 37:
      case (MR_Integer) 34:
      case (MR_Integer) 36:
      case (MR_Integer) 18:
      case (MR_Integer) 17:
      case (MR_Integer) 9:
      case (MR_Integer) 50:
      case (MR_Integer) 52:
      case (MR_Integer) 54:
      case (MR_Integer) 48:
        *MaybeArgument_14 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_50_7_p_2

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            {
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
              return;
            }
          {
            mercury__private_builtin__sorry_1_p_0((MR_String) "index_or_search_ptag_layout");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          // direct tailcall eliminated
          ;
          TypeCtorRep_11 = (MR_Integer) 2;
          continue;
        }
        break;
      case (MR_Integer) 55:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "unknown type_ctor rep");
          return;
        }
        break;
      case (MR_Integer) 15:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "cannot deconstruct void types");
          return;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation__univ_named_arg_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Word * Argument_8)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_49_4_p_1(TypeInfo_for_T_13, Term_5, Name_7, Argument_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_49_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Word * Argument_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_9;
  MR_Word TypeCtorInfo_10;
  MR_Word TypeCtorRep_11;
  MR_Word MaybeArgument_12;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_13 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_9  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_49_4_p_1

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_9 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_10  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_49_4_p_1

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_10 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_11  = TypeCtorRep;
}
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_49_7_p_1(TypeInfo_for_T_13, Term_5, TypeInfo_9, TypeCtorRep_11, Name_7, &MaybeArgument_12);
  succeeded = (MaybeArgument_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *Argument_8 = ((MR_Word) ((MR_hl_field(1, MaybeArgument_12, (MR_Integer) 0))));
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_49_7_p_1(
  MR_Word TypeInfo_for_T_35,
  MR_Box Term_8,
  MR_Word TypeInfo_9,
  MR_Word TypeCtorRep_11,
  MR_String Name_13,
  MR_Word * MaybeArgument_14)
{
  MR_bool succeeded;

  switch (TypeCtorRep_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 19:
    case (MR_Integer) 35:
    case (MR_Integer) 44:
    case (MR_Integer) 16:
    case (MR_Integer) 10:
    case (MR_Integer) 22:
    case (MR_Integer) 43:
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 6:
    case (MR_Integer) 30:
    case (MR_Integer) 11:
    case (MR_Integer) 38:
    case (MR_Integer) 45:
    case (MR_Integer) 46:
    case (MR_Integer) 7:
    case (MR_Integer) 21:
    case (MR_Integer) 8:
    case (MR_Integer) 49:
    case (MR_Integer) 51:
    case (MR_Integer) 53:
    case (MR_Integer) 47:
    case (MR_Integer) 23:
    case (MR_Integer) 4:
    case (MR_Integer) 28:
    case (MR_Integer) 29:
    case (MR_Integer) 5:
    case (MR_Integer) 13:
    case (MR_Integer) 42:
    case (MR_Integer) 24:
    case (MR_Integer) 25:
    case (MR_Integer) 39:
    case (MR_Integer) 32:
    case (MR_Integer) 33:
    case (MR_Integer) 40:
    case (MR_Integer) 41:
    case (MR_Integer) 12:
    case (MR_Integer) 14:
    case (MR_Integer) 20:
    case (MR_Integer) 27:
    case (MR_Integer) 26:
    case (MR_Integer) 31:
    case (MR_Integer) 37:
    case (MR_Integer) 34:
    case (MR_Integer) 36:
    case (MR_Integer) 18:
    case (MR_Integer) 17:
    case (MR_Integer) 9:
    case (MR_Integer) 50:
    case (MR_Integer) 52:
    case (MR_Integer) 54:
    case (MR_Integer) 48:
      *MaybeArgument_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_49_7_p_1

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          {
            mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
            return;
          }
        {
          mercury__private_builtin__sorry_1_p_0((MR_String) "index_or_search_ptag_layout");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      *MaybeArgument_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 55:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "unknown type_ctor rep");
        return;
      }
      break;
    case (MR_Integer) 15:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "cannot deconstruct void types");
        return;
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation__univ_named_arg_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_5,
  MR_Word NonCanon_6,
  MR_String Name_7,
  MR_Word * Argument_8)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_48_4_p_0(TypeInfo_for_T_13, Term_5, Name_7, Argument_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_48_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box Term_5,
  MR_String Name_7,
  MR_Word * Argument_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_9;
  MR_Word TypeCtorInfo_10;
  MR_Word TypeCtorRep_11;
  MR_Word MaybeArgument_12;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_13 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_9  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_48_4_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_9 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_10  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_51_93_95_48_4_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_10 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_11  = TypeCtorRep;
}
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_48_7_p_0(TypeInfo_for_T_13, Term_5, TypeInfo_9, TypeCtorRep_11, Name_7, &MaybeArgument_12);
  succeeded = (MaybeArgument_12 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *Argument_8 = ((MR_Word) ((MR_hl_field(1, MaybeArgument_12, (MR_Integer) 0))));
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_48_7_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Box Term_8,
  MR_Word TypeInfo_9,
  MR_Word TypeCtorRep_11,
  MR_String Name_13,
  MR_Word * MaybeArgument_14)
{
  MR_bool succeeded;

  switch (TypeCtorRep_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 19:
    case (MR_Integer) 35:
    case (MR_Integer) 44:
    case (MR_Integer) 16:
    case (MR_Integer) 10:
    case (MR_Integer) 22:
    case (MR_Integer) 43:
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 6:
    case (MR_Integer) 30:
    case (MR_Integer) 11:
    case (MR_Integer) 38:
    case (MR_Integer) 45:
    case (MR_Integer) 46:
    case (MR_Integer) 7:
    case (MR_Integer) 21:
    case (MR_Integer) 8:
    case (MR_Integer) 49:
    case (MR_Integer) 51:
    case (MR_Integer) 53:
    case (MR_Integer) 47:
    case (MR_Integer) 23:
    case (MR_Integer) 4:
    case (MR_Integer) 28:
    case (MR_Integer) 29:
    case (MR_Integer) 5:
    case (MR_Integer) 13:
    case (MR_Integer) 42:
    case (MR_Integer) 24:
    case (MR_Integer) 25:
    case (MR_Integer) 39:
    case (MR_Integer) 32:
    case (MR_Integer) 33:
    case (MR_Integer) 40:
    case (MR_Integer) 41:
    case (MR_Integer) 12:
    case (MR_Integer) 14:
    case (MR_Integer) 20:
    case (MR_Integer) 27:
    case (MR_Integer) 26:
    case (MR_Integer) 31:
    case (MR_Integer) 37:
    case (MR_Integer) 34:
    case (MR_Integer) 36:
    case (MR_Integer) 18:
    case (MR_Integer) 17:
    case (MR_Integer) 9:
    case (MR_Integer) 50:
    case (MR_Integer) 52:
    case (MR_Integer) 54:
    case (MR_Integer) 48:
      *MaybeArgument_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_52_44_32_54_93_95_48_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          {
            mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
            return;
          }
        {
          mercury__private_builtin__sorry_1_p_0((MR_String) "index_or_search_ptag_layout");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "attempt to deconstruct noncanonical term");
        return;
      }
      break;
    case (MR_Integer) 55:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "unknown type_ctor rep");
        return;
      }
      break;
    case (MR_Integer) 15:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "cannot deconstruct void types");
        return;
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation__functor_number_cc_3_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Box Term_4,
  MR_Integer * FunctorNumber_5,
  MR_Integer * Arity_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7;
  MR_Word TypeCtorInfo_8;
  MR_Word TypeCtorRep_9;
  MR_Integer Ordinal_10;
  MR_String Var_19;
  MR_String _Functor_11;
  MR_Word _Arguments_12;

{
#define MR_PROC_LABEL mercury__rtti_implementation__functor_number_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_16 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_7  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__functor_number_cc_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_7 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_8  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__functor_number_cc_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_8 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_9  = TypeCtorRep;
}
  mercury__rtti_implementation__deconstruct_2_9_p_2(TypeInfo_for_T_16, Term_4, TypeInfo_7, TypeCtorInfo_8, TypeCtorRep_9, (MR_Integer) 2, &_Functor_11, &Ordinal_10, Arity_6, &_Arguments_12);
  succeeded = (Ordinal_10 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_19 = (MR_String) "type_ctor_search_functor_number_map/3";
    mercury__private_builtin__sorry_1_p_0(Var_19);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_2(
  MR_Word TypeInfo_for_T_151,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, Functor_15, Ordinal_16, Arity_17, Arguments_18);
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_3(
  MR_Word TypeInfo_for_T_19,
  MR_Box Term_7,
  MR_Word NonCanon_8,
  MR_String * Functor_9,
  MR_Integer * FunctorNumber_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_13;
  MR_Word TypeCtorInfo_14;
  MR_Word TypeCtorRep_15;
  MR_Integer Ordinal_16;
  MR_String Var_21;

{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_13  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_3

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_13 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_14  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_3

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_14 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_15  = TypeCtorRep;
}
  mercury__rtti_implementation__deconstruct_2_9_p_3(TypeInfo_for_T_19, Term_7, TypeInfo_13, TypeCtorInfo_14, TypeCtorRep_15, NonCanon_8, Functor_9, &Ordinal_16, Arity_11, Arguments_12);
  succeeded = (Ordinal_16 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_21 = (MR_String) "type_ctor_search_functor_number_map/3";
    {
      mercury__private_builtin__sorry_1_p_0(Var_21);
      return;
    }
    succeeded = MR_TRUE;
  }
  *FunctorNumber_10 = (MR_Integer) 0;
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_3(
  MR_Word TypeInfo_for_T_151,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (TypeCtorRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 19:
        {
          MR_Word TypeInfo_175_175;
          MR_Word TypeInfo_177_177;
          MR_Word Args_58;
          MR_ArrayPtr Array_61;
          MR_Word Var_120;
          MR_Word Var_57;
          MR_Word ElemType_59;
          MR_Word Var_121;
          MR_Box conv0_Array_61;

          Var_120 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_151);
          mercury__type_desc__type_ctor_and_args_3_p_0(Var_120, &Var_57, &Args_58);
          succeeded = (Args_58 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ElemType_59 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 0))));
            Var_121 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 1))));
            succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
            mercury__type_desc__has_type_2_p_0(&TypeInfo_175_175, ElemType_59);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
              return;
            }
          {
            TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_177_177, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
            MR_hl_field(0, TypeInfo_177_177, 1) = ((MR_Box) (TypeInfo_175_175));
          }
          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, TypeInfo_177_177, Term_10, &conv0_Array_61);
          Array_61 = ((MR_ArrayPtr) (conv0_Array_61));
          *Functor_15 = (MR_String) "<<array>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = mercury__array__size_1_f_0(TypeInfo_175_175, (MR_ArrayPtr) (Array_61));
          *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(TypeInfo_175_175, Array_61, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 35:
        {
          *Functor_15 = (MR_String) "<<basetypeclassinfo>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 44:
        {
          MR_Box Bitmap_47;
          MR_String Var_107;
          MR_String String_143;
          MR_Box conv1_Bitmap_47;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), Term_10, &conv1_Bitmap_47);
          Bitmap_47 = ((MR_Box) (conv1_Bitmap_47));
          String_143 = mercury__bitmap__to_string_1_f_0(Bitmap_47);
          Var_107 = mercury__string__f_43_43_2_f_0(String_143, (MR_String) "\"");
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_107);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 16:
        {
          MR_Word CPtr_56;
          MR_Box conv2_CPtr_56;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv2_CPtr_56);
          CPtr_56 = ((MR_Word) (conv2_CPtr_56));
          *Functor_15 = mercury__string__c_pointer_to_string_1_f_0(CPtr_56);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 10:
        {
          MR_Char Char_41;
          MR_Box conv3_Char_41;
          MR_String EscapedChar_42;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Term_10, &conv3_Char_41);
          Char_41 = ((MR_Char) (MR_Word) conv3_Char_41);
          succeeded = mercury__rtti_implementation__quote_special_escape_char_2_p_0(Char_41, &EscapedChar_42);
          if (succeeded)
            *Functor_15 = EscapedChar_42;
          else
          {
            succeeded = mercury__char__is_control_1_p_0(Char_41);
            if (succeeded)
            {
              MR_String OctalString0_43;
              MR_String OctalString_44;
              MR_String Var_96;
              MR_Integer Int_139;

              mercury__char__to_int_2_p_0(Char_41, &Int_139);
              mercury__string__int_to_base_string_3_p_0(Int_139, (MR_Integer) 8, &OctalString0_43);
              mercury__string__pad_left_4_p_0(OctalString0_43, (MR_Char) 48, (MR_Integer) 3, &OctalString_44);
              Var_96 = mercury__string__f_43_43_2_f_0(OctalString_44, (MR_String) "\\\'");
              *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\'\\", Var_96);
            }
            else
            {
              succeeded = mercury__char__is_surrogate_1_p_0(Char_41);
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "attempt to deconstruct surrogate code point");
                  return;
                }
              else
              {
                MR_Word Var_100;
                MR_Word Var_102;

                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_Word) (Char_41));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &mercury__rtti_implementation_scalar_common_4[0])));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
                  MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
                }
                *Functor_15 = mercury__string__from_char_list_1_f_0(Var_100);
              }
            }
          }
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 22:
        {
          *Functor_15 = (MR_String) "<<curfr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          uint8_t PTag_23;
          MR_Word PTagEntry_24;
          MR_Word SecTagLocn_25;

          PTag_23 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
          mercury__rtti_implementation__det_index_or_search_ptag_layout_3_p_0(TypeCtorInfo_12, PTag_23, &PTagEntry_24);
          SecTagLocn_25 = mercury__rtti_implementation__sectag_locn_1_f_0(PTagEntry_24);
          switch (SecTagLocn_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                *Functor_15 = (MR_String) "some_du_local_sectag";
                *Ordinal_16 = (MR_Integer) -1;
                *Arity_17 = (MR_Integer) 0;
                *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FunctorDesc_26;
                int32_t Var_68;
                int16_t Var_69;
                MR_Integer Var_71;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_26);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_26);
                Var_68 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_26);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_68);
                Var_69 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_26);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_69);
                Var_71 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_26, (MR_Integer) 0, Var_71);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FunctorDesc_182;
                int32_t Var_183;
                int16_t Var_184;
                MR_Integer Var_186;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_182);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_182);
                Var_183 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_182);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_183);
                Var_184 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_182);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_184);
                Var_186 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_182, (MR_Integer) 0, Var_186);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer SecTag_27;
                MR_Word FunctorDesc_192;
                int32_t Var_193;
                int16_t Var_194;
                MR_Integer Var_196;

                SecTag_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                mercury__rtti_implementation__det_index_or_search_sectag_functor_3_p_0(PTagEntry_24, SecTag_27, &FunctorDesc_192);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_192);
                Var_193 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_192);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_193);
                Var_194 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_192);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_194);
                Var_196 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_192, (MR_Integer) 0, Var_196);
              }
              break;
            case (MR_Integer) 4:
              {
                *Functor_15 = (MR_String) "some_du_variable_sectag";
                *Ordinal_16 = (MR_Integer) -1;
                *Arity_17 = (MR_Integer) 0;
                *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        mercury__rtti_implementation__handle_usereq_type_9_p_3(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 43:
        {
          MR_Word EnumFunctorDesc_138;

          *Ordinal_16 = (MR_Integer) 0;
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, *Ordinal_16, &EnumFunctorDesc_138);
          *Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_138);
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer EnumValue_19;
          MR_Word EnumFunctorDesc_20;

          EnumValue_19 = mercury__rtti_implementation__unsafe_get_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          mercury__rtti_implementation__det_index_or_search_enum_functor_ordinal_3_p_0(TypeCtorInfo_12, EnumValue_19, Ordinal_16);
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, *Ordinal_16, &EnumFunctorDesc_20);
          *Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_20);
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        mercury__rtti_implementation__handle_usereq_type_9_p_3(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 6:
        {
          *Functor_15 = (MR_String) "some_equiv";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 30:
        {
          MR_Word NewTypeInfo_28;
          MR_Word NewTypeCtorInfo_29;
          MR_Word NewTypeCtorRep_30;
          MR_Word next_value_of_TypeInfo_11;
          MR_Word next_value_of_TypeCtorInfo_12;
          MR_Word next_value_of_TypeCtorRep_13;

          NewTypeInfo_28 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo_11);
          NewTypeCtorInfo_29 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(NewTypeInfo_28);
          NewTypeCtorRep_30 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(NewTypeCtorInfo_29);
          // direct tailcall eliminated
          ;
          next_value_of_TypeInfo_11 = NewTypeInfo_28;
          next_value_of_TypeCtorInfo_12 = NewTypeCtorInfo_29;
          next_value_of_TypeCtorRep_13 = NewTypeCtorRep_30;
          TypeInfo_11 = next_value_of_TypeInfo_11;
          TypeCtorInfo_12 = next_value_of_TypeCtorInfo_12;
          TypeCtorRep_13 = next_value_of_TypeCtorRep_13;
          continue;
        }
        break;
      case (MR_Integer) 11:
        {
          MR_Float Float_45;
          MR_Box conv4_Float_45;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Term_10, &conv4_Float_45);
          Float_45 = MR_unbox_float(conv4_Float_45);
          *Functor_15 = mercury__string__float_to_string_1_f_0(Float_45);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 38:
        {
          MR_String TypeCtorName_63;
          MR_String TargetLangRep_64;
          MR_String Var_201;
          MR_String Var_203;
          MR_String Var_204;

          TypeCtorName_63 = mercury__rtti_implementation__type_ctor_name_1_f_0(TypeCtorInfo_12);
          TargetLangRep_64 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(Term_10);
          Var_201 = mercury__string__f_43_43_2_f_0(TargetLangRep_64, (MR_String) ")>>");
          Var_203 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_201);
          Var_204 = mercury__string__f_43_43_2_f_0(TypeCtorName_63, Var_203);
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "<<foreign(", Var_204);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 45:
        {
          MR_Word TypeFunctors_21;
          MR_Word ForeignEnumFunctorDesc_22;
          MR_Integer Var_65;

          TypeFunctors_21 = mercury__rtti_implementation__get_type_ctor_functors_1_f_0(TypeCtorInfo_12);
          Var_65 = mercury__rtti_implementation__unsafe_get_foreign_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__foreign_enum_functor_desc_3_f_0(TypeCtorRep_13, Var_65, TypeFunctors_21);
          *Functor_15 = mercury__rtti_implementation__foreign_enum_functor_name_1_f_0(ForeignEnumFunctorDesc_22);
          *Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 46:
        mercury__rtti_implementation__handle_usereq_type_9_p_3(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 7:
        {
          *Functor_15 = (MR_String) "<<function>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 21:
        {
          *Functor_15 = (MR_String) "<<hp>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Integer Int_31;
          MR_Box conv5_Int_31;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Term_10, &conv5_Int_31);
          Int_31 = ((MR_Integer) (conv5_Int_31));
          *Functor_15 = mercury__string__int_to_string_1_f_0(Int_31);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 49:
        {
          int16_t Int16_35;
          MR_String Var_80;
          MR_Box conv6_Int16_35;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), Term_10, &conv6_Int16_35);
          Int16_35 = ((int16_t) (MR_Word) conv6_Int16_35);
          Var_80 = mercury__string__int16_to_string_1_f_0(Int16_35);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) "i16");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 51:
        {
          int32_t Int32_37;
          MR_String Var_84;
          MR_Box conv7_Int32_37;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), Term_10, &conv7_Int32_37);
          Int32_37 = ((int32_t) (MR_Word) conv7_Int32_37);
          Var_84 = mercury__string__int32_to_string_1_f_0(Int32_37);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) "i32");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 53:
        {
          int64_t Int64_39;
          MR_String Var_88;
          MR_Box conv8_Int64_39;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), Term_10, &conv8_Int64_39);
          Int64_39 = MR_unbox_int64(conv8_Int64_39);
          Var_88 = mercury__string__int64_to_string_1_f_0(Int64_39);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) "i64");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 47:
        {
          int8_t Int8_33;
          MR_String Var_76;
          MR_Box conv9_Int8_33;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), Term_10, &conv9_Int8_33);
          Int8_33 = ((int8_t) (MR_Word) conv9_Int8_33);
          Var_76 = mercury__string__int8_to_string_1_f_0(Int8_33);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) "i8");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 23:
        {
          *Functor_15 = (MR_String) "<<maxfr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 4:
        {
          *Functor_15 = (MR_String) "some_notag";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 28:
        {
          *Functor_15 = (MR_String) "some_notag_ground";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 29:
        mercury__rtti_implementation__handle_usereq_type_9_p_3(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 5:
        mercury__rtti_implementation__handle_usereq_type_9_p_3(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 13:
        {
          *Functor_15 = (MR_String) "<<predicate>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 42:
        {
          *Functor_15 = (MR_String) "some_pseudo_type_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 24:
        {
          *Functor_15 = (MR_String) "<<redofr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 25:
        {
          *Functor_15 = (MR_String) "<<redoip>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 39:
        {
          *Functor_15 = (MR_String) "<<reference>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 32:
        {
          *Functor_15 = (MR_String) "some_reserved_addr";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 33:
        mercury__rtti_implementation__handle_usereq_type_9_p_3(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 40:
        {
          MR_String Var_119;
          MR_Word CPtr_148;
          MR_Box conv10_CPtr_148;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv10_CPtr_148);
          CPtr_148 = ((MR_Word) (conv10_CPtr_148));
          Var_119 = mercury__string__c_pointer_to_string_1_f_0(CPtr_148);
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", Var_119);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 41:
        {
          *Functor_15 = (MR_String) "<<stable_foreign>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 12:
        {
          MR_String String_46;
          MR_Box conv11_String_46;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Term_10, &conv11_String_46);
          String_46 = ((MR_String) (conv11_String_46));
          *Functor_15 = mercury__term_io__quoted_string_1_f_0(String_46);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 14:
        {
          *Functor_15 = (MR_String) "<<subgoal>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 20:
        {
          *Functor_15 = (MR_String) "<<succip>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 27:
        {
          *Functor_15 = (MR_String) "<<ticket>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 26:
        {
          *Functor_15 = (MR_String) "<<trail_ptr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 31:
        {
          MR_Word TypeArgs_49;
          MR_Word _TypeCtorInfo_48;
          MR_Integer Var_55;

          mercury__rtti_implementation__type_ctor_and_args_3_p_0(TypeInfo_11, &_TypeCtorInfo_48, &TypeArgs_49);
          *Functor_15 = (MR_String) "{}";
          *Ordinal_16 = (MR_Integer) 0;
          *Arity_17 = mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(TypeInfo_11);
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(TypeArgs_49, Arguments_18, (MR_Integer) 0, &Var_55);
        }
        break;
      case (MR_Integer) 37:
        {
          *Functor_15 = (MR_String) "some_type_ctor_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 34:
        {
          *Functor_15 = (MR_String) "some_typectorinfo";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 36:
        {
          *Functor_15 = (MR_String) "some_type_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 18:
        {
          *Functor_15 = (MR_String) "<<typeclassinfo>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 17:
        {
          *Functor_15 = (MR_String) "some_typeinfo";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 9:
        {
          MR_Unsigned UInt_32;
          MR_String Var_74;
          MR_Box conv12_UInt_32;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Term_10, &conv12_UInt_32);
          UInt_32 = ((MR_Unsigned) (conv12_UInt_32));
          Var_74 = mercury__string__uint_to_string_1_f_0(UInt_32);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) "u");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 50:
        {
          uint16_t UInt16_36;
          MR_String Var_82;
          MR_Box conv13_UInt16_36;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), Term_10, &conv13_UInt16_36);
          UInt16_36 = ((uint16_t) (MR_Word) conv13_UInt16_36);
          Var_82 = mercury__string__uint16_to_string_1_f_0(UInt16_36);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "u16");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 52:
        {
          uint32_t UInt32_38;
          MR_String Var_86;
          MR_Box conv14_UInt32_38;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Term_10, &conv14_UInt32_38);
          UInt32_38 = ((uint32_t) (MR_Word) conv14_UInt32_38);
          Var_86 = mercury__string__uint32_to_string_1_f_0(UInt32_38);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) "u32");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 54:
        {
          uint64_t UInt64_40;
          MR_String Var_90;
          MR_Box conv15_UInt64_40;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), Term_10, &conv15_UInt64_40);
          UInt64_40 = MR_unbox_uint64(conv15_UInt64_40);
          Var_90 = mercury__string__uint64_to_string_1_f_0(UInt64_40);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) "u64");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 48:
        {
          uint8_t UInt8_34;
          MR_String Var_78;
          MR_Box conv16_UInt8_34;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), Term_10, &conv16_UInt8_34);
          UInt8_34 = ((uint8_t) (MR_Word) conv16_UInt8_34);
          Var_78 = mercury__string__uint8_to_string_1_f_0(UInt8_34);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) "u8");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 55:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
          return;
        }
        break;
      case (MR_Integer) 15:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
          return;
        }
        break;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7)
{
  MR_Word HeadVar__4_8;
  MR_Integer Var_9;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_9  = Min;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
  HeadVar__4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(Var_13, HeadVar__2_6, HeadVar__3_7, Var_9, Var_10);
  return HeadVar__4_8;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__5_11 < HeadVar__4_10);
    MR_Word HeadVar__6_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_12 = HeadVar__3_9;
    else
    {
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Box Var_15;
      MR_Word Var_20;
      MR_Word next_value_of_HeadVar__3_9;
      MR_Integer next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__5_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Item;
}
      mercury__univ__type_to_univ_2_p_1(Var_19, Var_15, &Var_20);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (HeadVar__3_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__5_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    return HeadVar__6_12;
    break;
  }
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = HeadVar__4_4;
  }
  else
    {
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_tuple_subterm");
      return;
    }
}

static void MR_CALL 
mercury__rtti_implementation__handle_usereq_type_9_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  switch (NonCanon_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_31;
        MR_String Var_34;
        MR_Integer Var_37;
        MR_String Var_41;
        MR_String Var_48;
        MR_String Var_50;
        MR_String Var_51;
        MR_String Var_53;
        MR_String Var_54;

{
#define MR_PROC_LABEL mercury__rtti_implementation__handle_usereq_type_9_p_3

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_31  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__handle_usereq_type_9_p_3

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_34  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__handle_usereq_type_9_p_3

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Var_37  = Arity;
}
        mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__rtti_implementation_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_37, &Var_41);
        mercury__string__append_3_p_2(Var_41, (MR_String) ">>", &Var_48);
        mercury__string__append_3_p_2((MR_String) "/", Var_48, &Var_50);
        mercury__string__append_3_p_2(Var_34, Var_50, &Var_51);
        mercury__string__append_3_p_2((MR_String) ".", Var_51, &Var_53);
        mercury__string__append_3_p_2(Var_31, Var_53, &Var_54);
        mercury__string__append_3_p_2((MR_String) "<<", Var_54, Functor_15);
        *Ordinal_16 = (MR_Integer) -1;
        *Arity_17 = (MR_Integer) 0;
        *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.handle_usereq_type\'/9", (MR_String) "attempt to deconstruct noncanonical term");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BaseTypeCtorRep_19;

        switch (TypeCtorRep_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            BaseTypeCtorRep_19 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            BaseTypeCtorRep_19 = (MR_Integer) 0;
            break;
          case (MR_Integer) 46:
            BaseTypeCtorRep_19 = (MR_Integer) 45;
            break;
          case (MR_Integer) 29:
            BaseTypeCtorRep_19 = (MR_Integer) 28;
            break;
          case (MR_Integer) 5:
            BaseTypeCtorRep_19 = (MR_Integer) 4;
            break;
          case (MR_Integer) 33:
            BaseTypeCtorRep_19 = (MR_Integer) 32;
            break;
        }
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(TypeInfo_for_T_23, Term_10, TypeInfo_11, TypeCtorInfo_12, BaseTypeCtorRep_19, Functor_15, Ordinal_16, Arity_17, Arguments_18);
      }
      break;
  }
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Box Term_7,
  MR_Word NonCanon_8,
  MR_String * Functor_9,
  MR_Integer * FunctorNumber_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2(TypeInfo_for_T_19, Term_7, Functor_9, FunctorNumber_10, Arity_11, Arguments_12);
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Box Term_7,
  MR_String * Functor_9,
  MR_Integer * FunctorNumber_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_13;
  MR_Word TypeCtorInfo_14;
  MR_Word TypeCtorRep_15;
  MR_Integer Ordinal_16;
  MR_String Var_21;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_13  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_13 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_14  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_14 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_15  = TypeCtorRep;
}
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(TypeInfo_for_T_19, Term_7, TypeInfo_13, TypeCtorInfo_14, TypeCtorRep_15, Functor_9, &Ordinal_16, Arity_11, Arguments_12);
  succeeded = (Ordinal_16 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_21 = (MR_String) "type_ctor_search_functor_number_map/3";
    {
      mercury__private_builtin__sorry_1_p_0(Var_21);
      return;
    }
    succeeded = MR_TRUE;
  }
  *FunctorNumber_10 = (MR_Integer) 0;
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_151,
  MR_Box tscc_proc_1_input_2_Term_10,
  MR_Word tscc_proc_1_input_3_TypeInfo_11,
  MR_Word tscc_proc_1_input_4_TypeCtorInfo_12,
  MR_Word tscc_proc_1_input_5_TypeCtorRep_13,
  MR_String * tscc_output_ptr_1_Functor_15,
  MR_Integer * tscc_output_ptr_2_Ordinal_16,
  MR_Integer * tscc_output_ptr_3_Arity_17,
  MR_Word * tscc_output_ptr_4_Arguments_18)
{
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_23;
  MR_Box tscc_proc_2_input_2_Term_10;
  MR_Word tscc_proc_2_input_3_TypeInfo_11;
  MR_Word tscc_proc_2_input_4_TypeCtorInfo_12;
  MR_Word tscc_proc_2_input_5_TypeCtorRep_13;
  MR_String tscc_output_1_Functor_15;
  MR_Integer tscc_output_2_Ordinal_16;
  MR_Integer tscc_output_3_Arity_17;
  MR_Word tscc_output_4_Arguments_18;

  // The code for TSCC PROC 1: pred rtti_implementation.UnusedArgs__pred__deconstruct_2__[6]_2/9-2.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtti_implementation.UnusedArgs__pred__deconstruct_2__[6]_2/9-2
  ;
  // proc 2 in TSCC: pred rtti_implementation.UnusedArgs__pred__handle_usereq_type__[6]_2/9-2
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_151 = tscc_proc_1_input_1_TypeInfo_for_T_151;
    MR_Box Term_10 = tscc_proc_1_input_2_Term_10;
    MR_Word TypeInfo_11 = tscc_proc_1_input_3_TypeInfo_11;
    MR_Word TypeCtorInfo_12 = tscc_proc_1_input_4_TypeCtorInfo_12;
    MR_Word TypeCtorRep_13 = tscc_proc_1_input_5_TypeCtorRep_13;
    MR_String Functor_15;
    MR_Integer Ordinal_16;
    MR_Integer Arity_17;
    MR_Word Arguments_18;
    MR_bool succeeded;

    switch (TypeCtorRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 19:
        {
          MR_Word TypeInfo_175_175;
          MR_Word TypeInfo_177_177;
          MR_Word Args_58;
          MR_ArrayPtr Array_61;
          MR_Word Var_120;
          MR_Word Var_57;
          MR_Word ElemType_59;
          MR_Word Var_121;
          MR_Box conv0_Array_61;

          Var_120 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_151);
          mercury__type_desc__type_ctor_and_args_3_p_0(Var_120, &Var_57, &Args_58);
          succeeded = (Args_58 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ElemType_59 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 0))));
            Var_121 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 1))));
            succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
            mercury__type_desc__has_type_2_p_0(&TypeInfo_175_175, ElemType_59);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
              return;
            }
          {
            TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_177_177, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
            MR_hl_field(0, TypeInfo_177_177, 1) = ((MR_Box) (TypeInfo_175_175));
          }
          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, TypeInfo_177_177, Term_10, &conv0_Array_61);
          Array_61 = ((MR_ArrayPtr) (conv0_Array_61));
          Functor_15 = (MR_String) "<<array>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = mercury__array__size_1_f_0(TypeInfo_175_175, (MR_ArrayPtr) (Array_61));
          Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(TypeInfo_175_175, Array_61, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 35:
        {
          Functor_15 = (MR_String) "<<basetypeclassinfo>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 44:
        {
          MR_Box Bitmap_47;
          MR_String Var_107;
          MR_String String_143;
          MR_Box conv1_Bitmap_47;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), Term_10, &conv1_Bitmap_47);
          Bitmap_47 = ((MR_Box) (conv1_Bitmap_47));
          String_143 = mercury__bitmap__to_string_1_f_0(Bitmap_47);
          Var_107 = mercury__string__f_43_43_2_f_0(String_143, (MR_String) "\"");
          Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_107);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 16:
        {
          MR_Word CPtr_56;
          MR_Box conv2_CPtr_56;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv2_CPtr_56);
          CPtr_56 = ((MR_Word) (conv2_CPtr_56));
          Functor_15 = mercury__string__c_pointer_to_string_1_f_0(CPtr_56);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 10:
        {
          MR_Char Char_41;
          MR_Box conv3_Char_41;
          MR_String EscapedChar_42;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Term_10, &conv3_Char_41);
          Char_41 = ((MR_Char) (MR_Word) conv3_Char_41);
          succeeded = mercury__rtti_implementation__quote_special_escape_char_2_p_0(Char_41, &EscapedChar_42);
          if (succeeded)
            Functor_15 = EscapedChar_42;
          else
          {
            succeeded = mercury__char__is_control_1_p_0(Char_41);
            if (succeeded)
            {
              MR_String OctalString0_43;
              MR_String OctalString_44;
              MR_String Var_96;
              MR_Integer Int_139;

              mercury__char__to_int_2_p_0(Char_41, &Int_139);
              mercury__string__int_to_base_string_3_p_0(Int_139, (MR_Integer) 8, &OctalString0_43);
              mercury__string__pad_left_4_p_0(OctalString0_43, (MR_Char) 48, (MR_Integer) 3, &OctalString_44);
              Var_96 = mercury__string__f_43_43_2_f_0(OctalString_44, (MR_String) "\\\'");
              Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\'\\", Var_96);
            }
            else
            {
              succeeded = mercury__char__is_surrogate_1_p_0(Char_41);
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "attempt to deconstruct surrogate code point");
                  return;
                }
              else
              {
                MR_Word Var_100;
                MR_Word Var_102;

                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_Word) (Char_41));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &mercury__rtti_implementation_scalar_common_4[0])));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
                  MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
                }
                Functor_15 = mercury__string__from_char_list_1_f_0(Var_100);
              }
            }
          }
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 22:
        {
          Functor_15 = (MR_String) "<<curfr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          uint8_t PTag_23;
          MR_Word PTagEntry_24;
          MR_Word SecTagLocn_25;

          PTag_23 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
          mercury__rtti_implementation__det_index_or_search_ptag_layout_3_p_0(TypeCtorInfo_12, PTag_23, &PTagEntry_24);
          SecTagLocn_25 = mercury__rtti_implementation__sectag_locn_1_f_0(PTagEntry_24);
          switch (SecTagLocn_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                Functor_15 = (MR_String) "some_du_local_sectag";
                Ordinal_16 = (MR_Integer) -1;
                Arity_17 = (MR_Integer) 0;
                Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FunctorDesc_26;
                int32_t Var_68;
                int16_t Var_69;
                MR_Integer Var_71;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_26);
                Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_26);
                Var_68 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_26);
                Ordinal_16 = mercury__int32__to_int_1_f_0(Var_68);
                Var_69 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_26);
                Arity_17 = mercury__int16__to_int_1_f_0(Var_69);
                Var_71 = (MR_Integer) ((MR_Unsigned) Arity_17 - (MR_Unsigned) 1);
                Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_26, (MR_Integer) 0, Var_71);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FunctorDesc_182;
                int32_t Var_183;
                int16_t Var_184;
                MR_Integer Var_186;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_182);
                Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_182);
                Var_183 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_182);
                Ordinal_16 = mercury__int32__to_int_1_f_0(Var_183);
                Var_184 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_182);
                Arity_17 = mercury__int16__to_int_1_f_0(Var_184);
                Var_186 = (MR_Integer) ((MR_Unsigned) Arity_17 - (MR_Unsigned) 1);
                Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_182, (MR_Integer) 0, Var_186);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer SecTag_27;
                MR_Word FunctorDesc_192;
                int32_t Var_193;
                int16_t Var_194;
                MR_Integer Var_196;

                SecTag_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                mercury__rtti_implementation__det_index_or_search_sectag_functor_3_p_0(PTagEntry_24, SecTag_27, &FunctorDesc_192);
                Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_192);
                Var_193 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_192);
                Ordinal_16 = mercury__int32__to_int_1_f_0(Var_193);
                Var_194 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_192);
                Arity_17 = mercury__int16__to_int_1_f_0(Var_194);
                Var_196 = (MR_Integer) ((MR_Unsigned) Arity_17 - (MR_Unsigned) 1);
                Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_192, (MR_Integer) 0, Var_196);
              }
              break;
            case (MR_Integer) 4:
              {
                Functor_15 = (MR_String) "some_du_variable_sectag";
                Ordinal_16 = (MR_Integer) -1;
                Arity_17 = (MR_Integer) 0;
                Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 43:
        {
          MR_Word EnumFunctorDesc_138;

          Ordinal_16 = (MR_Integer) 0;
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, Ordinal_16, &EnumFunctorDesc_138);
          Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_138);
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer EnumValue_19;
          MR_Word EnumFunctorDesc_20;

          EnumValue_19 = mercury__rtti_implementation__unsafe_get_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          mercury__rtti_implementation__det_index_or_search_enum_functor_ordinal_3_p_0(TypeCtorInfo_12, EnumValue_19, &Ordinal_16);
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, Ordinal_16, &EnumFunctorDesc_20);
          Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_20);
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 6:
        {
          Functor_15 = (MR_String) "some_equiv";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 30:
        {
          MR_Word NewTypeInfo_28;
          MR_Word NewTypeCtorInfo_29;
          MR_Word NewTypeCtorRep_30;
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_1_input_2_Term_10;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_11;
          MR_Word next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;

          NewTypeInfo_28 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo_11);
          NewTypeCtorInfo_29 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(NewTypeInfo_28);
          NewTypeCtorRep_30 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(NewTypeCtorInfo_29);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151 = TypeInfo_for_T_151;
          next_value_of_tscc_proc_1_input_2_Term_10 = Term_10;
          next_value_of_tscc_proc_1_input_3_TypeInfo_11 = NewTypeInfo_28;
          next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12 = NewTypeCtorInfo_29;
          next_value_of_tscc_proc_1_input_5_TypeCtorRep_13 = NewTypeCtorRep_30;
          tscc_proc_1_input_1_TypeInfo_for_T_151 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
          tscc_proc_1_input_2_Term_10 = next_value_of_tscc_proc_1_input_2_Term_10;
          tscc_proc_1_input_3_TypeInfo_11 = next_value_of_tscc_proc_1_input_3_TypeInfo_11;
          tscc_proc_1_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
          tscc_proc_1_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 11:
        {
          MR_Float Float_45;
          MR_Box conv4_Float_45;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Term_10, &conv4_Float_45);
          Float_45 = MR_unbox_float(conv4_Float_45);
          Functor_15 = mercury__string__float_to_string_1_f_0(Float_45);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 38:
        {
          MR_String TypeCtorName_63;
          MR_String TargetLangRep_64;
          MR_String Var_201;
          MR_String Var_203;
          MR_String Var_204;

          TypeCtorName_63 = mercury__rtti_implementation__type_ctor_name_1_f_0(TypeCtorInfo_12);
          TargetLangRep_64 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(Term_10);
          Var_201 = mercury__string__f_43_43_2_f_0(TargetLangRep_64, (MR_String) ")>>");
          Var_203 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_201);
          Var_204 = mercury__string__f_43_43_2_f_0(TypeCtorName_63, Var_203);
          Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "<<foreign(", Var_204);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 45:
        {
          MR_Word TypeFunctors_21;
          MR_Word ForeignEnumFunctorDesc_22;
          MR_Integer Var_65;

          TypeFunctors_21 = mercury__rtti_implementation__get_type_ctor_functors_1_f_0(TypeCtorInfo_12);
          Var_65 = mercury__rtti_implementation__unsafe_get_foreign_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__foreign_enum_functor_desc_3_f_0(TypeCtorRep_13, Var_65, TypeFunctors_21);
          Functor_15 = mercury__rtti_implementation__foreign_enum_functor_name_1_f_0(ForeignEnumFunctorDesc_22);
          Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 46:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 7:
        {
          Functor_15 = (MR_String) "<<function>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 21:
        {
          Functor_15 = (MR_String) "<<hp>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Integer Int_31;
          MR_Box conv5_Int_31;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Term_10, &conv5_Int_31);
          Int_31 = ((MR_Integer) (conv5_Int_31));
          Functor_15 = mercury__string__int_to_string_1_f_0(Int_31);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 49:
        {
          int16_t Int16_35;
          MR_String Var_80;
          MR_Box conv6_Int16_35;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), Term_10, &conv6_Int16_35);
          Int16_35 = ((int16_t) (MR_Word) conv6_Int16_35);
          Var_80 = mercury__string__int16_to_string_1_f_0(Int16_35);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) "i16");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 51:
        {
          int32_t Int32_37;
          MR_String Var_84;
          MR_Box conv7_Int32_37;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), Term_10, &conv7_Int32_37);
          Int32_37 = ((int32_t) (MR_Word) conv7_Int32_37);
          Var_84 = mercury__string__int32_to_string_1_f_0(Int32_37);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) "i32");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 53:
        {
          int64_t Int64_39;
          MR_String Var_88;
          MR_Box conv8_Int64_39;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), Term_10, &conv8_Int64_39);
          Int64_39 = MR_unbox_int64(conv8_Int64_39);
          Var_88 = mercury__string__int64_to_string_1_f_0(Int64_39);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) "i64");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 47:
        {
          int8_t Int8_33;
          MR_String Var_76;
          MR_Box conv9_Int8_33;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), Term_10, &conv9_Int8_33);
          Int8_33 = ((int8_t) (MR_Word) conv9_Int8_33);
          Var_76 = mercury__string__int8_to_string_1_f_0(Int8_33);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) "i8");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 23:
        {
          Functor_15 = (MR_String) "<<maxfr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 4:
        {
          Functor_15 = (MR_String) "some_notag";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 28:
        {
          Functor_15 = (MR_String) "some_notag_ground";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 29:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 13:
        {
          Functor_15 = (MR_String) "<<predicate>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 42:
        {
          Functor_15 = (MR_String) "some_pseudo_type_desc";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 24:
        {
          Functor_15 = (MR_String) "<<redofr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 25:
        {
          Functor_15 = (MR_String) "<<redoip>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 39:
        {
          Functor_15 = (MR_String) "<<reference>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 32:
        {
          Functor_15 = (MR_String) "some_reserved_addr";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 33:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 40:
        {
          MR_String Var_119;
          MR_Word CPtr_148;
          MR_Box conv10_CPtr_148;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv10_CPtr_148);
          CPtr_148 = ((MR_Word) (conv10_CPtr_148));
          Var_119 = mercury__string__c_pointer_to_string_1_f_0(CPtr_148);
          Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", Var_119);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 41:
        {
          Functor_15 = (MR_String) "<<stable_foreign>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 12:
        {
          MR_String String_46;
          MR_Box conv11_String_46;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Term_10, &conv11_String_46);
          String_46 = ((MR_String) (conv11_String_46));
          Functor_15 = mercury__term_io__quoted_string_1_f_0(String_46);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 14:
        {
          Functor_15 = (MR_String) "<<subgoal>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 20:
        {
          Functor_15 = (MR_String) "<<succip>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 27:
        {
          Functor_15 = (MR_String) "<<ticket>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 26:
        {
          Functor_15 = (MR_String) "<<trail_ptr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 31:
        {
          MR_Word TypeArgs_49;
          MR_Word _TypeCtorInfo_48;
          MR_Integer Var_55;

          mercury__rtti_implementation__type_ctor_and_args_3_p_0(TypeInfo_11, &_TypeCtorInfo_48, &TypeArgs_49);
          Functor_15 = (MR_String) "{}";
          Ordinal_16 = (MR_Integer) 0;
          Arity_17 = mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(TypeInfo_11);
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(TypeArgs_49, &Arguments_18, (MR_Integer) 0, &Var_55);
        }
        break;
      case (MR_Integer) 37:
        {
          Functor_15 = (MR_String) "some_type_ctor_desc";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 34:
        {
          Functor_15 = (MR_String) "some_typectorinfo";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 36:
        {
          Functor_15 = (MR_String) "some_type_desc";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 18:
        {
          Functor_15 = (MR_String) "<<typeclassinfo>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 17:
        {
          Functor_15 = (MR_String) "some_typeinfo";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 9:
        {
          MR_Unsigned UInt_32;
          MR_String Var_74;
          MR_Box conv12_UInt_32;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Term_10, &conv12_UInt_32);
          UInt_32 = ((MR_Unsigned) (conv12_UInt_32));
          Var_74 = mercury__string__uint_to_string_1_f_0(UInt_32);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) "u");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 50:
        {
          uint16_t UInt16_36;
          MR_String Var_82;
          MR_Box conv13_UInt16_36;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), Term_10, &conv13_UInt16_36);
          UInt16_36 = ((uint16_t) (MR_Word) conv13_UInt16_36);
          Var_82 = mercury__string__uint16_to_string_1_f_0(UInt16_36);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "u16");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 52:
        {
          uint32_t UInt32_38;
          MR_String Var_86;
          MR_Box conv14_UInt32_38;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Term_10, &conv14_UInt32_38);
          UInt32_38 = ((uint32_t) (MR_Word) conv14_UInt32_38);
          Var_86 = mercury__string__uint32_to_string_1_f_0(UInt32_38);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) "u32");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 54:
        {
          uint64_t UInt64_40;
          MR_String Var_90;
          MR_Box conv15_UInt64_40;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), Term_10, &conv15_UInt64_40);
          UInt64_40 = MR_unbox_uint64(conv15_UInt64_40);
          Var_90 = mercury__string__uint64_to_string_1_f_0(UInt64_40);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) "u64");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 48:
        {
          uint8_t UInt8_34;
          MR_String Var_78;
          MR_Box conv16_UInt8_34;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), Term_10, &conv16_UInt8_34);
          UInt8_34 = ((uint8_t) (MR_Word) conv16_UInt8_34);
          Var_78 = mercury__string__uint8_to_string_1_f_0(UInt8_34);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) "u8");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 55:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
          return;
        }
        break;
      case (MR_Integer) 15:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
          return;
        }
        break;
    }
    tscc_output_1_Functor_15 = Functor_15;
    tscc_output_2_Ordinal_16 = Ordinal_16;
    tscc_output_3_Arity_17 = Arity_17;
    tscc_output_4_Arguments_18 = Arguments_18;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_23 = tscc_proc_2_input_1_TypeInfo_for_T_23;
    MR_Box Term_10 = tscc_proc_2_input_2_Term_10;
    MR_Word TypeInfo_11 = tscc_proc_2_input_3_TypeInfo_11;
    MR_Word TypeCtorInfo_12 = tscc_proc_2_input_4_TypeCtorInfo_12;
    MR_Word TypeCtorRep_13 = tscc_proc_2_input_5_TypeCtorRep_13;
    MR_String Functor_15;
    MR_Integer Ordinal_16;
    MR_Integer Arity_17;
    MR_Word Arguments_18;
    MR_Word BaseTypeCtorRep_19;
    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
    MR_Box next_value_of_tscc_proc_1_input_2_Term_10;
    MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_11;
    MR_Word next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
    MR_Word next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;

    switch (TypeCtorRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        BaseTypeCtorRep_19 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        BaseTypeCtorRep_19 = (MR_Integer) 0;
        break;
      case (MR_Integer) 46:
        BaseTypeCtorRep_19 = (MR_Integer) 45;
        break;
      case (MR_Integer) 29:
        BaseTypeCtorRep_19 = (MR_Integer) 28;
        break;
      case (MR_Integer) 5:
        BaseTypeCtorRep_19 = (MR_Integer) 4;
        break;
      case (MR_Integer) 33:
        BaseTypeCtorRep_19 = (MR_Integer) 32;
        break;
    }
    // direct tailcall eliminated
    ;
    next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151 = TypeInfo_for_T_23;
    next_value_of_tscc_proc_1_input_2_Term_10 = Term_10;
    next_value_of_tscc_proc_1_input_3_TypeInfo_11 = TypeInfo_11;
    next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
    next_value_of_tscc_proc_1_input_5_TypeCtorRep_13 = BaseTypeCtorRep_19;
    tscc_proc_1_input_1_TypeInfo_for_T_151 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
    tscc_proc_1_input_2_Term_10 = next_value_of_tscc_proc_1_input_2_Term_10;
    tscc_proc_1_input_3_TypeInfo_11 = next_value_of_tscc_proc_1_input_3_TypeInfo_11;
    tscc_proc_1_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
    tscc_proc_1_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;
    goto top_of_proc_1;
    tscc_output_1_Functor_15 = Functor_15;
    tscc_output_2_Ordinal_16 = Ordinal_16;
    tscc_output_3_Arity_17 = Arity_17;
    tscc_output_4_Arguments_18 = Arguments_18;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Functor_15 = tscc_output_1_Functor_15;
  *tscc_output_ptr_2_Ordinal_16 = tscc_output_2_Ordinal_16;
  *tscc_output_ptr_3_Arity_17 = tscc_output_3_Arity_17;
  *tscc_output_ptr_4_Arguments_18 = tscc_output_4_Arguments_18;
  return;
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_T_23,
  MR_Box tscc_proc_2_input_2_Term_10,
  MR_Word tscc_proc_2_input_3_TypeInfo_11,
  MR_Word tscc_proc_2_input_4_TypeCtorInfo_12,
  MR_Word tscc_proc_2_input_5_TypeCtorRep_13,
  MR_String * tscc_output_ptr_1_Functor_15,
  MR_Integer * tscc_output_ptr_2_Ordinal_16,
  MR_Integer * tscc_output_ptr_3_Arity_17,
  MR_Word * tscc_output_ptr_4_Arguments_18)
{
  MR_Word tscc_proc_1_input_1_TypeInfo_for_T_151;
  MR_Box tscc_proc_1_input_2_Term_10;
  MR_Word tscc_proc_1_input_3_TypeInfo_11;
  MR_Word tscc_proc_1_input_4_TypeCtorInfo_12;
  MR_Word tscc_proc_1_input_5_TypeCtorRep_13;
  MR_String tscc_output_1_Functor_15;
  MR_Integer tscc_output_2_Ordinal_16;
  MR_Integer tscc_output_3_Arity_17;
  MR_Word tscc_output_4_Arguments_18;

  // The code for TSCC PROC 2: pred rtti_implementation.UnusedArgs__pred__handle_usereq_type__[6]_2/9-2.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred rtti_implementation.UnusedArgs__pred__deconstruct_2__[6]_2/9-2
  ;
  // proc 2 in TSCC: pred rtti_implementation.UnusedArgs__pred__handle_usereq_type__[6]_2/9-2
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word TypeInfo_for_T_151 = tscc_proc_1_input_1_TypeInfo_for_T_151;
    MR_Box Term_10 = tscc_proc_1_input_2_Term_10;
    MR_Word TypeInfo_11 = tscc_proc_1_input_3_TypeInfo_11;
    MR_Word TypeCtorInfo_12 = tscc_proc_1_input_4_TypeCtorInfo_12;
    MR_Word TypeCtorRep_13 = tscc_proc_1_input_5_TypeCtorRep_13;
    MR_String Functor_15;
    MR_Integer Ordinal_16;
    MR_Integer Arity_17;
    MR_Word Arguments_18;
    MR_bool succeeded;

    switch (TypeCtorRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 19:
        {
          MR_Word TypeInfo_175_175;
          MR_Word TypeInfo_177_177;
          MR_Word Args_58;
          MR_ArrayPtr Array_61;
          MR_Word Var_120;
          MR_Word Var_57;
          MR_Word ElemType_59;
          MR_Word Var_121;
          MR_Box conv0_Array_61;

          Var_120 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_151);
          mercury__type_desc__type_ctor_and_args_3_p_0(Var_120, &Var_57, &Args_58);
          succeeded = (Args_58 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ElemType_59 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 0))));
            Var_121 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 1))));
            succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
            mercury__type_desc__has_type_2_p_0(&TypeInfo_175_175, ElemType_59);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
              return;
            }
          {
            TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_177_177, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
            MR_hl_field(0, TypeInfo_177_177, 1) = ((MR_Box) (TypeInfo_175_175));
          }
          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, TypeInfo_177_177, Term_10, &conv0_Array_61);
          Array_61 = ((MR_ArrayPtr) (conv0_Array_61));
          Functor_15 = (MR_String) "<<array>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = mercury__array__size_1_f_0(TypeInfo_175_175, (MR_ArrayPtr) (Array_61));
          Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(TypeInfo_175_175, Array_61, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 35:
        {
          Functor_15 = (MR_String) "<<basetypeclassinfo>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 44:
        {
          MR_Box Bitmap_47;
          MR_String Var_107;
          MR_String String_143;
          MR_Box conv1_Bitmap_47;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), Term_10, &conv1_Bitmap_47);
          Bitmap_47 = ((MR_Box) (conv1_Bitmap_47));
          String_143 = mercury__bitmap__to_string_1_f_0(Bitmap_47);
          Var_107 = mercury__string__f_43_43_2_f_0(String_143, (MR_String) "\"");
          Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_107);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 16:
        {
          MR_Word CPtr_56;
          MR_Box conv2_CPtr_56;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv2_CPtr_56);
          CPtr_56 = ((MR_Word) (conv2_CPtr_56));
          Functor_15 = mercury__string__c_pointer_to_string_1_f_0(CPtr_56);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 10:
        {
          MR_Char Char_41;
          MR_Box conv3_Char_41;
          MR_String EscapedChar_42;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Term_10, &conv3_Char_41);
          Char_41 = ((MR_Char) (MR_Word) conv3_Char_41);
          succeeded = mercury__rtti_implementation__quote_special_escape_char_2_p_0(Char_41, &EscapedChar_42);
          if (succeeded)
            Functor_15 = EscapedChar_42;
          else
          {
            succeeded = mercury__char__is_control_1_p_0(Char_41);
            if (succeeded)
            {
              MR_String OctalString0_43;
              MR_String OctalString_44;
              MR_String Var_96;
              MR_Integer Int_139;

              mercury__char__to_int_2_p_0(Char_41, &Int_139);
              mercury__string__int_to_base_string_3_p_0(Int_139, (MR_Integer) 8, &OctalString0_43);
              mercury__string__pad_left_4_p_0(OctalString0_43, (MR_Char) 48, (MR_Integer) 3, &OctalString_44);
              Var_96 = mercury__string__f_43_43_2_f_0(OctalString_44, (MR_String) "\\\'");
              Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\'\\", Var_96);
            }
            else
            {
              succeeded = mercury__char__is_surrogate_1_p_0(Char_41);
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "attempt to deconstruct surrogate code point");
                  return;
                }
              else
              {
                MR_Word Var_100;
                MR_Word Var_102;

                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_Word) (Char_41));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &mercury__rtti_implementation_scalar_common_4[0])));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
                  MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
                }
                Functor_15 = mercury__string__from_char_list_1_f_0(Var_100);
              }
            }
          }
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 22:
        {
          Functor_15 = (MR_String) "<<curfr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          uint8_t PTag_23;
          MR_Word PTagEntry_24;
          MR_Word SecTagLocn_25;

          PTag_23 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
          mercury__rtti_implementation__det_index_or_search_ptag_layout_3_p_0(TypeCtorInfo_12, PTag_23, &PTagEntry_24);
          SecTagLocn_25 = mercury__rtti_implementation__sectag_locn_1_f_0(PTagEntry_24);
          switch (SecTagLocn_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                Functor_15 = (MR_String) "some_du_local_sectag";
                Ordinal_16 = (MR_Integer) -1;
                Arity_17 = (MR_Integer) 0;
                Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FunctorDesc_26;
                int32_t Var_68;
                int16_t Var_69;
                MR_Integer Var_71;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_26);
                Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_26);
                Var_68 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_26);
                Ordinal_16 = mercury__int32__to_int_1_f_0(Var_68);
                Var_69 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_26);
                Arity_17 = mercury__int16__to_int_1_f_0(Var_69);
                Var_71 = (MR_Integer) ((MR_Unsigned) Arity_17 - (MR_Unsigned) 1);
                Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_26, (MR_Integer) 0, Var_71);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FunctorDesc_182;
                int32_t Var_183;
                int16_t Var_184;
                MR_Integer Var_186;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_182);
                Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_182);
                Var_183 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_182);
                Ordinal_16 = mercury__int32__to_int_1_f_0(Var_183);
                Var_184 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_182);
                Arity_17 = mercury__int16__to_int_1_f_0(Var_184);
                Var_186 = (MR_Integer) ((MR_Unsigned) Arity_17 - (MR_Unsigned) 1);
                Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_182, (MR_Integer) 0, Var_186);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer SecTag_27;
                MR_Word FunctorDesc_192;
                int32_t Var_193;
                int16_t Var_194;
                MR_Integer Var_196;

                SecTag_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                mercury__rtti_implementation__det_index_or_search_sectag_functor_3_p_0(PTagEntry_24, SecTag_27, &FunctorDesc_192);
                Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_192);
                Var_193 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_192);
                Ordinal_16 = mercury__int32__to_int_1_f_0(Var_193);
                Var_194 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_192);
                Arity_17 = mercury__int16__to_int_1_f_0(Var_194);
                Var_196 = (MR_Integer) ((MR_Unsigned) Arity_17 - (MR_Unsigned) 1);
                Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_192, (MR_Integer) 0, Var_196);
              }
              break;
            case (MR_Integer) 4:
              {
                Functor_15 = (MR_String) "some_du_variable_sectag";
                Ordinal_16 = (MR_Integer) -1;
                Arity_17 = (MR_Integer) 0;
                Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 43:
        {
          MR_Word EnumFunctorDesc_138;

          Ordinal_16 = (MR_Integer) 0;
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, Ordinal_16, &EnumFunctorDesc_138);
          Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_138);
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer EnumValue_19;
          MR_Word EnumFunctorDesc_20;

          EnumValue_19 = mercury__rtti_implementation__unsafe_get_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          mercury__rtti_implementation__det_index_or_search_enum_functor_ordinal_3_p_0(TypeCtorInfo_12, EnumValue_19, &Ordinal_16);
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, Ordinal_16, &EnumFunctorDesc_20);
          Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_20);
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 6:
        {
          Functor_15 = (MR_String) "some_equiv";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 30:
        {
          MR_Word NewTypeInfo_28;
          MR_Word NewTypeCtorInfo_29;
          MR_Word NewTypeCtorRep_30;
          MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_1_input_2_Term_10;
          MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_11;
          MR_Word next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;

          NewTypeInfo_28 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo_11);
          NewTypeCtorInfo_29 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(NewTypeInfo_28);
          NewTypeCtorRep_30 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(NewTypeCtorInfo_29);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151 = TypeInfo_for_T_151;
          next_value_of_tscc_proc_1_input_2_Term_10 = Term_10;
          next_value_of_tscc_proc_1_input_3_TypeInfo_11 = NewTypeInfo_28;
          next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12 = NewTypeCtorInfo_29;
          next_value_of_tscc_proc_1_input_5_TypeCtorRep_13 = NewTypeCtorRep_30;
          tscc_proc_1_input_1_TypeInfo_for_T_151 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
          tscc_proc_1_input_2_Term_10 = next_value_of_tscc_proc_1_input_2_Term_10;
          tscc_proc_1_input_3_TypeInfo_11 = next_value_of_tscc_proc_1_input_3_TypeInfo_11;
          tscc_proc_1_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
          tscc_proc_1_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 11:
        {
          MR_Float Float_45;
          MR_Box conv4_Float_45;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Term_10, &conv4_Float_45);
          Float_45 = MR_unbox_float(conv4_Float_45);
          Functor_15 = mercury__string__float_to_string_1_f_0(Float_45);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 38:
        {
          MR_String TypeCtorName_63;
          MR_String TargetLangRep_64;
          MR_String Var_201;
          MR_String Var_203;
          MR_String Var_204;

          TypeCtorName_63 = mercury__rtti_implementation__type_ctor_name_1_f_0(TypeCtorInfo_12);
          TargetLangRep_64 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(Term_10);
          Var_201 = mercury__string__f_43_43_2_f_0(TargetLangRep_64, (MR_String) ")>>");
          Var_203 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_201);
          Var_204 = mercury__string__f_43_43_2_f_0(TypeCtorName_63, Var_203);
          Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "<<foreign(", Var_204);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 45:
        {
          MR_Word TypeFunctors_21;
          MR_Word ForeignEnumFunctorDesc_22;
          MR_Integer Var_65;

          TypeFunctors_21 = mercury__rtti_implementation__get_type_ctor_functors_1_f_0(TypeCtorInfo_12);
          Var_65 = mercury__rtti_implementation__unsafe_get_foreign_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__foreign_enum_functor_desc_3_f_0(TypeCtorRep_13, Var_65, TypeFunctors_21);
          Functor_15 = mercury__rtti_implementation__foreign_enum_functor_name_1_f_0(ForeignEnumFunctorDesc_22);
          Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 46:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 7:
        {
          Functor_15 = (MR_String) "<<function>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 21:
        {
          Functor_15 = (MR_String) "<<hp>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Integer Int_31;
          MR_Box conv5_Int_31;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Term_10, &conv5_Int_31);
          Int_31 = ((MR_Integer) (conv5_Int_31));
          Functor_15 = mercury__string__int_to_string_1_f_0(Int_31);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 49:
        {
          int16_t Int16_35;
          MR_String Var_80;
          MR_Box conv6_Int16_35;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), Term_10, &conv6_Int16_35);
          Int16_35 = ((int16_t) (MR_Word) conv6_Int16_35);
          Var_80 = mercury__string__int16_to_string_1_f_0(Int16_35);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) "i16");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 51:
        {
          int32_t Int32_37;
          MR_String Var_84;
          MR_Box conv7_Int32_37;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), Term_10, &conv7_Int32_37);
          Int32_37 = ((int32_t) (MR_Word) conv7_Int32_37);
          Var_84 = mercury__string__int32_to_string_1_f_0(Int32_37);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) "i32");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 53:
        {
          int64_t Int64_39;
          MR_String Var_88;
          MR_Box conv8_Int64_39;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), Term_10, &conv8_Int64_39);
          Int64_39 = MR_unbox_int64(conv8_Int64_39);
          Var_88 = mercury__string__int64_to_string_1_f_0(Int64_39);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) "i64");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 47:
        {
          int8_t Int8_33;
          MR_String Var_76;
          MR_Box conv9_Int8_33;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), Term_10, &conv9_Int8_33);
          Int8_33 = ((int8_t) (MR_Word) conv9_Int8_33);
          Var_76 = mercury__string__int8_to_string_1_f_0(Int8_33);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) "i8");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 23:
        {
          Functor_15 = (MR_String) "<<maxfr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 4:
        {
          Functor_15 = (MR_String) "some_notag";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 28:
        {
          Functor_15 = (MR_String) "some_notag_ground";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 29:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 5:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 13:
        {
          Functor_15 = (MR_String) "<<predicate>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 42:
        {
          Functor_15 = (MR_String) "some_pseudo_type_desc";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 24:
        {
          Functor_15 = (MR_String) "<<redofr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 25:
        {
          Functor_15 = (MR_String) "<<redoip>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 39:
        {
          Functor_15 = (MR_String) "<<reference>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 32:
        {
          Functor_15 = (MR_String) "some_reserved_addr";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 33:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23 = TypeInfo_for_T_151;
          MR_Box next_value_of_tscc_proc_2_input_2_Term_10 = Term_10;
          MR_Word next_value_of_tscc_proc_2_input_3_TypeInfo_11 = TypeInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
          MR_Word next_value_of_tscc_proc_2_input_5_TypeCtorRep_13 = TypeCtorRep_13;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_TypeInfo_for_T_23 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_T_23;
          tscc_proc_2_input_2_Term_10 = next_value_of_tscc_proc_2_input_2_Term_10;
          tscc_proc_2_input_3_TypeInfo_11 = next_value_of_tscc_proc_2_input_3_TypeInfo_11;
          tscc_proc_2_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_2_input_4_TypeCtorInfo_12;
          tscc_proc_2_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_2_input_5_TypeCtorRep_13;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 40:
        {
          MR_String Var_119;
          MR_Word CPtr_148;
          MR_Box conv10_CPtr_148;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv10_CPtr_148);
          CPtr_148 = ((MR_Word) (conv10_CPtr_148));
          Var_119 = mercury__string__c_pointer_to_string_1_f_0(CPtr_148);
          Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", Var_119);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 41:
        {
          Functor_15 = (MR_String) "<<stable_foreign>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 12:
        {
          MR_String String_46;
          MR_Box conv11_String_46;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Term_10, &conv11_String_46);
          String_46 = ((MR_String) (conv11_String_46));
          Functor_15 = mercury__term_io__quoted_string_1_f_0(String_46);
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 14:
        {
          Functor_15 = (MR_String) "<<subgoal>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 20:
        {
          Functor_15 = (MR_String) "<<succip>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 27:
        {
          Functor_15 = (MR_String) "<<ticket>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 26:
        {
          Functor_15 = (MR_String) "<<trail_ptr>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 31:
        {
          MR_Word TypeArgs_49;
          MR_Word _TypeCtorInfo_48;
          MR_Integer Var_55;

          mercury__rtti_implementation__type_ctor_and_args_3_p_0(TypeInfo_11, &_TypeCtorInfo_48, &TypeArgs_49);
          Functor_15 = (MR_String) "{}";
          Ordinal_16 = (MR_Integer) 0;
          Arity_17 = mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(TypeInfo_11);
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(TypeArgs_49, &Arguments_18, (MR_Integer) 0, &Var_55);
        }
        break;
      case (MR_Integer) 37:
        {
          Functor_15 = (MR_String) "some_type_ctor_desc";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 34:
        {
          Functor_15 = (MR_String) "some_typectorinfo";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 36:
        {
          Functor_15 = (MR_String) "some_type_desc";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 18:
        {
          Functor_15 = (MR_String) "<<typeclassinfo>>";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 17:
        {
          Functor_15 = (MR_String) "some_typeinfo";
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 9:
        {
          MR_Unsigned UInt_32;
          MR_String Var_74;
          MR_Box conv12_UInt_32;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Term_10, &conv12_UInt_32);
          UInt_32 = ((MR_Unsigned) (conv12_UInt_32));
          Var_74 = mercury__string__uint_to_string_1_f_0(UInt_32);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) "u");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 50:
        {
          uint16_t UInt16_36;
          MR_String Var_82;
          MR_Box conv13_UInt16_36;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), Term_10, &conv13_UInt16_36);
          UInt16_36 = ((uint16_t) (MR_Word) conv13_UInt16_36);
          Var_82 = mercury__string__uint16_to_string_1_f_0(UInt16_36);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "u16");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 52:
        {
          uint32_t UInt32_38;
          MR_String Var_86;
          MR_Box conv14_UInt32_38;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Term_10, &conv14_UInt32_38);
          UInt32_38 = ((uint32_t) (MR_Word) conv14_UInt32_38);
          Var_86 = mercury__string__uint32_to_string_1_f_0(UInt32_38);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) "u32");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 54:
        {
          uint64_t UInt64_40;
          MR_String Var_90;
          MR_Box conv15_UInt64_40;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), Term_10, &conv15_UInt64_40);
          UInt64_40 = MR_unbox_uint64(conv15_UInt64_40);
          Var_90 = mercury__string__uint64_to_string_1_f_0(UInt64_40);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) "u64");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 48:
        {
          uint8_t UInt8_34;
          MR_String Var_78;
          MR_Box conv16_UInt8_34;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), Term_10, &conv16_UInt8_34);
          UInt8_34 = ((uint8_t) (MR_Word) conv16_UInt8_34);
          Var_78 = mercury__string__uint8_to_string_1_f_0(UInt8_34);
          Functor_15 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) "u8");
          Ordinal_16 = (MR_Integer) -1;
          Arity_17 = (MR_Integer) 0;
          Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 55:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
          return;
        }
        break;
      case (MR_Integer) 15:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
          return;
        }
        break;
    }
    tscc_output_1_Functor_15 = Functor_15;
    tscc_output_2_Ordinal_16 = Ordinal_16;
    tscc_output_3_Arity_17 = Arity_17;
    tscc_output_4_Arguments_18 = Arguments_18;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word TypeInfo_for_T_23 = tscc_proc_2_input_1_TypeInfo_for_T_23;
    MR_Box Term_10 = tscc_proc_2_input_2_Term_10;
    MR_Word TypeInfo_11 = tscc_proc_2_input_3_TypeInfo_11;
    MR_Word TypeCtorInfo_12 = tscc_proc_2_input_4_TypeCtorInfo_12;
    MR_Word TypeCtorRep_13 = tscc_proc_2_input_5_TypeCtorRep_13;
    MR_String Functor_15;
    MR_Integer Ordinal_16;
    MR_Integer Arity_17;
    MR_Word Arguments_18;
    MR_Word BaseTypeCtorRep_19;
    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
    MR_Box next_value_of_tscc_proc_1_input_2_Term_10;
    MR_Word next_value_of_tscc_proc_1_input_3_TypeInfo_11;
    MR_Word next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
    MR_Word next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;

    switch (TypeCtorRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        BaseTypeCtorRep_19 = (MR_Integer) 2;
        break;
      case (MR_Integer) 1:
        BaseTypeCtorRep_19 = (MR_Integer) 0;
        break;
      case (MR_Integer) 46:
        BaseTypeCtorRep_19 = (MR_Integer) 45;
        break;
      case (MR_Integer) 29:
        BaseTypeCtorRep_19 = (MR_Integer) 28;
        break;
      case (MR_Integer) 5:
        BaseTypeCtorRep_19 = (MR_Integer) 4;
        break;
      case (MR_Integer) 33:
        BaseTypeCtorRep_19 = (MR_Integer) 32;
        break;
    }
    // direct tailcall eliminated
    ;
    next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151 = TypeInfo_for_T_23;
    next_value_of_tscc_proc_1_input_2_Term_10 = Term_10;
    next_value_of_tscc_proc_1_input_3_TypeInfo_11 = TypeInfo_11;
    next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12 = TypeCtorInfo_12;
    next_value_of_tscc_proc_1_input_5_TypeCtorRep_13 = BaseTypeCtorRep_19;
    tscc_proc_1_input_1_TypeInfo_for_T_151 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_T_151;
    tscc_proc_1_input_2_Term_10 = next_value_of_tscc_proc_1_input_2_Term_10;
    tscc_proc_1_input_3_TypeInfo_11 = next_value_of_tscc_proc_1_input_3_TypeInfo_11;
    tscc_proc_1_input_4_TypeCtorInfo_12 = next_value_of_tscc_proc_1_input_4_TypeCtorInfo_12;
    tscc_proc_1_input_5_TypeCtorRep_13 = next_value_of_tscc_proc_1_input_5_TypeCtorRep_13;
    goto top_of_proc_1;
    tscc_output_1_Functor_15 = Functor_15;
    tscc_output_2_Ordinal_16 = Ordinal_16;
    tscc_output_3_Arity_17 = Arity_17;
    tscc_output_4_Arguments_18 = Arguments_18;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Functor_15 = tscc_output_1_Functor_15;
  *tscc_output_ptr_2_Ordinal_16 = tscc_output_2_Ordinal_16;
  *tscc_output_ptr_3_Arity_17 = tscc_output_3_Arity_17;
  *tscc_output_ptr_4_Arguments_18 = tscc_output_4_Arguments_18;
  return;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7)
{
  MR_Word HeadVar__4_8;
  MR_Integer Var_9;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_9  = Min;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_53_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
  HeadVar__4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(Var_13, HeadVar__2_6, HeadVar__3_7, Var_9, Var_10);
  return HeadVar__4_8;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__5_11 < HeadVar__4_10);
    MR_Word HeadVar__6_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_12 = HeadVar__3_9;
    else
    {
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Box Var_15;
      MR_Word Var_20;
      MR_Word next_value_of_HeadVar__3_9;
      MR_Integer next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__5_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Item;
}
      mercury__univ__type_to_univ_2_p_1(Var_19, Var_15, &Var_20);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (HeadVar__3_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__5_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    return HeadVar__6_12;
    break;
  }
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = HeadVar__4_4;
  }
  else
    {
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_tuple_subterm");
      return;
    }
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Box Term_7,
  MR_Word NonCanon_8,
  MR_String * Functor_9,
  MR_Integer * FunctorNumber_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(TypeInfo_for_T_19, Term_7, Functor_9, FunctorNumber_10, Arity_11, Arguments_12);
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Box Term_7,
  MR_String * Functor_9,
  MR_Integer * FunctorNumber_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_13;
  MR_Word TypeCtorInfo_14;
  MR_Word TypeCtorRep_15;
  MR_Integer Ordinal_16;
  MR_String Var_21;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_13  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_13 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_14  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_14 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_15  = TypeCtorRep;
}
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_49_9_p_1(TypeInfo_for_T_19, Term_7, TypeInfo_13, TypeCtorInfo_14, TypeCtorRep_15, Functor_9, &Ordinal_16, Arity_11, Arguments_12);
  succeeded = (Ordinal_16 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_21 = (MR_String) "type_ctor_search_functor_number_map/3";
    {
      mercury__private_builtin__sorry_1_p_0(Var_21);
      return;
    }
    succeeded = MR_TRUE;
  }
  *FunctorNumber_10 = (MR_Integer) 0;
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_49_9_p_1(
  MR_Word TypeInfo_for_T_151,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (TypeCtorRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 19:
        {
          MR_Word TypeInfo_175_175;
          MR_Word TypeInfo_177_177;
          MR_Word Args_58;
          MR_ArrayPtr Array_61;
          MR_Word Var_120;
          MR_Word Var_57;
          MR_Word ElemType_59;
          MR_Word Var_121;
          MR_Box conv0_Array_61;

          Var_120 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_151);
          mercury__type_desc__type_ctor_and_args_3_p_0(Var_120, &Var_57, &Args_58);
          succeeded = (Args_58 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ElemType_59 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 0))));
            Var_121 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 1))));
            succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
            mercury__type_desc__has_type_2_p_0(&TypeInfo_175_175, ElemType_59);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
              return;
            }
          {
            TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_177_177, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
            MR_hl_field(0, TypeInfo_177_177, 1) = ((MR_Box) (TypeInfo_175_175));
          }
          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, TypeInfo_177_177, Term_10, &conv0_Array_61);
          Array_61 = ((MR_ArrayPtr) (conv0_Array_61));
          *Functor_15 = (MR_String) "<<array>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = mercury__array__size_1_f_0(TypeInfo_175_175, (MR_ArrayPtr) (Array_61));
          *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(TypeInfo_175_175, Array_61, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 35:
        {
          *Functor_15 = (MR_String) "<<basetypeclassinfo>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 44:
        {
          MR_Box Bitmap_47;
          MR_String Var_107;
          MR_String String_143;
          MR_Box conv1_Bitmap_47;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), Term_10, &conv1_Bitmap_47);
          Bitmap_47 = ((MR_Box) (conv1_Bitmap_47));
          String_143 = mercury__bitmap__to_string_1_f_0(Bitmap_47);
          Var_107 = mercury__string__f_43_43_2_f_0(String_143, (MR_String) "\"");
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_107);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 16:
        {
          MR_Word CPtr_56;
          MR_Box conv2_CPtr_56;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv2_CPtr_56);
          CPtr_56 = ((MR_Word) (conv2_CPtr_56));
          *Functor_15 = mercury__string__c_pointer_to_string_1_f_0(CPtr_56);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 10:
        {
          MR_Char Char_41;
          MR_Box conv3_Char_41;
          MR_String EscapedChar_42;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Term_10, &conv3_Char_41);
          Char_41 = ((MR_Char) (MR_Word) conv3_Char_41);
          succeeded = mercury__rtti_implementation__quote_special_escape_char_2_p_0(Char_41, &EscapedChar_42);
          if (succeeded)
            *Functor_15 = EscapedChar_42;
          else
          {
            succeeded = mercury__char__is_control_1_p_0(Char_41);
            if (succeeded)
            {
              MR_String OctalString0_43;
              MR_String OctalString_44;
              MR_String Var_96;
              MR_Integer Int_139;

              mercury__char__to_int_2_p_0(Char_41, &Int_139);
              mercury__string__int_to_base_string_3_p_0(Int_139, (MR_Integer) 8, &OctalString0_43);
              mercury__string__pad_left_4_p_0(OctalString0_43, (MR_Char) 48, (MR_Integer) 3, &OctalString_44);
              Var_96 = mercury__string__f_43_43_2_f_0(OctalString_44, (MR_String) "\\\'");
              *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\'\\", Var_96);
            }
            else
            {
              succeeded = mercury__char__is_surrogate_1_p_0(Char_41);
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "attempt to deconstruct surrogate code point");
                  return;
                }
              else
              {
                MR_Word Var_100;
                MR_Word Var_102;

                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_Word) (Char_41));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &mercury__rtti_implementation_scalar_common_4[0])));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
                  MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
                }
                *Functor_15 = mercury__string__from_char_list_1_f_0(Var_100);
              }
            }
          }
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 22:
        {
          *Functor_15 = (MR_String) "<<curfr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          uint8_t PTag_23;
          MR_Word PTagEntry_24;
          MR_Word SecTagLocn_25;

          PTag_23 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
          mercury__rtti_implementation__det_index_or_search_ptag_layout_3_p_0(TypeCtorInfo_12, PTag_23, &PTagEntry_24);
          SecTagLocn_25 = mercury__rtti_implementation__sectag_locn_1_f_0(PTagEntry_24);
          switch (SecTagLocn_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                *Functor_15 = (MR_String) "some_du_local_sectag";
                *Ordinal_16 = (MR_Integer) -1;
                *Arity_17 = (MR_Integer) 0;
                *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FunctorDesc_26;
                int32_t Var_68;
                int16_t Var_69;
                MR_Integer Var_71;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_26);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_26);
                Var_68 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_26);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_68);
                Var_69 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_26);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_69);
                Var_71 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_26, (MR_Integer) 0, Var_71);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FunctorDesc_182;
                int32_t Var_183;
                int16_t Var_184;
                MR_Integer Var_186;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_182);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_182);
                Var_183 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_182);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_183);
                Var_184 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_182);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_184);
                Var_186 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_182, (MR_Integer) 0, Var_186);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer SecTag_27;
                MR_Word FunctorDesc_192;
                int32_t Var_193;
                int16_t Var_194;
                MR_Integer Var_196;

                SecTag_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                mercury__rtti_implementation__det_index_or_search_sectag_functor_3_p_0(PTagEntry_24, SecTag_27, &FunctorDesc_192);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_192);
                Var_193 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_192);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_193);
                Var_194 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_192);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_194);
                Var_196 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_192, (MR_Integer) 0, Var_196);
              }
              break;
            case (MR_Integer) 4:
              {
                *Functor_15 = (MR_String) "some_du_variable_sectag";
                *Ordinal_16 = (MR_Integer) -1;
                *Arity_17 = (MR_Integer) 0;
                *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(TypeCtorInfo_12, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 43:
        {
          MR_Word EnumFunctorDesc_138;

          *Ordinal_16 = (MR_Integer) 0;
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, *Ordinal_16, &EnumFunctorDesc_138);
          *Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_138);
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer EnumValue_19;
          MR_Word EnumFunctorDesc_20;

          EnumValue_19 = mercury__rtti_implementation__unsafe_get_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          mercury__rtti_implementation__det_index_or_search_enum_functor_ordinal_3_p_0(TypeCtorInfo_12, EnumValue_19, Ordinal_16);
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, *Ordinal_16, &EnumFunctorDesc_20);
          *Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_20);
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(TypeCtorInfo_12, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 6:
        {
          *Functor_15 = (MR_String) "some_equiv";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 30:
        {
          MR_Word NewTypeInfo_28;
          MR_Word NewTypeCtorInfo_29;
          MR_Word NewTypeCtorRep_30;
          MR_Word next_value_of_TypeInfo_11;
          MR_Word next_value_of_TypeCtorInfo_12;
          MR_Word next_value_of_TypeCtorRep_13;

          NewTypeInfo_28 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo_11);
          NewTypeCtorInfo_29 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(NewTypeInfo_28);
          NewTypeCtorRep_30 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(NewTypeCtorInfo_29);
          // direct tailcall eliminated
          ;
          next_value_of_TypeInfo_11 = NewTypeInfo_28;
          next_value_of_TypeCtorInfo_12 = NewTypeCtorInfo_29;
          next_value_of_TypeCtorRep_13 = NewTypeCtorRep_30;
          TypeInfo_11 = next_value_of_TypeInfo_11;
          TypeCtorInfo_12 = next_value_of_TypeCtorInfo_12;
          TypeCtorRep_13 = next_value_of_TypeCtorRep_13;
          continue;
        }
        break;
      case (MR_Integer) 11:
        {
          MR_Float Float_45;
          MR_Box conv4_Float_45;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Term_10, &conv4_Float_45);
          Float_45 = MR_unbox_float(conv4_Float_45);
          *Functor_15 = mercury__string__float_to_string_1_f_0(Float_45);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 38:
        {
          MR_String TypeCtorName_63;
          MR_String TargetLangRep_64;
          MR_String Var_201;
          MR_String Var_203;
          MR_String Var_204;

          TypeCtorName_63 = mercury__rtti_implementation__type_ctor_name_1_f_0(TypeCtorInfo_12);
          TargetLangRep_64 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(Term_10);
          Var_201 = mercury__string__f_43_43_2_f_0(TargetLangRep_64, (MR_String) ")>>");
          Var_203 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_201);
          Var_204 = mercury__string__f_43_43_2_f_0(TypeCtorName_63, Var_203);
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "<<foreign(", Var_204);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 45:
        {
          MR_Word TypeFunctors_21;
          MR_Word ForeignEnumFunctorDesc_22;
          MR_Integer Var_65;

          TypeFunctors_21 = mercury__rtti_implementation__get_type_ctor_functors_1_f_0(TypeCtorInfo_12);
          Var_65 = mercury__rtti_implementation__unsafe_get_foreign_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__foreign_enum_functor_desc_3_f_0(TypeCtorRep_13, Var_65, TypeFunctors_21);
          *Functor_15 = mercury__rtti_implementation__foreign_enum_functor_name_1_f_0(ForeignEnumFunctorDesc_22);
          *Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 46:
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(TypeCtorInfo_12, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 7:
        {
          *Functor_15 = (MR_String) "<<function>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 21:
        {
          *Functor_15 = (MR_String) "<<hp>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Integer Int_31;
          MR_Box conv5_Int_31;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Term_10, &conv5_Int_31);
          Int_31 = ((MR_Integer) (conv5_Int_31));
          *Functor_15 = mercury__string__int_to_string_1_f_0(Int_31);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 49:
        {
          int16_t Int16_35;
          MR_String Var_80;
          MR_Box conv6_Int16_35;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), Term_10, &conv6_Int16_35);
          Int16_35 = ((int16_t) (MR_Word) conv6_Int16_35);
          Var_80 = mercury__string__int16_to_string_1_f_0(Int16_35);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) "i16");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 51:
        {
          int32_t Int32_37;
          MR_String Var_84;
          MR_Box conv7_Int32_37;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), Term_10, &conv7_Int32_37);
          Int32_37 = ((int32_t) (MR_Word) conv7_Int32_37);
          Var_84 = mercury__string__int32_to_string_1_f_0(Int32_37);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) "i32");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 53:
        {
          int64_t Int64_39;
          MR_String Var_88;
          MR_Box conv8_Int64_39;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), Term_10, &conv8_Int64_39);
          Int64_39 = MR_unbox_int64(conv8_Int64_39);
          Var_88 = mercury__string__int64_to_string_1_f_0(Int64_39);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) "i64");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 47:
        {
          int8_t Int8_33;
          MR_String Var_76;
          MR_Box conv9_Int8_33;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), Term_10, &conv9_Int8_33);
          Int8_33 = ((int8_t) (MR_Word) conv9_Int8_33);
          Var_76 = mercury__string__int8_to_string_1_f_0(Int8_33);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) "i8");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 23:
        {
          *Functor_15 = (MR_String) "<<maxfr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 4:
        {
          *Functor_15 = (MR_String) "some_notag";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 28:
        {
          *Functor_15 = (MR_String) "some_notag_ground";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 29:
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(TypeCtorInfo_12, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 5:
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(TypeCtorInfo_12, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 13:
        {
          *Functor_15 = (MR_String) "<<predicate>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 42:
        {
          *Functor_15 = (MR_String) "some_pseudo_type_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 24:
        {
          *Functor_15 = (MR_String) "<<redofr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 25:
        {
          *Functor_15 = (MR_String) "<<redoip>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 39:
        {
          *Functor_15 = (MR_String) "<<reference>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 32:
        {
          *Functor_15 = (MR_String) "some_reserved_addr";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 33:
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(TypeCtorInfo_12, Functor_15, Ordinal_16, Arity_17, Arguments_18);
        break;
      case (MR_Integer) 40:
        {
          MR_String Var_119;
          MR_Word CPtr_148;
          MR_Box conv10_CPtr_148;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv10_CPtr_148);
          CPtr_148 = ((MR_Word) (conv10_CPtr_148));
          Var_119 = mercury__string__c_pointer_to_string_1_f_0(CPtr_148);
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", Var_119);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 41:
        {
          *Functor_15 = (MR_String) "<<stable_foreign>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 12:
        {
          MR_String String_46;
          MR_Box conv11_String_46;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Term_10, &conv11_String_46);
          String_46 = ((MR_String) (conv11_String_46));
          *Functor_15 = mercury__term_io__quoted_string_1_f_0(String_46);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 14:
        {
          *Functor_15 = (MR_String) "<<subgoal>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 20:
        {
          *Functor_15 = (MR_String) "<<succip>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 27:
        {
          *Functor_15 = (MR_String) "<<ticket>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 26:
        {
          *Functor_15 = (MR_String) "<<trail_ptr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 31:
        {
          MR_Word TypeArgs_49;
          MR_Word _TypeCtorInfo_48;
          MR_Integer Var_55;

          mercury__rtti_implementation__type_ctor_and_args_3_p_0(TypeInfo_11, &_TypeCtorInfo_48, &TypeArgs_49);
          *Functor_15 = (MR_String) "{}";
          *Ordinal_16 = (MR_Integer) 0;
          *Arity_17 = mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(TypeInfo_11);
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(TypeArgs_49, Arguments_18, (MR_Integer) 0, &Var_55);
        }
        break;
      case (MR_Integer) 37:
        {
          *Functor_15 = (MR_String) "some_type_ctor_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 34:
        {
          *Functor_15 = (MR_String) "some_typectorinfo";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 36:
        {
          *Functor_15 = (MR_String) "some_type_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 18:
        {
          *Functor_15 = (MR_String) "<<typeclassinfo>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 17:
        {
          *Functor_15 = (MR_String) "some_typeinfo";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 9:
        {
          MR_Unsigned UInt_32;
          MR_String Var_74;
          MR_Box conv12_UInt_32;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Term_10, &conv12_UInt_32);
          UInt_32 = ((MR_Unsigned) (conv12_UInt_32));
          Var_74 = mercury__string__uint_to_string_1_f_0(UInt_32);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) "u");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 50:
        {
          uint16_t UInt16_36;
          MR_String Var_82;
          MR_Box conv13_UInt16_36;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), Term_10, &conv13_UInt16_36);
          UInt16_36 = ((uint16_t) (MR_Word) conv13_UInt16_36);
          Var_82 = mercury__string__uint16_to_string_1_f_0(UInt16_36);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "u16");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 52:
        {
          uint32_t UInt32_38;
          MR_String Var_86;
          MR_Box conv14_UInt32_38;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Term_10, &conv14_UInt32_38);
          UInt32_38 = ((uint32_t) (MR_Word) conv14_UInt32_38);
          Var_86 = mercury__string__uint32_to_string_1_f_0(UInt32_38);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) "u32");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 54:
        {
          uint64_t UInt64_40;
          MR_String Var_90;
          MR_Box conv15_UInt64_40;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), Term_10, &conv15_UInt64_40);
          UInt64_40 = MR_unbox_uint64(conv15_UInt64_40);
          Var_90 = mercury__string__uint64_to_string_1_f_0(UInt64_40);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) "u64");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 48:
        {
          uint8_t UInt8_34;
          MR_String Var_78;
          MR_Box conv16_UInt8_34;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), Term_10, &conv16_UInt8_34);
          UInt8_34 = ((uint8_t) (MR_Word) conv16_UInt8_34);
          Var_78 = mercury__string__uint8_to_string_1_f_0(UInt8_34);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) "u8");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 55:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
          return;
        }
        break;
      case (MR_Integer) 15:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
          return;
        }
        break;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7)
{
  MR_Word HeadVar__4_8;
  MR_Integer Var_9;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_9  = Min;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_55_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
  HeadVar__4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(Var_13, HeadVar__2_6, HeadVar__3_7, Var_9, Var_10);
  return HeadVar__4_8;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__5_11 < HeadVar__4_10);
    MR_Word HeadVar__6_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_12 = HeadVar__3_9;
    else
    {
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Box Var_15;
      MR_Word Var_20;
      MR_Word next_value_of_HeadVar__3_9;
      MR_Integer next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__5_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Item;
}
      mercury__univ__type_to_univ_2_p_1(Var_19, Var_15, &Var_20);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (HeadVar__3_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__5_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    return HeadVar__6_12;
    break;
  }
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = HeadVar__4_4;
  }
  else
    {
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_tuple_subterm");
      return;
    }
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(
  MR_Word TypeCtorInfo_12,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  MR_String Var_31;
  MR_String Var_34;
  MR_Integer Var_37;
  MR_String Var_41;
  MR_String Var_48;
  MR_String Var_50;
  MR_String Var_51;
  MR_String Var_53;
  MR_String Var_54;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_31  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_34  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Var_37  = Arity;
}
  mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__rtti_implementation_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_37, &Var_41);
  mercury__string__append_3_p_2(Var_41, (MR_String) ">>", &Var_48);
  mercury__string__append_3_p_2((MR_String) "/", Var_48, &Var_50);
  mercury__string__append_3_p_2(Var_34, Var_50, &Var_51);
  mercury__string__append_3_p_2((MR_String) ".", Var_51, &Var_53);
  mercury__string__append_3_p_2(Var_31, Var_53, &Var_54);
  mercury__string__append_3_p_2((MR_String) "<<", Var_54, Functor_15);
  *Ordinal_16 = (MR_Integer) -1;
  *Arity_17 = (MR_Integer) 0;
  *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Box Term_7,
  MR_Word NonCanon_8,
  MR_String * Functor_9,
  MR_Integer * FunctorNumber_10,
  MR_Integer * Arity_11,
  MR_Word * Arguments_12)
{
  MR_bool succeeded;
  MR_Word TypeInfo_13;
  MR_Word TypeCtorInfo_14;
  MR_Word TypeCtorRep_15;
  MR_Integer Ordinal_16;
  MR_String Var_21;

{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_19 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_13  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_13 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_14  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_14 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_15  = TypeCtorRep;
}
  mercury__rtti_implementation__deconstruct_2_9_p_0(TypeInfo_for_T_19, Term_7, TypeInfo_13, TypeCtorInfo_14, TypeCtorRep_15, NonCanon_8, Functor_9, &Ordinal_16, Arity_11, Arguments_12);
  succeeded = (Ordinal_16 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_21 = (MR_String) "type_ctor_search_functor_number_map/3";
    {
      mercury__private_builtin__sorry_1_p_0(Var_21);
      return;
    }
    succeeded = MR_TRUE;
  }
  *FunctorNumber_10 = (MR_Integer) 0;
}

void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_0(
  MR_Word TypeInfo_for_T_151,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (TypeCtorRep_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 19:
        {
          MR_Word TypeInfo_175_175;
          MR_Word TypeInfo_177_177;
          MR_Word Args_58;
          MR_ArrayPtr Array_61;
          MR_Word Var_120;
          MR_Word Var_57;
          MR_Word ElemType_59;
          MR_Word Var_121;
          MR_Box conv0_Array_61;

          Var_120 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_151);
          mercury__type_desc__type_ctor_and_args_3_p_0(Var_120, &Var_57, &Args_58);
          succeeded = (Args_58 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ElemType_59 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 0))));
            Var_121 = ((MR_Word) ((MR_hl_field(1, Args_58, (MR_Integer) 1))));
            succeeded = (Var_121 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
            mercury__type_desc__has_type_2_p_0(&TypeInfo_175_175, ElemType_59);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
              return;
            }
          {
            TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_177_177, 0) = ((MR_Box) (&mercury__array__array__type_ctor_info_array_1));
            MR_hl_field(0, TypeInfo_177_177, 1) = ((MR_Box) (TypeInfo_175_175));
          }
          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, TypeInfo_177_177, Term_10, &conv0_Array_61);
          Array_61 = ((MR_ArrayPtr) (conv0_Array_61));
          *Functor_15 = (MR_String) "<<array>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = mercury__array__size_1_f_0(TypeInfo_175_175, (MR_ArrayPtr) (Array_61));
          *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(TypeInfo_175_175, Array_61, (MR_Word) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 35:
        {
          *Functor_15 = (MR_String) "<<basetypeclassinfo>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 44:
        {
          MR_Box Bitmap_47;
          MR_String Var_107;
          MR_String String_143;
          MR_Box conv1_Bitmap_47;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0), Term_10, &conv1_Bitmap_47);
          Bitmap_47 = ((MR_Box) (conv1_Bitmap_47));
          String_143 = mercury__bitmap__to_string_1_f_0(Bitmap_47);
          Var_107 = mercury__string__f_43_43_2_f_0(String_143, (MR_String) "\"");
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_107);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 16:
        {
          MR_Word CPtr_56;
          MR_Box conv2_CPtr_56;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv2_CPtr_56);
          CPtr_56 = ((MR_Word) (conv2_CPtr_56));
          *Functor_15 = mercury__string__c_pointer_to_string_1_f_0(CPtr_56);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 10:
        {
          MR_Char Char_41;
          MR_Box conv3_Char_41;
          MR_String EscapedChar_42;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Term_10, &conv3_Char_41);
          Char_41 = ((MR_Char) (MR_Word) conv3_Char_41);
          succeeded = mercury__rtti_implementation__quote_special_escape_char_2_p_0(Char_41, &EscapedChar_42);
          if (succeeded)
            *Functor_15 = EscapedChar_42;
          else
          {
            succeeded = mercury__char__is_control_1_p_0(Char_41);
            if (succeeded)
            {
              MR_String OctalString0_43;
              MR_String OctalString_44;
              MR_String Var_96;
              MR_Integer Int_139;

              mercury__char__to_int_2_p_0(Char_41, &Int_139);
              mercury__string__int_to_base_string_3_p_0(Int_139, (MR_Integer) 8, &OctalString0_43);
              mercury__string__pad_left_4_p_0(OctalString0_43, (MR_Char) 48, (MR_Integer) 3, &OctalString_44);
              Var_96 = mercury__string__f_43_43_2_f_0(OctalString_44, (MR_String) "\\\'");
              *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\'\\", Var_96);
            }
            else
            {
              succeeded = mercury__char__is_surrogate_1_p_0(Char_41);
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "attempt to deconstruct surrogate code point");
                  return;
                }
              else
              {
                MR_Word Var_100;
                MR_Word Var_102;

                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_Word) (Char_41));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &mercury__rtti_implementation_scalar_common_4[0])));
                }
                {
                  Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
                  MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
                }
                *Functor_15 = mercury__string__from_char_list_1_f_0(Var_100);
              }
            }
          }
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 22:
        {
          *Functor_15 = (MR_String) "<<curfr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          uint8_t PTag_23;
          MR_Word PTagEntry_24;
          MR_Word SecTagLocn_25;

          PTag_23 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
          mercury__rtti_implementation__det_index_or_search_ptag_layout_3_p_0(TypeCtorInfo_12, PTag_23, &PTagEntry_24);
          SecTagLocn_25 = mercury__rtti_implementation__sectag_locn_1_f_0(PTagEntry_24);
          switch (SecTagLocn_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                *Functor_15 = (MR_String) "some_du_local_sectag";
                *Ordinal_16 = (MR_Integer) -1;
                *Arity_17 = (MR_Integer) 0;
                *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FunctorDesc_26;
                int32_t Var_68;
                int16_t Var_69;
                MR_Integer Var_71;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_26);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_26);
                Var_68 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_26);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_68);
                Var_69 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_26);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_69);
                Var_71 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_26, (MR_Integer) 0, Var_71);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word FunctorDesc_182;
                int32_t Var_183;
                int16_t Var_184;
                MR_Integer Var_186;

                mercury__rtti_implementation__index_sectag_functor_3_p_0(PTagEntry_24, (MR_Integer) 0, &FunctorDesc_182);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_182);
                Var_183 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_182);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_183);
                Var_184 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_182);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_184);
                Var_186 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_182, (MR_Integer) 0, Var_186);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer SecTag_27;
                MR_Word FunctorDesc_192;
                int32_t Var_193;
                int16_t Var_194;
                MR_Integer Var_196;

                SecTag_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                mercury__rtti_implementation__det_index_or_search_sectag_functor_3_p_0(PTagEntry_24, SecTag_27, &FunctorDesc_192);
                *Functor_15 = mercury__rtti_implementation__du_functor_name_1_f_0(FunctorDesc_192);
                Var_193 = mercury__rtti_implementation__du_functor_ordinal_1_f_0(FunctorDesc_192);
                *Ordinal_16 = mercury__int32__to_int_1_f_0(Var_193);
                Var_194 = mercury__rtti_implementation__du_functor_arity_1_f_0(FunctorDesc_192);
                *Arity_17 = mercury__int16__to_int_1_f_0(Var_194);
                Var_196 = (MR_Integer) ((MR_Unsigned) *Arity_17 - (MR_Unsigned) 1);
                *Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, SecTagLocn_25, FunctorDesc_192, (MR_Integer) 0, Var_196);
              }
              break;
            case (MR_Integer) 4:
              {
                *Functor_15 = (MR_String) "some_du_variable_sectag";
                *Ordinal_16 = (MR_Integer) -1;
                *Arity_17 = (MR_Integer) 0;
                *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__rtti_implementation__handle_usereq_type_9_p_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
          return;
        }
        break;
      case (MR_Integer) 43:
        {
          MR_Word EnumFunctorDesc_138;

          *Ordinal_16 = (MR_Integer) 0;
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, *Ordinal_16, &EnumFunctorDesc_138);
          *Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_138);
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer EnumValue_19;
          MR_Word EnumFunctorDesc_20;

          EnumValue_19 = mercury__rtti_implementation__unsafe_get_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          mercury__rtti_implementation__det_index_or_search_enum_functor_ordinal_3_p_0(TypeCtorInfo_12, EnumValue_19, Ordinal_16);
          mercury__rtti_implementation__index_enum_functor_desc_3_p_0(TypeCtorInfo_12, *Ordinal_16, &EnumFunctorDesc_20);
          *Functor_15 = mercury__rtti_implementation__enum_functor_name_1_f_0(EnumFunctorDesc_20);
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__rtti_implementation__handle_usereq_type_9_p_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
          return;
        }
        break;
      case (MR_Integer) 6:
        {
          *Functor_15 = (MR_String) "some_equiv";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 30:
        {
          MR_Word NewTypeInfo_28;
          MR_Word NewTypeCtorInfo_29;
          MR_Word NewTypeCtorRep_30;
          MR_Word next_value_of_TypeInfo_11;
          MR_Word next_value_of_TypeCtorInfo_12;
          MR_Word next_value_of_TypeCtorRep_13;

          NewTypeInfo_28 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo_11);
          NewTypeCtorInfo_29 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(NewTypeInfo_28);
          NewTypeCtorRep_30 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(NewTypeCtorInfo_29);
          // direct tailcall eliminated
          ;
          next_value_of_TypeInfo_11 = NewTypeInfo_28;
          next_value_of_TypeCtorInfo_12 = NewTypeCtorInfo_29;
          next_value_of_TypeCtorRep_13 = NewTypeCtorRep_30;
          TypeInfo_11 = next_value_of_TypeInfo_11;
          TypeCtorInfo_12 = next_value_of_TypeCtorInfo_12;
          TypeCtorRep_13 = next_value_of_TypeCtorRep_13;
          continue;
        }
        break;
      case (MR_Integer) 11:
        {
          MR_Float Float_45;
          MR_Box conv4_Float_45;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), Term_10, &conv4_Float_45);
          Float_45 = MR_unbox_float(conv4_Float_45);
          *Functor_15 = mercury__string__float_to_string_1_f_0(Float_45);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 38:
        {
          MR_String TypeCtorName_63;
          MR_String TargetLangRep_64;
          MR_String Var_201;
          MR_String Var_203;
          MR_String Var_204;

          TypeCtorName_63 = mercury__rtti_implementation__type_ctor_name_1_f_0(TypeCtorInfo_12);
          TargetLangRep_64 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(Term_10);
          Var_201 = mercury__string__f_43_43_2_f_0(TargetLangRep_64, (MR_String) ")>>");
          Var_203 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_201);
          Var_204 = mercury__string__f_43_43_2_f_0(TypeCtorName_63, Var_203);
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "<<foreign(", Var_204);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 45:
        {
          MR_Word TypeFunctors_21;
          MR_Word ForeignEnumFunctorDesc_22;
          MR_Integer Var_65;

          TypeFunctors_21 = mercury__rtti_implementation__get_type_ctor_functors_1_f_0(TypeCtorInfo_12);
          Var_65 = mercury__rtti_implementation__unsafe_get_foreign_enum_value_1_f_0(TypeInfo_for_T_151, Term_10);
          ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__foreign_enum_functor_desc_3_f_0(TypeCtorRep_13, Var_65, TypeFunctors_21);
          *Functor_15 = mercury__rtti_implementation__foreign_enum_functor_name_1_f_0(ForeignEnumFunctorDesc_22);
          *Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 46:
        {
          mercury__rtti_implementation__handle_usereq_type_9_p_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
          return;
        }
        break;
      case (MR_Integer) 7:
        {
          *Functor_15 = (MR_String) "<<function>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 21:
        {
          *Functor_15 = (MR_String) "<<hp>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 8:
        {
          MR_Integer Int_31;
          MR_Box conv5_Int_31;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Term_10, &conv5_Int_31);
          Int_31 = ((MR_Integer) (conv5_Int_31));
          *Functor_15 = mercury__string__int_to_string_1_f_0(Int_31);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 49:
        {
          int16_t Int16_35;
          MR_String Var_80;
          MR_Box conv6_Int16_35;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), Term_10, &conv6_Int16_35);
          Int16_35 = ((int16_t) (MR_Word) conv6_Int16_35);
          Var_80 = mercury__string__int16_to_string_1_f_0(Int16_35);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) "i16");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 51:
        {
          int32_t Int32_37;
          MR_String Var_84;
          MR_Box conv7_Int32_37;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), Term_10, &conv7_Int32_37);
          Int32_37 = ((int32_t) (MR_Word) conv7_Int32_37);
          Var_84 = mercury__string__int32_to_string_1_f_0(Int32_37);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) "i32");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 53:
        {
          int64_t Int64_39;
          MR_String Var_88;
          MR_Box conv8_Int64_39;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), Term_10, &conv8_Int64_39);
          Int64_39 = MR_unbox_int64(conv8_Int64_39);
          Var_88 = mercury__string__int64_to_string_1_f_0(Int64_39);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_88, (MR_String) "i64");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 47:
        {
          int8_t Int8_33;
          MR_String Var_76;
          MR_Box conv9_Int8_33;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), Term_10, &conv9_Int8_33);
          Int8_33 = ((int8_t) (MR_Word) conv9_Int8_33);
          Var_76 = mercury__string__int8_to_string_1_f_0(Int8_33);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_76, (MR_String) "i8");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 23:
        {
          *Functor_15 = (MR_String) "<<maxfr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 4:
        {
          *Functor_15 = (MR_String) "some_notag";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 28:
        {
          *Functor_15 = (MR_String) "some_notag_ground";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 29:
        {
          mercury__rtti_implementation__handle_usereq_type_9_p_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
          return;
        }
        break;
      case (MR_Integer) 5:
        {
          mercury__rtti_implementation__handle_usereq_type_9_p_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
          return;
        }
        break;
      case (MR_Integer) 13:
        {
          *Functor_15 = (MR_String) "<<predicate>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 42:
        {
          *Functor_15 = (MR_String) "some_pseudo_type_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 24:
        {
          *Functor_15 = (MR_String) "<<redofr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 25:
        {
          *Functor_15 = (MR_String) "<<redoip>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 39:
        {
          *Functor_15 = (MR_String) "<<reference>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 32:
        {
          *Functor_15 = (MR_String) "some_reserved_addr";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 33:
        {
          mercury__rtti_implementation__handle_usereq_type_9_p_0(TypeInfo_for_T_151, Term_10, TypeInfo_11, TypeCtorInfo_12, TypeCtorRep_13, NonCanon_14, Functor_15, Ordinal_16, Arity_17, Arguments_18);
          return;
        }
        break;
      case (MR_Integer) 40:
        {
          MR_String Var_119;
          MR_Word CPtr_148;
          MR_Box conv10_CPtr_148;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), Term_10, &conv10_CPtr_148);
          CPtr_148 = ((MR_Word) (conv10_CPtr_148));
          Var_119 = mercury__string__c_pointer_to_string_1_f_0(CPtr_148);
          *Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", Var_119);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 41:
        {
          *Functor_15 = (MR_String) "<<stable_foreign>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 12:
        {
          MR_String String_46;
          MR_Box conv11_String_46;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Term_10, &conv11_String_46);
          String_46 = ((MR_String) (conv11_String_46));
          *Functor_15 = mercury__term_io__quoted_string_1_f_0(String_46);
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 14:
        {
          *Functor_15 = (MR_String) "<<subgoal>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 20:
        {
          *Functor_15 = (MR_String) "<<succip>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 27:
        {
          *Functor_15 = (MR_String) "<<ticket>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 26:
        {
          *Functor_15 = (MR_String) "<<trail_ptr>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 31:
        {
          MR_Word TypeArgs_49;
          MR_Word _TypeCtorInfo_48;
          MR_Integer Var_55;

          mercury__rtti_implementation__type_ctor_and_args_3_p_0(TypeInfo_11, &_TypeCtorInfo_48, &TypeArgs_49);
          *Functor_15 = (MR_String) "{}";
          *Ordinal_16 = (MR_Integer) 0;
          *Arity_17 = mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(TypeInfo_11);
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(TypeArgs_49, Arguments_18, (MR_Integer) 0, &Var_55);
        }
        break;
      case (MR_Integer) 37:
        {
          *Functor_15 = (MR_String) "some_type_ctor_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 34:
        {
          *Functor_15 = (MR_String) "some_typectorinfo";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 36:
        {
          *Functor_15 = (MR_String) "some_type_desc";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 18:
        {
          *Functor_15 = (MR_String) "<<typeclassinfo>>";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 17:
        {
          *Functor_15 = (MR_String) "some_typeinfo";
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 9:
        {
          MR_Unsigned UInt_32;
          MR_String Var_74;
          MR_Box conv12_UInt_32;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Term_10, &conv12_UInt_32);
          UInt_32 = ((MR_Unsigned) (conv12_UInt_32));
          Var_74 = mercury__string__uint_to_string_1_f_0(UInt_32);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) "u");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 50:
        {
          uint16_t UInt16_36;
          MR_String Var_82;
          MR_Box conv13_UInt16_36;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), Term_10, &conv13_UInt16_36);
          UInt16_36 = ((uint16_t) (MR_Word) conv13_UInt16_36);
          Var_82 = mercury__string__uint16_to_string_1_f_0(UInt16_36);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) "u16");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 52:
        {
          uint32_t UInt32_38;
          MR_String Var_86;
          MR_Box conv14_UInt32_38;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Term_10, &conv14_UInt32_38);
          UInt32_38 = ((uint32_t) (MR_Word) conv14_UInt32_38);
          Var_86 = mercury__string__uint32_to_string_1_f_0(UInt32_38);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) "u32");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 54:
        {
          uint64_t UInt64_40;
          MR_String Var_90;
          MR_Box conv15_UInt64_40;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), Term_10, &conv15_UInt64_40);
          UInt64_40 = MR_unbox_uint64(conv15_UInt64_40);
          Var_90 = mercury__string__uint64_to_string_1_f_0(UInt64_40);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_90, (MR_String) "u64");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 48:
        {
          uint8_t UInt8_34;
          MR_String Var_78;
          MR_Box conv16_UInt8_34;

          mercury__rtti_implementation__det_dynamic_cast_2_p_0(TypeInfo_for_T_151, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), Term_10, &conv16_UInt8_34);
          UInt8_34 = ((uint8_t) (MR_Word) conv16_UInt8_34);
          Var_78 = mercury__string__uint8_to_string_1_f_0(UInt8_34);
          *Functor_15 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) "u8");
          *Ordinal_16 = (MR_Integer) -1;
          *Arity_17 = (MR_Integer) 0;
          *Arguments_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 55:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
          return;
        }
        break;
      case (MR_Integer) 15:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
          return;
        }
        break;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
  MR_Word Var_13,
  MR_ArrayPtr HeadVar__2_6,
  MR_Word HeadVar__3_7)
{
  MR_Word HeadVar__4_8;
  MR_Integer Var_9;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    // Array not used.
    Min = 0;


		;}
#undef MR_PROC_LABEL
	Var_9  = Min;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_57_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_6) ;
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	Var_10  = Max;
}
  HeadVar__4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(Var_13, HeadVar__2_6, HeadVar__3_7, Var_9, Var_10);
  return HeadVar__4_8;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
  MR_Word Var_19,
  MR_ArrayPtr HeadVar__2_8,
  MR_Word HeadVar__3_9,
  MR_Integer HeadVar__4_10,
  MR_Integer HeadVar__5_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__5_11 < HeadVar__4_10);
    MR_Word HeadVar__6_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__6_12 = HeadVar__3_9;
    else
    {
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Box Var_15;
      MR_Word Var_20;
      MR_Word next_value_of_HeadVar__3_9;
      MR_Integer next_value_of_HeadVar__5_11;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr)(MR_ArrayPtr) (HeadVar__2_8) ;
	Index = HeadVar__5_11 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Item;
}
      mercury__univ__type_to_univ_2_p_1(Var_19, Var_15, &Var_20);
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_20));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (HeadVar__3_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__5_11 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_9 = Var_13;
      next_value_of_HeadVar__5_11 = Var_14;
      HeadVar__3_9 = next_value_of_HeadVar__3_9;
      HeadVar__5_11 = next_value_of_HeadVar__5_11;
      continue;
    }
    return HeadVar__6_12;
    break;
  }
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Integer * HeadVar__5_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = HeadVar__4_4;
  }
  else
    {
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_tuple_subterm");
      return;
    }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Box Var_15,
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Integer Start_5,
  MR_Integer Max_6)
{
  MR_bool succeeded = (Start_5 <= Max_6);
  MR_Word Results_8;

  if (succeeded)
  {
    MR_Word Res_9;
    MR_Integer Var_11;
    MR_Word * AddrSCCcallarg_10_19;

    Res_9 = mercury__rtti_implementation__get_arg_univ_5_f_0(Var_14, Var_15, Var_16, Var_17, Var_18, Start_5);
    Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
    {
      Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Results_8, 0) = ((MR_Box) (Res_9));
      MR_hl_field(1, Results_8, 1) = NULL;
    }
    AddrSCCcallarg_10_19 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
    mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_95_95_49_4_p_0(Var_14, Var_15, Var_16, Var_17, Var_18, Var_11, Max_6, AddrSCCcallarg_10_19);
  }
  else
    Results_8 = (MR_Word) ((MR_Unsigned) 0U);
  return Results_8;
}

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_56_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Box Var_15,
  MR_Word Var_16,
  MR_Word Var_17,
  MR_Word Var_18,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Start_5 <= Max_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word Res_9;
      MR_Integer Var_11;
      MR_Word Results_8;
      MR_Word * AddrSCCcallarg_10_19;
      MR_Integer next_value_of_Start_5;
      MR_Word * next_value_of_AddrOfResults_20;

      Res_9 = mercury__rtti_implementation__get_arg_univ_5_f_0(Var_14, Var_15, Var_16, Var_17, Var_18, Start_5);
      Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
      {
        Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Results_8, 0) = ((MR_Box) (Res_9));
        MR_hl_field(1, Results_8, 1) = NULL;
      }
      AddrSCCcallarg_10_19 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
      *AddrOfResults_20 = Results_8;
      // direct tailcall eliminated
      ;
      next_value_of_Start_5 = Var_11;
      next_value_of_AddrOfResults_20 = AddrSCCcallarg_10_19;
      Start_5 = next_value_of_Start_5;
      AddrOfResults_20 = next_value_of_AddrOfResults_20;
      continue;
    }
    else
      *AddrOfResults_20 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__get_arg_univ_5_f_0(
  MR_Word TypeInfo_for_T_14,
  MR_Box Term_7,
  MR_Word TypeInfo_8,
  MR_Word SecTagLocn_9,
  MR_Word FunctorDesc_10,
  MR_Integer Index_11)
{
  MR_Word Univ_12;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
  return Univ_12;
}

static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Integer) -1;
}

static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_remote_secondary_tag");
  return (MR_Integer) 0;
}

static uint8_t MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
  return UINT8_C(0);
}

static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0(
  MR_Box HeadVar__1_1)
{
  MR_String HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_97_114_103_101_116_95_108_97_110_103_95_114_101_112_95_95_91_49_93_95_48_1_f_0

	MR_Word Term;
	MR_String S;

	Term = (MR_Word) HeadVar__1_1 ;
		{

    // This should be kept in sync with the MR_TYEPCTOR_REP_FOREIGN
    // case in runtime/mercury_ml_expand_body.h.
    char buf[256];
    MR_snprintf(buf, 256, "%p", (void *) Term);
    MR_make_aligned_string_copy(S, buf);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = S;
}
  return HeadVar__2_2;
}

static MR_Integer MR_CALL 
mercury__rtti_implementation__unsafe_get_foreign_enum_value_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_3)
{
  MR_Integer HeadVar__2_4;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_get_foreign_enum_value/1");
  return HeadVar__2_4;
}

static MR_Integer MR_CALL 
mercury__rtti_implementation__unsafe_get_enum_value_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box HeadVar__1_3)
{
  MR_Integer HeadVar__2_4;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_get_enum_value/1");
  return HeadVar__2_4;
}

static MR_String MR_CALL 
mercury__rtti_implementation__foreign_enum_functor_name_1_f_0(
  MR_Word ForeignEnumFunctorDesc_3)
{
  MR_String HeadVar__2_2;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__foreign_enum_functor_desc_3_f_0(
  MR_Word HeadVar__1_5,
  MR_Integer HeadVar__2_6,
  MR_Word HeadVar__3_7)
{
  MR_Word HeadVar__4_8;

  mercury__private_builtin__sorry_1_p_0((MR_String) "foreign_enum_functor_desc");
  return HeadVar__4_8;
}

static MR_String MR_CALL 
mercury__rtti_implementation__enum_functor_name_1_f_0(
  MR_Word EnumFunctorDesc_3)
{
  MR_String HeadVar__2_2;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__rtti_implementation__det_index_or_search_enum_functor_ordinal_3_p_0(
  MR_Word TypeCtorInfo_4,
  MR_Integer EnumValue_5,
  MR_Integer * Ordinal_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "index_or_search_enum_functor_ordinal");
    return;
  }
}

static void MR_CALL 
mercury__rtti_implementation__index_enum_functor_desc_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Integer HeadVar__2_5,
  MR_Word * HeadVar__3_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "index_enum_functor_desc");
    return;
  }
}

static int32_t MR_CALL 
mercury__rtti_implementation__du_functor_ordinal_1_f_0(
  MR_Word DuFunctorDesc_3)
{
  int32_t HeadVar__2_2;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
  return HeadVar__2_2;
}

static int16_t MR_CALL 
mercury__rtti_implementation__du_functor_arity_1_f_0(
  MR_Word DuFunctorDesc_3)
{
  int16_t HeadVar__2_2;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
  return HeadVar__2_2;
}

static MR_String MR_CALL 
mercury__rtti_implementation__du_functor_name_1_f_0(
  MR_Word DuFunctorDesc_3)
{
  MR_String HeadVar__2_2;

  mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__get_type_ctor_functors_1_f_0(
  MR_Word HeadVar__1_3)
{
  MR_Word HeadVar__2_4;

  mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
  return HeadVar__2_4;
}

MR_String MR_CALL 
mercury__rtti_implementation__type_ctor_name_1_f_0(
  MR_Word TypeCtorInfo_1)
{
  MR_String Name_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_1_f_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_1 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Name_2  = Name;
}
  return Name_2;
}

MR_Word MR_CALL 
mercury__rtti_implementation__get_type_ctor_rep_1_f_0(
  MR_Word TypeCtorInfo_1)
{
  MR_Word TypeCtorRep_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_ctor_rep_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_1 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_2  = TypeCtorRep;
}
  return TypeCtorRep_2;
}

static void MR_CALL 
mercury__rtti_implementation__det_index_or_search_sectag_functor_3_p_0(
  MR_Word PTagEntry_4,
  MR_Integer SecTag_5,
  MR_Word * FunctorDesc_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "index_or_search_sectag_alternatives");
    return;
  }
}

static void MR_CALL 
mercury__rtti_implementation__index_sectag_functor_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Integer HeadVar__2_5,
  MR_Word * HeadVar__3_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "index_sectag_functor");
    return;
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__sectag_locn_1_f_0(
  MR_Word HeadVar__1_3)
{
  MR_Word HeadVar__2_4;

  mercury__private_builtin__sorry_1_p_0((MR_String) "sectag_locn");
  return HeadVar__2_4;
}

static void MR_CALL 
mercury__rtti_implementation__det_index_or_search_ptag_layout_3_p_0(
  MR_Word TypeCtorInfo_4,
  uint8_t PTag_5,
  MR_Word * PTagEntry_6)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "index_or_search_ptag_layout");
    return;
  }
}

static void MR_CALL 
mercury__rtti_implementation__handle_usereq_type_9_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Box Term_10,
  MR_Word TypeInfo_11,
  MR_Word TypeCtorInfo_12,
  MR_Word TypeCtorRep_13,
  MR_Word NonCanon_14,
  MR_String * Functor_15,
  MR_Integer * Ordinal_16,
  MR_Integer * Arity_17,
  MR_Word * Arguments_18)
{
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.handle_usereq_type\'/9", (MR_String) "attempt to deconstruct noncanonical term");
    return;
  }
}

static void MR_CALL 
mercury__rtti_implementation__det_dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word TypeInfo_for_U_7,
  MR_Box Term_3,
  MR_Box * Actual_4)
{
  MR_Word Univ_5;

  mercury__univ__type_to_univ_2_p_1(TypeInfo_for_T_6, Term_3, &Univ_5);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_U_7, Univ_5, Actual_4);
}

static MR_bool MR_CALL 
mercury__rtti_implementation__quote_special_escape_char_2_p_0(
  MR_Char HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 7:
      {
        *HeadVar__2_2 = (MR_String) "\'\\a\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 8:
      {
        *HeadVar__2_2 = (MR_String) "\'\\b\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 9:
      {
        *HeadVar__2_2 = (MR_String) "\'\\t\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 10:
      {
        *HeadVar__2_2 = (MR_String) "\'\\n\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 11:
      {
        *HeadVar__2_2 = (MR_String) "\'\\v\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 12:
      {
        *HeadVar__2_2 = (MR_String) "\'\\f\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 13:
      {
        *HeadVar__2_2 = (MR_String) "\'\\r\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 39:
      {
        *HeadVar__2_2 = (MR_String) "\'\\\'\'";
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 92:
      {
        *HeadVar__2_2 = (MR_String) "\'\\\\\'";
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__rtti_implementation__construct_tuple_2_3_f_0(
  MR_Word _Args_5,
  MR_Word _ArgTypes_6,
  MR_Integer _Arity_7)
{
  MR_Word HeadVar__4_8;

  mercury__private_builtin__sorry_1_p_0((MR_String) "construct_tuple_2/3");
  return HeadVar__4_8;
}

MR_bool MR_CALL 
mercury__rtti_implementation__construct_3_f_0(
  MR_Word HeadVar__1_5,
  MR_Integer HeadVar__2_6,
  MR_Word HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  mercury__private_builtin__sorry_1_p_0((MR_String) "construct/3");
  return MR_TRUE;
}

MR_bool MR_CALL 
mercury__rtti_implementation__is_exist_pseudo_type_info_2_p_0(
  MR_Word HeadVar__1_3,
  MR_Integer * HeadVar__2_4)
{
  mercury__private_builtin__sorry_1_p_0((MR_String) "is_exist_pseudo_type_info/2");
  return MR_TRUE;
}

MR_bool MR_CALL 
mercury__rtti_implementation__is_univ_pseudo_type_info_2_p_0(
  MR_Word HeadVar__1_3,
  MR_Integer * HeadVar__2_4)
{
  mercury__private_builtin__sorry_1_p_0((MR_String) "is_univ_pseudo_type_info/2");
  return MR_TRUE;
}

MR_bool MR_CALL 
mercury__rtti_implementation__pseudo_type_ctor_and_args_3_p_0(
  MR_Word HeadVar__1_4,
  MR_Word * HeadVar__2_5,
  MR_Word * HeadVar__3_6)
{
  mercury__private_builtin__sorry_1_p_0((MR_String) "pseudo_type_ctor_and_args/3");
  return MR_TRUE;
}

void MR_CALL 
mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0(
  MR_Word TypeCtorInfo_5,
  MR_String * ModuleName_6,
  MR_String * Name_7,
  MR_Integer * Arity_8)
{
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	*ModuleName_6  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	*Name_7  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	*Arity_8  = Arity;
}
}

MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_lex_3_p_0(
  MR_Word TypeInfo0_4,
  MR_Integer Ordinal_5,
  MR_Integer * FunctorNumber_6)
{
  MR_Word TypeInfo_7;

  TypeInfo_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo0_4);
  mercury__private_builtin__sorry_1_p_0((MR_String) "type_ctor_search_functor_number_map/3");
  return MR_TRUE;
}

MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_ordinal_3_p_0(
  MR_Word TypeInfo_4,
  MR_Integer FunctorNum_5,
  MR_Integer * Ordinal_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_7;
  MR_Word TypeCtorRep_8;

{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_get_functor_ordinal_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_4 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_7  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_get_functor_ordinal_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_7 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_8  = TypeCtorRep;
}
  switch (TypeCtorRep_8) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 32:
    case (MR_Integer) 33:
      {
        mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 43:
    case (MR_Integer) 4:
    case (MR_Integer) 28:
    case (MR_Integer) 29:
    case (MR_Integer) 5:
    case (MR_Integer) 31:
      {
        succeeded = (FunctorNum_5 == (MR_Integer) 0);
        if (succeeded)
        {
          *Ordinal_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_functors");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 45:
    case (MR_Integer) 46:
      {
        mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_functors");
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_with_names_6_p_0(
  MR_Word TypeInfo_7,
  MR_Integer FunctorNumber_8,
  MR_String * FunctorName_9,
  MR_Integer * Arity_10,
  MR_Word * PseudoTypeInfoList_11,
  MR_Word * Names_12)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation__get_functor_impl_6_p_0(TypeInfo_7, FunctorNumber_8, FunctorName_9, Arity_10, PseudoTypeInfoList_11, Names_12);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_5_p_0(
  MR_Word TypeInfo_6,
  MR_Integer FunctorNumber_7,
  MR_String * FunctorName_8,
  MR_Integer * Arity_9,
  MR_Word * PseudoTypeInfoList_10)
{
  MR_bool succeeded;
  MR_Word _Names_11;

  succeeded = mercury__rtti_implementation__get_functor_impl_6_p_0(TypeInfo_6, FunctorNumber_7, FunctorName_8, Arity_9, PseudoTypeInfoList_10, &_Names_11);
  return succeeded;
}

MR_bool MR_CALL 
mercury__rtti_implementation__get_functor_impl_6_p_0(
  MR_Word TypeInfo_7,
  MR_Integer FunctorNumber_8,
  MR_String * FunctorName_9,
  MR_Integer * Arity_10,
  MR_Word * PseudoTypeInfoList_11,
  MR_Word * Names_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NumFunctors_13;
    MR_Word TypeCtorInfo_14;
    MR_Word TypeCtorRep_15;
    MR_Integer Var_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__rtti_implementation__type_info_num_functors_2_p_0(TypeInfo_7, &NumFunctors_13);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 0;
      succeeded = (FunctorNumber_8 >= Var_17);
      if (succeeded)
      {
        succeeded = (FunctorNumber_8 < NumFunctors_13);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_functor_impl_6_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_7 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_14  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_functor_impl_6_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_14 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_15  = TypeCtorRep;
}
          switch (TypeCtorRep_15) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 32:
            case (MR_Integer) 33:
              {
                mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 43:
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_functors");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
            case (MR_Integer) 30:
              {
                MR_Word NewTypeInfo_16;
                MR_Word next_value_of_TypeInfo_7;

                NewTypeInfo_16 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo_7);
                // direct tailcall eliminated
                ;
                next_value_of_TypeInfo_7 = NewTypeInfo_16;
                TypeInfo_7 = next_value_of_TypeInfo_7;
                continue;
              }
              break;
            case (MR_Integer) 45:
            case (MR_Integer) 46:
              {
                mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_functors");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 4:
            case (MR_Integer) 28:
            case (MR_Integer) 29:
            case (MR_Integer) 5:
              {
                mercury__rtti_implementation__get_functor_notag_7_p_0(TypeCtorRep_15, TypeCtorInfo_14, FunctorNumber_8, FunctorName_9, Arity_10, PseudoTypeInfoList_11, Names_12);
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 31:
              {
                *FunctorName_9 = (MR_String) "{}";
                mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 55:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.get_functor_impl\'/6", (MR_String) "unknown type_ctor_rep");
                succeeded = MR_TRUE;
              }
              break;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mercury__rtti_implementation__get_functor_notag_7_p_0(
  MR_Word TypeCtorRep_8,
  MR_Word TypeCtorInfo_9,
  MR_Integer FunctorNumber_10,
  MR_String * FunctorName_11,
  MR_Integer * Arity_12,
  MR_Word * PseudoTypeInfoList_13,
  MR_Word * Names_14)
{
  {
    mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
    return;
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation__type_info_num_functors_2_p_0(
  MR_Word TypeInfo_3,
  MR_Integer * NumFunctors_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_5;
    MR_Word TypeCtorRep_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_num_functors_2_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_3 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_5  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_num_functors_2_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_6  = TypeCtorRep;
}
    switch (TypeCtorRep_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 45:
      case (MR_Integer) 46:
      case (MR_Integer) 32:
      case (MR_Integer) 33:
        {
          mercury__private_builtin__sorry_1_p_0((MR_String) "type_ctor_num_functors");
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 43:
      case (MR_Integer) 4:
      case (MR_Integer) 28:
      case (MR_Integer) 29:
      case (MR_Integer) 5:
      case (MR_Integer) 31:
        {
          *NumFunctors_4 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 30:
        {
          MR_Word NewTypeInfo_7;
          MR_Word next_value_of_TypeInfo_3;

          NewTypeInfo_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo_3);
          // direct tailcall eliminated
          ;
          next_value_of_TypeInfo_3 = NewTypeInfo_7;
          TypeInfo_3 = next_value_of_TypeInfo_3;
          continue;
        }
        break;
      case (MR_Integer) 55:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.type_info_num_functors\'/2", (MR_String) "unknown type_ctor_rep");
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__rtti_implementation__type_ctor_and_args_3_p_0(
  MR_Word TypeInfo0_4,
  MR_Word * TypeCtorInfo_5,
  MR_Word * TypeArgs_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7;
  MR_Word TypeCtorRep_18;

  TypeInfo_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo0_4);
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_and_args_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_7 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	*TypeCtorInfo_5  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_and_args_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = *TypeCtorInfo_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_18  = TypeCtorRep;
}
  switch (TypeCtorRep_18) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 7:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 13:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 31:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
    {
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
      return;
    }
  else
  {
    MR_Integer Arity_13;

{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_and_args_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = *TypeCtorInfo_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity_13  = Arity;
}
    *TypeArgs_6 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(TypeInfo_7, (MR_Integer) 1, Arity_13);
  }
}

static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6)
{
  MR_bool succeeded = (Start_5 <= Max_6);
  MR_Word Results_8;

  if (succeeded)
  {
    MR_Integer Var_11;
    MR_Word * AddrSCCcallarg_10_17;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
    Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
    {
      Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Results_8, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, Results_8, 1) = NULL;
    }
    AddrSCCcallarg_10_17 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
    mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_95_95_49_4_p_0(Var_14, Var_11, Max_6, AddrSCCcallarg_10_17);
  }
  else
    Results_8 = (MR_Word) ((MR_Unsigned) 0U);
  return Results_8;
}

static void MR_CALL 
mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_95_95_49_4_p_0(
  MR_Word Var_14,
  MR_Integer Start_5,
  MR_Integer Max_6,
  MR_Word * AddrOfResults_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Start_5 <= Max_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_11;
      MR_Word Results_8;
      MR_Word * AddrSCCcallarg_10_17;
      MR_Integer next_value_of_Start_5;
      MR_Word * next_value_of_AddrOfResults_18;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_95_95_49_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        {
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
          return;
        }
      Var_11 = (MR_Integer) ((MR_Unsigned) Start_5 + (MR_Unsigned) 1);
      {
        Results_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Results_8, 0) = ((MR_Box) (Var_14));
        MR_hl_field(1, Results_8, 1) = NULL;
      }
      AddrSCCcallarg_10_17 = (MR_Word *) (&(MR_hl_field(1, Results_8, (MR_Integer) 1)));
      *AddrOfResults_18 = Results_8;
      // direct tailcall eliminated
      ;
      next_value_of_Start_5 = Var_11;
      next_value_of_AddrOfResults_18 = AddrSCCcallarg_10_17;
      Start_5 = next_value_of_Start_5;
      AddrOfResults_18 = next_value_of_AddrOfResults_18;
      continue;
    }
    else
      *AddrOfResults_18 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

MR_Word MR_CALL 
mercury__rtti_implementation__get_type_ctor_info_1_f_0(
  MR_Word TypeInfo_1)
{
  MR_Word TypeCtorInfo_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_ctor_info_1_f_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_1 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_2  = TypeCtorInfo;
}
  return TypeCtorInfo_2;
}

void MR_CALL 
mercury__rtti_implementation__compare_type_infos_3_p_0(
  MR_Word * Res_4,
  MR_Word TypeInfo1_5,
  MR_Word TypeInfo2_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) ((MR_Box) (TypeInfo1_5)) ;
	T2 = (MR_Word) ((MR_Box) (TypeInfo2_6)) ;
		{

    SUCCESS_INDICATOR = (T1 == T2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *Res_4 = (MR_Integer) 0;
  else
  {
    MR_Word NewTypeInfo1_7;
    MR_Word NewTypeInfo2_8;

    NewTypeInfo1_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo1_5);
    NewTypeInfo2_8 = mercury__rtti_implementation__collapse_equivalences_1_f_0(TypeInfo2_6);
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) ((MR_Box) (NewTypeInfo1_7)) ;
	T2 = (MR_Word) ((MR_Box) (NewTypeInfo2_8)) ;
		{

    SUCCESS_INDICATOR = (T1 == T2);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *Res_4 = (MR_Integer) 0;
    else
    {
      MR_Word TypeCtorInfo1_11;
      MR_Word TypeCtorInfo2_12;
      MR_Word ModNameRes_13;
      MR_String Var_18;
      MR_String Var_19;
      MR_Integer Var_30;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = NewTypeInfo1_7 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo1_11  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = NewTypeInfo2_8 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo2_12  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_11 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_18  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_19  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_18 ;
	S2 = Var_19 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_30  = Res;
}
      succeeded = (Var_30 < (MR_Integer) 0);
      if (succeeded)
        ModNameRes_13 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_30 == (MR_Integer) 0);
        if (succeeded)
          ModNameRes_13 = (MR_Integer) 0;
        else
          ModNameRes_13 = (MR_Integer) 2;
      }
      switch (ModNameRes_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Res_4 = ModNameRes_13;
          break;
        case (MR_Integer) 0:
          {
            MR_Word NameRes_14;
            MR_String Var_20;
            MR_String Var_21;
            MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_11 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_20  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_21  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_20 ;
	S2 = Var_21 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_32  = Res;
}
            succeeded = (Var_32 < (MR_Integer) 0);
            if (succeeded)
              NameRes_14 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_32 == (MR_Integer) 0);
              if (succeeded)
                NameRes_14 = (MR_Integer) 0;
              else
                NameRes_14 = (MR_Integer) 2;
            }
            switch (NameRes_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *Res_4 = NameRes_14;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorRep_34;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo1_11 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_34  = TypeCtorRep;
}
                  switch (TypeCtorRep_34) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 7:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 13:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 31:
                      succeeded = MR_TRUE;
                      break;
                  }
                  if (succeeded)
                    {
                      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
                      return;
                    }
                  else
                  {
                    MR_Integer Arity1_24;
                    MR_Integer Arity2_25;
                    MR_Word ArityRes_26;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo1_11 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity1_24  = Arity;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo2_12 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity2_25  = Arity;
}
                    succeeded = (Arity1_24 < Arity2_25);
                    if (succeeded)
                      ArityRes_26 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Arity1_24 == Arity2_25);
                      if (succeeded)
                        ArityRes_26 = (MR_Integer) 0;
                      else
                        ArityRes_26 = (MR_Integer) 2;
                    }
                    switch (ArityRes_26) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        *Res_4 = ArityRes_26;
                        break;
                      case (MR_Integer) 0:
                        mercury__rtti_implementation__compare_type_info_args_5_p_0((MR_Integer) 1, Arity1_24, Res_4, NewTypeInfo1_7, NewTypeInfo2_8);
                        break;
                    }
                  }
                }
                break;
            }
          }
          break;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__rtti_implementation__collapse_equivalences_1_f_0(
  MR_Word TypeInfo_3)
{
  MR_bool succeeded;
  MR_Word NewTypeInfo_4;
  MR_Word TypeCtorInfo_5;
  MR_Word TypeCtorRep_6;

{
#define MR_PROC_LABEL mercury__rtti_implementation__collapse_equivalences_1_f_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_3 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_5  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__collapse_equivalences_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_5 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_6  = TypeCtorRep;
}
  switch (TypeCtorRep_6) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 6:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 30:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
    mercury__private_builtin__sorry_1_p_0((MR_String) "get_layout_equiv");
  else
    NewTypeInfo_4 = TypeInfo_3;
  return NewTypeInfo_4;
}

static void MR_CALL 
mercury__rtti_implementation__compare_type_info_args_5_p_0(
  MR_Integer Loc_6,
  MR_Integer Arity_7,
  MR_Word * Result_8,
  MR_Word TypeInfoA_9,
  MR_Word TypeInfoB_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Loc_6 > Arity_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Result_8 = (MR_Integer) 0;
    else
    {
      MR_Word SubResult_13;
      MR_Word TypeCtorInfo1_20;
      MR_Word TypeCtorInfo2_21;
      MR_Word ModNameRes_22;
      MR_String Var_27;
      MR_String Var_28;
      MR_Integer Var_39;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        {
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
          return;
        }
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        {
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
          return;
        }
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfoA_9 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo1_20  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfoB_10 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo2_21  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_20 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_27  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_21 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_28  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_27 ;
	S2 = Var_28 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_39  = Res;
}
      succeeded = (Var_39 < (MR_Integer) 0);
      if (succeeded)
        ModNameRes_22 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_39 == (MR_Integer) 0);
        if (succeeded)
          ModNameRes_22 = (MR_Integer) 0;
        else
          ModNameRes_22 = (MR_Integer) 2;
      }
      switch (ModNameRes_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          SubResult_13 = ModNameRes_22;
          break;
        case (MR_Integer) 0:
          {
            MR_Word NameRes_23;
            MR_String Var_29;
            MR_String Var_30;
            MR_Integer Var_41;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo1_20 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_29  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo = TypeCtorInfo2_21 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);


		;}
#undef MR_PROC_LABEL
	Var_30  = Name;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_29 ;
	S2 = Var_30 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_41  = Res;
}
            succeeded = (Var_41 < (MR_Integer) 0);
            if (succeeded)
              NameRes_23 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_41 == (MR_Integer) 0);
              if (succeeded)
                NameRes_23 = (MR_Integer) 0;
              else
                NameRes_23 = (MR_Integer) 2;
            }
            switch (NameRes_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                SubResult_13 = NameRes_23;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorRep_43;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo1_20 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_43  = TypeCtorRep;
}
                  switch (TypeCtorRep_43) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 7:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 13:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 31:
                      succeeded = MR_TRUE;
                      break;
                  }
                  if (succeeded)
                    {
                      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
                      return;
                    }
                  else
                  {
                    MR_Integer Arity1_33;
                    MR_Integer Arity2_34;
                    MR_Word ArityRes_35;

{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo1_20 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity1_33  = Arity;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo2_21 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity2_34  = Arity;
}
                    succeeded = (Arity1_33 < Arity2_34);
                    if (succeeded)
                      ArityRes_35 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Arity1_33 == Arity2_34);
                      if (succeeded)
                        ArityRes_35 = (MR_Integer) 0;
                      else
                        ArityRes_35 = (MR_Integer) 2;
                    }
                    switch (ArityRes_35) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        SubResult_13 = ArityRes_35;
                        break;
                      case (MR_Integer) 0:
                        mercury__rtti_implementation__compare_type_info_args_5_p_0((MR_Integer) 1, Arity1_33, &SubResult_13, TypeInfoA_9, TypeInfoB_10);
                        break;
                    }
                  }
                }
                break;
            }
          }
          break;
      }
      switch (SubResult_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Result_8 = SubResult_13;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Loc_6 + (MR_Unsigned) 1);
            MR_Integer next_value_of_Loc_6 = Var_14;

            // direct tailcall eliminated
            ;
            Loc_6 = next_value_of_Loc_6;
            continue;
          }
          break;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__rtti_implementation__get_type_info_1_f_0(
  MR_Word TypeInfo_for_T_3)
{
  MR_Word HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_info_1_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_3 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = TypeInfo;
}
  return HeadVar__2_2;
}

void MR_CALL 
mercury__rtti_implementation__generic_compare_3_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word * Res_4,
  MR_Box X_5,
  MR_Box Y_6)
{
  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0(TypeInfo_for_T_45, Res_4);
}

void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0(
  MR_Word TypeInfo_for_T_45,
  MR_Word * Res_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7;
  MR_Word TypeCtorInfo_8;
  MR_Word TypeCtorRep_9;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_45 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_7  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_7 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_8  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_8 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_9  = TypeCtorRep;
}
  succeeded = (TypeCtorRep_9 == (MR_Integer) 31);
  if (succeeded)
  {
    MR_Integer Arity_47;

    Arity_47 = mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(TypeInfo_7);
    mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_54_44_32_55_93_95_48_6_p_0((MR_Integer) 1, Arity_47, TypeInfo_7, Res_4);
  }
  else
  {
    switch (TypeCtorRep_9) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 7:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 13:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.generic_compare\'/3", (MR_String) "unimplemented: higher order comparisons");
        return;
      }
    else
    {
      MR_Integer Arity_10;

{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo_8 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity_10  = Arity;
}
      succeeded = (Arity_10 == (MR_Integer) 0);
      if (succeeded)
      {
        *Res_4 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          {
            mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "result_call_4");
            return;
          }
      }
      else
      {
        succeeded = (Arity_10 == (MR_Integer) 1);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            {
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
              return;
            }
          *Res_4 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            {
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
              return;
            }
        }
        else
        {
          succeeded = (Arity_10 == (MR_Integer) 2);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              {
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                return;
              }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              {
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                return;
              }
            *Res_4 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              {
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
                return;
              }
          }
          else
          {
            succeeded = (Arity_10 == (MR_Integer) 3);
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                {
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                  return;
                }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                {
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                  return;
                }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                {
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                  return;
                }
              *Res_4 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                {
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
                  return;
                }
            }
            else
            {
              succeeded = (Arity_10 == (MR_Integer) 4);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  {
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                    return;
                  }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  {
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                    return;
                  }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  {
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                    return;
                  }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  {
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                    return;
                  }
                *Res_4 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  {
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
                    return;
                  }
              }
              else
              {
                succeeded = (Arity_10 == (MR_Integer) 5);
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    {
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                      return;
                    }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    {
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                      return;
                    }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    {
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                      return;
                    }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    {
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                      return;
                    }
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    {
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                      return;
                    }
                  *Res_4 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    {
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "result_call_9");
                      return;
                    }
                }
                else
                  {
                    mercury__require__error_1_p_0((MR_String) "compare/3: type arity > 5 not supported");
                    return;
                  }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_54_44_32_55_93_95_48_6_p_0(
  MR_Integer Loc_7,
  MR_Integer TupleArity_8,
  MR_Word TypeInfo_9,
  MR_Word * Result_10)
{
  MR_bool succeeded = (Loc_7 > TupleArity_8);

  if (succeeded)
    *Result_10 = (MR_Integer) 0;
  else
  {
    MR_Word ArgTypeInfo_13;

    ArgTypeInfo_13 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(TypeInfo_9, Loc_7);
    {
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_tuple_subterm");
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__rtti_implementation__generic_unify_2_p_0(
  MR_Word TypeInfo_for_T_43,
  MR_Box X_3,
  MR_Box Y_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_5;
  MR_Word TypeCtorInfo_6;
  MR_Word TypeCtorRep_7;

{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_43 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    TypeInfo = TypeInfo_for_T;


		;}
#undef MR_PROC_LABEL
	TypeInfo_5  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo = TypeInfo_5 ;
		{

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);


		;}
#undef MR_PROC_LABEL
	TypeCtorInfo_6  = TypeCtorInfo;
}
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo = TypeCtorInfo_6 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);


		;}
#undef MR_PROC_LABEL
	TypeCtorRep_7  = TypeCtorRep;
}
  succeeded = (TypeCtorRep_7 == (MR_Integer) 31);
  if (succeeded)
  {
    MR_Integer Arity_45;

    Arity_45 = mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(TypeInfo_5);
    succeeded = mercury__rtti_implementation__unify_tuple_pos_5_p_0(TypeInfo_for_T_43, (MR_Integer) 1, Arity_45, TypeInfo_5, X_3, Y_4);
  }
  else
  {
    switch (TypeCtorRep_7) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 7:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 13:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140rtti_implementation.generic_unify\'/2", (MR_String) "unimplemented: higher order unification");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Arity_8;

{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo = TypeCtorInfo_6 ;
		{

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;


		;}
#undef MR_PROC_LABEL
	Arity_8  = Arity;
}
      succeeded = (Arity_8 == (MR_Integer) 0);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_3");
          succeeded = MR_TRUE;
        }
        else
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        }
      }
      else
      {
        succeeded = (Arity_8 == (MR_Integer) 1);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_4");
            succeeded = MR_TRUE;
          }
          else
          {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          }
        }
        else
        {
          succeeded = (Arity_8 == (MR_Integer) 2);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_5");
              succeeded = MR_TRUE;
            }
            else
            {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
            }
          }
          else
          {
            succeeded = (Arity_8 == (MR_Integer) 3);
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
              {
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_6");
                succeeded = MR_TRUE;
              }
              else
              {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
              }
            }
            else
            {
              succeeded = (Arity_8 == (MR_Integer) 4);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                if (succeeded)
                {
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_7");
                  succeeded = MR_TRUE;
                }
                else
                {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                }
              }
              else
              {
                succeeded = (Arity_8 == (MR_Integer) 5);
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                  {
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_8");
                    succeeded = MR_TRUE;
                  }
                  else
                  {
{
#define MR_PROC_LABEL mercury__rtti_implementation__generic_unify_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
                  }
                }
                else
                {
                  mercury__require__error_1_p_0((MR_String) "unify/2: type arity > 5 not supported");
                  succeeded = MR_TRUE;
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

static MR_Integer MR_CALL 
mercury__rtti_implementation__get_var_arity_typeinfo_arity_1_f_0(
  MR_Word HeadVar__1_3)
{
  MR_Integer HeadVar__2_4;

  mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
  return HeadVar__2_4;
}

static MR_bool MR_CALL 
mercury__rtti_implementation__unify_tuple_pos_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Integer Loc_6,
  MR_Integer TupleArity_7,
  MR_Word TypeInfo_8,
  MR_Box TermA_9,
  MR_Box TermB_10)
{
  MR_bool succeeded = (Loc_6 > TupleArity_7);

  if (!(succeeded))
  {
    MR_Word ArgTypeInfo_11;

    ArgTypeInfo_11 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(TypeInfo_8, Loc_6);
    mercury__private_builtin__sorry_1_p_0((MR_String) "get_tuple_subterm");
  }
  succeeded = MR_TRUE;
  return succeeded;
}

static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(
  MR_Word TypeInfo_4,
  MR_Integer Index_5)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3 = TypeInfo_4;

{
#define MR_PROC_LABEL mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____arg_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____arg_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____arg_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____arg_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____arg_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____arg_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____du_functor_desc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____du_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____du_functor_desc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____enum_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____enum_functor_desc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____enum_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____enum_functor_desc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____exist_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____exist_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____exist_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____exist_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____notag_functor_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____notag_functor_desc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____notag_functor_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____notag_functor_desc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____pseudo_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____pseudo_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____pseudo_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____pseudo_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____ptag_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____ptag_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____ptag_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____ptag_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____sectag_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____sectag_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____sectag_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____sectag_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____type_ctor_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____type_ctor_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____type_ctor_rep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____type_ctor_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_functors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____type_functors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____type_functors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____type_functors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_layout_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____type_layout_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____type_layout_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____type_layout_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeclass_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____typeclass_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____typeclass_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____typeclass_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeinfo_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____typeinfo_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____typeinfo_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____typeinfo_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__rtti_implementation__init(void)
{
}

void mercury__rtti_implementation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_names_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_types_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_sectag_alternatives_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_enum_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_exist_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_foreign_enum_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_notag_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_pseudo_type_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_ptag_entry_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_sectag_locn_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_rep_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_functors_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_layout_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeclass_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeinfo_locn_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_unify_or_compare_pred_0);
}

void mercury__rtti_implementation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__rtti_implementation__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module rtti_implementation.
