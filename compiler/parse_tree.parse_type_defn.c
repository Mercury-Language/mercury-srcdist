/*
** Automatically generated from `parse_type_defn.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module parse_tree.parse_type_defn. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_type_defn__init
ENDINIT
*/

#include "parse_tree.parse_type_defn.mih"


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
#include "bag.mih"
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
#include "parse_tree.parse_class.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_mutable.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.parse_vars.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_Word parse_tree__parse_type_defn__V_54_54,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_52_52,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_52_52,
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_52_52,
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_48_50_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_59,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_119);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_57_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_55,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_114);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_54_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_51,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_108);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_String parse_tree__parse_type_defn__HeadVar__1_47,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_102);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_Word parse_tree__parse_type_defn__V_128_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_43,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_97);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_Word parse_tree__parse_type_defn__V_128_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_39,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_91);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_35,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_85);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_80_80,
  MR_Word parse_tree__parse_type_defn__V_81_81,
  MR_String parse_tree__parse_type_defn__HeadVar__1_34,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_71);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_54_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_80_80,
  MR_Word parse_tree__parse_type_defn__V_81_81,
  MR_String parse_tree__parse_type_defn__HeadVar__1_30,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_65);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word parse_tree__parse_type_defn__V_30_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word parse_tree__parse_type_defn__V_30_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ContextPieces_8,
  MR_Word parse_tree__parse_type_defn__Term_9);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1454__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_55);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__531__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_231,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_300);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__525__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__ExistQVars_19,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_294);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__503__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_226,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_284);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__496__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_127,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_278);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__492__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_124);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__477__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_219,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_271);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__447__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_61,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_260);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__444__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_58);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__296__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_36,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_37);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__187__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__SolverTypeDetails_29,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_71);

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1398__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_119);

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1389__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_113,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_114);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__ParamTVars_7,
  MR_Word parse_tree__parse_type_defn__BodyType_8,
  MR_Word parse_tree__parse_type_defn__BodyContext_9,
  MR_Word * parse_tree__parse_type_defn__Specs_10);

static void MR_CALL 
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word parse_tree__parse_type_defn__SymName_4,
  MR_Word parse_tree__parse_type_defn__Context_5,
  MR_Word * parse_tree__parse_type_defn__NameSpecs_6);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word parse_tree__parse_type_defn__MaybeEqPred_4,
  MR_Word parse_tree__parse_type_defn__MaybeCmpPred_5);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_12,
  MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_13,
  MR_Word parse_tree__parse_type_defn__RepresentationIs_14,
  MR_Word parse_tree__parse_type_defn__GroundIs_15,
  MR_Word parse_tree__parse_type_defn__AnyIs_16,
  MR_Word parse_tree__parse_type_defn__CStoreIs_17,
  MR_Word parse_tree__parse_type_defn__EqualityIs_18,
  MR_Word parse_tree__parse_type_defn__ComparisonIs_19,
  MR_Word parse_tree__parse_type_defn__DirectArgIs_20,
  MR_Word parse_tree__parse_type_defn__WhereTerm_21);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_13,
  MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14,
  MR_Word parse_tree__parse_type_defn__MaybeRepresentationIs_15,
  MR_Word parse_tree__parse_type_defn__MaybeGroundIs_16,
  MR_Word parse_tree__parse_type_defn__MaybeAnyIs_17,
  MR_Word parse_tree__parse_type_defn__MaybeCStoreIs_18,
  MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_19,
  MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_20,
  MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_21,
  MR_Word parse_tree__parse_type_defn__MaybeWhereEnd_22,
  MR_Word parse_tree__parse_type_defn__WhereTerm_23);

static void MR_CALL 
parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeFunctor_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7);

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5,
  MR_Word * parse_tree__parse_type_defn__MaybeItemMutableInfo_6);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_6,
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__Term0_9,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereDetails_10);

static void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_12,
  MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_13,
  MR_Word parse_tree__parse_type_defn__Context_14,
  MR_Integer parse_tree__parse_type_defn__SeqNum_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_8,
  MR_Word parse_tree__parse_type_defn__VarSet_9,
  MR_Word parse_tree__parse_type_defn__HeadTerm_10,
  MR_Word parse_tree__parse_type_defn__BodyTerm_11,
  MR_Word parse_tree__parse_type_defn__Context_12,
  MR_Integer parse_tree__parse_type_defn__SeqNum_13,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_14);

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static void MR_CALL 
parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__find_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__SymName_7,
  MR_Integer parse_tree__parse_type_defn__Arity_8,
  MR_Word * parse_tree__parse_type_defn__NamedCtor_9);

static void MR_CALL 
parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_5);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_5(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_4(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_3(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__BodyTerm_3,
  MR_Word parse_tree__parse_type_defn__HeadVar__4_4,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_6);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__MaybeCtorFieldName_9,
  MR_Word parse_tree__parse_type_defn__TypeTerm_10,
  MR_Word parse_tree__parse_type_defn__Terms_11);

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ExistQVars_8,
  MR_Word parse_tree__parse_type_defn__Term_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_10);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_8);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__HeadTerm_8,
  MR_Word parse_tree__parse_type_defn__TailTerms_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_10);

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_8);

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word parse_tree__parse_type_defn__Term_4,
  MR_Word * parse_tree__parse_type_defn__CtorsTerm_5,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereTerm_6);

static MR_bool MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg);

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16);

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_4_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_4_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[190][2];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[37][1];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[5][5];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_1[190][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_compare_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_1[10]))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be followed by a type definition."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "keyword"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be the definition of a type."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of this type definition."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are duplicated in the LHS"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: variable on LHS of type definition."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unrecognized or unexpected attribute."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a solver type"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in first argument of"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in RHS of type definition."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(explicit type quantifier shadows argument type)."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "overlapping scopes"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in arguments or constraints of constructor."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[39])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be explicitly existentially quantified"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "=>"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "introduced with"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not 1."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol whose arity"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with existentially quantified type variables."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to be equivalent to another type."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a solver type cannot be defined"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type_is_abstract_enum."))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid argument for"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[96])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes for abstract non-solver type."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Solver type with no solver_type_details."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or contain an unrecognised attribute."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: attributes are either badly ordered"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[39])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a ground, unconstrained inst."))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or a list of mutable declarations."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed functors list in"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[90])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for non-solver type."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type attribute given"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions cannot have"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[89])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions must have a"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[130])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only in the RHS of this type definition."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[15])))
  },
  /* row 149 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables:"))
  },
  /* row 155 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 156 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 157 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 160 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in existential quantifier"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in class constraints,"))
  },
  /* row 165 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 170 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 171 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 173 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the ground inst of a solver type"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the any inst of a solver type"))
  },
  /* row 177 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 178 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 179 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected functor"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "name/arity for"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
  /* row 184 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 185 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 186 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 187 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type name"))
  },
  /* row 189 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_2[37][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[23])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[33])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[41])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[43])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[47])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[55])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[79])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[87])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[94])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[98])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[104])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[106])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[110])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[3])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[120])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[122])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[124])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[128])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[133])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[137])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[144])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[114])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_4[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[2])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[4])),
    ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_type_defn_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__V_18_18;
    MR_String parse_tree__parse_type_defn__V_19_19;
    MR_Word parse_tree__parse_type_defn__V_20_20;
    MR_Word parse_tree__parse_type_defn__V_21_21;
    MR_Word parse_tree__parse_type_defn__V_22_22;
    MR_Word parse_tree__parse_type_defn__V_11_11;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_19_19, (MR_String) "is") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_String parse_tree__parse_type_defn__V_51_51;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__V_51_51) == 0);
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__RHSResult_13;
            MR_Word parse_tree__parse_type_defn__ContextPieces_58;

            {
              parse_tree__parse_type_defn__ContextPieces_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
            }
            {
              parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[36]), parse_tree__parse_type_defn__V_53_53, parse_tree__parse_type_defn__ContextPieces_58, parse_tree__parse_type_defn__RHS_10, &parse_tree__parse_type_defn__RHSResult_13);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
            else
              {
                MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__V_25_25;

                {
                  parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
                }
                {
                  parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
                }
              }
          }
        else
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[34]);
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_17;
        MR_Word parse_tree__parse_type_defn__V_40_40;
        MR_Word parse_tree__parse_type_defn__V_41_41;
        MR_Word parse_tree__parse_type_defn__V_42_42;
        MR_Word parse_tree__parse_type_defn__V_47_47;

        {
          parse_tree__parse_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[189])));
        }
        {
          parse_tree__parse_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_40_40));
        }
        {
          parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
        }
      }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_Word parse_tree__parse_type_defn__V_54_54,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__V_18_18;
    MR_String parse_tree__parse_type_defn__V_19_19;
    MR_Word parse_tree__parse_type_defn__V_20_20;
    MR_Word parse_tree__parse_type_defn__V_21_21;
    MR_Word parse_tree__parse_type_defn__V_22_22;
    MR_Word parse_tree__parse_type_defn__V_11_11;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_19_19, (MR_String) "is") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_String parse_tree__parse_type_defn__V_51_51;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__V_51_51) == 0);
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__RHSResult_13;

            {
              parse_tree__parse_type_defn__RHSResult_13 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(parse_tree__parse_type_defn__V_53_53, parse_tree__parse_type_defn__V_54_54, parse_tree__parse_type_defn__RHS_10);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
            else
              {
                MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__V_25_25;

                {
                  parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
                }
                {
                  parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
                }
              }
          }
        else
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[33]);
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_17;
        MR_Word parse_tree__parse_type_defn__V_40_40;
        MR_Word parse_tree__parse_type_defn__V_41_41;
        MR_Word parse_tree__parse_type_defn__V_42_42;
        MR_Word parse_tree__parse_type_defn__V_47_47;

        {
          parse_tree__parse_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[189])));
        }
        {
          parse_tree__parse_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_40_40));
        }
        {
          parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
        }
      }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_52_52,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__V_18_18;
    MR_String parse_tree__parse_type_defn__V_19_19;
    MR_Word parse_tree__parse_type_defn__V_20_20;
    MR_Word parse_tree__parse_type_defn__V_21_21;
    MR_Word parse_tree__parse_type_defn__V_22_22;
    MR_Word parse_tree__parse_type_defn__V_11_11;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_19_19, (MR_String) "is") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_String parse_tree__parse_type_defn__V_51_51;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__V_51_51) == 0);
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__RHSResult_13;

            {
              parse_tree__parse_type_defn__RHSResult_13 = parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(parse_tree__parse_type_defn__V_52_52, parse_tree__parse_type_defn__RHS_10);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
            else
              {
                MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__V_25_25;

                {
                  parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
                }
                {
                  parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
                }
              }
          }
        else
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[32]);
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_17;
        MR_Word parse_tree__parse_type_defn__V_40_40;
        MR_Word parse_tree__parse_type_defn__V_41_41;
        MR_Word parse_tree__parse_type_defn__V_42_42;
        MR_Word parse_tree__parse_type_defn__V_47_47;

        {
          parse_tree__parse_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[189])));
        }
        {
          parse_tree__parse_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_40_40));
        }
        {
          parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
        }
      }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_52_52,
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__V_18_18;
    MR_String parse_tree__parse_type_defn__V_19_19;
    MR_Word parse_tree__parse_type_defn__V_20_20;
    MR_Word parse_tree__parse_type_defn__V_21_21;
    MR_Word parse_tree__parse_type_defn__V_22_22;
    MR_Word parse_tree__parse_type_defn__V_11_11;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_19_19, (MR_String) "is") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_String parse_tree__parse_type_defn__V_51_51;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__V_51_51) == 0);
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__RHSResult_13;

            {
              parse_tree__parse_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__parse_type_defn__V_52_52, parse_tree__parse_type_defn__V_53_53, parse_tree__parse_type_defn__RHS_10, &parse_tree__parse_type_defn__RHSResult_13);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
            else
              {
                MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__V_25_25;

                {
                  parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
                }
                {
                  parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
                }
              }
          }
        else
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[31]);
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_17;
        MR_Word parse_tree__parse_type_defn__V_40_40;
        MR_Word parse_tree__parse_type_defn__V_41_41;
        MR_Word parse_tree__parse_type_defn__V_42_42;
        MR_Word parse_tree__parse_type_defn__V_47_47;

        {
          parse_tree__parse_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[189])));
        }
        {
          parse_tree__parse_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_40_40));
        }
        {
          parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
        }
      }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_52_52,
  MR_Word parse_tree__parse_type_defn__V_53_53,
  MR_String parse_tree__parse_type_defn__Name_5,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__Result_8;
    MR_Word parse_tree__parse_type_defn__LHS_9;
    MR_Word parse_tree__parse_type_defn__RHS_10;
    MR_Word parse_tree__parse_type_defn__V_18_18;
    MR_String parse_tree__parse_type_defn__V_19_19;
    MR_Word parse_tree__parse_type_defn__V_20_20;
    MR_Word parse_tree__parse_type_defn__V_21_21;
    MR_Word parse_tree__parse_type_defn__V_22_22;
    MR_Word parse_tree__parse_type_defn__V_11_11;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_19_19, (MR_String) "is") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_21_21, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_String parse_tree__parse_type_defn__V_51_51;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LHS_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__Name_5, parse_tree__parse_type_defn__V_51_51) == 0);
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__RHSResult_13;

            {
              parse_tree__parse_type_defn__RHSResult_13 = parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__parse_type_defn__V_52_52, parse_tree__parse_type_defn__V_53_53, parse_tree__parse_type_defn__RHS_10);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
              parse_tree__parse_type_defn__Result_8 = (MR_Word) parse_tree__parse_type_defn__RHSResult_13;
            else
              {
                MR_Word parse_tree__parse_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RHSResult_13, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__V_25_25;

                {
                  parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__ParsedRHS_14));
                }
                {
                  parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
                }
              }
          }
        else
          {
            parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[30]);
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_17;
        MR_Word parse_tree__parse_type_defn__V_40_40;
        MR_Word parse_tree__parse_type_defn__V_41_41;
        MR_Word parse_tree__parse_type_defn__V_42_42;
        MR_Word parse_tree__parse_type_defn__V_47_47;

        {
          parse_tree__parse_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[189])));
        }
        {
          parse_tree__parse_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_41_41));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_40_40));
        }
        {
          parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
        }
      }
    return parse_tree__parse_type_defn__Result_8;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_48_50_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_59,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_119)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_120;

    {
      parse_tree__parse_type_defn__HeadVar__4_120 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_126_126, parse_tree__parse_type_defn__V_127_127, parse_tree__parse_type_defn__HeadVar__1_59, parse_tree__parse_type_defn__HeadVar__3_119);
    }
    return parse_tree__parse_type_defn__HeadVar__4_120;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_57_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_55,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_114)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_115;

    {
      parse_tree__parse_type_defn__HeadVar__4_115 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_126_126, parse_tree__parse_type_defn__V_127_127, parse_tree__parse_type_defn__HeadVar__1_55, parse_tree__parse_type_defn__HeadVar__3_114);
    }
    return parse_tree__parse_type_defn__HeadVar__4_115;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_54_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_51,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_108)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_109;

    {
      parse_tree__parse_type_defn__HeadVar__4_109 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_126_126, parse_tree__parse_type_defn__V_127_127, parse_tree__parse_type_defn__HeadVar__1_51, parse_tree__parse_type_defn__HeadVar__3_108);
    }
    return parse_tree__parse_type_defn__HeadVar__4_109;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_126_126,
  MR_String parse_tree__parse_type_defn__HeadVar__1_47,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_102)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_103;

    {
      parse_tree__parse_type_defn__HeadVar__4_103 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_51_93_95_48_3_f_0(parse_tree__parse_type_defn__V_126_126, parse_tree__parse_type_defn__HeadVar__1_47, parse_tree__parse_type_defn__HeadVar__3_102);
    }
    return parse_tree__parse_type_defn__HeadVar__4_103;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_Word parse_tree__parse_type_defn__V_128_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_43,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_97)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_98;

    {
      parse_tree__parse_type_defn__HeadVar__4_98 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__V_127_127, parse_tree__parse_type_defn__V_128_128, parse_tree__parse_type_defn__HeadVar__1_43, parse_tree__parse_type_defn__HeadVar__3_97);
    }
    return parse_tree__parse_type_defn__HeadVar__4_98;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_Word parse_tree__parse_type_defn__V_128_128,
  MR_String parse_tree__parse_type_defn__HeadVar__1_39,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_91)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_92;

    {
      parse_tree__parse_type_defn__HeadVar__4_92 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__V_127_127, parse_tree__parse_type_defn__V_128_128, parse_tree__parse_type_defn__HeadVar__1_39, parse_tree__parse_type_defn__HeadVar__3_91);
    }
    return parse_tree__parse_type_defn__HeadVar__4_92;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_127_127,
  MR_String parse_tree__parse_type_defn__HeadVar__1_35,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_85)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_86;

    {
      parse_tree__parse_type_defn__HeadVar__4_86 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_127_127, parse_tree__parse_type_defn__HeadVar__1_35, parse_tree__parse_type_defn__HeadVar__3_85);
    }
    return parse_tree__parse_type_defn__HeadVar__4_86;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_80_80,
  MR_Word parse_tree__parse_type_defn__V_81_81,
  MR_String parse_tree__parse_type_defn__HeadVar__1_34,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_71)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_72;

    {
      parse_tree__parse_type_defn__HeadVar__4_72 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_80_80, parse_tree__parse_type_defn__V_81_81, parse_tree__parse_type_defn__HeadVar__1_34, parse_tree__parse_type_defn__HeadVar__3_71);
    }
    return parse_tree__parse_type_defn__HeadVar__4_72;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_54_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(
  MR_Word parse_tree__parse_type_defn__V_80_80,
  MR_Word parse_tree__parse_type_defn__V_81_81,
  MR_String parse_tree__parse_type_defn__HeadVar__1_30,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_65)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_66;

    {
      parse_tree__parse_type_defn__HeadVar__4_66 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_80_80, parse_tree__parse_type_defn__V_81_81, parse_tree__parse_type_defn__HeadVar__1_30, parse_tree__parse_type_defn__HeadVar__3_65);
    }
    return parse_tree__parse_type_defn__HeadVar__4_66;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[31]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_54_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_54_95_95_49_95_95_104_111_49_49_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[31]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[34]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_49_51_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word parse_tree__parse_type_defn__V_30_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[33]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_30_30, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_30_30, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word parse_tree__parse_type_defn__V_30_30,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[33]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_30_30, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_53_93_95_48_3_f_0(parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_30_30, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[32]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[31]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_54_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_54_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[31]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_57_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_57_95_95_49_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
  MR_String parse_tree__parse_type_defn__V_26_26,
  MR_Word parse_tree__parse_type_defn__V_28_28,
  MR_Word parse_tree__parse_type_defn__V_29_29,
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[30]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_48_50_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_57_48_50_95_95_49_95_95_104_111_49_57_95_95_91_52_93_95_48_3_f_0(parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_29_29, parse_tree__parse_type_defn__V_26_26, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_4_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ContextPieces_8,
  MR_Word parse_tree__parse_type_defn__Term_9)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeInst_10;
    MR_Word parse_tree__parse_type_defn__MaybeInst0_11;

    {
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[29]), parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ContextPieces_8, parse_tree__parse_type_defn__Term_9, &parse_tree__parse_type_defn__MaybeInst0_11);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeInst0_11)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__parse_type_defn__MaybeInst_10 = parse_tree__parse_type_defn__MaybeInst0_11;
    else
      {
        MR_Word parse_tree__parse_type_defn__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeInst0_11, (MR_Integer) 0)));

        {
          parse_tree__parse_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__parse_type_defn__Inst_13);
        }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_44_44 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_45_45;
            MR_String parse_tree__parse_type_defn__TermStr_14;
            MR_Word parse_tree__parse_type_defn__Pieces_15;
            MR_Word parse_tree__parse_type_defn__Spec_16;
            MR_Word parse_tree__parse_type_defn__V_19_19;
            MR_Word parse_tree__parse_type_defn__V_20_20;
            MR_Word parse_tree__parse_type_defn__V_22_22;
            MR_Word parse_tree__parse_type_defn__V_25_25;
            MR_Word parse_tree__parse_type_defn__V_26_26;
            MR_Word parse_tree__parse_type_defn__V_35_35;
            MR_Word parse_tree__parse_type_defn__V_36_36;
            MR_Word parse_tree__parse_type_defn__V_37_37;
            MR_Word parse_tree__parse_type_defn__V_38_38;
            MR_Word parse_tree__parse_type_defn__V_39_39;
            MR_Word parse_tree__parse_type_defn__V_42_42;

            {
              parse_tree__parse_type_defn__TermStr_14 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_44_44, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              parse_tree__parse_type_defn__V_19_19 = mercury__cord__list_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_45_45, parse_tree__parse_type_defn__ContextPieces_8);
            }
            {
              parse_tree__parse_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_26_26, 1) = ((MR_Box) (parse_tree__parse_type_defn__TermStr_14));
            }
            {
              parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_26_26));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[116])));
            }
            {
              parse_tree__parse_type_defn__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162])));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_22_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
            }
            {
              parse_tree__parse_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_22_22));
            }
            {
              parse_tree__parse_type_defn__Pieces_15 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_45_45, parse_tree__parse_type_defn__V_19_19, parse_tree__parse_type_defn__V_20_20);
            }
            {
              parse_tree__parse_type_defn__V_37_37 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_44_44, parse_tree__parse_type_defn__Term_9);
            }
            {
              parse_tree__parse_type_defn__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_15));
            }
            {
              parse_tree__parse_type_defn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_38_38, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_39_39));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_37_37));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_36_36, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_38_38));
            }
            {
              parse_tree__parse_type_defn__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_35_35, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_36_36));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_16, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_35_35));
            }
            {
              parse_tree__parse_type_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_16));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__MaybeInst_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeInst_10, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
            }
          }
        else
          parse_tree__parse_type_defn__MaybeInst_10 = parse_tree__parse_type_defn__MaybeInst0_11;
      }
    return parse_tree__parse_type_defn__MaybeInst_10;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(
  MR_Word * parse_tree__parse_type_defn__Result_6,
  MR_Word parse_tree__parse_type_defn__MaybeTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTailTerm_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if ((parse_tree__parse_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__parse_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[21]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
        MR_Word parse_tree__parse_type_defn__HeadTerm_10;
        MR_Word parse_tree__parse_type_defn__TailTerm_11;
        MR_Word parse_tree__parse_type_defn__V_16_16;
        MR_String parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_18_18;
        MR_Word parse_tree__parse_type_defn__V_19_19;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_12_12;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_16_16, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_17_17, (MR_String) ",") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_18_18, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__parse_type_defn__HeadTerm_10);
            }
            {
              parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__TailTerm_11));
            }
          }
        else
          {
            {
              *parse_tree__parse_type_defn__Result_6 = parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__parse_type_defn__Term_9);
            }
            parse_tree__parse_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        if (((MR_tag((MR_Word) *parse_tree__parse_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__parse_type_defn__Result_6, (MR_Integer) 0)));

            if ((parse_tree__parse_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTerm_7;
            else
              *parse_tree__parse_type_defn__MaybeTailTerm_8 = parse_tree__parse_type_defn__MaybeTailTermIfYes_13;
          }
      }
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1454__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_55)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_String parse_tree__parse_type_defn__HeadVar__3_56;

    {
      parse_tree__parse_type_defn__HeadVar__3_56 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__TVarSet_6, parse_tree__parse_type_defn__HeadVar__2_55);
    }
    return parse_tree__parse_type_defn__HeadVar__3_56;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__531__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_231,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_300)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_String parse_tree__parse_type_defn__HeadVar__3_301;

    {
      parse_tree__parse_type_defn__HeadVar__3_301 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__GenericVarSet_231, parse_tree__parse_type_defn__HeadVar__2_300);
    }
    return parse_tree__parse_type_defn__HeadVar__3_301;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__525__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__ExistQVars_19,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_294)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    {
      parse_tree__parse_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], parse_tree__parse_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_294)));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__503__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_226,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_284)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_String parse_tree__parse_type_defn__HeadVar__3_285;

    {
      parse_tree__parse_type_defn__HeadVar__3_285 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__GenericVarSet_226, parse_tree__parse_type_defn__HeadVar__2_284);
    }
    return parse_tree__parse_type_defn__HeadVar__3_285;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__496__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_127,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_278)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    {
      parse_tree__parse_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], parse_tree__parse_type_defn__HeadVar__1_127, ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_278)));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__492__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_124)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__LambdaHeadVar__2_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 2)));
    MR_Word parse_tree__parse_type_defn__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_124, (MR_Integer) 3)));

    return parse_tree__parse_type_defn__LambdaHeadVar__2_125;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__477__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__GenericVarSet_219,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_271)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_String parse_tree__parse_type_defn__HeadVar__3_272;

    {
      parse_tree__parse_type_defn__HeadVar__3_272 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__GenericVarSet_219, parse_tree__parse_type_defn__HeadVar__2_271);
    }
    return parse_tree__parse_type_defn__HeadVar__3_272;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__447__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_61,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_260)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    {
      parse_tree__parse_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], parse_tree__parse_type_defn__HeadVar__1_61, ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_260)));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__444__1_1_f_0(
  MR_Word parse_tree__parse_type_defn__LambdaHeadVar__1_58)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__LambdaHeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 2)));
    MR_Word parse_tree__parse_type_defn__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__LambdaHeadVar__1_58, (MR_Integer) 3)));

    return parse_tree__parse_type_defn__LambdaHeadVar__2_59;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__296__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_36,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_37)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__HeadVar__1_36, parse_tree__parse_type_defn__HeadVar__2_37);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__187__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__SolverTypeDetails_29,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_71)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    {
      parse_tree__parse_type_defn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[3], ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_29)), ((MR_Box) (parse_tree__parse_type_defn__HeadVar__2_71)));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1398__1_2_f_0(
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_119)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_String parse_tree__parse_type_defn__HeadVar__3_120;

    {
      parse_tree__parse_type_defn__HeadVar__3_120 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__HeadVar__2_119);
    }
    return parse_tree__parse_type_defn__HeadVar__3_120;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1389__1_2_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_113,
  MR_Word * parse_tree__parse_type_defn__HeadVar__2_114)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    {
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__HeadVar__1_113, parse_tree__parse_type_defn__HeadVar__2_114);
    }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv0_HeadVar__3_56;

    {
      parse_tree__parse_type_defn__conv0_HeadVar__3_56 = parse_tree__parse_type_defn__IntroducedFrom__func__check_no_free_body_vars__1454__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_HeadVar__3_56));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(
  MR_Word parse_tree__parse_type_defn__TVarSet_6,
  MR_Word parse_tree__parse_type_defn__ParamTVars_7,
  MR_Word parse_tree__parse_type_defn__BodyType_8,
  MR_Word parse_tree__parse_type_defn__BodyContext_9,
  MR_Word * parse_tree__parse_type_defn__Specs_10)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__TypeInfo_53_53;
    MR_Word parse_tree__parse_type_defn__BodyTVars_11;
    MR_Word parse_tree__parse_type_defn__ParamTVarSet_12;
    MR_Word parse_tree__parse_type_defn__BodyTVarSet_13;
    MR_Word parse_tree__parse_type_defn__OnlyBodyTVarSet_14;
    MR_Word parse_tree__parse_type_defn__OnlyBodyTVars_15;

    {
      parse_tree__prog_type__type_vars_2_p_0(parse_tree__parse_type_defn__BodyType_8, &parse_tree__parse_type_defn__BodyTVars_11);
    }
    parse_tree__parse_type_defn__TypeInfo_53_53 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
    {
      mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__ParamTVars_7, &parse_tree__parse_type_defn__ParamTVarSet_12);
    }
    {
      mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__BodyTVars_11, &parse_tree__parse_type_defn__BodyTVarSet_13);
    }
    {
      mercury__set__difference_3_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__BodyTVarSet_13, parse_tree__parse_type_defn__ParamTVarSet_12, &parse_tree__parse_type_defn__OnlyBodyTVarSet_14);
    }
    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__OnlyBodyTVarSet_14, &parse_tree__parse_type_defn__OnlyBodyTVars_15);
    }
    if ((parse_tree__parse_type_defn__OnlyBodyTVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__parse_type_defn__Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_58_58;
        MR_Word parse_tree__parse_type_defn__OnlyBodyTVarNames_18;
        MR_String parse_tree__parse_type_defn__VarWord_19;
        MR_String parse_tree__parse_type_defn__OccurWord_20;
        MR_Word parse_tree__parse_type_defn__Pieces_21;
        MR_Word parse_tree__parse_type_defn__Spec_22;
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_28_28;
        MR_Word parse_tree__parse_type_defn__V_31_31;
        MR_Word parse_tree__parse_type_defn__V_32_32;
        MR_Word parse_tree__parse_type_defn__V_34_34;
        MR_Word parse_tree__parse_type_defn__V_35_35;
        MR_Word parse_tree__parse_type_defn__V_36_36;
        MR_Word parse_tree__parse_type_defn__V_37_37;
        MR_Word parse_tree__parse_type_defn__V_46_46;
        MR_Word parse_tree__parse_type_defn__V_47_47;
        MR_Word parse_tree__parse_type_defn__V_48_48;
        MR_Word parse_tree__parse_type_defn__V_49_49;
        MR_Box parse_tree__parse_type_defn__conv1_VarWord_19;
        MR_Box parse_tree__parse_type_defn__conv2_OccurWord_20;

        {
          parse_tree__parse_type_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, 3) = ((MR_Box) (parse_tree__parse_type_defn__TVarSet_6));
        }
        {
          parse_tree__parse_type_defn__OnlyBodyTVarNames_18 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__V_23_23, parse_tree__parse_type_defn__OnlyBodyTVars_15);
        }
        {
          parse_tree__parse_type_defn__conv1_VarWord_19 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
        }
        parse_tree__parse_type_defn__VarWord_19 = ((MR_String) parse_tree__parse_type_defn__conv1_VarWord_19);
        {
          parse_tree__parse_type_defn__conv2_OccurWord_20 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_53_53, parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
        }
        parse_tree__parse_type_defn__OccurWord_20 = ((MR_String) parse_tree__parse_type_defn__conv2_OccurWord_20);
        parse_tree__parse_type_defn__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          parse_tree__parse_type_defn__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_32_32, 1) = ((MR_Box) (parse_tree__parse_type_defn__VarWord_19));
        }
        {
          parse_tree__parse_type_defn__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_32_32));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_28_28, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_31_31));
        }
        {
          parse_tree__parse_type_defn__V_35_35 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_type_defn__OnlyBodyTVarNames_18);
        }
        {
          parse_tree__parse_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__parse_type_defn__OccurWord_20));
        }
        {
          parse_tree__parse_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_37_37));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[148])));
        }
        {
          parse_tree__parse_type_defn__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, parse_tree__parse_type_defn__V_35_35, parse_tree__parse_type_defn__V_36_36);
        }
        {
          parse_tree__parse_type_defn__Pieces_21 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, parse_tree__parse_type_defn__V_28_28, parse_tree__parse_type_defn__V_34_34);
        }
        {
          parse_tree__parse_type_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_21));
        }
        {
          parse_tree__parse_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_49_49));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__BodyContext_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_48_48));
        }
        {
          parse_tree__parse_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_46_46));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__Specs_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_user_type_name_3_p_0(
  MR_Word parse_tree__parse_type_defn__SymName_4,
  MR_Word parse_tree__parse_type_defn__Context_5,
  MR_Word * parse_tree__parse_type_defn__NameSpecs_6)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_String parse_tree__parse_type_defn__Name_7;

    {
      parse_tree__parse_type_defn__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__parse_type_defn__SymName_4);
    }
    {
      parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_name__is_known_type_name_1_p_0(parse_tree__parse_type_defn__Name_7);
    }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__NamePieces_8;
        MR_Word parse_tree__parse_type_defn__NameSpec_9;
        MR_Word parse_tree__parse_type_defn__V_12_12;
        MR_Word parse_tree__parse_type_defn__V_13_13;
        MR_Word parse_tree__parse_type_defn__V_22_22;
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_Word parse_tree__parse_type_defn__V_25_25;

        {
          parse_tree__parse_type_defn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_13_13, 1) = ((MR_Box) (parse_tree__parse_type_defn__Name_7));
        }
        {
          parse_tree__parse_type_defn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_12_12, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_13_13));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[146])));
        }
        {
          parse_tree__parse_type_defn__NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[188])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NamePieces_8, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_12_12));
        }
        {
          parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__NamePieces_8));
        }
        {
          parse_tree__parse_type_defn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_5));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_24_24));
        }
        {
          parse_tree__parse_type_defn__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_22_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_23_23));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__NameSpec_9, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_22_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__NameSpecs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__NameSpec_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      *parse_tree__parse_type_defn__NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(
  MR_Word parse_tree__parse_type_defn__MaybeEqPred_4,
  MR_Word parse_tree__parse_type_defn__MaybeCmpPred_5)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word parse_tree__parse_type_defn__HeadVar__3_3;

    if (parse_tree__parse_type_defn__succeeded)
      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
      parse_tree__parse_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__parse_type_defn__V_6_6;

        {
          parse_tree__parse_type_defn__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_6_6, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeEqPred_4));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_6_6, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeCmpPred_5));
        }
        {
          parse_tree__parse_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_6_6));
        }
      }
    return parse_tree__parse_type_defn__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__Spec_4;
    MR_Word parse_tree__parse_type_defn__V_25_25;
    MR_Word parse_tree__parse_type_defn__V_26_26;
    MR_Word parse_tree__parse_type_defn__V_27_27;

    {
      parse_tree__parse_type_defn__V_27_27 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_3);
    }
    {
      parse_tree__parse_type_defn__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_27_27));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[187])));
    }
    {
      parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_26_26));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__parse_type_defn__Spec_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_4, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
    }
    return parse_tree__parse_type_defn__Spec_4;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_12,
  MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_13,
  MR_Word parse_tree__parse_type_defn__RepresentationIs_14,
  MR_Word parse_tree__parse_type_defn__GroundIs_15,
  MR_Word parse_tree__parse_type_defn__AnyIs_16,
  MR_Word parse_tree__parse_type_defn__CStoreIs_17,
  MR_Word parse_tree__parse_type_defn__EqualityIs_18,
  MR_Word parse_tree__parse_type_defn__ComparisonIs_19,
  MR_Word parse_tree__parse_type_defn__DirectArgIs_20,
  MR_Word parse_tree__parse_type_defn__WhereTerm_21)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeWhereDetails_22;

    if ((parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      switch (parse_tree__parse_type_defn__IsSolverType_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word parse_tree__parse_type_defn__V_39_39;

              parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__RepresentationIs_14)) == (MR_mktag((MR_Integer) 1)));
              if (parse_tree__parse_type_defn__succeeded)
                parse_tree__parse_type_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RepresentationIs_14, (MR_Integer) 0)));
            }
            if (!(parse_tree__parse_type_defn__succeeded))
              {
                {
                  MR_Word parse_tree__parse_type_defn__V_40_40;

                  parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__GroundIs_15)) == (MR_mktag((MR_Integer) 1)));
                  if (parse_tree__parse_type_defn__succeeded)
                    parse_tree__parse_type_defn__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__GroundIs_15, (MR_Integer) 0)));
                }
                if (!(parse_tree__parse_type_defn__succeeded))
                  {
                    {
                      MR_Word parse_tree__parse_type_defn__V_41_41;

                      parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__AnyIs_16)) == (MR_mktag((MR_Integer) 1)));
                      if (parse_tree__parse_type_defn__succeeded)
                        parse_tree__parse_type_defn__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__AnyIs_16, (MR_Integer) 0)));
                    }
                    if (!(parse_tree__parse_type_defn__succeeded))
                      {
                        MR_Word parse_tree__parse_type_defn__V_42_42;

                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__CStoreIs_17)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          parse_tree__parse_type_defn__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__CStoreIs_17, (MR_Integer) 0)));
                      }
                  }
              }
            if (parse_tree__parse_type_defn__succeeded)
              {
                MR_Word parse_tree__parse_type_defn__V_54_54;
                MR_Word parse_tree__parse_type_defn__V_55_55;
                MR_Word parse_tree__parse_type_defn__V_56_56;
                MR_Word parse_tree__parse_type_defn__V_61_61;
                MR_Word parse_tree__parse_type_defn__Spec_130;

                {
                  parse_tree__parse_type_defn__V_56_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__WhereTerm_21);
                }
                {
                  parse_tree__parse_type_defn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_56_56));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[184])));
                }
                {
                  parse_tree__parse_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_55_55));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__Spec_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_130, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_130, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_54_54));
                }
                {
                  parse_tree__parse_type_defn__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_61_61, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_130));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_61_61));
                }
              }
            else
              {
                MR_Word parse_tree__parse_type_defn__MaybeUC_43;

                {
                  parse_tree__parse_type_defn__MaybeUC_43 = parse_tree__parse_type_defn__maybe_unify_compare_2_f_0(parse_tree__parse_type_defn__EqualityIs_18, parse_tree__parse_type_defn__ComparisonIs_19);
                }
                {
                  parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUC_43));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__DirectArgIs_20));
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_type_defn__V_25_25;

            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__DirectArgIs_20)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__DirectArgIs_20, (MR_Integer) 0)));
                {
                  MR_Word parse_tree__parse_type_defn__V_77_77;
                  MR_Word parse_tree__parse_type_defn__V_78_78;
                  MR_Word parse_tree__parse_type_defn__V_79_79;
                  MR_Word parse_tree__parse_type_defn__V_84_84;
                  MR_Word parse_tree__parse_type_defn__Spec_121;

                  {
                    parse_tree__parse_type_defn__V_79_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__WhereTerm_21);
                  }
                  {
                    parse_tree__parse_type_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_79_79));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[185])));
                  }
                  {
                    parse_tree__parse_type_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_78_78));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_121, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_77_77));
                  }
                  {
                    parse_tree__parse_type_defn__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_84_84, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_121));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_84_84));
                  }
                }
              }
            else
              {
                MR_Word parse_tree__parse_type_defn__RepnType_27;
                MR_Word parse_tree__parse_type_defn__MaybeGroundInst_28;
                MR_Word parse_tree__parse_type_defn__MaybeAnyInst_29;
                MR_Word parse_tree__parse_type_defn__MaybeEqPred_30;
                MR_Word parse_tree__parse_type_defn__MaybeCmpPred_31;
                MR_Word parse_tree__parse_type_defn__MaybeMutableInfos_32;

                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__RepresentationIs_14)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__RepnType_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__RepresentationIs_14, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__MaybeGroundInst_28 = parse_tree__parse_type_defn__GroundIs_15;
                    parse_tree__parse_type_defn__MaybeAnyInst_29 = parse_tree__parse_type_defn__AnyIs_16;
                    parse_tree__parse_type_defn__MaybeEqPred_30 = parse_tree__parse_type_defn__EqualityIs_18;
                    parse_tree__parse_type_defn__MaybeCmpPred_31 = parse_tree__parse_type_defn__ComparisonIs_19;
                    parse_tree__parse_type_defn__MaybeMutableInfos_32 = parse_tree__parse_type_defn__CStoreIs_17;
                    parse_tree__parse_type_defn__succeeded = MR_TRUE;
                  }
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    MR_Word parse_tree__parse_type_defn__GroundInst_33;
                    MR_Word parse_tree__parse_type_defn__AnyInst_34;
                    MR_Word parse_tree__parse_type_defn__MutableInfos_35;
                    MR_Word parse_tree__parse_type_defn__SolverTypeDetails_36;
                    MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_37;
                    MR_Word parse_tree__parse_type_defn__MaybeUnifyCompare_38;

                    if ((parse_tree__parse_type_defn__MaybeGroundInst_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        parse_tree__parse_type_defn__GroundInst_33 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
                    else
                      parse_tree__parse_type_defn__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeGroundInst_28, (MR_Integer) 0)));
                    if ((parse_tree__parse_type_defn__MaybeAnyInst_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        parse_tree__parse_type_defn__AnyInst_34 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
                    else
                      parse_tree__parse_type_defn__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeAnyInst_29, (MR_Integer) 0)));
                    if ((parse_tree__parse_type_defn__MaybeMutableInfos_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      parse_tree__parse_type_defn__MutableInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      parse_tree__parse_type_defn__MutableInfos_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeMutableInfos_32, (MR_Integer) 0)));
                    {
                      parse_tree__parse_type_defn__SolverTypeDetails_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__RepnType_27));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 1) = ((MR_Box) (parse_tree__parse_type_defn__GroundInst_33));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 2) = ((MR_Box) (parse_tree__parse_type_defn__AnyInst_34));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails_36, 3) = ((MR_Box) (parse_tree__parse_type_defn__MutableInfos_35));
                    }
                    {
                      parse_tree__parse_type_defn__MaybeSolverTypeDetails_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSolverTypeDetails_37, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_36));
                    }
                    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeEqPred_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_type_defn__succeeded)
                      parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__MaybeCmpPred_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_type_defn__succeeded)
                      parse_tree__parse_type_defn__MaybeUnifyCompare_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        MR_Word parse_tree__parse_type_defn__V_86_86;

                        {
                          parse_tree__parse_type_defn__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeEqPred_30));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeCmpPred_31));
                        }
                        {
                          parse_tree__parse_type_defn__MaybeUnifyCompare_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeUnifyCompare_38, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_86_86));
                        }
                      }
                    {
                      parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeSolverTypeDetails_37));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUnifyCompare_38));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                else
                  {
                    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__RepresentationIs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        MR_Word parse_tree__parse_type_defn__V_101_101;
                        MR_Word parse_tree__parse_type_defn__V_102_102;
                        MR_Word parse_tree__parse_type_defn__V_103_103;
                        MR_Word parse_tree__parse_type_defn__V_108_108;
                        MR_Word parse_tree__parse_type_defn__Spec_122;

                        {
                          parse_tree__parse_type_defn__V_103_103 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__WhereTerm_21);
                        }
                        {
                          parse_tree__parse_type_defn__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_103_103));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[186])));
                        }
                        {
                          parse_tree__parse_type_defn__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_101_101, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_102_102));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_type_defn__Spec_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_122, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_101_101));
                        }
                        {
                          parse_tree__parse_type_defn__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_108_108, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_122));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_108_108));
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.parse_type_defn", (MR_String) "function \140parse_tree.parse_type_defn.make_maybe_where_details_2\'/10", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                        }
                      }
                  }
              }
          }
          break;
      }
    else
      {
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__RepresentationIs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__GroundIs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__AnyIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__EqualityIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__ComparisonIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__CStoreIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_type_defn__succeeded)
                              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__DirectArgIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__V_116_116;
            MR_Word parse_tree__parse_type_defn__V_117_117;

            {
              parse_tree__parse_type_defn__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_117_117, 0) = ((MR_Box) (parse_tree__parse_type_defn__IsSolverType_12));
            }
            {
              parse_tree__parse_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_117_117));
            }
            {
              parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_116_116));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereDetails_22, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_defn__Spec_24;
            MR_Word parse_tree__parse_type_defn__V_119_119;

            {
              parse_tree__parse_type_defn__Spec_24 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(parse_tree__parse_type_defn__WhereTerm_21);
            }
            {
              parse_tree__parse_type_defn__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_119_119, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__MaybeWhereDetails_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_119_119));
            }
          }
      }
    return parse_tree__parse_type_defn__MaybeWhereDetails_22;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_13,
  MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14,
  MR_Word parse_tree__parse_type_defn__MaybeRepresentationIs_15,
  MR_Word parse_tree__parse_type_defn__MaybeGroundIs_16,
  MR_Word parse_tree__parse_type_defn__MaybeAnyIs_17,
  MR_Word parse_tree__parse_type_defn__MaybeCStoreIs_18,
  MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_19,
  MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_20,
  MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_21,
  MR_Word parse_tree__parse_type_defn__MaybeWhereEnd_22,
  MR_Word parse_tree__parse_type_defn__WhereTerm_23)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhereEnd_22)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__MaybeWhereDetails_24;
    MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_25;
    MR_Word parse_tree__parse_type_defn__RepresentationIs_26;
    MR_Word parse_tree__parse_type_defn__GroundIs_27;
    MR_Word parse_tree__parse_type_defn__AnyIs_28;
    MR_Word parse_tree__parse_type_defn__CStoreIs_29;
    MR_Word parse_tree__parse_type_defn__EqualityIs_30;
    MR_Word parse_tree__parse_type_defn__ComparisonIs_31;
    MR_Word parse_tree__parse_type_defn__DirectArgIs_32;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeRepresentationIs_15)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__RepresentationIs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeRepresentationIs_15, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeGroundIs_16)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__GroundIs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeGroundIs_16, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeAnyIs_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__AnyIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeAnyIs_17, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeCStoreIs_18)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__CStoreIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeCStoreIs_18, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeEqualityIs_19)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_type_defn__succeeded)
                              {
                                parse_tree__parse_type_defn__EqualityIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeEqualityIs_19, (MR_Integer) 0)));
                                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeComparisonIs_20)) == (MR_mktag((MR_Integer) 1)));
                                if (parse_tree__parse_type_defn__succeeded)
                                  {
                                    parse_tree__parse_type_defn__ComparisonIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeComparisonIs_20, (MR_Integer) 0)));
                                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeDirectArgIs_21)) == (MR_mktag((MR_Integer) 1)));
                                    if (parse_tree__parse_type_defn__succeeded)
                                      parse_tree__parse_type_defn__DirectArgIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeDirectArgIs_21, (MR_Integer) 0)));
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__MaybeWhereDetails_24 = parse_tree__parse_type_defn__make_maybe_where_details_2_10_f_0(parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_25, parse_tree__parse_type_defn__RepresentationIs_26, parse_tree__parse_type_defn__GroundIs_27, parse_tree__parse_type_defn__AnyIs_28, parse_tree__parse_type_defn__CStoreIs_29, parse_tree__parse_type_defn__EqualityIs_30, parse_tree__parse_type_defn__ComparisonIs_31, parse_tree__parse_type_defn__DirectArgIs_32, parse_tree__parse_type_defn__WhereTerm_23);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__parse_type_defn__TypeInfo_54_54;
        MR_Word parse_tree__parse_type_defn__TypeInfo_56_56;
        MR_Word parse_tree__parse_type_defn__Specs_34;
        MR_Word parse_tree__parse_type_defn__V_35_35;
        MR_Word parse_tree__parse_type_defn__V_36_36;
        MR_Word parse_tree__parse_type_defn__V_37_37;
        MR_Word parse_tree__parse_type_defn__V_38_38;
        MR_Word parse_tree__parse_type_defn__V_39_39;
        MR_Word parse_tree__parse_type_defn__V_40_40;
        MR_Word parse_tree__parse_type_defn__V_41_41;
        MR_Word parse_tree__parse_type_defn__V_42_42;
        MR_Word parse_tree__parse_type_defn__V_43_43;
        MR_Word parse_tree__parse_type_defn__V_44_44;
        MR_Word parse_tree__parse_type_defn__V_45_45;
        MR_Word parse_tree__parse_type_defn__V_46_46;
        MR_Word parse_tree__parse_type_defn__V_47_47;
        MR_Word parse_tree__parse_type_defn__V_48_48;
        MR_Word parse_tree__parse_type_defn__V_49_49;
        MR_Word parse_tree__parse_type_defn__V_50_50;

        {
          parse_tree__parse_type_defn__V_35_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[11], parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14);
        }
        {
          parse_tree__parse_type_defn__V_37_37 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[12], parse_tree__parse_type_defn__MaybeRepresentationIs_15);
        }
        parse_tree__parse_type_defn__TypeInfo_54_54 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[13];
        {
          parse_tree__parse_type_defn__V_39_39 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_54_54, parse_tree__parse_type_defn__MaybeGroundIs_16);
        }
        {
          parse_tree__parse_type_defn__V_41_41 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_54_54, parse_tree__parse_type_defn__MaybeAnyIs_17);
        }
        {
          parse_tree__parse_type_defn__V_43_43 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[14], parse_tree__parse_type_defn__MaybeCStoreIs_18);
        }
        parse_tree__parse_type_defn__TypeInfo_56_56 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[2];
        {
          parse_tree__parse_type_defn__V_45_45 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_56_56, parse_tree__parse_type_defn__MaybeEqualityIs_19);
        }
        {
          parse_tree__parse_type_defn__V_47_47 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_56_56, parse_tree__parse_type_defn__MaybeComparisonIs_20);
        }
        {
          parse_tree__parse_type_defn__V_49_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[8], parse_tree__parse_type_defn__MaybeDirectArgIs_21);
        }
        {
          parse_tree__parse_type_defn__V_50_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, parse_tree__parse_type_defn__MaybeWhereEnd_22);
        }
        {
          parse_tree__parse_type_defn__V_48_48 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_49_49, parse_tree__parse_type_defn__V_50_50);
        }
        {
          parse_tree__parse_type_defn__V_46_46 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_47_47, parse_tree__parse_type_defn__V_48_48);
        }
        {
          parse_tree__parse_type_defn__V_44_44 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_45_45, parse_tree__parse_type_defn__V_46_46);
        }
        {
          parse_tree__parse_type_defn__V_42_42 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_43_43, parse_tree__parse_type_defn__V_44_44);
        }
        {
          parse_tree__parse_type_defn__V_40_40 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_41_41, parse_tree__parse_type_defn__V_42_42);
        }
        {
          parse_tree__parse_type_defn__V_38_38 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_39_39, parse_tree__parse_type_defn__V_40_40);
        }
        {
          parse_tree__parse_type_defn__V_36_36 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_37_37, parse_tree__parse_type_defn__V_38_38);
        }
        {
          parse_tree__parse_type_defn__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_51_51, parse_tree__parse_type_defn__V_35_35, parse_tree__parse_type_defn__V_36_36);
        }
        {
          parse_tree__parse_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_34));
        }
      }
    return parse_tree__parse_type_defn__MaybeWhereDetails_24;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeFunctor_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__Name_9;
    MR_Integer parse_tree__parse_type_defn__Arity_10;

    {
      parse_tree__parse_type_defn__succeeded = parse_tree__parse_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__Term_7, &parse_tree__parse_type_defn__Name_9, &parse_tree__parse_type_defn__Arity_10);
    }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__V_14_14;

        {
          parse_tree__parse_type_defn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_14_14, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_14_14, 1) = ((MR_Box) (parse_tree__parse_type_defn__Arity_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeFunctor_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_14_14));
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_String parse_tree__parse_type_defn__TermStr_11;
        MR_Word parse_tree__parse_type_defn__Pieces_12;
        MR_Word parse_tree__parse_type_defn__Spec_13;
        MR_Word parse_tree__parse_type_defn__V_17_17;
        MR_Word parse_tree__parse_type_defn__V_20_20;
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_26_26;
        MR_Word parse_tree__parse_type_defn__V_27_27;
        MR_Word parse_tree__parse_type_defn__V_36_36;
        MR_Word parse_tree__parse_type_defn__V_37_37;
        MR_Word parse_tree__parse_type_defn__V_38_38;
        MR_Word parse_tree__parse_type_defn__V_39_39;
        MR_Word parse_tree__parse_type_defn__V_40_40;
        MR_Word parse_tree__parse_type_defn__V_43_43;

        {
          parse_tree__parse_type_defn__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_46_46, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_27_27, 1) = ((MR_Box) (parse_tree__parse_type_defn__TermStr_11));
        }
        {
          parse_tree__parse_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_27_27));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[39])));
        }
        {
          parse_tree__parse_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[183])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_26_26));
        }
        {
          parse_tree__parse_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[167])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_23_23));
        }
        {
          parse_tree__parse_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[182])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_17_17, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_20_20));
        }
        {
          parse_tree__parse_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[181])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_17_17));
        }
        {
          parse_tree__parse_type_defn__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_46_46, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_12));
        }
        {
          parse_tree__parse_type_defn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_40_40));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_38_38));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_39_39));
        }
        {
          parse_tree__parse_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_37_37));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_36_36));
        }
        {
          parse_tree__parse_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_13));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeFunctor_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_43_43));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_MaybeFunctor_8;

    {
      parse_tree__parse_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_MaybeFunctor_8);
    }
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_MaybeFunctor_8));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeDirectArgCtors_8;
    MR_Word parse_tree__parse_type_defn__FunctorsTerms_9;

    {
      parse_tree__parse_type_defn__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_type_defn__Term_7, &parse_tree__parse_type_defn__FunctorsTerms_9);
    }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__V_12_12;

        {
          parse_tree__parse_type_defn__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_12_12, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_12_12, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_direct_arg_is_3_f_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_12_12, 3) = ((MR_Box) (parse_tree__parse_type_defn__ModuleName_5));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_12_12, 4) = ((MR_Box) (parse_tree__parse_type_defn__VarSet_6));
        }
        {
          parse_tree__parse_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__parse_type_defn__V_12_12, parse_tree__parse_type_defn__FunctorsTerms_9, &parse_tree__parse_type_defn__MaybeDirectArgCtors_8);
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_11;
        MR_Word parse_tree__parse_type_defn__V_26_26;
        MR_Word parse_tree__parse_type_defn__V_27_27;
        MR_Word parse_tree__parse_type_defn__V_28_28;
        MR_Word parse_tree__parse_type_defn__V_33_33;

        {
          parse_tree__parse_type_defn__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7);
        }
        {
          parse_tree__parse_type_defn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_28_28));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[180])));
        }
        {
          parse_tree__parse_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_27_27));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_26_26));
        }
        {
          parse_tree__parse_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_11));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_33_33));
        }
      }
    return parse_tree__parse_type_defn__MaybeDirectArgCtors_8;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5,
  MR_Word * parse_tree__parse_type_defn__MaybeItemMutableInfo_6)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__ArgTerms_7;
    MR_Word parse_tree__parse_type_defn__Context_8;
    MR_Word parse_tree__parse_type_defn__V_13_13;
    MR_String parse_tree__parse_type_defn__V_14_14;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 0)));
        parse_tree__parse_type_defn__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 1)));
        parse_tree__parse_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_13_13, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_14_14, (MR_String) "mutable") == 0);
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__VarSet_9;

        {
          mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &parse_tree__parse_type_defn__VarSet_9);
        }
        {
          parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(parse_tree__parse_type_defn__ModuleName_4, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__ArgTerms_7, parse_tree__parse_type_defn__Context_8, (MR_Integer) -1, (MR_Integer) 1, parse_tree__parse_type_defn__MaybeItemMutableInfo_6);
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_12;
        MR_Word parse_tree__parse_type_defn__V_23_23;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_Word parse_tree__parse_type_defn__V_25_25;
        MR_Word parse_tree__parse_type_defn__V_30_30;

        {
          parse_tree__parse_type_defn__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_5);
        }
        {
          parse_tree__parse_type_defn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[179])));
        }
        {
          parse_tree__parse_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_24_24));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_23_23));
        }
        {
          parse_tree__parse_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_12));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeItemMutableInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_30_30));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_MaybeItemMutableInfo_6;

    {
      parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_MaybeItemMutableInfo_6);
    }
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_MaybeItemMutableInfo_6));
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_4,
  MR_Word parse_tree__parse_type_defn__Term_5)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__MaybeItems_6;
    MR_Word parse_tree__parse_type_defn__V_15_15;
    MR_String parse_tree__parse_type_defn__V_16_16;
    MR_Word parse_tree__parse_type_defn__V_7_7;
    MR_Word parse_tree__parse_type_defn__V_8_8;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_5, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_15_15)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_15_15, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_16_16, (MR_String) "mutable") == 0);
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__MaybeItem_9;

        {
          parse_tree__parse_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__parse_type_defn__ModuleName_4, parse_tree__parse_type_defn__Term_5, &parse_tree__parse_type_defn__MaybeItem_9);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
          parse_tree__parse_type_defn__MaybeItems_6 = (MR_Word) parse_tree__parse_type_defn__MaybeItem_9;
        else
          {
            MR_Word parse_tree__parse_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeItem_9, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__V_17_17;

            {
              parse_tree__parse_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_17_17, 0) = ((MR_Box) (parse_tree__parse_type_defn__Mutable_10));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_17_17));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Terms_12;

        {
          parse_tree__parse_type_defn__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_type_defn__Term_5, &parse_tree__parse_type_defn__Terms_12);
        }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__V_19_19;

            {
              parse_tree__parse_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_19_19, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[2]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_19_19, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_where_mutable_is_2_f_0_1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_19_19, 3) = ((MR_Box) (parse_tree__parse_type_defn__ModuleName_4));
            }
            {
              parse_tree__parse_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__parse_type_defn__V_19_19, parse_tree__parse_type_defn__Terms_12, &parse_tree__parse_type_defn__MaybeItems_6);
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_defn__Spec_14;
            MR_Word parse_tree__parse_type_defn__V_30_30;
            MR_Word parse_tree__parse_type_defn__V_31_31;
            MR_Word parse_tree__parse_type_defn__V_32_32;
            MR_Word parse_tree__parse_type_defn__V_37_37;

            {
              parse_tree__parse_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_5);
            }
            {
              parse_tree__parse_type_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_32_32));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[178])));
            }
            {
              parse_tree__parse_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_31_31));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_30_30));
            }
            {
              parse_tree__parse_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_14));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_37_37));
            }
          }
      }
    return parse_tree__parse_type_defn__MaybeItems_6;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
  MR_Word parse_tree__parse_type_defn__Term_3)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__HeadVar__2_2;
    MR_Word parse_tree__parse_type_defn__V_5_5;
    MR_String parse_tree__parse_type_defn__V_6_6;
    MR_Word parse_tree__parse_type_defn__V_7_7;
    MR_Word parse_tree__parse_type_defn__V_4_4;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_3, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_3, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_3, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_5_5)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_5_5, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_6_6, (MR_String) "type_is_abstract_noncanonical") == 0);
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        parse_tree__parse_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[20]);
      }
    else
      {
        parse_tree__parse_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[21]);
      }
    return parse_tree__parse_type_defn__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0(
  MR_Word parse_tree__parse_type_defn__IsSolverType_6,
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__Term0_9,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereDetails_10)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word parse_tree__parse_type_defn__GroundContextPieces_11;
    MR_Word parse_tree__parse_type_defn__AnyContextPieces_12;
    MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14;
    MR_Word parse_tree__parse_type_defn__MaybeRepresentationIs_15;
    MR_Word parse_tree__parse_type_defn__MaybeGroundIs_16;
    MR_Word parse_tree__parse_type_defn__MaybeAnyIs_17;
    MR_Word parse_tree__parse_type_defn__MaybeCStoreIs_18;
    MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_19;
    MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_20;
    MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_21;
    MR_Word parse_tree__parse_type_defn__MaybeEndSpec_22;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_32_32;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_34_34;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_38_38;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_42_42;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_46_46;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_50_50;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_54_54;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58;

    {
      parse_tree__parse_type_defn__GroundContextPieces_11 = mercury__cord__singleton_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_81_81, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[175]))));
    }
    {
      parse_tree__parse_type_defn__AnyContextPieces_12 = mercury__cord__singleton_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_81_81, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[176]))));
    }
    {
      parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30, 0) = ((MR_Box) (parse_tree__parse_type_defn__Term0_9));
    }
    {
      parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_30_30, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_32_32);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeRepresentationIs_15, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_32_32, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_34_34);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "ground", parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__GroundContextPieces_11, &parse_tree__parse_type_defn__MaybeGroundIs_16, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_34_34, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_38_38);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_54_93_95_48_4_p_0((MR_String) "any", parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__AnyContextPieces_12, &parse_tree__parse_type_defn__MaybeAnyIs_17, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_38_38, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_42_42);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__parse_type_defn__ModuleName_7, &parse_tree__parse_type_defn__MaybeCStoreIs_18, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_42_42, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_46_46);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeEqualityIs_19, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_46_46, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_50_50);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeComparisonIs_20, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_50_50, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_54_54);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, &parse_tree__parse_type_defn__MaybeDirectArgIs_21, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_54_54, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58);
    }
    if ((parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        parse_tree__parse_type_defn__MaybeEndSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[3]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__EndTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_58_58, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__EndSpec_25;
        MR_Word parse_tree__parse_type_defn__V_71_71;
        MR_Word parse_tree__parse_type_defn__V_72_72;
        MR_Word parse_tree__parse_type_defn__V_73_73;
        MR_Word parse_tree__parse_type_defn__V_78_78;

        {
          parse_tree__parse_type_defn__V_73_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__EndTerm_23);
        }
        {
          parse_tree__parse_type_defn__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_73_73));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[177])));
        }
        {
          parse_tree__parse_type_defn__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_71_71, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_72_72));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__EndSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_25, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_71_71));
        }
        {
          parse_tree__parse_type_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__parse_type_defn__EndSpec_25));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeEndSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeEndSpec_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_78_78));
        }
      }
    {
      *parse_tree__parse_type_defn__MaybeWhereDetails_10 = parse_tree__parse_type_defn__make_maybe_where_details_11_f_0(parse_tree__parse_type_defn__IsSolverType_6, parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_14, parse_tree__parse_type_defn__MaybeRepresentationIs_15, parse_tree__parse_type_defn__MaybeGroundIs_16, parse_tree__parse_type_defn__MaybeAnyIs_17, parse_tree__parse_type_defn__MaybeCStoreIs_18, parse_tree__parse_type_defn__MaybeEqualityIs_19, parse_tree__parse_type_defn__MaybeComparisonIs_20, parse_tree__parse_type_defn__MaybeDirectArgIs_21, parse_tree__parse_type_defn__MaybeEndSpec_22, parse_tree__parse_type_defn__Term0_9);
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_12,
  MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_13,
  MR_Word parse_tree__parse_type_defn__Context_14,
  MR_Integer parse_tree__parse_type_defn__SeqNum_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_56_56 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word parse_tree__parse_type_defn__TVarSet_17;
    MR_Word parse_tree__parse_type_defn__MaybeNameParams_18;
    MR_Word parse_tree__parse_type_defn__SolverSpecs_20;
    MR_Word parse_tree__parse_type_defn__FreeSpecs_27;
    MR_Word parse_tree__parse_type_defn__ParamTVars0_24;
    MR_Word parse_tree__parse_type_defn__SolverTypeDetails0_25;
    MR_Word parse_tree__parse_type_defn___SymName_23;
    MR_Word parse_tree__parse_type_defn__SymName_28;
    MR_Word parse_tree__parse_type_defn__ParamTVars_29;
    MR_Word parse_tree__parse_type_defn__SolverTypeDetails_30;

    {
      mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_56_56, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_10, &parse_tree__parse_type_defn__TVarSet_17);
    }
    {
      parse_tree__parse_type_defn__parse_type_defn_head_4_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, &parse_tree__parse_type_defn__MaybeNameParams_18);
    }
    if ((parse_tree__parse_type_defn__MaybeSolverTypeDetails_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__parse_type_defn__SolverSpec_22;
        MR_Word parse_tree__parse_type_defn__V_42_42;
        MR_Word parse_tree__parse_type_defn__V_43_43;
        MR_Word parse_tree__parse_type_defn__V_44_44;

        {
          parse_tree__parse_type_defn__V_44_44 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_56_56, parse_tree__parse_type_defn__HeadTerm_11);
        }
        {
          parse_tree__parse_type_defn__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_44_44));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[174])));
        }
        {
          parse_tree__parse_type_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_43_43));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__SolverSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
        }
        {
          parse_tree__parse_type_defn__SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_20, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverSpec_22));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      parse_tree__parse_type_defn__SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn___SymName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 0)));
        parse_tree__parse_type_defn__ParamTVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__SolverTypeDetails0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSolverTypeDetails_12, (MR_Integer) 0)));
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__RepType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 2)));
        MR_Word parse_tree__parse_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverTypeDetails0_25, (MR_Integer) 3)));

        {
          parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(parse_tree__parse_type_defn__TVarSet_17, parse_tree__parse_type_defn__ParamTVars0_24, parse_tree__parse_type_defn__RepType_26, parse_tree__parse_type_defn__Context_14, &parse_tree__parse_type_defn__FreeSpecs_27);
        }
      }
    else
      parse_tree__parse_type_defn__FreeSpecs_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 0)));
            parse_tree__parse_type_defn__ParamTVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_18, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              parse_tree__parse_type_defn__SolverTypeDetails_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSolverTypeDetails_12, (MR_Integer) 0)));
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__TypeDefn_31;
        MR_Word parse_tree__parse_type_defn__ItemTypeDefn_32;
        MR_Word parse_tree__parse_type_defn__Item_33;
        MR_Word parse_tree__parse_type_defn__V_50_50;

        {
          parse_tree__parse_type_defn__TypeDefn_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn_31, 1) = ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_30));
          MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__TypeDefn_31, 2) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUserEqComp_13));
        }
        {
          parse_tree__parse_type_defn__ItemTypeDefn_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_32, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_28));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_32, 1) = ((MR_Box) (parse_tree__parse_type_defn__ParamTVars_29));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_32, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_31));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_32, 3) = ((MR_Box) (parse_tree__parse_type_defn__TVarSet_17));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_32, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_14));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_32, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_15));
        }
        parse_tree__parse_type_defn__Item_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_32);
        {
          parse_tree__parse_type_defn__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_33));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_50_50));
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__parse_type_defn__Specs_34;
        MR_Word parse_tree__parse_type_defn__V_51_51;
        MR_Word parse_tree__parse_type_defn__V_52_52;

        {
          parse_tree__parse_type_defn__V_52_52 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeNameParams_18);
        }
        {
          parse_tree__parse_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, parse_tree__parse_type_defn__V_52_52, parse_tree__parse_type_defn__FreeSpecs_27);
        }
        {
          parse_tree__parse_type_defn__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_58_58, parse_tree__parse_type_defn__SolverSpecs_20, parse_tree__parse_type_defn__V_51_51);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_34));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_8,
  MR_Word parse_tree__parse_type_defn__VarSet_9,
  MR_Word parse_tree__parse_type_defn__HeadTerm_10,
  MR_Word parse_tree__parse_type_defn__BodyTerm_11,
  MR_Word parse_tree__parse_type_defn__Context_12,
  MR_Integer parse_tree__parse_type_defn__SeqNum_13,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_14)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__TypeVarSet_15;
    MR_Word parse_tree__parse_type_defn__MaybeNameParams_16;
    MR_Word parse_tree__parse_type_defn__MaybeTypeDefn_23;
    MR_Word parse_tree__parse_type_defn__Args_17;
    MR_Word parse_tree__parse_type_defn__V_32_32;
    MR_String parse_tree__parse_type_defn__V_33_33;
    MR_Word parse_tree__parse_type_defn__V_18_18;
    MR_Word parse_tree__parse_type_defn__Name_26;
    MR_Word parse_tree__parse_type_defn__Params_27;
    MR_Word parse_tree__parse_type_defn__TypeDefn_28;

    {
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_9, &parse_tree__parse_type_defn__TypeVarSet_15);
    }
    {
      parse_tree__parse_type_defn__parse_type_defn_head_4_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_10, &parse_tree__parse_type_defn__MaybeNameParams_16);
    }
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BodyTerm_11, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BodyTerm_11, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BodyTerm_11, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_32_32)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_32_32, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_33_33, (MR_String) "type_is_abstract_enum") == 0);
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Integer parse_tree__parse_type_defn__NumBits_20;
        MR_Word parse_tree__parse_type_defn__Arg_19;
        MR_Word parse_tree__parse_type_defn__V_34_34;
        MR_Word parse_tree__parse_type_defn__V_35_35;
        MR_Word parse_tree__parse_type_defn__V_36_36;
        MR_Word parse_tree__parse_type_defn__V_21_21;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Args_17)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_17, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_17, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Arg_19)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_19, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_19, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_19, (MR_Integer) 2)));
                    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_35_35)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          parse_tree__parse_type_defn__NumBits_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_35_35, (MR_Integer) 0)));
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__TypeDefn0_22;
            MR_Word parse_tree__parse_type_defn__V_37_37;

            {
              parse_tree__parse_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__parse_type_defn__NumBits_20));
            }
            {
              parse_tree__parse_type_defn__TypeDefn0_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), parse_tree__parse_type_defn__TypeDefn0_22, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_37_37));
            }
            {
              parse_tree__parse_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn0_22));
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_defn__Spec_25;
            MR_Word parse_tree__parse_type_defn__V_48_48;
            MR_Word parse_tree__parse_type_defn__V_49_49;
            MR_Word parse_tree__parse_type_defn__V_54_54;

            {
              parse_tree__parse_type_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_12));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[172])));
            }
            {
              parse_tree__parse_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_49_49));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_25, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_48_48));
            }
            {
              parse_tree__parse_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_25));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_54_54));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__V_69_69;
        MR_Word parse_tree__parse_type_defn__V_70_70;
        MR_Word parse_tree__parse_type_defn__V_75_75;
        MR_Word parse_tree__parse_type_defn__Spec_81;

        {
          parse_tree__parse_type_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[173])));
        }
        {
          parse_tree__parse_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_70_70));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_81, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_69_69));
        }
        {
          parse_tree__parse_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_81));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_75_75));
        }
      }
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameParams_16)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_16, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameParams_16, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeDefn_23)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__TypeDefn_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeDefn_23, (MR_Integer) 0)));
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__ItemTypeDefn_29;
        MR_Word parse_tree__parse_type_defn__Item_30;
        MR_Word parse_tree__parse_type_defn__V_77_77;

        {
          parse_tree__parse_type_defn__ItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_26));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 1) = ((MR_Box) (parse_tree__parse_type_defn__Params_27));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_28));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 3) = ((MR_Box) (parse_tree__parse_type_defn__TypeVarSet_15));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_12));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_13));
        }
        parse_tree__parse_type_defn__Item_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_29);
        {
          parse_tree__parse_type_defn__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_77_77));
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Specs_31;
        MR_Word parse_tree__parse_type_defn__V_78_78;
        MR_Word parse_tree__parse_type_defn__V_79_79;

        {
          parse_tree__parse_type_defn__V_78_78 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeNameParams_16);
        }
        {
          parse_tree__parse_type_defn__V_79_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0, parse_tree__parse_type_defn__MaybeTypeDefn_23);
        }
        {
          parse_tree__parse_type_defn__Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_defn__V_78_78, parse_tree__parse_type_defn__V_79_79);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_31));
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    switch (parse_tree__parse_type_defn__IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__parse_type_defn__parse_where_type_is_abstract_enum_7_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, parse_tree__parse_type_defn__BodyTerm_12, parse_tree__parse_type_defn__Context_13, parse_tree__parse_type_defn__SeqNum_14, parse_tree__parse_type_defn__MaybeIOM_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_type_defn__MaybeWhere_17;

          {
            parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 1, parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__BodyTerm_12, &parse_tree__parse_type_defn__MaybeWhere_17);
          }
          if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhere_17)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Word parse_tree__parse_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_defn__MaybeIOM_16 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_18));
              }
            }
          else
            {
              MR_Word parse_tree__parse_type_defn__MaybeSolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 0)));
              MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 1)));
              MR_Word parse_tree__parse_type_defn__MaybeDirectArgCtors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_17, (MR_Integer) 2)));

              if ((parse_tree__parse_type_defn__MaybeDirectArgCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__parse_type_defn__parse_solver_type_base_8_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, parse_tree__parse_type_defn__MaybeSolverTypeDetails_19, parse_tree__parse_type_defn__MaybeUserEqComp_20, parse_tree__parse_type_defn__Context_13, parse_tree__parse_type_defn__SeqNum_14, parse_tree__parse_type_defn__MaybeIOM_16);
                }
              else
                {
                  MR_Word parse_tree__parse_type_defn__Spec_24;
                  MR_Word parse_tree__parse_type_defn__V_42_42;
                  MR_Word parse_tree__parse_type_defn__V_43_43;
                  MR_Word parse_tree__parse_type_defn__V_44_44;
                  MR_Word parse_tree__parse_type_defn__V_49_49;

                  {
                    parse_tree__parse_type_defn__V_44_44 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadTerm_11);
                  }
                  {
                    parse_tree__parse_type_defn__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_44_44));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[171])));
                  }
                  {
                    parse_tree__parse_type_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_43_43));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
                  }
                  {
                    parse_tree__parse_type_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *parse_tree__parse_type_defn__MaybeIOM_16 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_49_49));
                  }
                }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__SolverSpecs_17;
    MR_Word parse_tree__parse_type_defn__MaybeNameAndParams_20;
    MR_Word parse_tree__parse_type_defn__ContextPieces_21;
    MR_Word parse_tree__parse_type_defn__MaybeType_22;
    MR_Word parse_tree__parse_type_defn__Name_23;
    MR_Word parse_tree__parse_type_defn__ParamTVars_24;
    MR_Word parse_tree__parse_type_defn__Type_25;

    switch (parse_tree__parse_type_defn__IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_type_defn__SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_type_defn__SolverSpec_19;
          MR_Word parse_tree__parse_type_defn__V_44_44;
          MR_Word parse_tree__parse_type_defn__V_45_45;
          MR_Word parse_tree__parse_type_defn__V_46_46;

          {
            parse_tree__parse_type_defn__V_46_46 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadTerm_11);
          }
          {
            parse_tree__parse_type_defn__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_45_45, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_46_46));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[170])));
          }
          {
            parse_tree__parse_type_defn__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_45_45));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_type_defn__SolverSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_19, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_44_44));
          }
          {
            parse_tree__parse_type_defn__SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_17, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverSpec_19));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      parse_tree__parse_type_defn__parse_type_defn_head_4_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, &parse_tree__parse_type_defn__MaybeNameAndParams_20);
    }
    {
      parse_tree__parse_type_defn__ContextPieces_21 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
    {
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[14]), parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__ContextPieces_21, parse_tree__parse_type_defn__BodyTerm_12, &parse_tree__parse_type_defn__MaybeType_22);
    }
    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__SolverSpecs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeNameAndParams_20)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameAndParams_20, (MR_Integer) 0)));
            parse_tree__parse_type_defn__ParamTVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeNameAndParams_20, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeType_22)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              parse_tree__parse_type_defn__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeType_22, (MR_Integer) 0)));
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word parse_tree__parse_type_defn__TVarSet_26;
        MR_Word parse_tree__parse_type_defn__FreeSpecs_27;
        MR_Word parse_tree__parse_type_defn__V_54_54;

        {
          mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_61_61, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_10, &parse_tree__parse_type_defn__TVarSet_26);
        }
        {
          parse_tree__parse_type_defn__V_54_54 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_61_61, parse_tree__parse_type_defn__BodyTerm_12);
        }
        {
          parse_tree__parse_type_defn__check_no_free_body_vars_5_p_0(parse_tree__parse_type_defn__TVarSet_26, parse_tree__parse_type_defn__ParamTVars_24, parse_tree__parse_type_defn__Type_25, parse_tree__parse_type_defn__V_54_54, &parse_tree__parse_type_defn__FreeSpecs_27);
        }
        if ((parse_tree__parse_type_defn__FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_type_defn__TypeDefn_28;
            MR_Word parse_tree__parse_type_defn__ItemTypeDefn_29;
            MR_Word parse_tree__parse_type_defn__Item_30;
            MR_Word parse_tree__parse_type_defn__V_55_55;

            {
              parse_tree__parse_type_defn__TypeDefn_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TypeDefn_28, 0) = ((MR_Box) (parse_tree__parse_type_defn__Type_25));
            }
            {
              parse_tree__parse_type_defn__ItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_23));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 1) = ((MR_Box) (parse_tree__parse_type_defn__ParamTVars_24));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_28));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 3) = ((MR_Box) (parse_tree__parse_type_defn__TVarSet_26));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_13));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_29, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_14));
            }
            parse_tree__parse_type_defn__Item_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_29);
            {
              parse_tree__parse_type_defn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_type_defn__MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_55_55));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_type_defn__MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__FreeSpecs_27));
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__parse_type_defn__Specs_33;
        MR_Word parse_tree__parse_type_defn__V_56_56;
        MR_Word parse_tree__parse_type_defn__V_57_57;
        MR_Word parse_tree__parse_type_defn__V_58_58;

        {
          parse_tree__parse_type_defn__V_57_57 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeNameAndParams_20);
        }
        {
          parse_tree__parse_type_defn__V_58_58 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_defn__MaybeType_22);
        }
        {
          parse_tree__parse_type_defn__V_56_56 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_63_63, parse_tree__parse_type_defn__V_57_57, parse_tree__parse_type_defn__V_58_58);
        }
        {
          parse_tree__parse_type_defn__Specs_33 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_63_63, parse_tree__parse_type_defn__SolverSpecs_17, parse_tree__parse_type_defn__V_56_56);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_33));
        }
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__find_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__SymName_7,
  MR_Integer parse_tree__parse_type_defn__Arity_8,
  MR_Word * parse_tree__parse_type_defn__NamedCtor_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__Ctor_5;
        MR_Word parse_tree__parse_type_defn__Ctors_6;
        MR_Word parse_tree__parse_type_defn__V_14_14;
        MR_Integer parse_tree__parse_type_defn__V_15_15;
        MR_Word parse_tree__parse_type_defn__V_10_10;
        MR_Word parse_tree__parse_type_defn__V_11_11;
        MR_Word parse_tree__parse_type_defn___Args_12;
        MR_Word parse_tree__parse_type_defn__V_13_13;

        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Ctor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__1_1, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Ctors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__1_1, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 2)));
            parse_tree__parse_type_defn___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 3)));
            parse_tree__parse_type_defn__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 4)));
            parse_tree__parse_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_5, (MR_Integer) 5)));
            {
              parse_tree__parse_type_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__parse_type_defn__SymName_7, parse_tree__parse_type_defn__V_14_14);
            }
            if (parse_tree__parse_type_defn__succeeded)
              parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Arity_8 == parse_tree__parse_type_defn__V_15_15);
            if (parse_tree__parse_type_defn__succeeded)
              {
                *parse_tree__parse_type_defn__NamedCtor_9 = parse_tree__parse_type_defn__Ctor_5;
                parse_tree__parse_type_defn__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word parse_tree__parse_type_defn__HeadVar__1__tmp_copy_1 = parse_tree__parse_type_defn__Ctors_6;

                  parse_tree__parse_type_defn__HeadVar__1_1 = parse_tree__parse_type_defn__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return parse_tree__parse_type_defn__succeeded;
      }
      break;
    }
}

static void MR_CALL 
parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__HeadVar__2_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_type_defn__succeeded;

        if ((parse_tree__parse_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4;
        else
          {
            MR_Word parse_tree__parse_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
            MR_Integer parse_tree__parse_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54;
            MR_Word parse_tree__parse_type_defn__Ctor_18;

            {
              parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__find_constructor_4_p_0(parse_tree__parse_type_defn__HeadVar__1_1, parse_tree__parse_type_defn__SymName_16, parse_tree__parse_type_defn__Arity_17, &parse_tree__parse_type_defn__Ctor_18);
            }
            if (parse_tree__parse_type_defn__succeeded)
              {
                MR_Word parse_tree__parse_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 1)));
                MR_Word parse_tree__parse_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 2)));
                MR_Word parse_tree__parse_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 3)));
                MR_Integer parse_tree__parse_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 4)));
                MR_Word parse_tree__parse_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_18, (MR_Integer) 5)));

                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__Arity_17 == (MR_Integer) 1);
                parse_tree__parse_type_defn__succeeded = !(parse_tree__parse_type_defn__succeeded);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    MR_Word parse_tree__parse_type_defn__Spec_26;
                    MR_Word parse_tree__parse_type_defn__V_47_47;
                    MR_Word parse_tree__parse_type_defn__V_48_48;
                    MR_Word parse_tree__parse_type_defn__V_49_49;

                    {
                      parse_tree__parse_type_defn__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadVar__3_3);
                    }
                    {
                      parse_tree__parse_type_defn__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_49_49));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[165])));
                    }
                    {
                      parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_48_48));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
                    }
                    {
                      parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_26));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4));
                    }
                  }
                else
                if ((parse_tree__parse_type_defn__ExistQVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4;
                else
                  {
                    MR_Word parse_tree__parse_type_defn__V_57_57;
                    MR_Word parse_tree__parse_type_defn__V_60_60;
                    MR_Word parse_tree__parse_type_defn__V_63_63;
                    MR_Word parse_tree__parse_type_defn__V_64_64;
                    MR_Word parse_tree__parse_type_defn__V_73_73;
                    MR_Word parse_tree__parse_type_defn__V_74_74;
                    MR_Word parse_tree__parse_type_defn__V_75_75;
                    MR_Word parse_tree__parse_type_defn__V_76_76;
                    MR_Word parse_tree__parse_type_defn__V_77_77;
                    MR_Word parse_tree__parse_type_defn__Pieces_108;
                    MR_Word parse_tree__parse_type_defn__Spec_109;

                    {
                      parse_tree__parse_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__parse_type_defn__DirectArgCtor_12));
                    }
                    {
                      parse_tree__parse_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_64_64));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[81])));
                    }
                    {
                      parse_tree__parse_type_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[168])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_63_63));
                    }
                    {
                      parse_tree__parse_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[167])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_57_57, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_60_60));
                    }
                    {
                      parse_tree__parse_type_defn__Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[166])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_108, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_57_57));
                    }
                    {
                      parse_tree__parse_type_defn__V_75_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadVar__3_3);
                    }
                    {
                      parse_tree__parse_type_defn__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_108));
                    }
                    {
                      parse_tree__parse_type_defn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_77_77));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_75_75));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_74_74, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_76_76));
                    }
                    {
                      parse_tree__parse_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_74_74));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_109, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_73_73));
                    }
                    {
                      parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_109));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4));
                    }
                  }
              }
            else
              {
                MR_Word parse_tree__parse_type_defn__V_83_83;
                MR_Word parse_tree__parse_type_defn__V_86_86;
                MR_Word parse_tree__parse_type_defn__V_89_89;
                MR_Word parse_tree__parse_type_defn__V_90_90;
                MR_Word parse_tree__parse_type_defn__V_99_99;
                MR_Word parse_tree__parse_type_defn__V_100_100;
                MR_Word parse_tree__parse_type_defn__V_101_101;
                MR_Word parse_tree__parse_type_defn__V_102_102;
                MR_Word parse_tree__parse_type_defn__V_103_103;
                MR_Word parse_tree__parse_type_defn__Pieces_112;
                MR_Word parse_tree__parse_type_defn__Spec_113;

                {
                  parse_tree__parse_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_90_90, 1) = ((MR_Box) (parse_tree__parse_type_defn__DirectArgCtor_12));
                }
                {
                  parse_tree__parse_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_89_89, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_90_90));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[83])));
                }
                {
                  parse_tree__parse_type_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[169])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_89_89));
                }
                {
                  parse_tree__parse_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[167])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_83_83, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_86_86));
                }
                {
                  parse_tree__parse_type_defn__Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[166])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_112, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_83_83));
                }
                {
                  parse_tree__parse_type_defn__V_101_101 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadVar__3_3);
                }
                {
                  parse_tree__parse_type_defn__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_103_103, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_112));
                }
                {
                  parse_tree__parse_type_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_103_103));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_100_100, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_101_101));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_102_102));
                }
                {
                  parse_tree__parse_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_100_100));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__Spec_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_113, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_99_99));
                }
                {
                  parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_113));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4));
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_type_defn__HeadVar__2__tmp_copy_2 = parse_tree__parse_type_defn__DirectArgCtors_13;
              MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_54_54;

              parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4;
              parse_tree__parse_type_defn__HeadVar__2_2 = parse_tree__parse_type_defn__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_9(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv10_HeadVar__3_301;

    {
      parse_tree__parse_type_defn__conv10_HeadVar__3_301 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__531__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv10_HeadVar__3_301));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_8(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    {
      parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__525__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_7(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv9_HeadVar__2_2;

    {
      parse_tree__parse_type_defn__conv9_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv9_HeadVar__2_2));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_6(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv6_HeadVar__3_285;

    {
      parse_tree__parse_type_defn__conv6_HeadVar__3_285 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__503__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv6_HeadVar__3_285));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_5(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    {
      parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__496__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_4(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv5_LambdaHeadVar__2_125;

    {
      parse_tree__parse_type_defn__conv5_LambdaHeadVar__2_125 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__492__1_1_f_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv5_LambdaHeadVar__2_125));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_3(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv2_HeadVar__3_272;

    {
      parse_tree__parse_type_defn__conv2_HeadVar__3_272 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__477__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv2_HeadVar__3_272));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    {
      parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__process_du_ctors__447__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_LambdaHeadVar__2_59;

    {
      parse_tree__parse_type_defn__conv0_LambdaHeadVar__2_59 = parse_tree__parse_type_defn__IntroducedFrom__func__process_du_ctors__444__1_1_f_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_LambdaHeadVar__2_59));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__process_du_ctors_6_p_0(
  MR_Word parse_tree__parse_type_defn__HeadVar__1_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__BodyTerm_3,
  MR_Word parse_tree__parse_type_defn__HeadVar__4_4,
  MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5,
  MR_Word * parse_tree__parse_type_defn__STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__parse_type_defn__succeeded;

        if ((parse_tree__parse_type_defn__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__parse_type_defn__STATE_VARIABLE_Specs_6 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5;
        else
          {
            MR_Word parse_tree__parse_type_defn__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 3)));
            MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86;
            MR_Word parse_tree__parse_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 2)));
            MR_Integer parse_tree__parse_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 4)));
            MR_Word parse_tree__parse_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_16, (MR_Integer) 5)));
            MR_Word parse_tree__parse_type_defn__NotExistQOrParamVars_30;
            MR_Word parse_tree__parse_type_defn__TypeInfo_259_259;
            MR_Word parse_tree__parse_type_defn__CtorArgTypes_25;
            MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes0_27;
            MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes_28;
            MR_Word parse_tree__parse_type_defn__V_60_60;
            MR_Word parse_tree__parse_type_defn__V_61_61;
            MR_Word parse_tree__parse_type_defn___ExistQOrParamVars_29;
            MR_Word parse_tree__parse_type_defn__V_31_31;
            MR_Word parse_tree__parse_type_defn__V_32_32;

            {
              parse_tree__parse_type_defn__CtorArgTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_4[3], parse_tree__parse_type_defn__CtorArgs_22);
            }
            {
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__parse_type_defn__CtorArgTypes_25, &parse_tree__parse_type_defn__VarsInCtorArgTypes0_27);
            }
            parse_tree__parse_type_defn__TypeInfo_259_259 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
            {
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_type_defn__TypeInfo_259_259, parse_tree__parse_type_defn__VarsInCtorArgTypes0_27, &parse_tree__parse_type_defn__VarsInCtorArgTypes_28);
            }
            {
              parse_tree__parse_type_defn__V_61_61 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeInfo_259_259, parse_tree__parse_type_defn__ExistQVars_19, parse_tree__parse_type_defn__HeadVar__1_1);
            }
            {
              parse_tree__parse_type_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_60_60, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[3]));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_2));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_60_60, 3) = ((MR_Box) (parse_tree__parse_type_defn__V_61_61));
            }
            {
              mercury__list__filter_4_p_0(parse_tree__parse_type_defn__TypeInfo_259_259, parse_tree__parse_type_defn__V_60_60, parse_tree__parse_type_defn__VarsInCtorArgTypes_28, &parse_tree__parse_type_defn___ExistQOrParamVars_29, &parse_tree__parse_type_defn__NotExistQOrParamVars_30);
            }
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__NotExistQOrParamVars_30)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQOrParamVars_30, (MR_Integer) 0)));
                parse_tree__parse_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQOrParamVars_30, (MR_Integer) 1)));
                {
                  MR_Word parse_tree__parse_type_defn__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                  MR_Word parse_tree__parse_type_defn__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
                  MR_Word parse_tree__parse_type_defn__GenericVarSet_33;
                  MR_String parse_tree__parse_type_defn__NotExistQOrParamVarsStr_34;
                  MR_Word parse_tree__parse_type_defn__Pieces_35;
                  MR_Word parse_tree__parse_type_defn__Spec_36;
                  MR_Word parse_tree__parse_type_defn__V_64_64;
                  MR_Word parse_tree__parse_type_defn__V_65_65;
                  MR_String parse_tree__parse_type_defn__V_66_66;
                  MR_Word parse_tree__parse_type_defn__V_69_69;
                  MR_Word parse_tree__parse_type_defn__V_70_70;
                  MR_Word parse_tree__parse_type_defn__V_79_79;
                  MR_Word parse_tree__parse_type_defn__V_80_80;
                  MR_Word parse_tree__parse_type_defn__V_81_81;
                  MR_Word parse_tree__parse_type_defn__V_82_82;
                  MR_Word parse_tree__parse_type_defn__V_83_83;
                  MR_Box parse_tree__parse_type_defn__conv1_V_66_66;

                  {
                    mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_262_262, parse_tree__parse_type_defn__TypeCtorInfo_263_263, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_33);
                  }
                  {
                    parse_tree__parse_type_defn__NotExistQOrParamVarsStr_34 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_263_263, parse_tree__parse_type_defn__GenericVarSet_33, parse_tree__parse_type_defn__NotExistQOrParamVars_30);
                  }
                  {
                    parse_tree__parse_type_defn__conv1_V_66_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_type_defn__NotExistQOrParamVars_30, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
                  }
                  parse_tree__parse_type_defn__V_66_66 = ((MR_String) parse_tree__parse_type_defn__conv1_V_66_66);
                  {
                    parse_tree__parse_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_65_65, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_66_66));
                  }
                  {
                    parse_tree__parse_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_70_70, 1) = ((MR_Box) (parse_tree__parse_type_defn__NotExistQOrParamVarsStr_34));
                  }
                  {
                    parse_tree__parse_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_70_70));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[57])));
                  }
                  {
                    parse_tree__parse_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_65_65));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_69_69));
                  }
                  {
                    parse_tree__parse_type_defn__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[161])));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_35, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_64_64));
                  }
                  {
                    parse_tree__parse_type_defn__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_262_262, parse_tree__parse_type_defn__BodyTerm_3);
                  }
                  {
                    parse_tree__parse_type_defn__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_35));
                  }
                  {
                    parse_tree__parse_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_83_83));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_80_80, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_81_81));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_80_80, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_82_82));
                  }
                  {
                    parse_tree__parse_type_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_79_79, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_80_80));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__parse_type_defn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_36, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_79_79));
                  }
                  {
                    parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_36));
                    MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
                  }
                }
              }
            else
              {
                MR_Word parse_tree__parse_type_defn__ExistQParamsSet_39;
                MR_Word parse_tree__parse_type_defn__TypeInfo_266_266 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                MR_Word parse_tree__parse_type_defn__ExistQVarsSet_37;
                MR_Word parse_tree__parse_type_defn__ParamsSet_38;

                {
                  mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__ExistQVars_19, &parse_tree__parse_type_defn__ExistQVarsSet_37);
                }
                {
                  mercury__set__list_to_set_2_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__HeadVar__1_1, &parse_tree__parse_type_defn__ParamsSet_38);
                }
                {
                  mercury__set__intersect_3_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__ExistQVarsSet_37, parse_tree__parse_type_defn__ParamsSet_38, &parse_tree__parse_type_defn__ExistQParamsSet_39);
                }
                {
                  parse_tree__parse_type_defn__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__parse_type_defn__TypeInfo_266_266, parse_tree__parse_type_defn__ExistQParamsSet_39);
                }
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    MR_Word parse_tree__parse_type_defn__TypeInfo_267_267 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_268_268;
                    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_270_270;
                    MR_Word parse_tree__parse_type_defn__TypeCtorInfo_274_274;
                    MR_Word parse_tree__parse_type_defn__ExistQParams_40;
                    MR_Word parse_tree__parse_type_defn__ExistQParamVarsStrs_41;
                    MR_Word parse_tree__parse_type_defn__V_87_87;
                    MR_Word parse_tree__parse_type_defn__V_88_88;
                    MR_Word parse_tree__parse_type_defn__V_91_91;
                    MR_Word parse_tree__parse_type_defn__V_92_92;
                    MR_String parse_tree__parse_type_defn__V_93_93;
                    MR_Word parse_tree__parse_type_defn__V_97_97;
                    MR_Word parse_tree__parse_type_defn__V_98_98;
                    MR_Word parse_tree__parse_type_defn__V_99_99;
                    MR_Word parse_tree__parse_type_defn__V_100_100;
                    MR_String parse_tree__parse_type_defn__V_101_101;
                    MR_Word parse_tree__parse_type_defn__V_115_115;
                    MR_Word parse_tree__parse_type_defn__V_116_116;
                    MR_Word parse_tree__parse_type_defn__V_117_117;
                    MR_Word parse_tree__parse_type_defn__V_118_118;
                    MR_Word parse_tree__parse_type_defn__V_119_119;
                    MR_Word parse_tree__parse_type_defn__GenericVarSet_219;
                    MR_Word parse_tree__parse_type_defn__Pieces_220;
                    MR_Word parse_tree__parse_type_defn__Spec_221;
                    MR_Box parse_tree__parse_type_defn__conv3_V_93_93;
                    MR_Box parse_tree__parse_type_defn__conv4_V_101_101;

                    {
                      mercury__set__to_sorted_list_2_p_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__ExistQParamsSet_39, &parse_tree__parse_type_defn__ExistQParams_40);
                    }
                    parse_tree__parse_type_defn__TypeCtorInfo_268_268 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                    {
                      mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_268_268, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_219);
                    }
                    parse_tree__parse_type_defn__TypeCtorInfo_270_270 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                    {
                      parse_tree__parse_type_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_87_87, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[1]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_87_87, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_3));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_87_87, 3) = ((MR_Box) (parse_tree__parse_type_defn__GenericVarSet_219));
                    }
                    {
                      parse_tree__parse_type_defn__ExistQParamVarsStrs_41 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__TypeCtorInfo_270_270, parse_tree__parse_type_defn__V_87_87, parse_tree__parse_type_defn__ExistQParams_40);
                    }
                    parse_tree__parse_type_defn__TypeCtorInfo_274_274 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                    {
                      parse_tree__parse_type_defn__conv3_V_93_93 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__TypeCtorInfo_270_270, parse_tree__parse_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                    }
                    parse_tree__parse_type_defn__V_93_93 = ((MR_String) parse_tree__parse_type_defn__conv3_V_93_93);
                    {
                      parse_tree__parse_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_92_92, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_93_93));
                    }
                    {
                      parse_tree__parse_type_defn__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_91_91, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_92_92));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_88_88, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_91_91));
                    }
                    {
                      parse_tree__parse_type_defn__V_98_98 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__parse_type_defn__ExistQParamVarsStrs_41);
                    }
                    {
                      parse_tree__parse_type_defn__conv4_V_101_101 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_267_267, parse_tree__parse_type_defn__TypeCtorInfo_270_270, parse_tree__parse_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
                    }
                    parse_tree__parse_type_defn__V_101_101 = ((MR_String) parse_tree__parse_type_defn__conv4_V_101_101);
                    {
                      parse_tree__parse_type_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_101_101));
                    }
                    {
                      parse_tree__parse_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_100_100));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[61])));
                    }
                    {
                      parse_tree__parse_type_defn__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_274_274, parse_tree__parse_type_defn__V_98_98, parse_tree__parse_type_defn__V_99_99);
                    }
                    {
                      parse_tree__parse_type_defn__Pieces_220 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_274_274, parse_tree__parse_type_defn__V_88_88, parse_tree__parse_type_defn__V_97_97);
                    }
                    {
                      parse_tree__parse_type_defn__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_268_268, parse_tree__parse_type_defn__BodyTerm_3);
                    }
                    {
                      parse_tree__parse_type_defn__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_119_119, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_220));
                    }
                    {
                      parse_tree__parse_type_defn__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_118_118, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_119_119));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_117_117));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_116_116, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_118_118));
                    }
                    {
                      parse_tree__parse_type_defn__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_115_115, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_116_116));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__Spec_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_221, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_115_115));
                    }
                    {
                      parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_221));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_type_defn__NotOccursExistQVars_44;
                    MR_Word parse_tree__parse_type_defn__TypeInfo_277_277;
                    MR_Word parse_tree__parse_type_defn__ConstraintTVars_42;
                    MR_Word parse_tree__parse_type_defn__V_126_126;
                    MR_Word parse_tree__parse_type_defn__V_127_127;
                    MR_Word parse_tree__parse_type_defn__CtorArgTypes_223;
                    MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes0_224;
                    MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes_225;
                    MR_Word parse_tree__parse_type_defn___OccursExistQVars_43;
                    MR_Word parse_tree__parse_type_defn__V_45_45;
                    MR_Word parse_tree__parse_type_defn__V_46_46;

                    {
                      parse_tree__parse_type_defn__CtorArgTypes_223 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_4[4], parse_tree__parse_type_defn__CtorArgs_22);
                    }
                    {
                      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__parse_type_defn__CtorArgTypes_223, &parse_tree__parse_type_defn__VarsInCtorArgTypes0_224);
                    }
                    parse_tree__parse_type_defn__TypeInfo_277_277 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                    {
                      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_type_defn__TypeInfo_277_277, parse_tree__parse_type_defn__VarsInCtorArgTypes0_224, &parse_tree__parse_type_defn__VarsInCtorArgTypes_225);
                    }
                    {
                      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__parse_type_defn__Constraints_20, &parse_tree__parse_type_defn__ConstraintTVars_42);
                    }
                    {
                      parse_tree__parse_type_defn__V_127_127 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeInfo_277_277, parse_tree__parse_type_defn__VarsInCtorArgTypes_225, parse_tree__parse_type_defn__ConstraintTVars_42);
                    }
                    {
                      parse_tree__parse_type_defn__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_126_126, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[3]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_126_126, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_5));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_126_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_126_126, 3) = ((MR_Box) (parse_tree__parse_type_defn__V_127_127));
                    }
                    {
                      mercury__list__filter_4_p_0(parse_tree__parse_type_defn__TypeInfo_277_277, parse_tree__parse_type_defn__V_126_126, parse_tree__parse_type_defn__ExistQVars_19, &parse_tree__parse_type_defn___OccursExistQVars_43, &parse_tree__parse_type_defn__NotOccursExistQVars_44);
                    }
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__NotOccursExistQVars_44)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotOccursExistQVars_44, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotOccursExistQVars_44, (MR_Integer) 1)));
                        {
                          MR_Word parse_tree__parse_type_defn__TypeCtorInfo_280_280 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                          MR_Word parse_tree__parse_type_defn__TypeInfo_282_282;
                          MR_Word parse_tree__parse_type_defn__TypeCtorInfo_283_283;
                          MR_Word parse_tree__parse_type_defn__TypeCtorInfo_287_287;
                          MR_Word parse_tree__parse_type_defn__NotOccursExistQVarStrs_47;
                          MR_Word parse_tree__parse_type_defn__V_128_128;
                          MR_Word parse_tree__parse_type_defn__V_129_129;
                          MR_Word parse_tree__parse_type_defn__V_132_132;
                          MR_Word parse_tree__parse_type_defn__V_133_133;
                          MR_String parse_tree__parse_type_defn__V_134_134;
                          MR_Word parse_tree__parse_type_defn__V_138_138;
                          MR_Word parse_tree__parse_type_defn__V_139_139;
                          MR_Word parse_tree__parse_type_defn__V_140_140;
                          MR_Word parse_tree__parse_type_defn__V_143_143;
                          MR_Word parse_tree__parse_type_defn__V_144_144;
                          MR_String parse_tree__parse_type_defn__V_145_145;
                          MR_Word parse_tree__parse_type_defn__V_156_156;
                          MR_Word parse_tree__parse_type_defn__V_157_157;
                          MR_Word parse_tree__parse_type_defn__V_158_158;
                          MR_Word parse_tree__parse_type_defn__V_159_159;
                          MR_Word parse_tree__parse_type_defn__V_160_160;
                          MR_Word parse_tree__parse_type_defn__GenericVarSet_226;
                          MR_Word parse_tree__parse_type_defn__Pieces_227;
                          MR_Word parse_tree__parse_type_defn__Spec_228;
                          MR_Box parse_tree__parse_type_defn__conv7_V_134_134;
                          MR_Box parse_tree__parse_type_defn__conv8_V_145_145;

                          {
                            mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_280_280, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_226);
                          }
                          parse_tree__parse_type_defn__TypeInfo_282_282 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                          parse_tree__parse_type_defn__TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                          {
                            parse_tree__parse_type_defn__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_128_128, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[1]));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_128_128, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_6));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_128_128, 3) = ((MR_Box) (parse_tree__parse_type_defn__GenericVarSet_226));
                          }
                          {
                            parse_tree__parse_type_defn__NotOccursExistQVarStrs_47 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_282_282, parse_tree__parse_type_defn__TypeCtorInfo_283_283, parse_tree__parse_type_defn__V_128_128, parse_tree__parse_type_defn__NotOccursExistQVars_44);
                          }
                          parse_tree__parse_type_defn__TypeCtorInfo_287_287 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                          {
                            parse_tree__parse_type_defn__conv7_V_134_134 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_282_282, parse_tree__parse_type_defn__TypeCtorInfo_283_283, parse_tree__parse_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                          }
                          parse_tree__parse_type_defn__V_134_134 = ((MR_String) parse_tree__parse_type_defn__conv7_V_134_134);
                          {
                            parse_tree__parse_type_defn__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_133_133, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_134_134));
                          }
                          {
                            parse_tree__parse_type_defn__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_132_132, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_133_133));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            parse_tree__parse_type_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162])));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_129_129, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_132_132));
                          }
                          {
                            parse_tree__parse_type_defn__V_139_139 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__parse_type_defn__NotOccursExistQVarStrs_47);
                          }
                          {
                            parse_tree__parse_type_defn__conv8_V_145_145 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_282_282, parse_tree__parse_type_defn__TypeCtorInfo_283_283, parse_tree__parse_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                          }
                          parse_tree__parse_type_defn__V_145_145 = ((MR_String) parse_tree__parse_type_defn__conv8_V_145_145);
                          {
                            parse_tree__parse_type_defn__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_144_144, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_145_145));
                          }
                          {
                            parse_tree__parse_type_defn__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_143_143, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_144_144));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[63])));
                          }
                          {
                            parse_tree__parse_type_defn__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[163])));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_140_140, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_143_143));
                          }
                          {
                            parse_tree__parse_type_defn__V_138_138 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_287_287, parse_tree__parse_type_defn__V_139_139, parse_tree__parse_type_defn__V_140_140);
                          }
                          {
                            parse_tree__parse_type_defn__Pieces_227 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_287_287, parse_tree__parse_type_defn__V_129_129, parse_tree__parse_type_defn__V_138_138);
                          }
                          {
                            parse_tree__parse_type_defn__V_158_158 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_280_280, parse_tree__parse_type_defn__BodyTerm_3);
                          }
                          {
                            parse_tree__parse_type_defn__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_160_160, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_227));
                          }
                          {
                            parse_tree__parse_type_defn__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_159_159, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_160_160));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            parse_tree__parse_type_defn__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_157_157, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_158_158));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_157_157, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_159_159));
                          }
                          {
                            parse_tree__parse_type_defn__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_156_156, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_157_157));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            parse_tree__parse_type_defn__Spec_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_228, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_228, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_156_156));
                          }
                          {
                            parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_228));
                            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
                          }
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_type_defn__NotExistQArgTypes_51;
                        MR_Word parse_tree__parse_type_defn__TypeInfo_293_293;
                        MR_Word parse_tree__parse_type_defn__ConstraintArgTypeLists_48;
                        MR_Word parse_tree__parse_type_defn__ConstraintArgTypes_49;
                        MR_Word parse_tree__parse_type_defn__V_165_165;
                        MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes0_229;
                        MR_Word parse_tree__parse_type_defn__VarsInCtorArgTypes_230;
                        MR_Word parse_tree__parse_type_defn___ExistQArgTypes_50;
                        MR_Word parse_tree__parse_type_defn__V_52_52;
                        MR_Word parse_tree__parse_type_defn__V_53_53;

                        {
                          parse_tree__parse_type_defn__ConstraintArgTypeLists_48 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[9], (MR_Word) &parse_tree__parse_type_defn_scalar_common_4[5], parse_tree__parse_type_defn__Constraints_20);
                        }
                        {
                          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_type_defn__ConstraintArgTypeLists_48, &parse_tree__parse_type_defn__ConstraintArgTypes_49);
                        }
                        {
                          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__parse_type_defn__ConstraintArgTypes_49, &parse_tree__parse_type_defn__VarsInCtorArgTypes0_229);
                        }
                        parse_tree__parse_type_defn__TypeInfo_293_293 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                        {
                          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__parse_type_defn__TypeInfo_293_293, parse_tree__parse_type_defn__VarsInCtorArgTypes0_229, &parse_tree__parse_type_defn__VarsInCtorArgTypes_230);
                        }
                        {
                          parse_tree__parse_type_defn__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_165_165, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[3]));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_165_165, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_8));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_165_165, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_165_165, 3) = ((MR_Box) (parse_tree__parse_type_defn__ExistQVars_19));
                        }
                        {
                          mercury__list__filter_4_p_0(parse_tree__parse_type_defn__TypeInfo_293_293, parse_tree__parse_type_defn__V_165_165, parse_tree__parse_type_defn__VarsInCtorArgTypes_230, &parse_tree__parse_type_defn___ExistQArgTypes_50, &parse_tree__parse_type_defn__NotExistQArgTypes_51);
                        }
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__NotExistQArgTypes_51)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQArgTypes_51, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__NotExistQArgTypes_51, (MR_Integer) 1)));
                            {
                              MR_Word parse_tree__parse_type_defn__TypeCtorInfo_296_296 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                              MR_Word parse_tree__parse_type_defn__TypeInfo_298_298;
                              MR_Word parse_tree__parse_type_defn__TypeCtorInfo_299_299;
                              MR_Word parse_tree__parse_type_defn__TypeCtorInfo_303_303;
                              MR_Word parse_tree__parse_type_defn__NotExistQArgTypeStrs_54;
                              MR_Word parse_tree__parse_type_defn__V_166_166;
                              MR_Word parse_tree__parse_type_defn__V_167_167;
                              MR_Word parse_tree__parse_type_defn__V_170_170;
                              MR_Word parse_tree__parse_type_defn__V_171_171;
                              MR_String parse_tree__parse_type_defn__V_172_172;
                              MR_Word parse_tree__parse_type_defn__V_176_176;
                              MR_Word parse_tree__parse_type_defn__V_177_177;
                              MR_Word parse_tree__parse_type_defn__V_178_178;
                              MR_Word parse_tree__parse_type_defn__V_181_181;
                              MR_Word parse_tree__parse_type_defn__V_182_182;
                              MR_String parse_tree__parse_type_defn__V_183_183;
                              MR_Word parse_tree__parse_type_defn__V_209_209;
                              MR_Word parse_tree__parse_type_defn__V_210_210;
                              MR_Word parse_tree__parse_type_defn__V_211_211;
                              MR_Word parse_tree__parse_type_defn__V_212_212;
                              MR_Word parse_tree__parse_type_defn__V_213_213;
                              MR_Word parse_tree__parse_type_defn__GenericVarSet_231;
                              MR_Word parse_tree__parse_type_defn__Pieces_232;
                              MR_Word parse_tree__parse_type_defn__Spec_233;
                              MR_Box parse_tree__parse_type_defn__conv11_V_172_172;
                              MR_Box parse_tree__parse_type_defn__conv12_V_183_183;

                              {
                                mercury__varset__coerce_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_296_296, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_2, &parse_tree__parse_type_defn__GenericVarSet_231);
                              }
                              parse_tree__parse_type_defn__TypeInfo_298_298 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1];
                              parse_tree__parse_type_defn__TypeCtorInfo_299_299 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                              {
                                parse_tree__parse_type_defn__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_166_166, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[1]));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_166_166, 1) = ((MR_Box) (parse_tree__parse_type_defn__process_du_ctors_6_p_0_9));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_166_166, 3) = ((MR_Box) (parse_tree__parse_type_defn__GenericVarSet_231));
                              }
                              {
                                parse_tree__parse_type_defn__NotExistQArgTypeStrs_54 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_298_298, parse_tree__parse_type_defn__TypeCtorInfo_299_299, parse_tree__parse_type_defn__V_166_166, parse_tree__parse_type_defn__NotExistQArgTypes_51);
                              }
                              parse_tree__parse_type_defn__TypeCtorInfo_303_303 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
                              {
                                parse_tree__parse_type_defn__conv11_V_172_172 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_298_298, parse_tree__parse_type_defn__TypeCtorInfo_299_299, parse_tree__parse_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                              }
                              parse_tree__parse_type_defn__V_172_172 = ((MR_String) parse_tree__parse_type_defn__conv11_V_172_172);
                              {
                                parse_tree__parse_type_defn__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_171_171, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_172_172));
                              }
                              {
                                parse_tree__parse_type_defn__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_170_170, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_171_171));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                parse_tree__parse_type_defn__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_167_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[162])));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_167_167, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_170_170));
                              }
                              {
                                parse_tree__parse_type_defn__V_177_177 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__parse_type_defn__NotExistQArgTypeStrs_54);
                              }
                              {
                                parse_tree__parse_type_defn__conv12_V_183_183 = parse_tree__error_util__choose_number_3_f_0(parse_tree__parse_type_defn__TypeInfo_298_298, parse_tree__parse_type_defn__TypeCtorInfo_299_299, parse_tree__parse_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                              }
                              parse_tree__parse_type_defn__V_183_183 = ((MR_String) parse_tree__parse_type_defn__conv12_V_183_183);
                              {
                                parse_tree__parse_type_defn__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_182_182, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_183_183));
                              }
                              {
                                parse_tree__parse_type_defn__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_181_181, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_182_182));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[72])));
                              }
                              {
                                parse_tree__parse_type_defn__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[164])));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_178_178, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_181_181));
                              }
                              {
                                parse_tree__parse_type_defn__V_176_176 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_303_303, parse_tree__parse_type_defn__V_177_177, parse_tree__parse_type_defn__V_178_178);
                              }
                              {
                                parse_tree__parse_type_defn__Pieces_232 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_303_303, parse_tree__parse_type_defn__V_167_167, parse_tree__parse_type_defn__V_176_176);
                              }
                              {
                                parse_tree__parse_type_defn__V_211_211 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_296_296, parse_tree__parse_type_defn__BodyTerm_3);
                              }
                              {
                                parse_tree__parse_type_defn__V_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_213_213, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_232));
                              }
                              {
                                parse_tree__parse_type_defn__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_212_212, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_213_213));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                parse_tree__parse_type_defn__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_210_210, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_211_211));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_210_210, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_212_212));
                              }
                              {
                                parse_tree__parse_type_defn__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_209_209, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_210_210));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                parse_tree__parse_type_defn__Spec_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_233, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_209_209));
                              }
                              {
                                parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_233));
                                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5));
                              }
                            }
                          }
                        else
                          parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5;
                      }
                  }
              }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__parse_type_defn__HeadVar__4__tmp_copy_4 = parse_tree__parse_type_defn__Ctors_17;
              MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_86_86;

              parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__parse_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5;
              parse_tree__parse_type_defn__HeadVar__4_4 = parse_tree__parse_type_defn__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__MaybeCtorFieldName_9,
  MR_Word parse_tree__parse_type_defn__TypeTerm_10,
  MR_Word parse_tree__parse_type_defn__Terms_11)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeArgs_12;
    MR_Word parse_tree__parse_type_defn__ContextPieces_13;
    MR_Word parse_tree__parse_type_defn__MaybeType_14;

    {
      parse_tree__parse_type_defn__ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[151]))));
    }
    {
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__ContextPieces_13, parse_tree__parse_type_defn__TypeTerm_10, &parse_tree__parse_type_defn__MaybeType_14);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
      parse_tree__parse_type_defn__MaybeArgs_12 = (MR_Word) parse_tree__parse_type_defn__MaybeType_14;
    else
      {
        MR_Word parse_tree__parse_type_defn__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeType_14, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Context_16;
        MR_Word parse_tree__parse_type_defn__Arg_17;
        MR_Word parse_tree__parse_type_defn__MaybeTailArgs_18;

        {
          parse_tree__parse_type_defn__Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__TypeTerm_10);
        }
        {
          parse_tree__parse_type_defn__Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeCtorFieldName_9));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 1) = ((MR_Box) (parse_tree__parse_type_defn__Type_15));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Arg_17, 3) = ((MR_Box) (parse_tree__parse_type_defn__Context_16));
        }
        if ((parse_tree__parse_type_defn__Terms_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__parse_type_defn__MaybeTailArgs_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[10]);
          }
        else
          {
            MR_Word parse_tree__parse_type_defn__Term_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Terms_11, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__Terms_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Terms_11, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__NameTerm_37;
            MR_Word parse_tree__parse_type_defn__TypeTerm_38;
            MR_Word parse_tree__parse_type_defn__V_51_51;
            MR_String parse_tree__parse_type_defn__V_52_52;
            MR_Word parse_tree__parse_type_defn__V_53_53;
            MR_Word parse_tree__parse_type_defn__V_54_54;
            MR_Word parse_tree__parse_type_defn__V_55_55;
            MR_Word parse_tree__parse_type_defn__V_39_39;

            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_34)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_34, (MR_Integer) 0)));
                parse_tree__parse_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_34, (MR_Integer) 1)));
                parse_tree__parse_type_defn__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_34, (MR_Integer) 2)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_51_51)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_51_51, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_52_52, (MR_String) "::") == 0);
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_53_53)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__NameTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_53_53, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_53_53, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_54_54)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_type_defn__succeeded)
                              {
                                parse_tree__parse_type_defn__TypeTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, (MR_Integer) 0)));
                                parse_tree__parse_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, (MR_Integer) 1)));
                                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (parse_tree__parse_type_defn__succeeded)
              {
                MR_Word parse_tree__parse_type_defn__TypeCtorInfo_54_78;
                MR_Word parse_tree__parse_type_defn__ContextPieces_40;
                MR_Word parse_tree__parse_type_defn__MaybeSymNameAndArgs_41;

                {
                  parse_tree__parse_type_defn__ContextPieces_40 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[159]))));
                }
                parse_tree__parse_type_defn__TypeCtorInfo_54_78 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                {
                  parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_54_78, parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__NameTerm_37, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__ContextPieces_40, &parse_tree__parse_type_defn__MaybeSymNameAndArgs_41);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeSymNameAndArgs_41)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word parse_tree__parse_type_defn__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeSymNameAndArgs_41, (MR_Integer) 0)));

                    {
                      parse_tree__parse_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_42));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_type_defn__SymName_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSymNameAndArgs_41, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_type_defn__SymNameArgs_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSymNameAndArgs_41, (MR_Integer) 1)));

                    if ((parse_tree__parse_type_defn__SymNameArgs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word parse_tree__parse_type_defn__NameCtxt_49;
                        MR_Word parse_tree__parse_type_defn__MaybeCtorFieldName_50;
                        MR_Word parse_tree__parse_type_defn__V_58_58;

                        {
                          parse_tree__parse_type_defn__NameCtxt_49 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_54_78, parse_tree__parse_type_defn__NameTerm_37);
                        }
                        {
                          parse_tree__parse_type_defn__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_43));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameCtxt_49));
                        }
                        {
                          parse_tree__parse_type_defn__MaybeCtorFieldName_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeCtorFieldName_50, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_58_58));
                        }
                        {
                          parse_tree__parse_type_defn__MaybeTailArgs_18 = parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__MaybeCtorFieldName_50, parse_tree__parse_type_defn__TypeTerm_38, parse_tree__parse_type_defn__Terms_35);
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__parse_type_defn__Spec_48;
                        MR_Word parse_tree__parse_type_defn__V_66_66;
                        MR_Word parse_tree__parse_type_defn__V_67_67;
                        MR_Word parse_tree__parse_type_defn__V_68_68;
                        MR_Word parse_tree__parse_type_defn__V_73_73;

                        {
                          parse_tree__parse_type_defn__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_54_78, parse_tree__parse_type_defn__Term_34);
                        }
                        {
                          parse_tree__parse_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_68_68));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[160])));
                        }
                        {
                          parse_tree__parse_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_67_67));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_type_defn__Spec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_48, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_66_66));
                        }
                        {
                          parse_tree__parse_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_48));
                          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__parse_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_73_73));
                        }
                      }
                  }
              }
            else
              {
                {
                  parse_tree__parse_type_defn__MaybeTailArgs_18 = parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__Term_34, parse_tree__parse_type_defn__Terms_35);
                }
              }
          }
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
          parse_tree__parse_type_defn__MaybeArgs_12 = parse_tree__parse_type_defn__MaybeTailArgs_18;
        else
          {
            MR_Word parse_tree__parse_type_defn__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailArgs_18, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__V_25_25;

            {
              parse_tree__parse_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__Arg_17));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, 1) = ((MR_Box) (parse_tree__parse_type_defn__Args_20));
            }
            {
              parse_tree__parse_type_defn__MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeArgs_12, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_25_25));
            }
          }
      }
    return parse_tree__parse_type_defn__MaybeArgs_12;
  }
}

static MR_Word MR_CALL 
parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_1,
  MR_Word parse_tree__parse_type_defn__VarSet_2,
  MR_Word parse_tree__parse_type_defn__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadVar__4_4;

    if ((parse_tree__parse_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[10]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__NameTerm_13;
        MR_Word parse_tree__parse_type_defn__TypeTerm_14;
        MR_Word parse_tree__parse_type_defn__V_27_27;
        MR_String parse_tree__parse_type_defn__V_28_28;
        MR_Word parse_tree__parse_type_defn__V_29_29;
        MR_Word parse_tree__parse_type_defn__V_30_30;
        MR_Word parse_tree__parse_type_defn__V_31_31;
        MR_Word parse_tree__parse_type_defn__V_15_15;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_10, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_10, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_10, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_27_27, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_28_28, (MR_String) "::") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_29_29, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_29_29, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_30_30, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_30_30, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__TypeCtorInfo_54_54;
            MR_Word parse_tree__parse_type_defn__ContextPieces_16;
            MR_Word parse_tree__parse_type_defn__MaybeSymNameAndArgs_17;

            {
              parse_tree__parse_type_defn__ContextPieces_16 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[159]))));
            }
            parse_tree__parse_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            {
              parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__ModuleName_1, parse_tree__parse_type_defn__NameTerm_13, parse_tree__parse_type_defn__VarSet_2, parse_tree__parse_type_defn__ContextPieces_16, &parse_tree__parse_type_defn__MaybeSymNameAndArgs_17);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));

                {
                  parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_18));
                }
              }
            else
              {
                MR_Word parse_tree__parse_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 1)));

                if ((parse_tree__parse_type_defn__SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__parse_type_defn__NameCtxt_25;
                    MR_Word parse_tree__parse_type_defn__MaybeCtorFieldName_26;
                    MR_Word parse_tree__parse_type_defn__V_34_34;

                    {
                      parse_tree__parse_type_defn__NameCtxt_25 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__NameTerm_13);
                    }
                    {
                      parse_tree__parse_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_19));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_34_34, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameCtxt_25));
                    }
                    {
                      parse_tree__parse_type_defn__MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeCtorFieldName_26, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_34_34));
                    }
                    {
                      parse_tree__parse_type_defn__HeadVar__4_4 = parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__parse_type_defn__ModuleName_1, parse_tree__parse_type_defn__VarSet_2, parse_tree__parse_type_defn__MaybeCtorFieldName_26, parse_tree__parse_type_defn__TypeTerm_14, parse_tree__parse_type_defn__Terms_11);
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_type_defn__Spec_24;
                    MR_Word parse_tree__parse_type_defn__V_42_42;
                    MR_Word parse_tree__parse_type_defn__V_43_43;
                    MR_Word parse_tree__parse_type_defn__V_44_44;
                    MR_Word parse_tree__parse_type_defn__V_49_49;

                    {
                      parse_tree__parse_type_defn__V_44_44 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_54_54, parse_tree__parse_type_defn__Term_10);
                    }
                    {
                      parse_tree__parse_type_defn__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_44_44));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[160])));
                    }
                    {
                      parse_tree__parse_type_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_43_43));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_42_42));
                    }
                    {
                      parse_tree__parse_type_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_24));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_49_49));
                    }
                  }
              }
          }
        else
          {
            {
              parse_tree__parse_type_defn__HeadVar__4_4 = parse_tree__parse_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__parse_type_defn__ModuleName_1, parse_tree__parse_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__Term_10, parse_tree__parse_type_defn__Terms_11);
            }
          }
      }
    return parse_tree__parse_type_defn__HeadVar__4_4;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_constructor_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__ExistQVars_8,
  MR_Word parse_tree__parse_type_defn__Term_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_10)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__BeforeConstraintsTerm_11;
    MR_Word parse_tree__parse_type_defn__MaybeConstraints_12;
    MR_Word parse_tree__parse_type_defn__ExistentialConstraints_48;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
    MR_Word parse_tree__parse_type_defn__V_50_50;
    MR_String parse_tree__parse_type_defn__V_51_51;
    MR_Word parse_tree__parse_type_defn__V_52_52;
    MR_Word parse_tree__parse_type_defn__V_54_54;
    MR_Word parse_tree__parse_type_defn__V_55_55;
    MR_Word parse_tree__parse_type_defn__V_49_49;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_9, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_50_50, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_51_51, (MR_String) "=>") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_52_52, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_52_52, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_54_54)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__ExistentialConstraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__BeforeConstraintsTerm_11 = parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
        {
          parse_tree__parse_class__parse_class_constraints_4_p_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ExistentialConstraints_48, &parse_tree__parse_type_defn__MaybeConstraints_12);
        }
      }
    else
      {
        parse_tree__parse_type_defn__MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]);
        parse_tree__parse_type_defn__BeforeConstraintsTerm_11 = parse_tree__parse_type_defn__Term_9;
      }
    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__parse_type_defn__MaybeConstraints_12;
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_40_40;
        MR_Word parse_tree__parse_type_defn__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstraints_12, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__MainTerm_17;
        MR_Word parse_tree__parse_type_defn__ContextPieces_18;
        MR_Word parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19;
        MR_Word parse_tree__parse_type_defn__InsideBracesTerm_15;
        MR_Word parse_tree__parse_type_defn__V_25_25;
        MR_String parse_tree__parse_type_defn__V_26_26;
        MR_Word parse_tree__parse_type_defn__V_27_27;
        MR_Word parse_tree__parse_type_defn__V_28_28;
        MR_Word parse_tree__parse_type_defn___Context_16;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 0)));
            parse_tree__parse_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 1)));
            parse_tree__parse_type_defn___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_25_25, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_26_26, (MR_String) "{}") == 0);
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_27_27, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_27_27, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          parse_tree__parse_type_defn__MainTerm_17 = parse_tree__parse_type_defn__InsideBracesTerm_15;
        else
          parse_tree__parse_type_defn__MainTerm_17 = parse_tree__parse_type_defn__BeforeConstraintsTerm_11;
        {
          parse_tree__parse_type_defn__ContextPieces_18 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[158]))));
        }
        parse_tree__parse_type_defn__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_40_40, parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__MainTerm_17, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ContextPieces_18, &parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__parse_type_defn__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_defn__MaybeConstructor_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_33));
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_defn__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__MaybeConstructorArgs_22;

            {
              parse_tree__parse_type_defn__MaybeConstructorArgs_22 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__ArgTerms_21);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__parse_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_22;
            else
              {
                MR_Word parse_tree__parse_type_defn__ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstructorArgs_22, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__Ctor_24;
                MR_Integer parse_tree__parse_type_defn__V_31_31;
                MR_Word parse_tree__parse_type_defn__V_32_32;

                {
                  parse_tree__parse_type_defn__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__parse_type_defn__ConstructorArgs_23);
                }
                {
                  parse_tree__parse_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_40_40, parse_tree__parse_type_defn__MainTerm_17);
                }
                {
                  parse_tree__parse_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 0) = ((MR_Box) (parse_tree__parse_type_defn__ExistQVars_8));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 1) = ((MR_Box) (parse_tree__parse_type_defn__Constraints_14));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 2) = ((MR_Box) (parse_tree__parse_type_defn__Functor_20));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 3) = ((MR_Box) (parse_tree__parse_type_defn__ConstructorArgs_23));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 4) = ((MR_Box) (parse_tree__parse_type_defn__V_31_31));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_24, 5) = ((MR_Box) (parse_tree__parse_type_defn__V_32_32));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_defn__MaybeConstructor_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Ctor_24));
                }
              }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_HeadVar__2_37;

    {
      parse_tree__parse_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__296__1_2_p_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_HeadVar__2_37);
    }
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_HeadVar__2_37));
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructor_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__VarsTerm_9;
    MR_Word parse_tree__parse_type_defn__SubTerm_10;
    MR_Word parse_tree__parse_type_defn__V_17_17;
    MR_String parse_tree__parse_type_defn__V_18_18;
    MR_Word parse_tree__parse_type_defn__V_19_19;
    MR_Word parse_tree__parse_type_defn__V_20_20;
    MR_Word parse_tree__parse_type_defn__V_21_21;
    MR_Word parse_tree__parse_type_defn__V_11_11;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 1)));
        parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_7, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_17_17)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_17_17, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_18_18, (MR_String) "some") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__VarsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__SubTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_20_20, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__ContextPieces_12;
        MR_Word parse_tree__parse_type_defn__MaybeExistQVars_13;

        {
          parse_tree__parse_type_defn__ContextPieces_12 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[53]));
        }
        {
          parse_tree__parse_vars__parse_possibly_repeated_vars_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__VarsTerm_9, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ContextPieces_12, &parse_tree__parse_type_defn__MaybeExistQVars_13);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeExistQVars_13)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__parse_type_defn__MaybeExistQVars_13;
        else
          {
            MR_Word parse_tree__parse_type_defn__ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeExistQVars_13, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__ExistQTVars_15;
            MR_Word parse_tree__parse_type_defn__BeforeConstraintsTerm_47;
            MR_Word parse_tree__parse_type_defn__MaybeConstraints_48;
            MR_Word parse_tree__parse_type_defn__ExistentialConstraints_84;
            MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_89;
            MR_Word parse_tree__parse_type_defn__V_86_86;
            MR_String parse_tree__parse_type_defn__V_87_87;
            MR_Word parse_tree__parse_type_defn__V_88_88;
            MR_Word parse_tree__parse_type_defn__V_90_90;
            MR_Word parse_tree__parse_type_defn__V_91_91;
            MR_Word parse_tree__parse_type_defn__V_85_85;

            {
              mercury__list__map_3_p_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_4[2], parse_tree__parse_type_defn__ExistQVars_14, &parse_tree__parse_type_defn__ExistQTVars_15);
            }
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__SubTerm_10)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SubTerm_10, (MR_Integer) 0)));
                parse_tree__parse_type_defn__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SubTerm_10, (MR_Integer) 1)));
                parse_tree__parse_type_defn__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SubTerm_10, (MR_Integer) 2)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_86_86)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_86_86, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_87_87, (MR_String) "=>") == 0);
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_88_88)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_88_88, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_88_88, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_90_90)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_type_defn__succeeded)
                              {
                                parse_tree__parse_type_defn__ExistentialConstraints_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_90_90, (MR_Integer) 0)));
                                parse_tree__parse_type_defn__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_90_90, (MR_Integer) 1)));
                                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
              }
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__BeforeConstraintsTerm_47 = parse_tree__parse_type_defn__STATE_VARIABLE_PredTypeTerm_17_89;
                {
                  parse_tree__parse_class__parse_class_constraints_4_p_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ExistentialConstraints_84, &parse_tree__parse_type_defn__MaybeConstraints_48);
                }
              }
            else
              {
                parse_tree__parse_type_defn__MaybeConstraints_48 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[9]);
                parse_tree__parse_type_defn__BeforeConstraintsTerm_47 = parse_tree__parse_type_defn__SubTerm_10;
              }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstraints_48)) == (MR_mktag((MR_Integer) 0))))
              *parse_tree__parse_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__parse_type_defn__MaybeConstraints_48;
            else
              {
                MR_Word parse_tree__parse_type_defn__TypeCtorInfo_40_76;
                MR_Word parse_tree__parse_type_defn__Constraints_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstraints_48, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__MainTerm_53;
                MR_Word parse_tree__parse_type_defn__ContextPieces_54;
                MR_Word parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55;
                MR_Word parse_tree__parse_type_defn__InsideBracesTerm_51;
                MR_Word parse_tree__parse_type_defn__V_61_61;
                MR_String parse_tree__parse_type_defn__V_62_62;
                MR_Word parse_tree__parse_type_defn__V_63_63;
                MR_Word parse_tree__parse_type_defn__V_64_64;
                MR_Word parse_tree__parse_type_defn___Context_52;

                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__BeforeConstraintsTerm_47)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 1)));
                    parse_tree__parse_type_defn___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 2)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_61_61)) == (MR_mktag((MR_Integer) 0)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_61_61, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_62_62, (MR_String) "{}") == 0);
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_63_63)) == (MR_mktag((MR_Integer) 1)));
                            if (parse_tree__parse_type_defn__succeeded)
                              {
                                parse_tree__parse_type_defn__InsideBracesTerm_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_63_63, (MR_Integer) 0)));
                                parse_tree__parse_type_defn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_63_63, (MR_Integer) 1)));
                                parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
                if (parse_tree__parse_type_defn__succeeded)
                  parse_tree__parse_type_defn__MainTerm_53 = parse_tree__parse_type_defn__InsideBracesTerm_51;
                else
                  parse_tree__parse_type_defn__MainTerm_53 = parse_tree__parse_type_defn__BeforeConstraintsTerm_47;
                {
                  parse_tree__parse_type_defn__ContextPieces_54 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[158]))));
                }
                parse_tree__parse_type_defn__TypeCtorInfo_40_76 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                {
                  parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_40_76, parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__MainTerm_53, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ContextPieces_54, &parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55);
                }
                if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word parse_tree__parse_type_defn__Specs_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_type_defn__MaybeConstructor_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_69));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_type_defn__Functor_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));
                    MR_Word parse_tree__parse_type_defn__ArgTerms_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 1)));
                    MR_Word parse_tree__parse_type_defn__MaybeConstructorArgs_58;

                    {
                      parse_tree__parse_type_defn__MaybeConstructorArgs_58 = parse_tree__parse_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ArgTerms_57);
                    }
                    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_58)) == (MR_mktag((MR_Integer) 0))))
                      *parse_tree__parse_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__parse_type_defn__MaybeConstructorArgs_58;
                    else
                      {
                        MR_Word parse_tree__parse_type_defn__ConstructorArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeConstructorArgs_58, (MR_Integer) 0)));
                        MR_Word parse_tree__parse_type_defn__Ctor_60;
                        MR_Integer parse_tree__parse_type_defn__V_67_67;
                        MR_Word parse_tree__parse_type_defn__V_68_68;

                        {
                          parse_tree__parse_type_defn__V_67_67 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__parse_type_defn__ConstructorArgs_59);
                        }
                        {
                          parse_tree__parse_type_defn__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_40_76, parse_tree__parse_type_defn__MainTerm_53);
                        }
                        {
                          parse_tree__parse_type_defn__Ctor_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 0) = ((MR_Box) (parse_tree__parse_type_defn__ExistQTVars_15));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 1) = ((MR_Box) (parse_tree__parse_type_defn__Constraints_50));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 2) = ((MR_Box) (parse_tree__parse_type_defn__Functor_56));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 3) = ((MR_Box) (parse_tree__parse_type_defn__ConstructorArgs_59));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 4) = ((MR_Box) (parse_tree__parse_type_defn__V_67_67));
                          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Ctor_60, 5) = ((MR_Box) (parse_tree__parse_type_defn__V_68_68));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *parse_tree__parse_type_defn__MaybeConstructor_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Ctor_60));
                        }
                      }
                  }
              }
          }
      }
    else
      {
        {
          parse_tree__parse_type_defn__parse_constructor_5_p_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__parse_type_defn__Term_7, parse_tree__parse_type_defn__MaybeConstructor_8);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_6,
  MR_Word parse_tree__parse_type_defn__VarSet_7,
  MR_Word parse_tree__parse_type_defn__HeadTerm_8,
  MR_Word parse_tree__parse_type_defn__TailTerms_9,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_10)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeHeadConstructor_11;

    {
      parse_tree__parse_type_defn__parse_maybe_exist_quant_constructor_4_p_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__HeadTerm_8, &parse_tree__parse_type_defn__MaybeHeadConstructor_11);
    }
    if ((parse_tree__parse_type_defn__TailTerms_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 0))))
        *parse_tree__parse_type_defn__MaybeConstructors_10 = (MR_Word) parse_tree__parse_type_defn__MaybeHeadConstructor_11;
      else
        {
          MR_Word parse_tree__parse_type_defn__HeadConstructor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
          MR_Word parse_tree__parse_type_defn__V_21_21;

          {
            parse_tree__parse_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadConstructor_12));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_type_defn__MaybeConstructors_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_21_21));
          }
        }
    else
      {
        MR_Word parse_tree__parse_type_defn__HeadTailTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TailTerms_9, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__TailTailTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TailTerms_9, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__MaybeTailConstructors_16;
        MR_Word parse_tree__parse_type_defn__TailConstructors_17;
        MR_Word parse_tree__parse_type_defn__HeadConstructor_24;

        {
          parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(parse_tree__parse_type_defn__ModuleName_6, parse_tree__parse_type_defn__VarSet_7, parse_tree__parse_type_defn__HeadTailTerm_14, parse_tree__parse_type_defn__TailTailTerms_15, &parse_tree__parse_type_defn__MaybeTailConstructors_16);
        }
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__HeadConstructor_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTailConstructors_16)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              parse_tree__parse_type_defn__TailConstructors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTailConstructors_16, (MR_Integer) 0)));
          }
        if (parse_tree__parse_type_defn__succeeded)
          {
            MR_Word parse_tree__parse_type_defn__V_18_18;

            {
              parse_tree__parse_type_defn__V_18_18 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ((MR_Box) (parse_tree__parse_type_defn__HeadConstructor_24)), parse_tree__parse_type_defn__TailConstructors_17);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_type_defn__MaybeConstructors_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_18_18));
            }
          }
        else
          {
            MR_Word parse_tree__parse_type_defn__V_19_19;
            MR_Word parse_tree__parse_type_defn__V_20_20;
            MR_Word parse_tree__parse_type_defn__Specs_23;

            {
              parse_tree__parse_type_defn__V_19_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, parse_tree__parse_type_defn__MaybeHeadConstructor_11);
            }
            {
              parse_tree__parse_type_defn__V_20_20 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[5], parse_tree__parse_type_defn__MaybeTailConstructors_16);
            }
            {
              parse_tree__parse_type_defn__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__parse_type_defn__V_19_19, parse_tree__parse_type_defn__V_20_20);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_type_defn__MaybeConstructors_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_23));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term_7,
  MR_Word * parse_tree__parse_type_defn__MaybeConstructors_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__HeadBodyTerm_9;
    MR_Word parse_tree__parse_type_defn__TailBodyTerms_10;
    MR_Word parse_tree__parse_type_defn__V_11_11;

    {
      parse_tree__parse_util__disjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__Term_7, &parse_tree__parse_type_defn__V_11_11);
    }
    parse_tree__parse_type_defn__HeadBodyTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_11_11, (MR_Integer) 0)));
    parse_tree__parse_type_defn__TailBodyTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_11_11, (MR_Integer) 1)));
    {
      parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__HeadBodyTerm_9, parse_tree__parse_type_defn__TailBodyTerms_10, parse_tree__parse_type_defn__MaybeConstructors_8);
    }
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
  MR_Word parse_tree__parse_type_defn__Term_4,
  MR_Word * parse_tree__parse_type_defn__CtorsTerm_5,
  MR_Word * parse_tree__parse_type_defn__MaybeWhereTerm_6)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Term_4)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_type_defn__CtorsTermPrime_9;
    MR_Word parse_tree__parse_type_defn__WhereTerm_10;
    MR_Word parse_tree__parse_type_defn__Args_7;
    MR_Word parse_tree__parse_type_defn__V_11_11;
    MR_String parse_tree__parse_type_defn__V_12_12;
    MR_Word parse_tree__parse_type_defn__V_13_13;
    MR_Word parse_tree__parse_type_defn__V_14_14;
    MR_Word parse_tree__parse_type_defn___Context_8;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_4, (MR_Integer) 0)));
        parse_tree__parse_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_4, (MR_Integer) 1)));
        parse_tree__parse_type_defn___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Term_4, (MR_Integer) 2)));
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_11_11)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_11_11, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_12_12, (MR_String) "where") == 0);
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__Args_7)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__CtorsTermPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_7, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Args_7, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_13_13, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_13_13, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        *parse_tree__parse_type_defn__CtorsTerm_5 = parse_tree__parse_type_defn__CtorsTermPrime_9;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_type_defn__MaybeWhereTerm_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__WhereTerm_10));
        }
      }
    else
      {
        *parse_tree__parse_type_defn__CtorsTerm_5 = parse_tree__parse_type_defn__Term_4;
        *parse_tree__parse_type_defn__MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;

    {
      parse_tree__parse_type_defn__succeeded = parse_tree__parse_type_defn__IntroducedFrom__pred__parse_du_type_defn__187__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 4))));
    }
    return parse_tree__parse_type_defn__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_9,
  MR_Word parse_tree__parse_type_defn__VarSet_10,
  MR_Word parse_tree__parse_type_defn__HeadTerm_11,
  MR_Word parse_tree__parse_type_defn__BodyTerm_12,
  MR_Word parse_tree__parse_type_defn__Context_13,
  MR_Integer parse_tree__parse_type_defn__SeqNum_14,
  MR_Word parse_tree__parse_type_defn__IsSolverType_15,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_16)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__SolverSpecs_19;
    MR_Word parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20;
    MR_Word parse_tree__parse_type_defn__CtorsTerm_21;
    MR_Word parse_tree__parse_type_defn__MaybeWhereTerm_22;
    MR_Word parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23;
    MR_Word parse_tree__parse_type_defn__MaybeWhere_24;
    MR_Word parse_tree__parse_type_defn__Name_26;
    MR_Word parse_tree__parse_type_defn__Params_27;
    MR_Word parse_tree__parse_type_defn__OneOrMoreCtors_28;
    MR_Word parse_tree__parse_type_defn__SolverTypeDetails_29;
    MR_Word parse_tree__parse_type_defn__MaybeUserEqComp_30;
    MR_Word parse_tree__parse_type_defn__MaybeDirectArgIs_31;

    switch (parse_tree__parse_type_defn__IsSolverType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__parse_type_defn__SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_type_defn__SolverSpec_18;
          MR_Word parse_tree__parse_type_defn__V_55_55;
          MR_Word parse_tree__parse_type_defn__V_56_56;
          MR_Word parse_tree__parse_type_defn__V_57_57;

          {
            parse_tree__parse_type_defn__V_57_57 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__HeadTerm_11);
          }
          {
            parse_tree__parse_type_defn__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_56_56, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_57_57));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[157])));
          }
          {
            parse_tree__parse_type_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_56_56));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_type_defn__SolverSpec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__SolverSpec_18, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_55_55));
          }
          {
            parse_tree__parse_type_defn__SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_19, 0) = ((MR_Box) (parse_tree__parse_type_defn__SolverSpec_18));
            MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__SolverSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      parse_tree__parse_type_defn__parse_type_defn_head_4_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__HeadTerm_11, &parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20);
    }
    {
      parse_tree__parse_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(parse_tree__parse_type_defn__BodyTerm_12, &parse_tree__parse_type_defn__CtorsTerm_21, &parse_tree__parse_type_defn__MaybeWhereTerm_22);
    }
    {
      parse_tree__parse_type_defn__parse_maybe_exist_quant_constructors_4_p_0(parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__CtorsTerm_21, &parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23);
    }
    if ((parse_tree__parse_type_defn__MaybeWhereTerm_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__parse_type_defn__MaybeWhere_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_4[1]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__WhereTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhereTerm_22, (MR_Integer) 0)));

        {
          parse_tree__parse_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 0, parse_tree__parse_type_defn__ModuleName_9, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__WhereTerm_25, &parse_tree__parse_type_defn__MaybeWhere_24);
        }
      }
    parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__SolverSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20, (MR_Integer) 0)));
            parse_tree__parse_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20, (MR_Integer) 1)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__OneOrMoreCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhere_24)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_24, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_24, (MR_Integer) 1)));
                    parse_tree__parse_type_defn__MaybeDirectArgIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeWhere_24, (MR_Integer) 2)));
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_Word parse_tree__parse_type_defn__HeadCtor_32;
        MR_Word parse_tree__parse_type_defn__TailCtors_33;
        MR_Word parse_tree__parse_type_defn__Ctors_34;
        MR_Word parse_tree__parse_type_defn__CtorsSpecs_35;
        MR_Word parse_tree__parse_type_defn__ErrorSpecs_37;
        MR_Word parse_tree__parse_type_defn__V_67_67;

        {
          parse_tree__parse_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_67_67, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_67_67, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_du_type_defn_8_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_67_67, 3) = ((MR_Box) (parse_tree__parse_type_defn__SolverTypeDetails_29));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(parse_tree__parse_type_defn__V_67_67, (MR_String) "parse_tree.parse_type_defn", (MR_String) "predicate \140parse_tree.parse_type_defn.parse_du_type_defn\'/8", (MR_String) "discriminated union type has solver type details");
        }
        parse_tree__parse_type_defn__HeadCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__OneOrMoreCtors_28, (MR_Integer) 0)));
        parse_tree__parse_type_defn__TailCtors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__OneOrMoreCtors_28, (MR_Integer) 1)));
        {
          parse_tree__parse_type_defn__Ctors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Ctors_34, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadCtor_32));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Ctors_34, 1) = ((MR_Box) (parse_tree__parse_type_defn__TailCtors_33));
        }
        {
          parse_tree__parse_type_defn__process_du_ctors_6_p_0(parse_tree__parse_type_defn__Params_27, parse_tree__parse_type_defn__VarSet_10, parse_tree__parse_type_defn__BodyTerm_12, parse_tree__parse_type_defn__Ctors_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__parse_type_defn__CtorsSpecs_35);
        }
        if ((parse_tree__parse_type_defn__MaybeDirectArgIs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__parse_type_defn__ErrorSpecs_37 = parse_tree__parse_type_defn__CtorsSpecs_35;
        else
          {
            MR_Word parse_tree__parse_type_defn__DirectArgCtors_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeDirectArgIs_31, (MR_Integer) 0)));

            {
              parse_tree__parse_type_defn__check_direct_arg_ctors_5_p_0(parse_tree__parse_type_defn__Ctors_34, parse_tree__parse_type_defn__DirectArgCtors_36, parse_tree__parse_type_defn__BodyTerm_12, parse_tree__parse_type_defn__CtorsSpecs_35, &parse_tree__parse_type_defn__ErrorSpecs_37);
            }
          }
        if ((parse_tree__parse_type_defn__ErrorSpecs_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_type_defn__TypeVarSet_38;
            MR_Word parse_tree__parse_type_defn__TypeDefn_39;
            MR_Word parse_tree__parse_type_defn__ItemTypeDefn_40;
            MR_Word parse_tree__parse_type_defn__Item_41;
            MR_Word parse_tree__parse_type_defn__V_73_73;

            {
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_10, &parse_tree__parse_type_defn__TypeVarSet_38);
            }
            {
              parse_tree__parse_type_defn__TypeDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefn_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__Ctors_34));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefn_39, 1) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUserEqComp_30));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefn_39, 2) = ((MR_Box) (parse_tree__parse_type_defn__MaybeDirectArgIs_31));
            }
            {
              parse_tree__parse_type_defn__ItemTypeDefn_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_40, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_26));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_40, 1) = ((MR_Box) (parse_tree__parse_type_defn__Params_27));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_40, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_39));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_40, 3) = ((MR_Box) (parse_tree__parse_type_defn__TypeVarSet_38));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_40, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_13));
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_40, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_14));
            }
            parse_tree__parse_type_defn__Item_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_40);
            {
              parse_tree__parse_type_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_type_defn__MaybeIOM_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_73_73));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_type_defn__MaybeIOM_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__ErrorSpecs_37));
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__parse_type_defn__Specs_44;
        MR_Word parse_tree__parse_type_defn__V_74_74;
        MR_Word parse_tree__parse_type_defn__V_75_75;
        MR_Word parse_tree__parse_type_defn__V_76_76;
        MR_Word parse_tree__parse_type_defn__V_77_77;
        MR_Word parse_tree__parse_type_defn__V_78_78;

        {
          parse_tree__parse_type_defn__V_75_75 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[4], parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_20);
        }
        {
          parse_tree__parse_type_defn__V_77_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[5], parse_tree__parse_type_defn__MaybeOneOrMoreCtors_23);
        }
        {
          parse_tree__parse_type_defn__V_78_78 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__parse_type_defn_scalar_common_1[3], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[6], (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[8], parse_tree__parse_type_defn__MaybeWhere_24);
        }
        {
          parse_tree__parse_type_defn__V_76_76 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_83_83, parse_tree__parse_type_defn__V_77_77, parse_tree__parse_type_defn__V_78_78);
        }
        {
          parse_tree__parse_type_defn__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_83_83, parse_tree__parse_type_defn__V_75_75, parse_tree__parse_type_defn__V_76_76);
        }
        {
          parse_tree__parse_type_defn__Specs_44 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_83_83, parse_tree__parse_type_defn__SolverSpecs_19, parse_tree__parse_type_defn__V_74_74);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_44));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_where_unify_compare_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__Term0_7,
  MR_Word * parse_tree__parse_type_defn__MaybeUnifyCompare_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;
    MR_Word parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10;
    MR_Word parse_tree__parse_type_defn__MaybeEqualityIs_11;
    MR_Word parse_tree__parse_type_defn__MaybeComparisonIs_12;
    MR_Word parse_tree__parse_type_defn__MaybeWhereEnd_13;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_25_25;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_29_29;
    MR_Word parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_33_33;
    MR_Word parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_17;
    MR_Word parse_tree__parse_type_defn__EqualityIs_18;
    MR_Word parse_tree__parse_type_defn__ComparisonIs_19;

    {
      parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_25_25, 0) = ((MR_Box) (parse_tree__parse_type_defn__Term0_7));
    }
    {
      parse_tree__parse_type_defn__parse_where_attribute__ho8_4_p_0(&parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_25_25, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_27_27);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_48_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, &parse_tree__parse_type_defn__MaybeEqualityIs_11, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_29_29);
    }
    {
      parse_tree__parse_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__VarSet_6, &parse_tree__parse_type_defn__MaybeComparisonIs_12, parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_29_29, &parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_33_33);
    }
    if ((parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
        parse_tree__parse_type_defn__MaybeWhereEnd_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[3]);
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__EndTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__STATE_VARIABLE_MaybeTerm_33_33, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__EndSpec_16;
        MR_Word parse_tree__parse_type_defn__V_43_43;
        MR_Word parse_tree__parse_type_defn__V_44_44;
        MR_Word parse_tree__parse_type_defn__V_45_45;
        MR_Word parse_tree__parse_type_defn__V_50_50;

        {
          parse_tree__parse_type_defn__V_45_45 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_type_defn__EndTerm_14);
        }
        {
          parse_tree__parse_type_defn__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_45_45));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[156])));
        }
        {
          parse_tree__parse_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_44_44));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__EndSpec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__EndSpec_16, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_43_43));
        }
        {
          parse_tree__parse_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__parse_type_defn__EndSpec_16));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__MaybeWhereEnd_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeWhereEnd_13, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_50_50));
        }
      }
    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeWhereEnd_13)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeIsAbstractNoncanonical_10, (MR_Integer) 0)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeEqualityIs_11)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__EqualityIs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeEqualityIs_11, (MR_Integer) 0)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeComparisonIs_12)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_type_defn__succeeded)
                  parse_tree__parse_type_defn__ComparisonIs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeComparisonIs_12, (MR_Integer) 0)));
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      if ((parse_tree__parse_type_defn__TypeIsAbstractNoncanonical_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word parse_tree__parse_type_defn__MaybeUC_23;

          parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__EqualityIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (parse_tree__parse_type_defn__succeeded)
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__ComparisonIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (parse_tree__parse_type_defn__succeeded)
            parse_tree__parse_type_defn__MaybeUC_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word parse_tree__parse_type_defn__V_82_82;

              {
                parse_tree__parse_type_defn__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__parse_type_defn__EqualityIs_18));
                MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_82_82, 1) = ((MR_Box) (parse_tree__parse_type_defn__ComparisonIs_19));
              }
              {
                parse_tree__parse_type_defn__MaybeUC_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeUC_23, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_82_82));
              }
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__MaybeUC_23));
          }
        }
      else
        {
          parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__EqualityIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (parse_tree__parse_type_defn__succeeded)
            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__ComparisonIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (parse_tree__parse_type_defn__succeeded)
            {
              *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_2[7]);
            }
          else
            {
              MR_Word parse_tree__parse_type_defn__Spec_22;
              MR_Word parse_tree__parse_type_defn__V_56_56;

              {
                parse_tree__parse_type_defn__Spec_22 = parse_tree__parse_type_defn__abstract_noncanonical_excludes_others_1_f_0(parse_tree__parse_type_defn__Term0_7);
              }
              {
                parse_tree__parse_type_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_56_56, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_22));
                MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_56_56));
              }
            }
        }
    else
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_77_77 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word parse_tree__parse_type_defn__TypeInfo_78_78 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[2];
        MR_Word parse_tree__parse_type_defn__Specs_24;
        MR_Word parse_tree__parse_type_defn__V_58_58;
        MR_Word parse_tree__parse_type_defn__V_59_59;
        MR_Word parse_tree__parse_type_defn__V_60_60;
        MR_Word parse_tree__parse_type_defn__V_61_61;

        {
          parse_tree__parse_type_defn__V_58_58 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_78_78, parse_tree__parse_type_defn__MaybeEqualityIs_11);
        }
        {
          parse_tree__parse_type_defn__V_60_60 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__parse_type_defn__TypeInfo_78_78, parse_tree__parse_type_defn__MaybeComparisonIs_12);
        }
        {
          parse_tree__parse_type_defn__V_61_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, parse_tree__parse_type_defn__MaybeWhereEnd_13);
        }
        {
          parse_tree__parse_type_defn__V_59_59 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_77_77, parse_tree__parse_type_defn__V_60_60, parse_tree__parse_type_defn__V_61_61);
        }
        {
          parse_tree__parse_type_defn__Specs_24 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_77_77, parse_tree__parse_type_defn__V_58_58, parse_tree__parse_type_defn__V_59_59);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeUnifyCompare_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_24));
        }
      }
  }
}

static MR_Box MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_4_p_0_2(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1)
{
  {
    MR_Box parse_tree__parse_type_defn__wrapper_arg_2;
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_String parse_tree__parse_type_defn__conv1_HeadVar__3_120;

    {
      parse_tree__parse_type_defn__conv1_HeadVar__3_120 = parse_tree__parse_type_defn__IntroducedFrom__func__parse_type_defn_head__1398__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1));
    }
    parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv1_HeadVar__3_120));
    return parse_tree__parse_type_defn__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_4_p_0_1(
  MR_Box parse_tree__parse_type_defn__closure_arg,
  MR_Box parse_tree__parse_type_defn__wrapper_arg_1,
  MR_Box * parse_tree__parse_type_defn__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_type_defn__closure = parse_tree__parse_type_defn__closure_arg;
    MR_Word parse_tree__parse_type_defn__conv0_HeadVar__2_114;

    {
      parse_tree__parse_type_defn__IntroducedFrom__pred__parse_type_defn_head__1389__1_2_p_0(((MR_Word) parse_tree__parse_type_defn__wrapper_arg_1), &parse_tree__parse_type_defn__conv0_HeadVar__2_114);
    }
    *parse_tree__parse_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_type_defn__conv0_HeadVar__2_114));
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_head_4_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_5,
  MR_Word parse_tree__parse_type_defn__VarSet_6,
  MR_Word parse_tree__parse_type_defn__HeadTerm_7,
  MR_Word * parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_8)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded;

    if (((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadTerm_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        MR_Word parse_tree__parse_type_defn__TypeCtorInfo_111_111;
        MR_Word parse_tree__parse_type_defn__HeadContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_7, (MR_Integer) 2)));
        MR_Word parse_tree__parse_type_defn__ContextPieces_16;
        MR_Word parse_tree__parse_type_defn__HeadResult_17;
        MR_Word parse_tree__parse_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_7, (MR_Integer) 0)));
        MR_Word parse_tree__parse_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__HeadTerm_7, (MR_Integer) 1)));

        {
          parse_tree__parse_type_defn__ContextPieces_16 = mercury__cord__singleton_1_f_0(parse_tree__parse_type_defn__TypeCtorInfo_110_110, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[151]))));
        }
        parse_tree__parse_type_defn__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        {
          parse_tree__parse_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__parse_type_defn__TypeCtorInfo_111_111, parse_tree__parse_type_defn__ModuleName_5, parse_tree__parse_type_defn__HeadTerm_7, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__ContextPieces_16, &parse_tree__parse_type_defn__HeadResult_17);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_type_defn__HeadResult_17)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_8 = (MR_Word) parse_tree__parse_type_defn__HeadResult_17;
        else
          {
            MR_Word parse_tree__parse_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadResult_17, (MR_Integer) 0)));
            MR_Word parse_tree__parse_type_defn__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadResult_17, (MR_Integer) 1)));
            MR_Word parse_tree__parse_type_defn__NameSpecs_21;
            MR_Word parse_tree__parse_type_defn__ParamVars_22;

            {
              parse_tree__parse_type_defn__check_user_type_name_3_p_0(parse_tree__parse_type_defn__SymName_19, parse_tree__parse_type_defn__HeadContext_15, &parse_tree__parse_type_defn__NameSpecs_21);
            }
            {
              parse_tree__parse_type_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__parse_type_defn__TypeCtorInfo_111_111, parse_tree__parse_type_defn__ArgTerms_20, &parse_tree__parse_type_defn__ParamVars_22);
            }
            if (parse_tree__parse_type_defn__succeeded)
              {
                MR_Word parse_tree__parse_type_defn__TypeInfo_112_112 = (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[0];
                MR_Word parse_tree__parse_type_defn__ParamsBag_23;
                MR_Word parse_tree__parse_type_defn__DupParamVars_24;

                {
                  mercury__bag__from_list_2_p_0(parse_tree__parse_type_defn__TypeInfo_112_112, parse_tree__parse_type_defn__ParamVars_22, &parse_tree__parse_type_defn__ParamsBag_23);
                }
                {
                  mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__parse_type_defn__TypeInfo_112_112, parse_tree__parse_type_defn__ParamsBag_23, &parse_tree__parse_type_defn__DupParamVars_24);
                }
                if ((parse_tree__parse_type_defn__DupParamVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  if ((parse_tree__parse_type_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word parse_tree__parse_type_defn__PrgParamVars_25;

                      {
                        mercury__list__map_3_p_0(parse_tree__parse_type_defn__TypeInfo_112_112, (MR_Word) &parse_tree__parse_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__parse_type_defn_scalar_common_4[0], parse_tree__parse_type_defn__ParamVars_22, &parse_tree__parse_type_defn__PrgParamVars_25);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_8 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__SymName_19));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__parse_type_defn__PrgParamVars_25));
                      }
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_21));
                    }
                else
                  {
                    MR_Word parse_tree__parse_type_defn__DupParamVarNames_30;
                    MR_Word parse_tree__parse_type_defn__V_34_34;
                    MR_Word parse_tree__parse_type_defn__V_39_39;
                    MR_Word parse_tree__parse_type_defn__V_40_40;
                    MR_Word parse_tree__parse_type_defn__V_52_52;
                    MR_Word parse_tree__parse_type_defn__V_53_53;
                    MR_Word parse_tree__parse_type_defn__V_54_54;
                    MR_Word parse_tree__parse_type_defn__V_55_55;
                    MR_Word parse_tree__parse_type_defn__V_58_58;
                    MR_Word parse_tree__parse_type_defn__Pieces_94;
                    MR_Word parse_tree__parse_type_defn__Spec_95;

                    {
                      parse_tree__parse_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_34_34, 0) = ((MR_Box) (&parse_tree__parse_type_defn_scalar_common_5[0]));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_34_34, 1) = ((MR_Box) (parse_tree__parse_type_defn__parse_type_defn_head_4_p_0_2));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_34_34, 3) = ((MR_Box) (parse_tree__parse_type_defn__VarSet_6));
                    }
                    {
                      parse_tree__parse_type_defn__DupParamVarNames_30 = mercury__list__map_2_f_0(parse_tree__parse_type_defn__TypeInfo_112_112, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_type_defn__V_34_34, parse_tree__parse_type_defn__DupParamVars_24);
                    }
                    {
                      parse_tree__parse_type_defn__V_40_40 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__parse_type_defn__DupParamVarNames_30);
                    }
                    {
                      parse_tree__parse_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_110_110, parse_tree__parse_type_defn__V_40_40, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[37]));
                    }
                    {
                      parse_tree__parse_type_defn__Pieces_94 = mercury__list__f_43_43_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_110_110, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[153]), parse_tree__parse_type_defn__V_39_39);
                    }
                    {
                      parse_tree__parse_type_defn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_94));
                    }
                    {
                      parse_tree__parse_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_55_55));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_53_53, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadContext_15));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_54_54));
                    }
                    {
                      parse_tree__parse_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_53_53));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_type_defn__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_95, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_52_52));
                    }
                    {
                      parse_tree__parse_type_defn__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_95));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_21));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_58_58));
                    }
                  }
              }
            else
              {
                MR_String parse_tree__parse_type_defn__HeadTermStr_31;
                MR_Word parse_tree__parse_type_defn__V_62_62;
                MR_Word parse_tree__parse_type_defn__V_63_63;
                MR_Word parse_tree__parse_type_defn__V_72_72;
                MR_Word parse_tree__parse_type_defn__V_73_73;
                MR_Word parse_tree__parse_type_defn__V_74_74;
                MR_Word parse_tree__parse_type_defn__V_75_75;
                MR_Word parse_tree__parse_type_defn__V_78_78;
                MR_Word parse_tree__parse_type_defn__Pieces_100;
                MR_Word parse_tree__parse_type_defn__Spec_101;

                {
                  parse_tree__parse_type_defn__HeadTermStr_31 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_type_defn__TypeCtorInfo_111_111, parse_tree__parse_type_defn__VarSet_6, parse_tree__parse_type_defn__HeadTerm_7);
                }
                {
                  parse_tree__parse_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__parse_type_defn__HeadTermStr_31));
                }
                {
                  parse_tree__parse_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_63_63));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[39])));
                }
                {
                  parse_tree__parse_type_defn__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_type_defn_scalar_common_1[154])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__Pieces_100, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_62_62));
                }
                {
                  parse_tree__parse_type_defn__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__parse_type_defn__Pieces_100));
                }
                {
                  parse_tree__parse_type_defn__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_75_75));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__parse_type_defn__HeadContext_15));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_73_73, 1) = ((MR_Box) (parse_tree__parse_type_defn__V_74_74));
                }
                {
                  parse_tree__parse_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_73_73));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_type_defn__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_101, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_72_72));
                }
                {
                  parse_tree__parse_type_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_101));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_78_78, 1) = ((MR_Box) (parse_tree__parse_type_defn__NameSpecs_21));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_78_78));
                }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadTerm_7, (MR_Integer) 1)));
        MR_Word parse_tree__parse_type_defn__Spec_12;
        MR_Word parse_tree__parse_type_defn__V_86_86;
        MR_Word parse_tree__parse_type_defn__V_87_87;
        MR_Word parse_tree__parse_type_defn__V_92_92;
        MR_Word parse_tree__parse_type_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__HeadTerm_7, (MR_Integer) 0)));

        {
          parse_tree__parse_type_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_87_87, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[155])));
        }
        {
          parse_tree__parse_type_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_87_87));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_86_86));
        }
        {
          parse_tree__parse_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_12));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_92_92));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_8,
  MR_Word parse_tree__parse_type_defn__VarSet_9,
  MR_Word parse_tree__parse_type_defn__ArgTerms_10,
  MR_Word parse_tree__parse_type_defn__Context_11,
  MR_Integer parse_tree__parse_type_defn__SeqNum_12,
  MR_Word parse_tree__parse_type_defn__IsSolverType_13,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_14)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__TypeDefnTerm_15;
    MR_Word parse_tree__parse_type_defn__V_23_23;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__TypeDefnTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_10, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_10, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        MR_String parse_tree__parse_type_defn__Name_16;
        MR_Word parse_tree__parse_type_defn__HeadTerm_19;
        MR_Word parse_tree__parse_type_defn__BodyTerm_20;
        MR_Word parse_tree__parse_type_defn__TypeDefnArgTerms_17;
        MR_Word parse_tree__parse_type_defn__V_24_24;
        MR_Word parse_tree__parse_type_defn__V_25_25;
        MR_Word parse_tree__parse_type_defn__V_26_26;
        MR_Word parse_tree__parse_type_defn__V_18_18;

        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__TypeDefnTerm_15)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefnTerm_15, (MR_Integer) 0)));
            parse_tree__parse_type_defn__TypeDefnArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefnTerm_15, (MR_Integer) 1)));
            parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__TypeDefnTerm_15, (MR_Integer) 2)));
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_24_24)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_24_24, (MR_Integer) 0)));
                if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "==") == 0))
                  parse_tree__parse_type_defn__succeeded = MR_TRUE;
                else
                if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "--->") == 0))
                  parse_tree__parse_type_defn__succeeded = MR_TRUE;
                else
                if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "where") == 0))
                  parse_tree__parse_type_defn__succeeded = MR_TRUE;
                else
                  parse_tree__parse_type_defn__succeeded = MR_FALSE;
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__TypeDefnArgTerms_17)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_type_defn__succeeded)
                      {
                        parse_tree__parse_type_defn__HeadTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TypeDefnArgTerms_17, (MR_Integer) 0)));
                        parse_tree__parse_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__TypeDefnArgTerms_17, (MR_Integer) 1)));
                        parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_type_defn__succeeded)
                          {
                            parse_tree__parse_type_defn__BodyTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, (MR_Integer) 0)));
                            parse_tree__parse_type_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_25_25, (MR_Integer) 1)));
                            parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_type_defn__succeeded)
          if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "==") == 0))
            {
              parse_tree__parse_type_defn__parse_eqv_type_defn_8_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_19, parse_tree__parse_type_defn__BodyTerm_20, parse_tree__parse_type_defn__Context_11, parse_tree__parse_type_defn__SeqNum_12, parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__MaybeIOM_14);
            }
          else
          if ((strcmp(parse_tree__parse_type_defn__Name_16, (MR_String) "--->") == 0))
            {
              parse_tree__parse_type_defn__parse_du_type_defn_8_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_19, parse_tree__parse_type_defn__BodyTerm_20, parse_tree__parse_type_defn__Context_11, parse_tree__parse_type_defn__SeqNum_12, parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__MaybeIOM_14);
            }
          else
            {
              parse_tree__parse_type_defn__parse_where_block_type_defn_8_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__HeadTerm_19, parse_tree__parse_type_defn__BodyTerm_20, parse_tree__parse_type_defn__Context_11, parse_tree__parse_type_defn__SeqNum_12, parse_tree__parse_type_defn__IsSolverType_13, parse_tree__parse_type_defn__MaybeIOM_14);
            }
        else
          {
            MR_Word parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61;

            {
              parse_tree__parse_type_defn__parse_type_defn_head_4_p_0(parse_tree__parse_type_defn__ModuleName_8, parse_tree__parse_type_defn__VarSet_9, parse_tree__parse_type_defn__TypeDefnTerm_15, &parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61);
            }
            if (((MR_tag((MR_Word) parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_type_defn__Specs_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_type_defn__MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__Specs_62));
                }
              }
            else
              {
                MR_Word parse_tree__parse_type_defn__Name_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));
                MR_Word parse_tree__parse_type_defn__Params_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 1)));
                MR_Word parse_tree__parse_type_defn__TypeVarSet_65;
                MR_Word parse_tree__parse_type_defn__AbstractTypeDetails_66;
                MR_Word parse_tree__parse_type_defn__TypeDefn_67;
                MR_Word parse_tree__parse_type_defn__ItemTypeDefn_68;
                MR_Word parse_tree__parse_type_defn__Item_69;
                MR_Word parse_tree__parse_type_defn__V_70_70;

                {
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__parse_type_defn__VarSet_9, &parse_tree__parse_type_defn__TypeVarSet_65);
                }
                switch (parse_tree__parse_type_defn__IsSolverType_13) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    parse_tree__parse_type_defn__AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    parse_tree__parse_type_defn__AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                    break;
                }
                {
                  parse_tree__parse_type_defn__TypeDefn_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), parse_tree__parse_type_defn__TypeDefn_67, 0) = ((MR_Box) (parse_tree__parse_type_defn__AbstractTypeDetails_66));
                }
                {
                  parse_tree__parse_type_defn__ItemTypeDefn_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 0) = ((MR_Box) (parse_tree__parse_type_defn__Name_63));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 1) = ((MR_Box) (parse_tree__parse_type_defn__Params_64));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 2) = ((MR_Box) (parse_tree__parse_type_defn__TypeDefn_67));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 3) = ((MR_Box) (parse_tree__parse_type_defn__TypeVarSet_65));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 4) = ((MR_Box) (parse_tree__parse_type_defn__Context_11));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ItemTypeDefn_68, 5) = ((MR_Box) (parse_tree__parse_type_defn__SeqNum_12));
                }
                parse_tree__parse_type_defn__Item_69 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__parse_type_defn__ItemTypeDefn_68);
                {
                  parse_tree__parse_type_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__parse_type_defn__Item_69));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__parse_type_defn__MaybeIOM_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_70_70));
                }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_22;
        MR_Word parse_tree__parse_type_defn__V_46_46;
        MR_Word parse_tree__parse_type_defn__V_47_47;
        MR_Word parse_tree__parse_type_defn__V_52_52;

        {
          parse_tree__parse_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_11));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[150])));
        }
        {
          parse_tree__parse_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_47_47));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_46_46));
        }
        {
          parse_tree__parse_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_22));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_52_52));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_type_defn__parse_solver_type_defn_item_6_p_0(
  MR_Word parse_tree__parse_type_defn__ModuleName_7,
  MR_Word parse_tree__parse_type_defn__VarSet_8,
  MR_Word parse_tree__parse_type_defn__ArgTerms_9,
  MR_Word parse_tree__parse_type_defn__Context_10,
  MR_Integer parse_tree__parse_type_defn__SeqNum_11,
  MR_Word * parse_tree__parse_type_defn__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_type_defn__SubArgTerms_14;
    MR_Word parse_tree__parse_type_defn__SubContext_15;
    MR_Word parse_tree__parse_type_defn__ArgTerm_13;
    MR_Word parse_tree__parse_type_defn__V_18_18;
    MR_Word parse_tree__parse_type_defn__V_19_19;
    MR_String parse_tree__parse_type_defn__V_20_20;

    if (parse_tree__parse_type_defn__succeeded)
      {
        parse_tree__parse_type_defn__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_9, (MR_Integer) 0)));
        parse_tree__parse_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__ArgTerms_9, (MR_Integer) 1)));
        parse_tree__parse_type_defn__succeeded = (parse_tree__parse_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_type_defn__succeeded)
          {
            parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_type_defn__succeeded)
              {
                parse_tree__parse_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ArgTerm_13, (MR_Integer) 0)));
                parse_tree__parse_type_defn__SubArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ArgTerm_13, (MR_Integer) 1)));
                parse_tree__parse_type_defn__SubContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__ArgTerm_13, (MR_Integer) 2)));
                parse_tree__parse_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__parse_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 0)));
                if (parse_tree__parse_type_defn__succeeded)
                  {
                    parse_tree__parse_type_defn__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_19_19, (MR_Integer) 0)));
                    parse_tree__parse_type_defn__succeeded = (strcmp(parse_tree__parse_type_defn__V_20_20, (MR_String) "type") == 0);
                  }
              }
          }
      }
    if (parse_tree__parse_type_defn__succeeded)
      {
        {
          parse_tree__parse_type_defn__parse_type_defn_item_7_p_0(parse_tree__parse_type_defn__ModuleName_7, parse_tree__parse_type_defn__VarSet_8, parse_tree__parse_type_defn__SubArgTerms_14, parse_tree__parse_type_defn__SubContext_15, parse_tree__parse_type_defn__SeqNum_11, (MR_Integer) 1, parse_tree__parse_type_defn__MaybeIOM_12);
        }
      }
    else
      {
        MR_Word parse_tree__parse_type_defn__Spec_17;
        MR_Word parse_tree__parse_type_defn__V_38_38;
        MR_Word parse_tree__parse_type_defn__V_39_39;
        MR_Word parse_tree__parse_type_defn__V_44_44;

        {
          parse_tree__parse_type_defn__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__parse_type_defn__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_type_defn_scalar_common_1[149])));
        }
        {
          parse_tree__parse_type_defn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_38_38, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_39_39));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__parse_type_defn__V_38_38));
        }
        {
          parse_tree__parse_type_defn__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__parse_type_defn__Spec_17));
          MR_hl_field(MR_mktag(1), parse_tree__parse_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_type_defn__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_type_defn__V_44_44));
        }
      }
  }
}

void mercury__parse_tree__parse_type_defn__init(void)
{
}

void mercury__parse_tree__parse_type_defn__init_type_tables(void)
{
}

void mercury__parse_tree__parse_type_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.parse_type_defn. */
