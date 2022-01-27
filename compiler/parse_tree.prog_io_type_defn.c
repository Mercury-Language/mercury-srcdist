/*
** Automatically generated from `prog_io_type_defn.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module parse_tree.prog_io_type_defn. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_type_defn__init
ENDINIT
*/

#include "parse_tree.prog_io_type_defn.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_mutable.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_typeclass.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 106 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 109 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 112 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 115 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0;

#line 118 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 121 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 124 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 127 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 130 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 133 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 136 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_53_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_51_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_52_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_56,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_117);

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_50_48_95_95_91_51_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_44,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_101);

#line 881 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_49_95_95_49_95_95_104_111_49_57_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 881 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_40,
#line 881 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_96);

#line 878 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_56_95_95_49_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 878 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_36,
#line 878 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_90);

#line 890 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 890 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 890 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 890 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_52,
#line 890 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_112);

#line 887 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(
#line 887 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 887 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 887 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_48,
#line 887 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_107);

#line 872 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 872 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 872 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_30,
#line 872 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_81);

#line 931 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_49_95_95_49_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(
#line 931 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_80_80,
#line 931 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_81_81,
#line 931 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 931 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71);

#line 928 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_50_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 928 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_80_80,
#line 928 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_81_81,
#line 928 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_30,
#line 928 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_65);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1098 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 1098 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 1488 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__check_no_free_body_vars__1488__1_2_f_0(
#line 1488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_55);

#line 536 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__536__1_2_f_0(
#line 536 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_231,
#line 536 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_300);

#line 530 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__530__1_2_p_0(
#line 530 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 530 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_294);

#line 508 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__508__1_2_f_0(
#line 508 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_226,
#line 508 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_284);

#line 501 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__501__1_2_p_0(
#line 501 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_127,
#line 501 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_278);

#line 497 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__497__1_1_f_0(
#line 497 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_124);

#line 482 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__482__1_2_f_0(
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_219,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_271);

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__452__1_2_p_0(
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_260);

#line 449 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__449__1_1_f_0(
#line 449 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_58);

#line 301 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__301__1_2_p_0(
#line 301 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_36,
#line 301 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_37);

#line 193 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_du_type_defn__193__1_2_p_0(
#line 193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_29,
#line 193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_71);

#line 1432 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__parse_type_defn_head__1432__1_2_f_0(
#line 1432 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1432 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_119);

#line 1423 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1423__1_2_p_0(
#line 1423 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_113,
#line 1423 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_114);

#line 1488 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0_1(
#line 1488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 1473 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0(
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ParamTVars_7,
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyType_8,
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyContext_9,
#line 1473 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Specs_10);

#line 1454 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_user_type_name_3_p_0(
#line 1454 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_4,
#line 1454 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_5,
#line 1454 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NameSpecs_6);

#line 1378 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1378 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1378 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5);

#line 1368 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__abstract_noncanonical_excludes_others_1_f_0(
#line 1368 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3);

#line 1239 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_2_11_f_0(
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_13,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_14,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_15,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_16,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_17,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_18,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_19,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_20,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_21,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_22,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_23);

#line 1193 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 1177 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1177 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1177 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1177 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1177 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8);

#line 1166 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1166 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1166 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1166 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1161 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1161 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1161 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1161 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1143 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1143 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1143 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1143 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItemMutableInfo_6);

#line 1134 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1134 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1134 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1134 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1120 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 1054 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 1054 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1054 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1054 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1043 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 1043 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3);

#line 861 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0(
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term0_9,
#line 861 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_10);

#line 749 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_8_p_0(
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_12,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_13,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 749 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 749 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16);

#line 704 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 704 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 704 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_14);

#line 666 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_13,
#line 666 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_14,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_15,
#line 666 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16);

#line 614 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0(
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_13,
#line 614 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_14,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_15,
#line 614 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16);

#line 600 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 600 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 600 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 600 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 600 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NamedCtor_9);

#line 555 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 555 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5);

#line 536 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_9(
#line 536 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 536 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 530 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_8(
#line 530 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 530 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 526 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 526 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 526 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 508 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 508 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 508 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 501 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 501 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 501 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 497 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 497 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 497 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 482 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 449 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 438 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 438 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6);

#line 412 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11);

#line 373 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3);

#line 314 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_5_p_0(
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9,
#line 314 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructor_10);

#line 301 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
#line 301 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 301 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 301 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 290 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
#line 290 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 290 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 290 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 290 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructor_8);

#line 257 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_8,
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TailTerms_9,
#line 257 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_10);

#line 246 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
#line 246 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 246 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 246 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 246 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_8);

#line 227 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 227 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 227 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 227 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6);

#line 193 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0_1(
#line 193 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg);

#line 153 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_13,
#line 153 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_14,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_15,
#line 153 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16);

#line 1432 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1432 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1432 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 1423 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1423 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[194][2];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[36][1];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[5][5];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[194][2] = {
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
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[1]))
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
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[7]))
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
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[10]))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "keyword"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be the definition of a type."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of this type definition."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are duplicated in the LHS"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: variable on LHS of type definition."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unrecognized or unexpected attribute."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a solver type"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in first argument of"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in RHS of type definition."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(explicit type quantifier shadows argument type)."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "overlapping scopes"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in arguments or constraints of constructor."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[39])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be explicitly existentially quantified"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "=>"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "introduced with"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not 1."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol whose arity"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with existentially quantified type variables."))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to be equivalent to another type."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a solver type cannot be defined"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type_is_abstract_enum."))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid argument for"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[96])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes for abstract non-solver type."))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Solver type with no solver_type_details."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or contain an unrecognised attribute."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: attributes are either badly ordered"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[39])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in solver type definition."))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unknown attribute"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a ground, unconstrained inst."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or a list of mutable declarations."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed functors list in"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[90])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for non-solver type."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type attribute given"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[134])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions cannot have"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[89])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions must have a"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[134])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only in the RHS of this type definition."))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 153 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables:"))
  },
  /* row 159 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 160 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 161 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 164 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in existential quantifier"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in class constraints,"))
  },
  /* row 169 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 174 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 175 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 177 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 178 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 179 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 181 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 182 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 183 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected functor"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "name/arity for"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
  /* row 187 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 188 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 189 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 190 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type name"))
  },
  /* row 192 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 193 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[36][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[23])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[33])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[41])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[43])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[47])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[55])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[79])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[87])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[94])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[98])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[104])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[106])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[110])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[3])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[118])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[126])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[128])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[132])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[137])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[141])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[148])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[120])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[114])))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0))
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
    ((MR_Box) (&parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_4[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1)),
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
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[4])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2341 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2349 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2357 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2365 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0
  }
};

#line 2373 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2381 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2389 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2397 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2405 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2413 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 2421 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_53_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1019 "prog_io_type_defn.m"
{
#line 1023 "prog_io_type_defn.m"
  {
#line 1023 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 1023 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
      {
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
          {
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 1023 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
              {
#line 1023 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                  {
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                      {
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io_type_defn.m"
                      }
#line 1023 "prog_io_type_defn.m"
                  }
#line 1023 "prog_io_type_defn.m"
              }
#line 1023 "prog_io_type_defn.m"
          }
#line 1023 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
      {
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1024 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1024 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
          {
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
              {
#line 1024 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
                  {
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 1024 "prog_io_type_defn.m"
                  }
#line 1024 "prog_io_type_defn.m"
              }
#line 1024 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1025 "prog_io_type_defn.m"
          {
#line 1025 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;
#line 1025 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ContextPieces_58;

#line 1117 "prog_io_type_defn.m"
            {
#line 1117 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ContextPieces_58 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
            }
#line 1118 "prog_io_type_defn.m"
            {
#line 1118 "prog_io_type_defn.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__RHS_10, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__ContextPieces_58, &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 1029 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 1031 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 1029 "prog_io_type_defn.m"
            else
#line 1027 "prog_io_type_defn.m"
              {
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 1028 "prog_io_type_defn.m"
                }
#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1028 "prog_io_type_defn.m"
                }
#line 1027 "prog_io_type_defn.m"
              }
#line 1025 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        else
#line 1034 "prog_io_type_defn.m"
          {
#line 1034 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[35]);
#line 1034 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    else
#line 1037 "prog_io_type_defn.m"
      {
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[193])));
#line 1039 "prog_io_type_defn.m"
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_io_type_defn.m"
        }
#line 1038 "prog_io_type_defn.m"
        {
#line 1038 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1038 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1040 "prog_io_type_defn.m"
        }
#line 1037 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
  }
#line 1019 "prog_io_type_defn.m"
}

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1019 "prog_io_type_defn.m"
{
#line 1023 "prog_io_type_defn.m"
  {
#line 1023 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 1023 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
      {
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
          {
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 1023 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
              {
#line 1023 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                  {
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                      {
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io_type_defn.m"
                      }
#line 1023 "prog_io_type_defn.m"
                  }
#line 1023 "prog_io_type_defn.m"
              }
#line 1023 "prog_io_type_defn.m"
          }
#line 1023 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
      {
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1024 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1024 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
          {
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
              {
#line 1024 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
                  {
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 1024 "prog_io_type_defn.m"
                  }
#line 1024 "prog_io_type_defn.m"
              }
#line 1024 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1025 "prog_io_type_defn.m"
          {
#line 1025 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 1025 "prog_io_type_defn.m"
            {
#line 1025 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(parse_tree__prog_io_type_defn__RHS_10);
            }
#line 1029 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 1031 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 1029 "prog_io_type_defn.m"
            else
#line 1027 "prog_io_type_defn.m"
              {
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 1028 "prog_io_type_defn.m"
                }
#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1028 "prog_io_type_defn.m"
                }
#line 1027 "prog_io_type_defn.m"
              }
#line 1025 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        else
#line 1034 "prog_io_type_defn.m"
          {
#line 1034 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 1034 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    else
#line 1037 "prog_io_type_defn.m"
      {
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[193])));
#line 1039 "prog_io_type_defn.m"
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_io_type_defn.m"
        }
#line 1038 "prog_io_type_defn.m"
        {
#line 1038 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1038 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1040 "prog_io_type_defn.m"
        }
#line 1037 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
  }
#line 1019 "prog_io_type_defn.m"
}

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_51_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1019 "prog_io_type_defn.m"
{
#line 1023 "prog_io_type_defn.m"
  {
#line 1023 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 1023 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
      {
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
          {
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 1023 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
              {
#line 1023 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                  {
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                      {
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io_type_defn.m"
                      }
#line 1023 "prog_io_type_defn.m"
                  }
#line 1023 "prog_io_type_defn.m"
              }
#line 1023 "prog_io_type_defn.m"
          }
#line 1023 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
      {
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1024 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1024 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
          {
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
              {
#line 1024 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
                  {
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 1024 "prog_io_type_defn.m"
                  }
#line 1024 "prog_io_type_defn.m"
              }
#line 1024 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1025 "prog_io_type_defn.m"
          {
#line 1025 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 1025 "prog_io_type_defn.m"
            {
#line 1025 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 1029 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 1031 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 1029 "prog_io_type_defn.m"
            else
#line 1027 "prog_io_type_defn.m"
              {
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 1028 "prog_io_type_defn.m"
                }
#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1028 "prog_io_type_defn.m"
                }
#line 1027 "prog_io_type_defn.m"
              }
#line 1025 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        else
#line 1034 "prog_io_type_defn.m"
          {
#line 1034 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[33]);
#line 1034 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    else
#line 1037 "prog_io_type_defn.m"
      {
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[193])));
#line 1039 "prog_io_type_defn.m"
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_io_type_defn.m"
        }
#line 1038 "prog_io_type_defn.m"
        {
#line 1038 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1038 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1040 "prog_io_type_defn.m"
        }
#line 1037 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
  }
#line 1019 "prog_io_type_defn.m"
}

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_52_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1019 "prog_io_type_defn.m"
{
#line 1023 "prog_io_type_defn.m"
  {
#line 1023 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 1023 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
      {
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
          {
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 1023 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
              {
#line 1023 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                  {
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                      {
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io_type_defn.m"
                      }
#line 1023 "prog_io_type_defn.m"
                  }
#line 1023 "prog_io_type_defn.m"
              }
#line 1023 "prog_io_type_defn.m"
          }
#line 1023 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
      {
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1024 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1024 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
          {
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
              {
#line 1024 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
                  {
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 1024 "prog_io_type_defn.m"
                  }
#line 1024 "prog_io_type_defn.m"
              }
#line 1024 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1025 "prog_io_type_defn.m"
          {
#line 1025 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 1025 "prog_io_type_defn.m"
            {
#line 1025 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 1029 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 1031 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 1029 "prog_io_type_defn.m"
            else
#line 1027 "prog_io_type_defn.m"
              {
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 1028 "prog_io_type_defn.m"
                }
#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1028 "prog_io_type_defn.m"
                }
#line 1027 "prog_io_type_defn.m"
              }
#line 1025 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        else
#line 1034 "prog_io_type_defn.m"
          {
#line 1034 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[32]);
#line 1034 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    else
#line 1037 "prog_io_type_defn.m"
      {
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[193])));
#line 1039 "prog_io_type_defn.m"
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_io_type_defn.m"
        }
#line 1038 "prog_io_type_defn.m"
        {
#line 1038 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1038 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1040 "prog_io_type_defn.m"
        }
#line 1037 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
  }
#line 1019 "prog_io_type_defn.m"
}

#line 893 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 893 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_56,
#line 893 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_117)
#line 893 "prog_io_type_defn.m"
{
#line 893 "prog_io_type_defn.m"
  {
#line 893 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 893 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_118;

#line 893 "prog_io_type_defn.m"
    {
#line 893 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_118 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_124_124, parse_tree__prog_io_type_defn__V_125_125, parse_tree__prog_io_type_defn__HeadVar__1_56, parse_tree__prog_io_type_defn__HeadVar__3_117);
    }
#line 893 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_118;
#line 893 "prog_io_type_defn.m"
  }
#line 893 "prog_io_type_defn.m"
}

#line 884 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_50_48_95_95_91_51_93_95_48_3_f_0(
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 884 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_44,
#line 884 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_101)
#line 884 "prog_io_type_defn.m"
{
#line 884 "prog_io_type_defn.m"
  {
#line 884 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 884 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_102;

#line 884 "prog_io_type_defn.m"
    {
#line 884 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_102 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_51_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_124_124, parse_tree__prog_io_type_defn__HeadVar__1_44, parse_tree__prog_io_type_defn__HeadVar__3_101);
    }
#line 884 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_102;
#line 884 "prog_io_type_defn.m"
  }
#line 884 "prog_io_type_defn.m"
}

#line 881 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_49_95_95_49_95_95_104_111_49_57_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 881 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_40,
#line 881 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_96)
#line 881 "prog_io_type_defn.m"
{
#line 881 "prog_io_type_defn.m"
  {
#line 881 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 881 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_97;

#line 881 "prog_io_type_defn.m"
    {
#line 881 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_97 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_40, parse_tree__prog_io_type_defn__HeadVar__3_96);
    }
#line 881 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_97;
#line 881 "prog_io_type_defn.m"
  }
#line 881 "prog_io_type_defn.m"
}

#line 878 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_56_95_95_49_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 878 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_36,
#line 878 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_90)
#line 878 "prog_io_type_defn.m"
{
#line 878 "prog_io_type_defn.m"
  {
#line 878 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 878 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_91;

#line 878 "prog_io_type_defn.m"
    {
#line 878 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_91 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_36, parse_tree__prog_io_type_defn__HeadVar__3_90);
    }
#line 878 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_91;
#line 878 "prog_io_type_defn.m"
  }
#line 878 "prog_io_type_defn.m"
}

#line 890 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 890 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 890 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 890 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_52,
#line 890 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_112)
#line 890 "prog_io_type_defn.m"
{
#line 890 "prog_io_type_defn.m"
  {
#line 890 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 890 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_113;

#line 890 "prog_io_type_defn.m"
    {
#line 890 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_113 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_124_124, parse_tree__prog_io_type_defn__V_125_125, parse_tree__prog_io_type_defn__HeadVar__1_52, parse_tree__prog_io_type_defn__HeadVar__3_112);
    }
#line 890 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_113;
#line 890 "prog_io_type_defn.m"
  }
#line 890 "prog_io_type_defn.m"
}

#line 887 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(
#line 887 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_124_124,
#line 887 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 887 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_48,
#line 887 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_107)
#line 887 "prog_io_type_defn.m"
{
#line 887 "prog_io_type_defn.m"
  {
#line 887 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 887 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_108;

#line 887 "prog_io_type_defn.m"
    {
#line 887 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_108 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_124_124, parse_tree__prog_io_type_defn__V_125_125, parse_tree__prog_io_type_defn__HeadVar__1_48, parse_tree__prog_io_type_defn__HeadVar__3_107);
    }
#line 887 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_108;
#line 887 "prog_io_type_defn.m"
  }
#line 887 "prog_io_type_defn.m"
}

#line 872 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 872 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_125_125,
#line 872 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_30,
#line 872 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_81)
#line 872 "prog_io_type_defn.m"
{
#line 872 "prog_io_type_defn.m"
  {
#line 872 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 872 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_82;

#line 872 "prog_io_type_defn.m"
    {
#line 872 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_82 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_53_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_125_125, parse_tree__prog_io_type_defn__HeadVar__1_30, parse_tree__prog_io_type_defn__HeadVar__3_81);
    }
#line 872 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_82;
#line 872 "prog_io_type_defn.m"
  }
#line 872 "prog_io_type_defn.m"
}

#line 931 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_49_95_95_49_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(
#line 931 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_80_80,
#line 931 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_81_81,
#line 931 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 931 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71)
#line 931 "prog_io_type_defn.m"
{
#line 931 "prog_io_type_defn.m"
  {
#line 931 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 931 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_72;

#line 931 "prog_io_type_defn.m"
    {
#line 931 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_72 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_80_80, parse_tree__prog_io_type_defn__V_81_81, parse_tree__prog_io_type_defn__HeadVar__1_34, parse_tree__prog_io_type_defn__HeadVar__3_71);
    }
#line 931 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_72;
#line 931 "prog_io_type_defn.m"
  }
#line 931 "prog_io_type_defn.m"
}

#line 928 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_50_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 928 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_80_80,
#line 928 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_81_81,
#line 928 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_30,
#line 928 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_65)
#line 928 "prog_io_type_defn.m"
{
#line 928 "prog_io_type_defn.m"
  {
#line 928 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 928 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_66;

#line 928 "prog_io_type_defn.m"
    {
#line 928 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_66 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_80_80, parse_tree__prog_io_type_defn__V_81_81, parse_tree__prog_io_type_defn__HeadVar__1_30, parse_tree__prog_io_type_defn__HeadVar__3_65);
    }
#line 928 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_66;
#line 928 "prog_io_type_defn.m"
  }
#line 928 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_50_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_50_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_49_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_49_95_95_49_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_117_110_105_102_121_95_99_111_109_112_97_114_101_95_95_57_51_49_95_95_49_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[35]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_50_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_55_95_95_49_95_95_104_111_49_54_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_48_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_56_95_95_49_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_55_56_95_95_49_95_95_104_111_49_56_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[34]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_49_95_95_49_95_95_104_111_49_57_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_49_95_95_49_95_95_104_111_49_57_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[33]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_50_48_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_56_52_95_95_49_95_95_104_111_50_48_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[32]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_57_51_95_95_49_95_95_104_111_50_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 1019 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 1019 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 1019 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1019 "prog_io_type_defn.m"
{
#line 1023 "prog_io_type_defn.m"
  {
#line 1023 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 1023 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 1023 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
      {
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 1023 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
          {
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 1023 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
              {
#line 1023 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                  {
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1023 "prog_io_type_defn.m"
                      {
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 1023 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io_type_defn.m"
                      }
#line 1023 "prog_io_type_defn.m"
                  }
#line 1023 "prog_io_type_defn.m"
              }
#line 1023 "prog_io_type_defn.m"
          }
#line 1023 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
      {
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1024 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 1024 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1024 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
          {
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 1024 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
              {
#line 1024 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1024 "prog_io_type_defn.m"
                  {
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 1024 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 1024 "prog_io_type_defn.m"
                  }
#line 1024 "prog_io_type_defn.m"
              }
#line 1024 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1025 "prog_io_type_defn.m"
          {
#line 1025 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 1095 "prog_io_type_defn.m"
            {
#line 1095 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10, &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 1029 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 1031 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 1029 "prog_io_type_defn.m"
            else
#line 1027 "prog_io_type_defn.m"
              {
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 1027 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 1028 "prog_io_type_defn.m"
                }
#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1028 "prog_io_type_defn.m"
                }
#line 1027 "prog_io_type_defn.m"
              }
#line 1025 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
        else
#line 1034 "prog_io_type_defn.m"
          {
#line 1034 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 1034 "prog_io_type_defn.m"
          }
#line 1024 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    else
#line 1037 "prog_io_type_defn.m"
      {
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1037 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[193])));
#line 1039 "prog_io_type_defn.m"
        }
#line 1039 "prog_io_type_defn.m"
        {
#line 1039 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1039 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_io_type_defn.m"
        }
#line 1038 "prog_io_type_defn.m"
        {
#line 1038 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1038 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1038 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "prog_io_type_defn.m"
        }
#line 1040 "prog_io_type_defn.m"
        {
#line 1040 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1040 "prog_io_type_defn.m"
        }
#line 1037 "prog_io_type_defn.m"
      }
#line 1023 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 1023 "prog_io_type_defn.m"
  }
#line 1019 "prog_io_type_defn.m"
}

#line 1098 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 1098 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 1098 "prog_io_type_defn.m"
{
#line 1101 "prog_io_type_defn.m"
  {
#line 1101 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1101 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInst_6;
#line 1101 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Inst_7;

#line 1102 "prog_io_type_defn.m"
    {
#line 1102 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Inst_7);
    }
#line 1102 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1102 "prog_io_type_defn.m"
      {
#line 1103 "prog_io_type_defn.m"
        {
#line 1103 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_io_type_defn__Inst_7);
        }
#line 1103 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 1102 "prog_io_type_defn.m"
      }
#line 1101 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1105 "prog_io_type_defn.m"
      {
#line 1105 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "prog_io_type_defn.m"
        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Inst_7));
#line 1105 "prog_io_type_defn.m"
      }
#line 1101 "prog_io_type_defn.m"
    else
#line 1107 "prog_io_type_defn.m"
      {
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_9;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1107 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1109 "prog_io_type_defn.m"
        {
#line 1109 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1109 "prog_io_type_defn.m"
        {
#line 1109 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1109 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[192])));
#line 1109 "prog_io_type_defn.m"
        }
#line 1109 "prog_io_type_defn.m"
        {
#line 1109 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_19_19));
#line 1109 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "prog_io_type_defn.m"
        }
#line 1108 "prog_io_type_defn.m"
        {
#line 1108 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1108 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1108 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 1108 "prog_io_type_defn.m"
        }
#line 1110 "prog_io_type_defn.m"
        {
#line 1110 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_9));
#line 1110 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1110 "prog_io_type_defn.m"
        }
#line 1110 "prog_io_type_defn.m"
        {
#line 1110 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1110 "prog_io_type_defn.m"
        }
#line 1107 "prog_io_type_defn.m"
      }
#line 1101 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeInst_6;
#line 1101 "prog_io_type_defn.m"
  }
#line 1098 "prog_io_type_defn.m"
}

#line 985 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 985 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 985 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 985 "prog_io_type_defn.m"
{
#line 993 "prog_io_type_defn.m"
  {
#line 993 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 993 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 990 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[20]);
#line 990 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
    else
#line 994 "prog_io_type_defn.m"
      {
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 994 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 995 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 996 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 996 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 996 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
          {
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 996 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
              {
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 996 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                  {
#line 996 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                      {
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 996 "prog_io_type_defn.m"
                          {
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 996 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
                          }
#line 996 "prog_io_type_defn.m"
                      }
#line 996 "prog_io_type_defn.m"
                  }
#line 996 "prog_io_type_defn.m"
              }
#line 996 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 998 "prog_io_type_defn.m"
          {
#line 998 "prog_io_type_defn.m"
            {
#line 998 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 999 "prog_io_type_defn.m"
            {
#line 999 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 999 "prog_io_type_defn.m"
            }
#line 998 "prog_io_type_defn.m"
          }
#line 995 "prog_io_type_defn.m"
        else
#line 1001 "prog_io_type_defn.m"
          {
#line 1001 "prog_io_type_defn.m"
            {
#line 1001 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__Term_9);
            }
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1001 "prog_io_type_defn.m"
          }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1007 "prog_io_type_defn.m"
        else
#line 1007 "prog_io_type_defn.m"
          {
#line 1007 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 1007 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 1007 "prog_io_type_defn.m"
            else
#line 1012 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 1007 "prog_io_type_defn.m"
          }
#line 994 "prog_io_type_defn.m"
      }
#line 993 "prog_io_type_defn.m"
  }
#line 985 "prog_io_type_defn.m"
}

#line 1488 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__check_no_free_body_vars__1488__1_2_f_0(
#line 1488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_55)
#line 1488 "prog_io_type_defn.m"
{
#line 1488 "prog_io_type_defn.m"
  {
#line 1488 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1488 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_56;

#line 1488 "prog_io_type_defn.m"
    {
#line 1488 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_56 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__TVarSet_6, parse_tree__prog_io_type_defn__HeadVar__2_55);
    }
#line 1488 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_56;
#line 1488 "prog_io_type_defn.m"
  }
#line 1488 "prog_io_type_defn.m"
}

#line 536 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__536__1_2_f_0(
#line 536 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_231,
#line 536 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_300)
#line 536 "prog_io_type_defn.m"
{
#line 536 "prog_io_type_defn.m"
  {
#line 536 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 536 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_301;

#line 536 "prog_io_type_defn.m"
    {
#line 536 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_301 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_231, parse_tree__prog_io_type_defn__HeadVar__2_300);
    }
#line 536 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_301;
#line 536 "prog_io_type_defn.m"
  }
#line 536 "prog_io_type_defn.m"
}

#line 530 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__530__1_2_p_0(
#line 530 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 530 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_294)
#line 530 "prog_io_type_defn.m"
{
#line 530 "prog_io_type_defn.m"
  {
#line 530 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 530 "prog_io_type_defn.m"
    {
#line 530 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_294)));
    }
#line 530 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 530 "prog_io_type_defn.m"
  }
#line 530 "prog_io_type_defn.m"
}

#line 508 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__508__1_2_f_0(
#line 508 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_226,
#line 508 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_284)
#line 508 "prog_io_type_defn.m"
{
#line 508 "prog_io_type_defn.m"
  {
#line 508 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 508 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_285;

#line 508 "prog_io_type_defn.m"
    {
#line 508 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_285 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_226, parse_tree__prog_io_type_defn__HeadVar__2_284);
    }
#line 508 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_285;
#line 508 "prog_io_type_defn.m"
  }
#line 508 "prog_io_type_defn.m"
}

#line 501 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__501__1_2_p_0(
#line 501 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_127,
#line 501 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_278)
#line 501 "prog_io_type_defn.m"
{
#line 501 "prog_io_type_defn.m"
  {
#line 501 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 501 "prog_io_type_defn.m"
    {
#line 501 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_127, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_278)));
    }
#line 501 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 501 "prog_io_type_defn.m"
  }
#line 501 "prog_io_type_defn.m"
}

#line 497 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__497__1_1_f_0(
#line 497 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_124)
#line 497 "prog_io_type_defn.m"
{
#line 497 "prog_io_type_defn.m"
  {
#line 497 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 497 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__2_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 1)));
#line 497 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 0)));
#line 497 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 2)));
#line 497 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 3)));

#line 497 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__LambdaHeadVar__2_125;
#line 497 "prog_io_type_defn.m"
  }
#line 497 "prog_io_type_defn.m"
}

#line 482 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__482__1_2_f_0(
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_219,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_271)
#line 482 "prog_io_type_defn.m"
{
#line 482 "prog_io_type_defn.m"
  {
#line 482 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 482 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_272;

#line 482 "prog_io_type_defn.m"
    {
#line 482 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_272 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_219, parse_tree__prog_io_type_defn__HeadVar__2_271);
    }
#line 482 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_272;
#line 482 "prog_io_type_defn.m"
  }
#line 482 "prog_io_type_defn.m"
}

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__452__1_2_p_0(
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 452 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_260)
#line 452 "prog_io_type_defn.m"
{
#line 452 "prog_io_type_defn.m"
  {
#line 452 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 452 "prog_io_type_defn.m"
    {
#line 452 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_61, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_260)));
    }
#line 452 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 452 "prog_io_type_defn.m"
  }
#line 452 "prog_io_type_defn.m"
}

#line 449 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__449__1_1_f_0(
#line 449 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_58)
#line 449 "prog_io_type_defn.m"
{
#line 449 "prog_io_type_defn.m"
  {
#line 449 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 1)));
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 0)));
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 2)));
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 3)));

#line 449 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__LambdaHeadVar__2_59;
#line 449 "prog_io_type_defn.m"
  }
#line 449 "prog_io_type_defn.m"
}

#line 301 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__301__1_2_p_0(
#line 301 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_36,
#line 301 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_37)
#line 301 "prog_io_type_defn.m"
{
#line 301 "prog_io_type_defn.m"
  {
#line 301 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 301 "prog_io_type_defn.m"
    {
#line 301 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_36, parse_tree__prog_io_type_defn__HeadVar__2_37);
    }
#line 301 "prog_io_type_defn.m"
  }
#line 301 "prog_io_type_defn.m"
}

#line 193 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_du_type_defn__193__1_2_p_0(
#line 193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_29,
#line 193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_71)
#line 193 "prog_io_type_defn.m"
{
#line 193 "prog_io_type_defn.m"
  {
#line 193 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 193 "prog_io_type_defn.m"
    {
#line 193 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_29)), ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_71)));
    }
#line 193 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 193 "prog_io_type_defn.m"
  }
#line 193 "prog_io_type_defn.m"
}

#line 1432 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__parse_type_defn_head__1432__1_2_f_0(
#line 1432 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1432 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_119)
#line 1432 "prog_io_type_defn.m"
{
#line 1432 "prog_io_type_defn.m"
  {
#line 1432 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1432 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_120;

#line 1432 "prog_io_type_defn.m"
    {
#line 1432 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_120 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadVar__2_119);
    }
#line 1432 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_120;
#line 1432 "prog_io_type_defn.m"
  }
#line 1432 "prog_io_type_defn.m"
}

#line 1423 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1423__1_2_p_0(
#line 1423 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_113,
#line 1423 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_114)
#line 1423 "prog_io_type_defn.m"
{
#line 1423 "prog_io_type_defn.m"
  {
#line 1423 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1423 "prog_io_type_defn.m"
    {
#line 1423 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_113, parse_tree__prog_io_type_defn__HeadVar__2_114);
    }
#line 1423 "prog_io_type_defn.m"
  }
#line 1423 "prog_io_type_defn.m"
}

#line 1488 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0_1(
#line 1488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 1488 "prog_io_type_defn.m"
{
#line 1488 "prog_io_type_defn.m"
  {
#line 1488 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1488 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1488 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv0_HeadVar__3_56;

#line 1488 "prog_io_type_defn.m"
    {
#line 1488 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_HeadVar__3_56 = parse_tree__prog_io_type_defn__IntroducedFrom__func__check_no_free_body_vars__1488__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 1488 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__3_56));
#line 1488 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1488 "prog_io_type_defn.m"
  }
#line 1488 "prog_io_type_defn.m"
}

#line 1473 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0(
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ParamTVars_7,
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyType_8,
#line 1473 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyContext_9,
#line 1473 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Specs_10)
#line 1473 "prog_io_type_defn.m"
{
#line 1476 "prog_io_type_defn.m"
  {
#line 1476 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1476 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeInfo_53_53;
#line 1476 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BodyTVars_11;
#line 1476 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVarSet_12;
#line 1476 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BodyTVarSet_13;
#line 1476 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVarSet_14;
#line 1476 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVars_15;

#line 1478 "prog_io_type_defn.m"
    {
#line 1478 "prog_io_type_defn.m"
      parse_tree__prog_type__type_vars_2_p_0(parse_tree__prog_io_type_defn__BodyType_8, &parse_tree__prog_io_type_defn__BodyTVars_11);
    }
#line 6512 "parse_tree.prog_io_type_defn.c"
    parse_tree__prog_io_type_defn__TypeInfo_53_53 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 1479 "prog_io_type_defn.m"
    {
#line 1479 "prog_io_type_defn.m"
      mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__ParamTVars_7, &parse_tree__prog_io_type_defn__ParamTVarSet_12);
    }
#line 1480 "prog_io_type_defn.m"
    {
#line 1480 "prog_io_type_defn.m"
      mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__BodyTVars_11, &parse_tree__prog_io_type_defn__BodyTVarSet_13);
    }
#line 1481 "prog_io_type_defn.m"
    {
#line 1481 "prog_io_type_defn.m"
      mercury__set__difference_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__BodyTVarSet_13, parse_tree__prog_io_type_defn__ParamTVarSet_12, &parse_tree__prog_io_type_defn__OnlyBodyTVarSet_14);
    }
#line 1482 "prog_io_type_defn.m"
    {
#line 1482 "prog_io_type_defn.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__OnlyBodyTVarSet_14, &parse_tree__prog_io_type_defn__OnlyBodyTVars_15);
    }
#line 1486 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__OnlyBodyTVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1485 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1486 "prog_io_type_defn.m"
    else
#line 1487 "prog_io_type_defn.m"
      {
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_58_58;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVarNames_18;
#line 1487 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__VarWord_19;
#line 1487 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__OccurWord_20;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_21;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_22;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1487 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1490 "prog_io_type_defn.m"
        MR_Box parse_tree__prog_io_type_defn__conv1_VarWord_19;
#line 1492 "prog_io_type_defn.m"
        MR_Box parse_tree__prog_io_type_defn__conv2_OccurWord_20;

#line 1488 "prog_io_type_defn.m"
        {
#line 1488 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1488 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 1488 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0_1));
#line 1488 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1488 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TVarSet_6));
#line 1488 "prog_io_type_defn.m"
        }
#line 1488 "prog_io_type_defn.m"
        {
#line 1488 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__OnlyBodyTVarNames_18 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__V_23_23, parse_tree__prog_io_type_defn__OnlyBodyTVars_15);
        }
#line 1490 "prog_io_type_defn.m"
        {
#line 1490 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__conv1_VarWord_19 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
        }
#line 1490 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__VarWord_19 = ((MR_String) parse_tree__prog_io_type_defn__conv1_VarWord_19);
#line 1492 "prog_io_type_defn.m"
        {
#line 1492 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__conv2_OccurWord_20 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
        }
#line 1492 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__OccurWord_20 = ((MR_String) parse_tree__prog_io_type_defn__conv2_OccurWord_20);
#line 6618 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1494 "prog_io_type_defn.m"
        {
#line 1494 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1494 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__VarWord_19));
#line 1494 "prog_io_type_defn.m"
        }
#line 1494 "prog_io_type_defn.m"
        {
#line 1494 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1494 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1494 "prog_io_type_defn.m"
        }
#line 1494 "prog_io_type_defn.m"
        {
#line 1494 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[166])));
#line 1494 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1494 "prog_io_type_defn.m"
        }
#line 1495 "prog_io_type_defn.m"
        {
#line 1495 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_35_35 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_type_defn__OnlyBodyTVarNames_18);
        }
#line 1495 "prog_io_type_defn.m"
        {
#line 1495 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1495 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__OccurWord_20));
#line 1495 "prog_io_type_defn.m"
        }
#line 1495 "prog_io_type_defn.m"
        {
#line 1495 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1495 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[152])));
#line 1495 "prog_io_type_defn.m"
        }
#line 1495 "prog_io_type_defn.m"
        {
#line 1495 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_58_58, parse_tree__prog_io_type_defn__V_35_35, parse_tree__prog_io_type_defn__V_36_36);
        }
#line 1494 "prog_io_type_defn.m"
        {
#line 1494 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_21 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_58_58, parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_34_34);
        }
#line 1498 "prog_io_type_defn.m"
        {
#line 1498 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_21));
#line 1498 "prog_io_type_defn.m"
        }
#line 1498 "prog_io_type_defn.m"
        {
#line 1498 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 1498 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "prog_io_type_defn.m"
        }
#line 1498 "prog_io_type_defn.m"
        {
#line 1498 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyContext_9));
#line 1498 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 1498 "prog_io_type_defn.m"
        }
#line 1498 "prog_io_type_defn.m"
        {
#line 1498 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1498 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "prog_io_type_defn.m"
        }
#line 1497 "prog_io_type_defn.m"
        {
#line 1497 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1497 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1497 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 1497 "prog_io_type_defn.m"
        }
#line 1499 "prog_io_type_defn.m"
        {
#line 1499 "prog_io_type_defn.m"
          MR_Word base;
#line 1499 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__Specs_10 = base;
#line 1499 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_22));
#line 1499 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1499 "prog_io_type_defn.m"
        }
#line 1487 "prog_io_type_defn.m"
      }
#line 1476 "prog_io_type_defn.m"
  }
#line 1473 "prog_io_type_defn.m"
}

#line 1454 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_user_type_name_3_p_0(
#line 1454 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_4,
#line 1454 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_5,
#line 1454 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NameSpecs_6)
#line 1454 "prog_io_type_defn.m"
{
#line 1457 "prog_io_type_defn.m"
  {
#line 1457 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1457 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__Name_7;

#line 1459 "prog_io_type_defn.m"
    {
#line 1459 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_type_defn__SymName_4);
    }
#line 1460 "prog_io_type_defn.m"
    {
#line 1460 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__is_known_type_name_1_p_0(parse_tree__prog_io_type_defn__Name_7);
    }
#line 1460 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1462 "prog_io_type_defn.m"
      {
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NamePieces_8;
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NameSpec_9;
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1462 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1461 "prog_io_type_defn.m"
        {
#line 1461 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1461 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_7));
#line 1461 "prog_io_type_defn.m"
        }
#line 1461 "prog_io_type_defn.m"
        {
#line 1461 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_13_13));
#line 1461 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[150])));
#line 1461 "prog_io_type_defn.m"
        }
#line 1461 "prog_io_type_defn.m"
        {
#line 1461 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[191])));
#line 1461 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NamePieces_8, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_12_12));
#line 1461 "prog_io_type_defn.m"
        }
#line 1464 "prog_io_type_defn.m"
        {
#line 1464 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NamePieces_8));
#line 1464 "prog_io_type_defn.m"
        }
#line 1464 "prog_io_type_defn.m"
        {
#line 1464 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1464 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1464 "prog_io_type_defn.m"
        }
#line 1464 "prog_io_type_defn.m"
        {
#line 1464 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_5));
#line 1464 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1464 "prog_io_type_defn.m"
        }
#line 1464 "prog_io_type_defn.m"
        {
#line 1464 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1464 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1464 "prog_io_type_defn.m"
        }
#line 1463 "prog_io_type_defn.m"
        {
#line 1463 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1463 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1463 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1463 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__NameSpec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_22_22));
#line 1463 "prog_io_type_defn.m"
        }
#line 1465 "prog_io_type_defn.m"
        {
#line 1465 "prog_io_type_defn.m"
          MR_Word base;
#line 1465 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__NameSpecs_6 = base;
#line 1465 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpec_9));
#line 1465 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1465 "prog_io_type_defn.m"
        }
#line 1462 "prog_io_type_defn.m"
      }
#line 1460 "prog_io_type_defn.m"
    else
#line 1467 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1457 "prog_io_type_defn.m"
  }
#line 1454 "prog_io_type_defn.m"
}

#line 1378 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1378 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1378 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5)
#line 1378 "prog_io_type_defn.m"
{
#line 1381 "prog_io_type_defn.m"
  {
#line 1381 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3;

#line 1383 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1384 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1386 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1381 "prog_io_type_defn.m"
    else
#line 1388 "prog_io_type_defn.m"
      {
#line 1388 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_6_6;

#line 1388 "prog_io_type_defn.m"
        {
#line 1388 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_4));
#line 1388 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_5));
#line 1388 "prog_io_type_defn.m"
        }
#line 1388 "prog_io_type_defn.m"
        {
#line 1388 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_6_6));
#line 1388 "prog_io_type_defn.m"
        }
#line 1388 "prog_io_type_defn.m"
      }
#line 1381 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_3;
#line 1381 "prog_io_type_defn.m"
  }
#line 1378 "prog_io_type_defn.m"
}

#line 1368 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__abstract_noncanonical_excludes_others_1_f_0(
#line 1368 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3)
#line 1368 "prog_io_type_defn.m"
{
#line 1370 "prog_io_type_defn.m"
  {
#line 1370 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1370 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Spec_4;
#line 1370 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 1370 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1370 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_27_27;

#line 1376 "prog_io_type_defn.m"
    {
#line 1376 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__V_27_27 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_3);
    }
#line 1376 "prog_io_type_defn.m"
    {
#line 1376 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1376 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1376 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[190])));
#line 1376 "prog_io_type_defn.m"
    }
#line 1376 "prog_io_type_defn.m"
    {
#line 1376 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1376 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1376 "prog_io_type_defn.m"
    }
#line 1375 "prog_io_type_defn.m"
    {
#line 1375 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Spec_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1375 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1375 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_4, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1375 "prog_io_type_defn.m"
    }
#line 1370 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Spec_4;
#line 1370 "prog_io_type_defn.m"
  }
#line 1368 "prog_io_type_defn.m"
}

#line 1239 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_2_11_f_0(
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_13,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_14,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_15,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_16,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_17,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_18,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_19,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_20,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_21,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_22,
#line 1239 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_23)
#line 1239 "prog_io_type_defn.m"
{
#line 1252 "prog_io_type_defn.m"
  {
#line 1252 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1252 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_24;

#line 1252 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1345 "prog_io_type_defn.m"
#line 1345 "prog_io_type_defn.m"
      switch (parse_tree__prog_io_type_defn__IsSolverType_13) {
#line 1345 "prog_io_type_defn.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1345 "prog_io_type_defn.m"
        case (MR_Integer) 0:
#line 1347 "prog_io_type_defn.m"
          {
#line 1348 "prog_io_type_defn.m"
            {
#line 1348 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_44_44;

#line 1348 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_15)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1348 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_15, (MR_Integer) 0)));
#line 1348 "prog_io_type_defn.m"
            }
#line 1349 "prog_io_type_defn.m"
            if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1349 "prog_io_type_defn.m"
              {
#line 1349 "prog_io_type_defn.m"
                {
#line 1349 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_45_45;

#line 1349 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__InitialisationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1349 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1349 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__InitialisationIs_16, (MR_Integer) 0)));
#line 1349 "prog_io_type_defn.m"
                }
#line 1349 "prog_io_type_defn.m"
                if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1349 "prog_io_type_defn.m"
                  {
#line 1350 "prog_io_type_defn.m"
                    {
#line 1350 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 1350 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__GroundIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1350 "prog_io_type_defn.m"
                      if (parse_tree__prog_io_type_defn__succeeded)
#line 1350 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__GroundIs_17, (MR_Integer) 0)));
#line 1350 "prog_io_type_defn.m"
                    }
#line 1349 "prog_io_type_defn.m"
                    if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1349 "prog_io_type_defn.m"
                      {
#line 1351 "prog_io_type_defn.m"
                        {
#line 1351 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1351 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__AnyIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1351 "prog_io_type_defn.m"
                          if (parse_tree__prog_io_type_defn__succeeded)
#line 1351 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__AnyIs_18, (MR_Integer) 0)));
#line 1351 "prog_io_type_defn.m"
                        }
#line 1349 "prog_io_type_defn.m"
                        if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1352 "prog_io_type_defn.m"
                          {
#line 1352 "prog_io_type_defn.m"
                            MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 1352 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__CStoreIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1352 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1352 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__CStoreIs_19, (MR_Integer) 0)));
#line 1352 "prog_io_type_defn.m"
                          }
#line 1349 "prog_io_type_defn.m"
                      }
#line 1349 "prog_io_type_defn.m"
                  }
#line 1349 "prog_io_type_defn.m"
              }
#line 1347 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1356 "prog_io_type_defn.m"
              {
#line 1356 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 1356 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 1356 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1356 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 1356 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_136;

#line 1358 "prog_io_type_defn.m"
                {
#line 1358 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_23);
                }
#line 1358 "prog_io_type_defn.m"
                {
#line 1358 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1358 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1358 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[187])));
#line 1358 "prog_io_type_defn.m"
                }
#line 1359 "prog_io_type_defn.m"
                {
#line 1359 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 1359 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1359 "prog_io_type_defn.m"
                }
#line 1357 "prog_io_type_defn.m"
                {
#line 1357 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1357 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1357 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1357 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_136, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 1357 "prog_io_type_defn.m"
                }
#line 1360 "prog_io_type_defn.m"
                {
#line 1360 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_136));
#line 1360 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1360 "prog_io_type_defn.m"
                }
#line 1360 "prog_io_type_defn.m"
                {
#line 1360 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 1360 "prog_io_type_defn.m"
                }
#line 1356 "prog_io_type_defn.m"
              }
#line 1347 "prog_io_type_defn.m"
            else
#line 1362 "prog_io_type_defn.m"
              {
#line 1362 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeUC_49;

#line 1362 "prog_io_type_defn.m"
                {
#line 1362 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeUC_49 = parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(parse_tree__prog_io_type_defn__EqualityIs_20, parse_tree__prog_io_type_defn__ComparisonIs_21);
                }
#line 1363 "prog_io_type_defn.m"
                {
#line 1363 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1363 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUC_49));
#line 1363 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgIs_22));
#line 1363 "prog_io_type_defn.m"
                }
#line 1362 "prog_io_type_defn.m"
              }
#line 1347 "prog_io_type_defn.m"
          }
#line 1345 "prog_io_type_defn.m"
          break;
#line 1345 "prog_io_type_defn.m"
        case (MR_Integer) 1:
#line 1275 "prog_io_type_defn.m"
          {
#line 1276 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_27_27;

#line 1276 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__DirectArgIs_22)) == (MR_mktag((MR_Integer) 1)));
#line 1276 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1276 "prog_io_type_defn.m"
              {
#line 1276 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__DirectArgIs_22, (MR_Integer) 0)));
#line 1279 "prog_io_type_defn.m"
                {
#line 1279 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 1279 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_84_84;
#line 1279 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1279 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 1279 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_127;

#line 1281 "prog_io_type_defn.m"
                  {
#line 1281 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_85_85 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_23);
                  }
#line 1281 "prog_io_type_defn.m"
                  {
#line 1281 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 1281 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[188])));
#line 1281 "prog_io_type_defn.m"
                  }
#line 1282 "prog_io_type_defn.m"
                  {
#line 1282 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_84_84));
#line 1282 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1282 "prog_io_type_defn.m"
                  }
#line 1280 "prog_io_type_defn.m"
                  {
#line 1280 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1280 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 1280 "prog_io_type_defn.m"
                  }
#line 1283 "prog_io_type_defn.m"
                  {
#line 1283 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_127));
#line 1283 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1283 "prog_io_type_defn.m"
                  }
#line 1283 "prog_io_type_defn.m"
                  {
#line 1283 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_90_90));
#line 1283 "prog_io_type_defn.m"
                  }
#line 1279 "prog_io_type_defn.m"
                }
#line 1276 "prog_io_type_defn.m"
              }
#line 1276 "prog_io_type_defn.m"
            else
#line 1284 "prog_io_type_defn.m"
              {
#line 1284 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__RepnType_29;
#line 1284 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeInitialisation_30;
#line 1284 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeGroundInst_31;
#line 1284 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeAnyInst_32;
#line 1284 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_33;
#line 1284 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_34;
#line 1284 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfos_35;

#line 1285 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_15)) == (MR_mktag((MR_Integer) 1)));
#line 1285 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1285 "prog_io_type_defn.m"
                  {
#line 1285 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__RepnType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_15, (MR_Integer) 0)));
#line 1286 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeInitialisation_30 = parse_tree__prog_io_type_defn__InitialisationIs_16;
#line 1287 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeGroundInst_31 = parse_tree__prog_io_type_defn__GroundIs_17;
#line 1288 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeAnyInst_32 = parse_tree__prog_io_type_defn__AnyIs_18;
#line 1289 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeEqPred_33 = parse_tree__prog_io_type_defn__EqualityIs_20;
#line 1290 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeCmpPred_34 = parse_tree__prog_io_type_defn__ComparisonIs_21;
#line 1291 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeMutableInfos_35 = parse_tree__prog_io_type_defn__CStoreIs_19;
#line 1291 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 1285 "prog_io_type_defn.m"
                  }
#line 1284 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1298 "prog_io_type_defn.m"
                  {
#line 1298 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GroundInst_36;
#line 1298 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__AnyInst_37;
#line 1298 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MutableInfos_38;
#line 1298 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__HowToInit_40;
#line 1298 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_41;
#line 1298 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_42;
#line 1298 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeUnifyCompare_43;

#line 1295 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeGroundInst_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1297 "prog_io_type_defn.m"
                      {
#line 1297 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__GroundInst_36 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1295 "prog_io_type_defn.m"
                    else
#line 1294 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__GroundInst_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundInst_31, (MR_Integer) 0)));
#line 1301 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeAnyInst_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1303 "prog_io_type_defn.m"
                      {
#line 1303 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyInst_37 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1301 "prog_io_type_defn.m"
                    else
#line 1300 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__AnyInst_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyInst_32, (MR_Integer) 0)));
#line 1307 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeMutableInfos_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1309 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1307 "prog_io_type_defn.m"
                    else
#line 1306 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeMutableInfos_35, (MR_Integer) 0)));
#line 1314 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeInitialisation_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1316 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HowToInit_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1314 "prog_io_type_defn.m"
                    else
#line 1312 "prog_io_type_defn.m"
                      {
#line 1312 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__InitPred_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisation_30, (MR_Integer) 0)));

#line 1313 "prog_io_type_defn.m"
                        {
#line 1313 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__HowToInit_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HowToInit_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__InitPred_39));
#line 1313 "prog_io_type_defn.m"
                        }
#line 1312 "prog_io_type_defn.m"
                      }
#line 1318 "prog_io_type_defn.m"
                    {
#line 1318 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__SolverTypeDetails_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__RepnType_29));
#line 1318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_41, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HowToInit_40));
#line 1318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_41, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__GroundInst_36));
#line 1318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_41, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__AnyInst_37));
#line 1318 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_41, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__MutableInfos_38));
#line 1318 "prog_io_type_defn.m"
                    }
#line 1320 "prog_io_type_defn.m"
                    {
#line 1320 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_41));
#line 1320 "prog_io_type_defn.m"
                    }
#line 1322 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1323 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1321 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1325 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeUnifyCompare_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1321 "prog_io_type_defn.m"
                    else
#line 1327 "prog_io_type_defn.m"
                      {
#line 1327 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_92_92;

#line 1327 "prog_io_type_defn.m"
                        {
#line 1327 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_33));
#line 1327 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_34));
#line 1327 "prog_io_type_defn.m"
                        }
#line 1327 "prog_io_type_defn.m"
                        {
#line 1327 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeUnifyCompare_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeUnifyCompare_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 1327 "prog_io_type_defn.m"
                        }
#line 1327 "prog_io_type_defn.m"
                      }
#line 1330 "prog_io_type_defn.m"
                    {
#line 1330 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_42));
#line 1330 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUnifyCompare_43));
#line 1330 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "prog_io_type_defn.m"
                    }
#line 1298 "prog_io_type_defn.m"
                  }
#line 1284 "prog_io_type_defn.m"
                else
#line 1332 "prog_io_type_defn.m"
                  {
#line 1333 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1332 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1336 "prog_io_type_defn.m"
                      {
#line 1336 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_107_107;
#line 1336 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_108_108;
#line 1336 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_109_109;
#line 1336 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_114_114;
#line 1336 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_128;

#line 1338 "prog_io_type_defn.m"
                        {
#line 1338 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_109_109 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_23);
                        }
#line 1338 "prog_io_type_defn.m"
                        {
#line 1338 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1338 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_109_109));
#line 1338 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[189])));
#line 1338 "prog_io_type_defn.m"
                        }
#line 1339 "prog_io_type_defn.m"
                        {
#line 1339 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_108_108));
#line 1339 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1339 "prog_io_type_defn.m"
                        }
#line 1337 "prog_io_type_defn.m"
                        {
#line 1337 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1337 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1337 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1337 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_128, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_107_107));
#line 1337 "prog_io_type_defn.m"
                        }
#line 1340 "prog_io_type_defn.m"
                        {
#line 1340 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_128));
#line 1340 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1340 "prog_io_type_defn.m"
                        }
#line 1340 "prog_io_type_defn.m"
                        {
#line 1340 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_114_114));
#line 1340 "prog_io_type_defn.m"
                        }
#line 1336 "prog_io_type_defn.m"
                      }
#line 1332 "prog_io_type_defn.m"
                    else
#line 1342 "prog_io_type_defn.m"
                      {
#line 1342 "prog_io_type_defn.m"
                        {
#line 1342 "prog_io_type_defn.m"
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_type_defn", (MR_String) "function \140parse_tree.prog_io_type_defn.make_maybe_where_details_2\'/11", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                        }
#line 1342 "prog_io_type_defn.m"
                      }
#line 1332 "prog_io_type_defn.m"
                  }
#line 1284 "prog_io_type_defn.m"
              }
#line 1275 "prog_io_type_defn.m"
          }
#line 1345 "prog_io_type_defn.m"
          break;
#line 1345 "prog_io_type_defn.m"
      }
#line 1252 "prog_io_type_defn.m"
    else
#line 1255 "prog_io_type_defn.m"
      {
#line 1256 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1256 "prog_io_type_defn.m"
          {
#line 1257 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__InitialisationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1256 "prog_io_type_defn.m"
              {
#line 1258 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__GroundIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1256 "prog_io_type_defn.m"
                  {
#line 1259 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__AnyIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1256 "prog_io_type_defn.m"
                      {
#line 1260 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1256 "prog_io_type_defn.m"
                          {
#line 1261 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1256 "prog_io_type_defn.m"
                              {
#line 1262 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__CStoreIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1263 "prog_io_type_defn.m"
                                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__DirectArgIs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_type_defn.m"
                              }
#line 1256 "prog_io_type_defn.m"
                          }
#line 1256 "prog_io_type_defn.m"
                      }
#line 1256 "prog_io_type_defn.m"
                  }
#line 1256 "prog_io_type_defn.m"
              }
#line 1256 "prog_io_type_defn.m"
          }
#line 1255 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1265 "prog_io_type_defn.m"
          {
#line 1265 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_122_122;
#line 1265 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_123_123;

#line 1266 "prog_io_type_defn.m"
            {
#line 1266 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__IsSolverType_13));
#line 1266 "prog_io_type_defn.m"
            }
#line 1266 "prog_io_type_defn.m"
            {
#line 1266 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_123_123));
#line 1266 "prog_io_type_defn.m"
            }
#line 1266 "prog_io_type_defn.m"
            {
#line 1266 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_122_122));
#line 1266 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "prog_io_type_defn.m"
            }
#line 1265 "prog_io_type_defn.m"
          }
#line 1255 "prog_io_type_defn.m"
        else
#line 1268 "prog_io_type_defn.m"
          {
#line 1268 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 1268 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_125_125;

#line 1268 "prog_io_type_defn.m"
            {
#line 1268 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_26 = parse_tree__prog_io_type_defn__abstract_noncanonical_excludes_others_1_f_0(parse_tree__prog_io_type_defn__WhereTerm_23);
            }
#line 1269 "prog_io_type_defn.m"
            {
#line 1269 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 1269 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1269 "prog_io_type_defn.m"
            }
#line 1269 "prog_io_type_defn.m"
            {
#line 1269 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_125_125));
#line 1269 "prog_io_type_defn.m"
            }
#line 1268 "prog_io_type_defn.m"
          }
#line 1255 "prog_io_type_defn.m"
      }
#line 1252 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_24;
#line 1252 "prog_io_type_defn.m"
  }
#line 1239 "prog_io_type_defn.m"
}

#line 1193 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1193 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1193 "prog_io_type_defn.m"
{
#line 1208 "prog_io_type_defn.m"
  {
#line 1208 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhereEnd_24)) == (MR_mktag((MR_Integer) 1)));
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RepresentationIs_28;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__InitialisationIs_29;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__GroundIs_30;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__AnyIs_31;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CStoreIs_32;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__EqualityIs_33;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ComparisonIs_34;
#line 1208 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__DirectArgIs_35;

#line 1209 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1209 "prog_io_type_defn.m"
      {
#line 1209 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15)) == (MR_mktag((MR_Integer) 1)));
#line 1209 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1209 "prog_io_type_defn.m"
          {
#line 1209 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15, (MR_Integer) 0)));
#line 1210 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeRepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1210 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1210 "prog_io_type_defn.m"
              {
#line 1210 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__RepresentationIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeRepresentationIs_16, (MR_Integer) 0)));
#line 1211 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeInitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1211 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1211 "prog_io_type_defn.m"
                  {
#line 1211 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__InitialisationIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisationIs_17, (MR_Integer) 0)));
#line 1212 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeGroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1212 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1212 "prog_io_type_defn.m"
                      {
#line 1212 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__GroundIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundIs_18, (MR_Integer) 0)));
#line 1213 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeAnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1213 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1213 "prog_io_type_defn.m"
                          {
#line 1213 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__AnyIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyIs_19, (MR_Integer) 0)));
#line 1214 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1214 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1214 "prog_io_type_defn.m"
                              {
#line 1214 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__CStoreIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCStoreIs_20, (MR_Integer) 0)));
#line 1215 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeEqualityIs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1215 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1215 "prog_io_type_defn.m"
                                  {
#line 1215 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__EqualityIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeEqualityIs_21, (MR_Integer) 0)));
#line 1216 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeComparisonIs_22)) == (MR_mktag((MR_Integer) 1)));
#line 1216 "prog_io_type_defn.m"
                                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1216 "prog_io_type_defn.m"
                                      {
#line 1216 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__ComparisonIs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeComparisonIs_22, (MR_Integer) 0)));
#line 1217 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeDirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1217 "prog_io_type_defn.m"
                                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1217 "prog_io_type_defn.m"
                                          parse_tree__prog_io_type_defn__DirectArgIs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_23, (MR_Integer) 0)));
#line 1216 "prog_io_type_defn.m"
                                      }
#line 1215 "prog_io_type_defn.m"
                                  }
#line 1214 "prog_io_type_defn.m"
                              }
#line 1213 "prog_io_type_defn.m"
                          }
#line 1212 "prog_io_type_defn.m"
                      }
#line 1211 "prog_io_type_defn.m"
                  }
#line 1210 "prog_io_type_defn.m"
              }
#line 1209 "prog_io_type_defn.m"
          }
#line 1209 "prog_io_type_defn.m"
      }
#line 1208 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1220 "prog_io_type_defn.m"
      {
#line 1220 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = parse_tree__prog_io_type_defn__make_maybe_where_details_2_11_f_0(parse_tree__prog_io_type_defn__IsSolverType_14, parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27, parse_tree__prog_io_type_defn__RepresentationIs_28, parse_tree__prog_io_type_defn__InitialisationIs_29, parse_tree__prog_io_type_defn__GroundIs_30, parse_tree__prog_io_type_defn__AnyIs_31, parse_tree__prog_io_type_defn__CStoreIs_32, parse_tree__prog_io_type_defn__EqualityIs_33, parse_tree__prog_io_type_defn__ComparisonIs_34, parse_tree__prog_io_type_defn__DirectArgIs_35, parse_tree__prog_io_type_defn__WhereTerm_25);
      }
#line 1208 "prog_io_type_defn.m"
    else
#line 1235 "prog_io_type_defn.m"
      {
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_59_59;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_60_60;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_37;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1235 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55;

#line 1226 "prog_io_type_defn.m"
        {
#line 1226 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[11], parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15);
        }
#line 1227 "prog_io_type_defn.m"
        {
#line 1227 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[12], parse_tree__prog_io_type_defn__MaybeRepresentationIs_16);
        }
#line 7990 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[2];
#line 1228 "prog_io_type_defn.m"
        {
#line 1228 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeInitialisationIs_17);
        }
#line 7997 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[13];
#line 1229 "prog_io_type_defn.m"
        {
#line 1229 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeGroundIs_18);
        }
#line 1230 "prog_io_type_defn.m"
        {
#line 1230 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeAnyIs_19);
        }
#line 1231 "prog_io_type_defn.m"
        {
#line 1231 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[14], parse_tree__prog_io_type_defn__MaybeCStoreIs_20);
        }
#line 1232 "prog_io_type_defn.m"
        {
#line 1232 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeEqualityIs_21);
        }
#line 1233 "prog_io_type_defn.m"
        {
#line 1233 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeComparisonIs_22);
        }
#line 1234 "prog_io_type_defn.m"
        {
#line 1234 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[8], parse_tree__prog_io_type_defn__MaybeDirectArgIs_23);
        }
#line 1235 "prog_io_type_defn.m"
        {
#line 1235 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_55_55 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, parse_tree__prog_io_type_defn__MaybeWhereEnd_24);
        }
#line 1234 "prog_io_type_defn.m"
        {
#line 1234 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_54_54, parse_tree__prog_io_type_defn__V_55_55);
        }
#line 1233 "prog_io_type_defn.m"
        {
#line 1233 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53);
        }
#line 1232 "prog_io_type_defn.m"
        {
#line 1232 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_50_50, parse_tree__prog_io_type_defn__V_51_51);
        }
#line 1231 "prog_io_type_defn.m"
        {
#line 1231 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_48_48, parse_tree__prog_io_type_defn__V_49_49);
        }
#line 1230 "prog_io_type_defn.m"
        {
#line 1230 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_46_46, parse_tree__prog_io_type_defn__V_47_47);
        }
#line 1229 "prog_io_type_defn.m"
        {
#line 1229 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_44_44, parse_tree__prog_io_type_defn__V_45_45);
        }
#line 1228 "prog_io_type_defn.m"
        {
#line 1228 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_42_42, parse_tree__prog_io_type_defn__V_43_43);
        }
#line 1227 "prog_io_type_defn.m"
        {
#line 1227 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_40_40, parse_tree__prog_io_type_defn__V_41_41);
        }
#line 1226 "prog_io_type_defn.m"
        {
#line 1226 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_38_38, parse_tree__prog_io_type_defn__V_39_39);
        }
#line 1236 "prog_io_type_defn.m"
        {
#line 1236 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_37));
#line 1236 "prog_io_type_defn.m"
        }
#line 1235 "prog_io_type_defn.m"
      }
#line 1208 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1208 "prog_io_type_defn.m"
  }
#line 1193 "prog_io_type_defn.m"
}

#line 1177 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1177 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1177 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1177 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1177 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8)
#line 1177 "prog_io_type_defn.m"
{
#line 1181 "prog_io_type_defn.m"
  {
#line 1181 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1181 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_9;
#line 1181 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__Arity_10;

#line 1181 "prog_io_type_defn.m"
    {
#line 1181 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__Name_9, &parse_tree__prog_io_type_defn__Arity_10);
    }
#line 1181 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1182 "prog_io_type_defn.m"
      {
#line 1182 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;

#line 1182 "prog_io_type_defn.m"
        {
#line 1182 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_9));
#line 1182 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Arity_10));
#line 1182 "prog_io_type_defn.m"
        }
#line 1182 "prog_io_type_defn.m"
        {
#line 1182 "prog_io_type_defn.m"
          MR_Word base;
#line 1182 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1182 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_14_14));
#line 1182 "prog_io_type_defn.m"
        }
#line 1182 "prog_io_type_defn.m"
      }
#line 1181 "prog_io_type_defn.m"
    else
#line 1184 "prog_io_type_defn.m"
      {
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1184 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__TermStr_11;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_12;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_13;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_17_17;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1184 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;

#line 1184 "prog_io_type_defn.m"
        {
#line 1184 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1187 "prog_io_type_defn.m"
        {
#line 1187 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1187 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_11));
#line 1187 "prog_io_type_defn.m"
        }
#line 1187 "prog_io_type_defn.m"
        {
#line 1187 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1187 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[39])));
#line 1187 "prog_io_type_defn.m"
        }
#line 1187 "prog_io_type_defn.m"
        {
#line 1187 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[186])));
#line 1187 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1187 "prog_io_type_defn.m"
        }
#line 1186 "prog_io_type_defn.m"
        {
#line 1186 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[171])));
#line 1186 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1186 "prog_io_type_defn.m"
        }
#line 1186 "prog_io_type_defn.m"
        {
#line 1186 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[185])));
#line 1186 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1186 "prog_io_type_defn.m"
        }
#line 1185 "prog_io_type_defn.m"
        {
#line 1185 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[184])));
#line 1185 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1185 "prog_io_type_defn.m"
        }
#line 1189 "prog_io_type_defn.m"
        {
#line 1189 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1189 "prog_io_type_defn.m"
        {
#line 1189 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_12));
#line 1189 "prog_io_type_defn.m"
        }
#line 1189 "prog_io_type_defn.m"
        {
#line 1189 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1189 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "prog_io_type_defn.m"
        }
#line 1189 "prog_io_type_defn.m"
        {
#line 1189 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_38_38));
#line 1189 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_39_39));
#line 1189 "prog_io_type_defn.m"
        }
#line 1189 "prog_io_type_defn.m"
        {
#line 1189 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1189 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "prog_io_type_defn.m"
        }
#line 1188 "prog_io_type_defn.m"
        {
#line 1188 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1188 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_36_36));
#line 1188 "prog_io_type_defn.m"
        }
#line 1190 "prog_io_type_defn.m"
        {
#line 1190 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_13));
#line 1190 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "prog_io_type_defn.m"
        }
#line 1190 "prog_io_type_defn.m"
        {
#line 1190 "prog_io_type_defn.m"
          MR_Word base;
#line 1190 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1190 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 1190 "prog_io_type_defn.m"
        }
#line 1184 "prog_io_type_defn.m"
      }
#line 1181 "prog_io_type_defn.m"
  }
#line 1177 "prog_io_type_defn.m"
}

#line 1166 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1166 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1166 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1166 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1166 "prog_io_type_defn.m"
{
#line 1166 "prog_io_type_defn.m"
  {
#line 1166 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1166 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8;

#line 1166 "prog_io_type_defn.m"
    {
#line 1166 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8);
    }
#line 1166 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8));
#line 1166 "prog_io_type_defn.m"
  }
#line 1166 "prog_io_type_defn.m"
}

#line 1161 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1161 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1161 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1161 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1161 "prog_io_type_defn.m"
{
#line 1165 "prog_io_type_defn.m"
  {
#line 1165 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1165 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1165 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FunctorsTerms_9;

#line 1165 "prog_io_type_defn.m"
    {
#line 1165 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__FunctorsTerms_9);
    }
#line 1165 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1166 "prog_io_type_defn.m"
      {
#line 1166 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1166 "prog_io_type_defn.m"
        {
#line 1166 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_6[0]));
#line 1166 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1));
#line 1166 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1166 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_5));
#line 1166 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1166 "prog_io_type_defn.m"
        }
#line 1166 "prog_io_type_defn.m"
        {
#line 1166 "prog_io_type_defn.m"
          parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__prog_io_type_defn__V_12_12, parse_tree__prog_io_type_defn__FunctorsTerms_9, &parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8);
        }
#line 1166 "prog_io_type_defn.m"
      }
#line 1165 "prog_io_type_defn.m"
    else
#line 1170 "prog_io_type_defn.m"
      {
#line 1170 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_11;
#line 1170 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1170 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1170 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1170 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 1172 "prog_io_type_defn.m"
        {
#line 1172 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1172 "prog_io_type_defn.m"
        {
#line 1172 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_28_28));
#line 1172 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[183])));
#line 1172 "prog_io_type_defn.m"
        }
#line 1173 "prog_io_type_defn.m"
        {
#line 1173 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1173 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1173 "prog_io_type_defn.m"
        }
#line 1171 "prog_io_type_defn.m"
        {
#line 1171 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1171 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1171 "prog_io_type_defn.m"
        }
#line 1174 "prog_io_type_defn.m"
        {
#line 1174 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_11));
#line 1174 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "prog_io_type_defn.m"
        }
#line 1174 "prog_io_type_defn.m"
        {
#line 1174 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 1174 "prog_io_type_defn.m"
        }
#line 1170 "prog_io_type_defn.m"
      }
#line 1165 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1165 "prog_io_type_defn.m"
  }
#line 1161 "prog_io_type_defn.m"
}

#line 1143 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1143 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1143 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1143 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItemMutableInfo_6)
#line 1143 "prog_io_type_defn.m"
{
#line 1147 "prog_io_type_defn.m"
  {
#line 1147 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1147 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ArgTerms_7;
#line 1147 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Context_8;
#line 1148 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1148 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_14_14;

#line 1148 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1148 "prog_io_type_defn.m"
      {
#line 1148 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1148 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1148 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1148 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1148 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1148 "prog_io_type_defn.m"
          {
#line 1148 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 1148 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_14_14, (MR_String) "mutable") == 0);
#line 1148 "prog_io_type_defn.m"
          }
#line 1148 "prog_io_type_defn.m"
      }
#line 1147 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1150 "prog_io_type_defn.m"
      {
#line 1150 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__VarSet_9;

#line 1150 "prog_io_type_defn.m"
        {
#line 1150 "prog_io_type_defn.m"
          mercury__varset__init_1_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &parse_tree__prog_io_type_defn__VarSet_9);
        }
#line 1152 "prog_io_type_defn.m"
        {
#line 1152 "prog_io_type_defn.m"
          parse_tree__prog_io_mutable__parse_mutable_decl_info_7_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__ArgTerms_7, parse_tree__prog_io_type_defn__Context_8, (MR_Integer) -1, (MR_Integer) 1, parse_tree__prog_io_type_defn__MaybeItemMutableInfo_6);
        }
#line 1150 "prog_io_type_defn.m"
      }
#line 1147 "prog_io_type_defn.m"
    else
#line 1155 "prog_io_type_defn.m"
      {
#line 1155 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1155 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1155 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1155 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 1155 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1157 "prog_io_type_defn.m"
        {
#line 1157 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1157 "prog_io_type_defn.m"
        {
#line 1157 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1157 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[182])));
#line 1157 "prog_io_type_defn.m"
        }
#line 1157 "prog_io_type_defn.m"
        {
#line 1157 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1157 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1157 "prog_io_type_defn.m"
        }
#line 1156 "prog_io_type_defn.m"
        {
#line 1156 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1156 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1156 "prog_io_type_defn.m"
        }
#line 1158 "prog_io_type_defn.m"
        {
#line 1158 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1158 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "prog_io_type_defn.m"
        }
#line 1158 "prog_io_type_defn.m"
        {
#line 1158 "prog_io_type_defn.m"
          MR_Word base;
#line 1158 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItemMutableInfo_6 = base;
#line 1158 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1158 "prog_io_type_defn.m"
        }
#line 1155 "prog_io_type_defn.m"
      }
#line 1147 "prog_io_type_defn.m"
  }
#line 1143 "prog_io_type_defn.m"
}

#line 1134 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1134 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1134 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1134 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1134 "prog_io_type_defn.m"
{
#line 1134 "prog_io_type_defn.m"
  {
#line 1134 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1134 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeItemMutableInfo_6;

#line 1134 "prog_io_type_defn.m"
    {
#line 1134 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeItemMutableInfo_6);
    }
#line 1134 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeItemMutableInfo_6));
#line 1134 "prog_io_type_defn.m"
  }
#line 1134 "prog_io_type_defn.m"
}

#line 1120 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1120 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 1120 "prog_io_type_defn.m"
{
#line 1124 "prog_io_type_defn.m"
  {
#line 1124 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1124 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeItems_6;
#line 1124 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 1124 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_16_16;
#line 1124 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 1124 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_8_8;

#line 1124 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1124 "prog_io_type_defn.m"
      {
#line 1124 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1124 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1124 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1124 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 1124 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1124 "prog_io_type_defn.m"
          {
#line 1124 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_15_15, (MR_Integer) 0)));
#line 1124 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_16_16, (MR_String) "mutable") == 0);
#line 1124 "prog_io_type_defn.m"
          }
#line 1124 "prog_io_type_defn.m"
      }
#line 1124 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1125 "prog_io_type_defn.m"
      {
#line 1125 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem_9;

#line 1125 "prog_io_type_defn.m"
        {
#line 1125 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__MaybeItem_9);
        }
#line 1129 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
#line 1131 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9;
#line 1129 "prog_io_type_defn.m"
        else
#line 1127 "prog_io_type_defn.m"
          {
#line 1127 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem_9, (MR_Integer) 0)));
#line 1127 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 1128 "prog_io_type_defn.m"
            {
#line 1128 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Mutable_10));
#line 1128 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_type_defn.m"
            }
#line 1128 "prog_io_type_defn.m"
            {
#line 1128 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1128 "prog_io_type_defn.m"
            }
#line 1127 "prog_io_type_defn.m"
          }
#line 1125 "prog_io_type_defn.m"
      }
#line 1124 "prog_io_type_defn.m"
    else
#line 1133 "prog_io_type_defn.m"
      {
#line 1133 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_12;

#line 1133 "prog_io_type_defn.m"
        {
#line 1133 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Terms_12);
        }
#line 1133 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1134 "prog_io_type_defn.m"
          {
#line 1134 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;

#line 1134 "prog_io_type_defn.m"
            {
#line 1134 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1134 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[2]));
#line 1134 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1));
#line 1134 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1134 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_4));
#line 1134 "prog_io_type_defn.m"
            }
#line 1134 "prog_io_type_defn.m"
            {
#line 1134 "prog_io_type_defn.m"
              parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__Terms_12, &parse_tree__prog_io_type_defn__MaybeItems_6);
            }
#line 1134 "prog_io_type_defn.m"
          }
#line 1133 "prog_io_type_defn.m"
        else
#line 1137 "prog_io_type_defn.m"
          {
#line 1137 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 1137 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 1137 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 1137 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 1137 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 1139 "prog_io_type_defn.m"
            {
#line 1139 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
            }
#line 1139 "prog_io_type_defn.m"
            {
#line 1139 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1139 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[181])));
#line 1139 "prog_io_type_defn.m"
            }
#line 1139 "prog_io_type_defn.m"
            {
#line 1139 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1139 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1139 "prog_io_type_defn.m"
            }
#line 1138 "prog_io_type_defn.m"
            {
#line 1138 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1138 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1138 "prog_io_type_defn.m"
            }
#line 1140 "prog_io_type_defn.m"
            {
#line 1140 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 1140 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "prog_io_type_defn.m"
            }
#line 1140 "prog_io_type_defn.m"
            {
#line 1140 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1140 "prog_io_type_defn.m"
            }
#line 1137 "prog_io_type_defn.m"
          }
#line 1133 "prog_io_type_defn.m"
      }
#line 1124 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeItems_6;
#line 1124 "prog_io_type_defn.m"
  }
#line 1120 "prog_io_type_defn.m"
}

#line 1054 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 1054 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1054 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1054 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1054 "prog_io_type_defn.m"
{
#line 1057 "prog_io_type_defn.m"
  {
#line 1057 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1057 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 1057 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result0_9;
#line 1057 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result1_10;
#line 1061 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 1058 "prog_io_type_defn.m"
    {
#line 1058 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result0_9 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialisation", parse_tree__prog_io_type_defn__Term_7);
    }
#line 1061 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result0_9)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1061 "prog_io_type_defn.m"
      {
#line 1061 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result0_9, (MR_Integer) 0)));
#line 1061 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1061 "prog_io_type_defn.m"
      }
#line 1060 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1063 "prog_io_type_defn.m"
      {
#line 1063 "prog_io_type_defn.m"
        {
#line 1063 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialization", parse_tree__prog_io_type_defn__Term_7);
        }
#line 1063 "prog_io_type_defn.m"
      }
#line 1060 "prog_io_type_defn.m"
    else
#line 1066 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__Result0_9;
#line 1084 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result1_10)) == (MR_mktag((MR_Integer) 0))))
#line 1088 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 1084 "prog_io_type_defn.m"
    else
#line 1084 "prog_io_type_defn.m"
      {
#line 1084 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result1_10, (MR_Integer) 0)));

#line 1084 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1088 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 1084 "prog_io_type_defn.m"
        else
#line 1070 "prog_io_type_defn.m"
          {
#line 1070 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__AutoInitSupported_12;

#line 1072 "prog_io_type_defn.m"
            {
#line 1072 "prog_io_type_defn.m"
              libs__globals__semipure_get_solver_auto_init_supported_1_p_0(&parse_tree__prog_io_type_defn__AutoInitSupported_12);
            }
#line 1076 "prog_io_type_defn.m"
#line 1076 "prog_io_type_defn.m"
            switch (parse_tree__prog_io_type_defn__AutoInitSupported_12) {
#line 1076 "prog_io_type_defn.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1076 "prog_io_type_defn.m"
              case (MR_Integer) 0:
#line 1077 "prog_io_type_defn.m"
                {
#line 1077 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 1077 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 1077 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 1077 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 1077 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_40_40;

#line 1081 "prog_io_type_defn.m"
                  {
#line 1081 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
                  }
#line 1081 "prog_io_type_defn.m"
                  {
#line 1081 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 1081 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[180])));
#line 1081 "prog_io_type_defn.m"
                  }
#line 1081 "prog_io_type_defn.m"
                  {
#line 1081 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_34_34));
#line 1081 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1081 "prog_io_type_defn.m"
                  }
#line 1080 "prog_io_type_defn.m"
                  {
#line 1080 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1080 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 1080 "prog_io_type_defn.m"
                  }
#line 1082 "prog_io_type_defn.m"
                  {
#line 1082 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 1082 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "prog_io_type_defn.m"
                  }
#line 1082 "prog_io_type_defn.m"
                  {
#line 1082 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1082 "prog_io_type_defn.m"
                  }
#line 1077 "prog_io_type_defn.m"
                }
#line 1076 "prog_io_type_defn.m"
                break;
#line 1076 "prog_io_type_defn.m"
              case (MR_Integer) 1:
#line 1074 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 1076 "prog_io_type_defn.m"
                break;
#line 1076 "prog_io_type_defn.m"
            }
#line 1070 "prog_io_type_defn.m"
          }
#line 1084 "prog_io_type_defn.m"
      }
#line 1057 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 1057 "prog_io_type_defn.m"
  }
#line 1054 "prog_io_type_defn.m"
}

#line 1043 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 1043 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3)
#line 1043 "prog_io_type_defn.m"
{
#line 1045 "prog_io_type_defn.m"
  {
#line 1045 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1045 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 1047 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_5_5;
#line 1047 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_6_6;
#line 1047 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 1047 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_4_4;

#line 1047 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1047 "prog_io_type_defn.m"
      {
#line 1047 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 0)));
#line 1047 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 1)));
#line 1047 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 2)));
#line 1047 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1047 "prog_io_type_defn.m"
          {
#line 1047 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 1047 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1047 "prog_io_type_defn.m"
              {
#line 1047 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_5_5, (MR_Integer) 0)));
#line 1047 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_6_6, (MR_String) "type_is_abstract_noncanonical") == 0);
#line 1047 "prog_io_type_defn.m"
              }
#line 1047 "prog_io_type_defn.m"
          }
#line 1047 "prog_io_type_defn.m"
      }
#line 1045 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1049 "prog_io_type_defn.m"
      {
#line 1049 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1049 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[19]);
#line 1049 "prog_io_type_defn.m"
      }
#line 1045 "prog_io_type_defn.m"
    else
#line 1051 "prog_io_type_defn.m"
      {
#line 1051 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[20]);
#line 1051 "prog_io_type_defn.m"
      }
#line 1045 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 1045 "prog_io_type_defn.m"
  }
#line 1043 "prog_io_type_defn.m"
}

#line 861 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0(
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 861 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term0_9,
#line 861 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_10)
#line 861 "prog_io_type_defn.m"
{
#line 867 "prog_io_type_defn.m"
  {
#line 867 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_12;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_13;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_14;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_15;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_16;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_17;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_18;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_19;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_20;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeEndSpec_21;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_29_29;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_35_35;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_39_39;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_43_43;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_47_47;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_51_51;
#line 867 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_55_55;

#line 869 "prog_io_type_defn.m"
    {
#line 869 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 869 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Term0_9));
#line 869 "prog_io_type_defn.m"
    }
#line 870 "prog_io_type_defn.m"
    {
#line 870 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(&parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_12, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27);
    }
#line 872 "prog_io_type_defn.m"
    {
#line 872 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeRepresentationIs_13, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_29_29);
    }
#line 875 "prog_io_type_defn.m"
    {
#line 875 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeInitialisationIs_14, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_29_29, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33);
    }
#line 878 "prog_io_type_defn.m"
    {
#line 878 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "ground", &parse_tree__prog_io_type_defn__MaybeGroundIs_15, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_35_35);
    }
#line 881 "prog_io_type_defn.m"
    {
#line 881 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "any", &parse_tree__prog_io_type_defn__MaybeAnyIs_16, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_35_35, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_39_39);
    }
#line 884 "prog_io_type_defn.m"
    {
#line 884 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__prog_io_type_defn__ModuleName_7, &parse_tree__prog_io_type_defn__MaybeCStoreIs_17, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_39_39, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_43_43);
    }
#line 887 "prog_io_type_defn.m"
    {
#line 887 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeEqualityIs_18, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_43_43, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_47_47);
    }
#line 890 "prog_io_type_defn.m"
    {
#line 890 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeComparisonIs_19, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_47_47, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_51_51);
    }
#line 893 "prog_io_type_defn.m"
    {
#line 893 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeDirectArgIs_20, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_51_51, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_55_55);
    }
#line 899 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "prog_io_type_defn.m"
      {
#line 898 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 898 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeEndSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[3]);
#line 897 "prog_io_type_defn.m"
      }
#line 899 "prog_io_type_defn.m"
    else
#line 900 "prog_io_type_defn.m"
      {
#line 900 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__EndTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_55_55, (MR_Integer) 0)));
#line 900 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__EndSpec_24;
#line 900 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 900 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 900 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 900 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_75_75;

#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__EndTerm_22);
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[179])));
#line 904 "prog_io_type_defn.m"
        }
#line 904 "prog_io_type_defn.m"
        {
#line 904 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 904 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_type_defn.m"
        }
#line 903 "prog_io_type_defn.m"
        {
#line 903 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__EndSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__EndSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__EndSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 903 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__EndSpec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 903 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__EndSpec_24));
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_type_defn.m"
        }
#line 905 "prog_io_type_defn.m"
        {
#line 905 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeEndSpec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeEndSpec_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 905 "prog_io_type_defn.m"
        }
#line 900 "prog_io_type_defn.m"
      }
#line 908 "prog_io_type_defn.m"
    {
#line 908 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_6, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_12, parse_tree__prog_io_type_defn__MaybeRepresentationIs_13, parse_tree__prog_io_type_defn__MaybeInitialisationIs_14, parse_tree__prog_io_type_defn__MaybeGroundIs_15, parse_tree__prog_io_type_defn__MaybeAnyIs_16, parse_tree__prog_io_type_defn__MaybeCStoreIs_17, parse_tree__prog_io_type_defn__MaybeEqualityIs_18, parse_tree__prog_io_type_defn__MaybeComparisonIs_19, parse_tree__prog_io_type_defn__MaybeDirectArgIs_20, parse_tree__prog_io_type_defn__MaybeEndSpec_21, parse_tree__prog_io_type_defn__Term0_9);
    }
#line 867 "prog_io_type_defn.m"
  }
#line 861 "prog_io_type_defn.m"
}

#line 749 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_8_p_0(
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_12,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_13,
#line 749 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 749 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 749 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16)
#line 749 "prog_io_type_defn.m"
{
#line 754 "prog_io_type_defn.m"
  {
#line 754 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 754 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_57_57 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 754 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TVarSet_17;
#line 754 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_18;
#line 754 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverSpecs_20;
#line 754 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FreeSpecs_27;
#line 767 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVars0_24;
#line 767 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails0_25;
#line 768 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn___SymName_23;
#line 777 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SymName_28;
#line 777 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVars_29;
#line 777 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_30;

#line 755 "prog_io_type_defn.m"
    {
#line 755 "prog_io_type_defn.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_57_57, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TVarSet_17);
    }
#line 756 "prog_io_type_defn.m"
    {
#line 756 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeNameParams_18);
    }
#line 760 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "prog_io_type_defn.m"
      {
#line 761 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__SolverSpec_22;
#line 761 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 761 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 761 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;

#line 764 "prog_io_type_defn.m"
        {
#line 764 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_57_57, parse_tree__prog_io_type_defn__HeadTerm_11);
        }
#line 764 "prog_io_type_defn.m"
        {
#line 764 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 764 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 764 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[178])));
#line 764 "prog_io_type_defn.m"
        }
#line 764 "prog_io_type_defn.m"
        {
#line 764 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 764 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "prog_io_type_defn.m"
        }
#line 763 "prog_io_type_defn.m"
        {
#line 763 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__SolverSpec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 763 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 763 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_22, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 763 "prog_io_type_defn.m"
        }
#line 765 "prog_io_type_defn.m"
        {
#line 765 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_20, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverSpec_22));
#line 765 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "prog_io_type_defn.m"
        }
#line 761 "prog_io_type_defn.m"
      }
#line 760 "prog_io_type_defn.m"
    else
#line 759 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__SolverSpecs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 768 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
#line 768 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 768 "prog_io_type_defn.m"
      {
#line 768 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn___SymName_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_18, (MR_Integer) 0)));
#line 768 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__ParamTVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_18, (MR_Integer) 1)));
#line 769 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
#line 769 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 769 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__SolverTypeDetails0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_12, (MR_Integer) 0)));
#line 768 "prog_io_type_defn.m"
      }
#line 767 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 771 "prog_io_type_defn.m"
      {
#line 771 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__RepType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_25, (MR_Integer) 0)));
#line 771 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_25, (MR_Integer) 1)));
#line 771 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_25, (MR_Integer) 2)));
#line 771 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_25, (MR_Integer) 3)));
#line 771 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_25, (MR_Integer) 4)));

#line 772 "prog_io_type_defn.m"
        {
#line 772 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0(parse_tree__prog_io_type_defn__TVarSet_17, parse_tree__prog_io_type_defn__ParamTVars0_24, parse_tree__prog_io_type_defn__RepType_26, parse_tree__prog_io_type_defn__Context_14, &parse_tree__prog_io_type_defn__FreeSpecs_27);
        }
#line 771 "prog_io_type_defn.m"
      }
#line 767 "prog_io_type_defn.m"
    else
#line 775 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__FreeSpecs_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 780 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 778 "prog_io_type_defn.m"
      {
#line 778 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_18)) == (MR_mktag((MR_Integer) 1)));
#line 778 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 778 "prog_io_type_defn.m"
          {
#line 778 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_18, (MR_Integer) 0)));
#line 778 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__ParamTVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_18, (MR_Integer) 1)));
#line 779 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_12)) == (MR_mktag((MR_Integer) 1)));
#line 779 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 779 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__SolverTypeDetails_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_12, (MR_Integer) 0)));
#line 778 "prog_io_type_defn.m"
          }
#line 778 "prog_io_type_defn.m"
      }
#line 777 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 782 "prog_io_type_defn.m"
      {
#line 782 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefn_31;
#line 782 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_32;
#line 782 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_33;
#line 782 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 782 "prog_io_type_defn.m"
        {
#line 782 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TypeDefn_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 782 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_31, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_30));
#line 782 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_13));
#line 782 "prog_io_type_defn.m"
        }
#line 783 "prog_io_type_defn.m"
        {
#line 783 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 783 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_32, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_28));
#line 783 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_32, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ParamTVars_29));
#line 783 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_32, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_31));
#line 783 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_32, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TVarSet_17));
#line 783 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_32, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 783 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_32, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_15));
#line 783 "prog_io_type_defn.m"
        }
#line 785 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Item_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_32);
#line 786 "prog_io_type_defn.m"
        {
#line 786 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 786 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_33));
#line 786 "prog_io_type_defn.m"
        }
#line 786 "prog_io_type_defn.m"
        {
#line 786 "prog_io_type_defn.m"
          MR_Word base;
#line 786 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 786 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 786 "prog_io_type_defn.m"
        }
#line 782 "prog_io_type_defn.m"
      }
#line 777 "prog_io_type_defn.m"
    else
#line 788 "prog_io_type_defn.m"
      {
#line 788 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 788 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_34;
#line 788 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 788 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 788 "prog_io_type_defn.m"
        {
#line 788 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], parse_tree__prog_io_type_defn__MaybeNameParams_18);
        }
#line 788 "prog_io_type_defn.m"
        {
#line 788 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_59_59, parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__FreeSpecs_27);
        }
#line 788 "prog_io_type_defn.m"
        {
#line 788 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_59_59, parse_tree__prog_io_type_defn__SolverSpecs_20, parse_tree__prog_io_type_defn__V_51_51);
        }
#line 789 "prog_io_type_defn.m"
        {
#line 789 "prog_io_type_defn.m"
          MR_Word base;
#line 789 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 789 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_34));
#line 789 "prog_io_type_defn.m"
        }
#line 788 "prog_io_type_defn.m"
      }
#line 754 "prog_io_type_defn.m"
  }
#line 749 "prog_io_type_defn.m"
}

#line 704 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 704 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 704 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 704 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_14)
#line 704 "prog_io_type_defn.m"
{
#line 709 "prog_io_type_defn.m"
  {
#line 709 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 709 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeVarSet_15;
#line 709 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_16;
#line 709 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeDefn_23;
#line 712 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_17;
#line 713 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 713 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_33_33;
#line 713 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 735 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_26;
#line 735 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Params_27;
#line 735 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeDefn_28;

#line 710 "prog_io_type_defn.m"
    {
#line 710 "prog_io_type_defn.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_15);
    }
#line 711 "prog_io_type_defn.m"
    {
#line 711 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeNameParams_16);
    }
#line 713 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 713 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 713 "prog_io_type_defn.m"
      {
#line 713 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 0)));
#line 713 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 1)));
#line 713 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 2)));
#line 713 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 713 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 713 "prog_io_type_defn.m"
          {
#line 713 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_32_32, (MR_Integer) 0)));
#line 713 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_33_33, (MR_String) "type_is_abstract_enum") == 0);
#line 713 "prog_io_type_defn.m"
          }
#line 713 "prog_io_type_defn.m"
      }
#line 712 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 715 "prog_io_type_defn.m"
      {
#line 715 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__NumBits_20;
#line 716 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Arg_19;
#line 716 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 716 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 716 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 717 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 716 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 716 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 716 "prog_io_type_defn.m"
          {
#line 716 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_17, (MR_Integer) 0)));
#line 716 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_17, (MR_Integer) 1)));
#line 716 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 716 "prog_io_type_defn.m"
              {
#line 717 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Arg_19)) == (MR_mktag((MR_Integer) 0)));
#line 717 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 717 "prog_io_type_defn.m"
                  {
#line 717 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_19, (MR_Integer) 0)));
#line 717 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_19, (MR_Integer) 1)));
#line 717 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_19, (MR_Integer) 2)));
#line 717 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 716 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 716 "prog_io_type_defn.m"
                      {
#line 717 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 717 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 717 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__NumBits_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_35_35, (MR_Integer) 0)));
#line 716 "prog_io_type_defn.m"
                      }
#line 717 "prog_io_type_defn.m"
                  }
#line 716 "prog_io_type_defn.m"
              }
#line 716 "prog_io_type_defn.m"
          }
#line 715 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 719 "prog_io_type_defn.m"
          {
#line 719 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeDefn0_22;
#line 719 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 719 "prog_io_type_defn.m"
            {
#line 719 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 719 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NumBits_20));
#line 719 "prog_io_type_defn.m"
            }
#line 719 "prog_io_type_defn.m"
            {
#line 719 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn0_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 719 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn0_22, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 719 "prog_io_type_defn.m"
            }
#line 720 "prog_io_type_defn.m"
            {
#line 720 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn0_22));
#line 720 "prog_io_type_defn.m"
            }
#line 719 "prog_io_type_defn.m"
          }
#line 715 "prog_io_type_defn.m"
        else
#line 723 "prog_io_type_defn.m"
          {
#line 723 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_25;
#line 723 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 723 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 723 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_54_54;

#line 725 "prog_io_type_defn.m"
            {
#line 725 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 725 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 725 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[176])));
#line 725 "prog_io_type_defn.m"
            }
#line 725 "prog_io_type_defn.m"
            {
#line 725 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 725 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "prog_io_type_defn.m"
            }
#line 724 "prog_io_type_defn.m"
            {
#line 724 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 724 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 724 "prog_io_type_defn.m"
            }
#line 726 "prog_io_type_defn.m"
            {
#line 726 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_25));
#line 726 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "prog_io_type_defn.m"
            }
#line 726 "prog_io_type_defn.m"
            {
#line 726 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 726 "prog_io_type_defn.m"
            }
#line 723 "prog_io_type_defn.m"
          }
#line 715 "prog_io_type_defn.m"
      }
#line 712 "prog_io_type_defn.m"
    else
#line 730 "prog_io_type_defn.m"
      {
#line 730 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 730 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 730 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 730 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_81;

#line 732 "prog_io_type_defn.m"
        {
#line 732 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 732 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 732 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[177])));
#line 732 "prog_io_type_defn.m"
        }
#line 732 "prog_io_type_defn.m"
        {
#line 732 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 732 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "prog_io_type_defn.m"
        }
#line 731 "prog_io_type_defn.m"
        {
#line 731 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 731 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 731 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_81, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 731 "prog_io_type_defn.m"
        }
#line 733 "prog_io_type_defn.m"
        {
#line 733 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_81));
#line 733 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "prog_io_type_defn.m"
        }
#line 733 "prog_io_type_defn.m"
        {
#line 733 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 733 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 733 "prog_io_type_defn.m"
        }
#line 730 "prog_io_type_defn.m"
      }
#line 736 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_16)) == (MR_mktag((MR_Integer) 1)));
#line 736 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 736 "prog_io_type_defn.m"
      {
#line 736 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_16, (MR_Integer) 0)));
#line 736 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_16, (MR_Integer) 1)));
#line 737 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeDefn_23)) == (MR_mktag((MR_Integer) 1)));
#line 737 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 737 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TypeDefn_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, (MR_Integer) 0)));
#line 736 "prog_io_type_defn.m"
      }
#line 735 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 740 "prog_io_type_defn.m"
      {
#line 740 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_29;
#line 740 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_30;
#line 740 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;

#line 739 "prog_io_type_defn.m"
        {
#line 739 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 739 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_26));
#line 739 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_27));
#line 739 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_28));
#line 739 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_15));
#line 739 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 739 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 739 "prog_io_type_defn.m"
        }
#line 741 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Item_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_29);
#line 742 "prog_io_type_defn.m"
        {
#line 742 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 742 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_30));
#line 742 "prog_io_type_defn.m"
        }
#line 742 "prog_io_type_defn.m"
        {
#line 742 "prog_io_type_defn.m"
          MR_Word base;
#line 742 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_14 = base;
#line 742 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 742 "prog_io_type_defn.m"
        }
#line 740 "prog_io_type_defn.m"
      }
#line 735 "prog_io_type_defn.m"
    else
#line 745 "prog_io_type_defn.m"
      {
#line 745 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_31;
#line 745 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;
#line 745 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_79_79;

#line 744 "prog_io_type_defn.m"
        {
#line 744 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], parse_tree__prog_io_type_defn__MaybeNameParams_16);
        }
#line 745 "prog_io_type_defn.m"
        {
#line 745 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_79_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0, parse_tree__prog_io_type_defn__MaybeTypeDefn_23);
        }
#line 744 "prog_io_type_defn.m"
        {
#line 744 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_78_78, parse_tree__prog_io_type_defn__V_79_79);
        }
#line 746 "prog_io_type_defn.m"
        {
#line 746 "prog_io_type_defn.m"
          MR_Word base;
#line 746 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 746 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_14 = base;
#line 746 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_31));
#line 746 "prog_io_type_defn.m"
        }
#line 745 "prog_io_type_defn.m"
      }
#line 709 "prog_io_type_defn.m"
  }
#line 704 "prog_io_type_defn.m"
}

#line 666 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_13,
#line 666 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_14,
#line 666 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_15,
#line 666 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16)
#line 666 "prog_io_type_defn.m"
{
#line 673 "prog_io_type_defn.m"
  {
#line 673 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 673 "prog_io_type_defn.m"
#line 673 "prog_io_type_defn.m"
    switch (parse_tree__prog_io_type_defn__IsSolverType_15) {
#line 673 "prog_io_type_defn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 673 "prog_io_type_defn.m"
      case (MR_Integer) 0:
#line 674 "prog_io_type_defn.m"
        {
#line 674 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Context_13, parse_tree__prog_io_type_defn__SeqNum_14, parse_tree__prog_io_type_defn__MaybeIOM_16);
        }
#line 673 "prog_io_type_defn.m"
        break;
#line 673 "prog_io_type_defn.m"
      case (MR_Integer) 1:
#line 677 "prog_io_type_defn.m"
        {
#line 677 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__MaybeWhere_17;

#line 678 "prog_io_type_defn.m"
          {
#line 678 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__BodyTerm_12, &parse_tree__prog_io_type_defn__MaybeWhere_17);
          }
#line 683 "prog_io_type_defn.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_17)) == (MR_mktag((MR_Integer) 0))))
#line 681 "prog_io_type_defn.m"
            {
#line 681 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhere_17, (MR_Integer) 0)));

#line 682 "prog_io_type_defn.m"
              {
#line 682 "prog_io_type_defn.m"
                MR_Word base;
#line 682 "prog_io_type_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 682 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 682 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 682 "prog_io_type_defn.m"
              }
#line 681 "prog_io_type_defn.m"
            }
#line 683 "prog_io_type_defn.m"
          else
#line 685 "prog_io_type_defn.m"
            {
#line 685 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_17, (MR_Integer) 0)));
#line 685 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_17, (MR_Integer) 1)));
#line 685 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_17, (MR_Integer) 2)));

#line 695 "prog_io_type_defn.m"
              if ((parse_tree__prog_io_type_defn__MaybeDirectArgCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "prog_io_type_defn.m"
                {
#line 697 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_solver_type_base_8_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_19, parse_tree__prog_io_type_defn__MaybeUserEqComp_20, parse_tree__prog_io_type_defn__Context_13, parse_tree__prog_io_type_defn__SeqNum_14, parse_tree__prog_io_type_defn__MaybeIOM_16);
                }
#line 695 "prog_io_type_defn.m"
              else
#line 687 "prog_io_type_defn.m"
                {
#line 687 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_24;
#line 687 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 687 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 687 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 687 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 692 "prog_io_type_defn.m"
                  {
#line 692 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_44_44 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
                  }
#line 692 "prog_io_type_defn.m"
                  {
#line 692 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 692 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[175])));
#line 692 "prog_io_type_defn.m"
                  }
#line 693 "prog_io_type_defn.m"
                  {
#line 693 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 693 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "prog_io_type_defn.m"
                  }
#line 691 "prog_io_type_defn.m"
                  {
#line 691 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 691 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 691 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 691 "prog_io_type_defn.m"
                  }
#line 694 "prog_io_type_defn.m"
                  {
#line 694 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_24));
#line 694 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "prog_io_type_defn.m"
                  }
#line 694 "prog_io_type_defn.m"
                  {
#line 694 "prog_io_type_defn.m"
                    MR_Word base;
#line 694 "prog_io_type_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "prog_io_type_defn.m"
                    *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 694 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 694 "prog_io_type_defn.m"
                  }
#line 687 "prog_io_type_defn.m"
                }
#line 685 "prog_io_type_defn.m"
            }
#line 677 "prog_io_type_defn.m"
        }
#line 673 "prog_io_type_defn.m"
        break;
#line 673 "prog_io_type_defn.m"
    }
#line 673 "prog_io_type_defn.m"
  }
#line 666 "prog_io_type_defn.m"
}

#line 614 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0(
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_13,
#line 614 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_14,
#line 614 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_15,
#line 614 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16)
#line 614 "prog_io_type_defn.m"
{
#line 619 "prog_io_type_defn.m"
  {
#line 619 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 619 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverSpecs_17;
#line 619 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameAndParams_20;
#line 619 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ContextPieces_21;
#line 619 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeType_22;
#line 635 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_23;
#line 635 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVars_24;
#line 635 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Type_25;

#line 623 "prog_io_type_defn.m"
#line 623 "prog_io_type_defn.m"
    switch (parse_tree__prog_io_type_defn__IsSolverType_15) {
#line 623 "prog_io_type_defn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 623 "prog_io_type_defn.m"
      case (MR_Integer) 0:
#line 622 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "prog_io_type_defn.m"
        break;
#line 623 "prog_io_type_defn.m"
      case (MR_Integer) 1:
#line 624 "prog_io_type_defn.m"
        {
#line 624 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__SolverSpec_19;
#line 624 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 624 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 624 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 628 "prog_io_type_defn.m"
          {
#line 628 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_46_46 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
          }
#line 628 "prog_io_type_defn.m"
          {
#line 628 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 628 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 628 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[174])));
#line 628 "prog_io_type_defn.m"
          }
#line 628 "prog_io_type_defn.m"
          {
#line 628 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 628 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "prog_io_type_defn.m"
          }
#line 627 "prog_io_type_defn.m"
          {
#line 627 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SolverSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 627 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_19, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 627 "prog_io_type_defn.m"
          }
#line 629 "prog_io_type_defn.m"
          {
#line 629 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SolverSpecs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverSpec_19));
#line 629 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "prog_io_type_defn.m"
          }
#line 624 "prog_io_type_defn.m"
        }
#line 623 "prog_io_type_defn.m"
        break;
#line 623 "prog_io_type_defn.m"
    }
#line 631 "prog_io_type_defn.m"
    {
#line 631 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeNameAndParams_20);
    }
#line 633 "prog_io_type_defn.m"
    {
#line 633 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__ContextPieces_21 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
#line 634 "prog_io_type_defn.m"
    {
#line 634 "prog_io_type_defn.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__ContextPieces_21, &parse_tree__prog_io_type_defn__MaybeType_22);
    }
#line 636 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__SolverSpecs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 636 "prog_io_type_defn.m"
      {
#line 637 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameAndParams_20)) == (MR_mktag((MR_Integer) 1)));
#line 637 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 637 "prog_io_type_defn.m"
          {
#line 637 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_20, (MR_Integer) 0)));
#line 637 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__ParamTVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_20, (MR_Integer) 1)));
#line 638 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_22)) == (MR_mktag((MR_Integer) 1)));
#line 638 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 638 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Type_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_22, (MR_Integer) 0)));
#line 637 "prog_io_type_defn.m"
          }
#line 636 "prog_io_type_defn.m"
      }
#line 635 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 640 "prog_io_type_defn.m"
      {
#line 640 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_59_59 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 640 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TVarSet_26;
#line 640 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__FreeSpecs_27;
#line 640 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 640 "prog_io_type_defn.m"
        {
#line 640 "prog_io_type_defn.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_59_59, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TVarSet_26);
        }
#line 642 "prog_io_type_defn.m"
        {
#line 642 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_59_59, parse_tree__prog_io_type_defn__BodyTerm_12);
        }
#line 641 "prog_io_type_defn.m"
        {
#line 641 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0(parse_tree__prog_io_type_defn__TVarSet_26, parse_tree__prog_io_type_defn__ParamTVars_24, parse_tree__prog_io_type_defn__Type_25, parse_tree__prog_io_type_defn__V_52_52, &parse_tree__prog_io_type_defn__FreeSpecs_27);
        }
#line 650 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__FreeSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "prog_io_type_defn.m"
          {
#line 644 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeDefn_28;
#line 644 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_29;
#line 644 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Item_30;
#line 644 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;

#line 645 "prog_io_type_defn.m"
            {
#line 645 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefn_28, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_25));
#line 645 "prog_io_type_defn.m"
            }
#line 646 "prog_io_type_defn.m"
            {
#line 646 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 646 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_23));
#line 646 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ParamTVars_24));
#line 646 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_28));
#line 646 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TVarSet_26));
#line 646 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_13));
#line 646 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_14));
#line 646 "prog_io_type_defn.m"
            }
#line 648 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Item_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_29);
#line 649 "prog_io_type_defn.m"
            {
#line 649 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 649 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_30));
#line 649 "prog_io_type_defn.m"
            }
#line 649 "prog_io_type_defn.m"
            {
#line 649 "prog_io_type_defn.m"
              MR_Word base;
#line 649 "prog_io_type_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 649 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 649 "prog_io_type_defn.m"
            }
#line 644 "prog_io_type_defn.m"
          }
#line 650 "prog_io_type_defn.m"
        else
#line 652 "prog_io_type_defn.m"
          {
#line 652 "prog_io_type_defn.m"
            MR_Word base;
#line 652 "prog_io_type_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 652 "prog_io_type_defn.m"
            *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 652 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__FreeSpecs_27));
#line 652 "prog_io_type_defn.m"
          }
#line 640 "prog_io_type_defn.m"
      }
#line 635 "prog_io_type_defn.m"
    else
#line 657 "prog_io_type_defn.m"
      {
#line 657 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 657 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_33;
#line 657 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 657 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 657 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_56_56;

#line 656 "prog_io_type_defn.m"
        {
#line 656 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_55_55 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], parse_tree__prog_io_type_defn__MaybeNameAndParams_20);
        }
#line 657 "prog_io_type_defn.m"
        {
#line 657 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_56_56 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__MaybeType_22);
        }
#line 656 "prog_io_type_defn.m"
        {
#line 656 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_61_61, parse_tree__prog_io_type_defn__V_55_55, parse_tree__prog_io_type_defn__V_56_56);
        }
#line 655 "prog_io_type_defn.m"
        {
#line 655 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_33 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_61_61, parse_tree__prog_io_type_defn__SolverSpecs_17, parse_tree__prog_io_type_defn__V_54_54);
        }
#line 658 "prog_io_type_defn.m"
        {
#line 658 "prog_io_type_defn.m"
          MR_Word base;
#line 658 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 658 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_33));
#line 658 "prog_io_type_defn.m"
        }
#line 657 "prog_io_type_defn.m"
      }
#line 619 "prog_io_type_defn.m"
  }
#line 614 "prog_io_type_defn.m"
}

#line 600 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 600 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 600 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 600 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 600 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NamedCtor_9)
#line 600 "prog_io_type_defn.m"
{
#line 603 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 603 "prog_io_type_defn.m"
    {
#line 603 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 603 "prog_io_type_defn.m"
      {
#line 603 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 603 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctor_5;
#line 603 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctors_6;
#line 604 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 604 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__V_15_15;
#line 604 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_10_10;
#line 604 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 604 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Args_12;
#line 604 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;

#line 603 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 603 "prog_io_type_defn.m"
          {
#line 603 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Ctor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 603 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Ctors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 0)));
#line 604 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 1)));
#line 604 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 2)));
#line 604 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 3)));
#line 604 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 4)));
#line 604 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 5)));
#line 604 "prog_io_type_defn.m"
            {
#line 604 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_type_defn__SymName_7, parse_tree__prog_io_type_defn__V_14_14);
            }
#line 604 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 604 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_8 == parse_tree__prog_io_type_defn__V_15_15);
#line 604 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 605 "prog_io_type_defn.m"
              {
#line 605 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__NamedCtor_9 = parse_tree__prog_io_type_defn__Ctor_5;
#line 605 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 605 "prog_io_type_defn.m"
              }
#line 604 "prog_io_type_defn.m"
            else
#line 607 "prog_io_type_defn.m"
              {
#line 607 "prog_io_type_defn.m"
                /* direct tailcall eliminated */
#line 607 "prog_io_type_defn.m"
                {
#line 607 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_type_defn__Ctors_6;

#line 607 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__1_1 = parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1;
#line 607 "prog_io_type_defn.m"
                }
#line 607 "prog_io_type_defn.m"
                continue;
#line 607 "prog_io_type_defn.m"
              }
#line 603 "prog_io_type_defn.m"
          }
#line 603 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__succeeded;
#line 603 "prog_io_type_defn.m"
      }
#line 603 "prog_io_type_defn.m"
      break;
#line 603 "prog_io_type_defn.m"
    }
#line 600 "prog_io_type_defn.m"
}

#line 555 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 555 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 555 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5)
#line 555 "prog_io_type_defn.m"
{
#line 559 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 559 "prog_io_type_defn.m"
    {
#line 559 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 559 "prog_io_type_defn.m"
      {
#line 559 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 559 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 559 "prog_io_type_defn.m"
        else
#line 561 "prog_io_type_defn.m"
          {
#line 561 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 561 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 561 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
#line 561 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
#line 561 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;
#line 563 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_18;

#line 563 "prog_io_type_defn.m"
            {
#line 563 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__find_constructor_4_p_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__SymName_16, parse_tree__prog_io_type_defn__Arity_17, &parse_tree__prog_io_type_defn__Ctor_18);
            }
#line 563 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 565 "prog_io_type_defn.m"
              {
#line 565 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 0)));
#line 564 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 1)));
#line 564 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 2)));
#line 564 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 3)));
#line 564 "prog_io_type_defn.m"
                MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 4)));
#line 564 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 5)));

#line 566 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_17 == (MR_Integer) 1);
#line 566 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 566 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 569 "prog_io_type_defn.m"
                  {
#line 569 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 569 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 569 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 569 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 571 "prog_io_type_defn.m"
                    {
#line 571 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 571 "prog_io_type_defn.m"
                    {
#line 571 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 571 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[169])));
#line 571 "prog_io_type_defn.m"
                    }
#line 571 "prog_io_type_defn.m"
                    {
#line 571 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 571 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "prog_io_type_defn.m"
                    }
#line 570 "prog_io_type_defn.m"
                    {
#line 570 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 570 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 570 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 570 "prog_io_type_defn.m"
                    }
#line 572 "prog_io_type_defn.m"
                    {
#line 572 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 572 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 572 "prog_io_type_defn.m"
                    }
#line 569 "prog_io_type_defn.m"
                  }
#line 566 "prog_io_type_defn.m"
                else
#line 576 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__ExistQVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 576 "prog_io_type_defn.m"
                else
#line 577 "prog_io_type_defn.m"
                  {
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_108;
#line 577 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_109;

#line 580 "prog_io_type_defn.m"
                    {
#line 580 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 580 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 580 "prog_io_type_defn.m"
                    }
#line 580 "prog_io_type_defn.m"
                    {
#line 580 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 580 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[81])));
#line 580 "prog_io_type_defn.m"
                    }
#line 579 "prog_io_type_defn.m"
                    {
#line 579 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[172])));
#line 579 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 579 "prog_io_type_defn.m"
                    }
#line 578 "prog_io_type_defn.m"
                    {
#line 578 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[171])));
#line 578 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 578 "prog_io_type_defn.m"
                    }
#line 578 "prog_io_type_defn.m"
                    {
#line 578 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[170])));
#line 578 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 578 "prog_io_type_defn.m"
                    }
#line 584 "prog_io_type_defn.m"
                    {
#line 584 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_75_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 585 "prog_io_type_defn.m"
                    {
#line 585 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 585 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_108));
#line 585 "prog_io_type_defn.m"
                    }
#line 585 "prog_io_type_defn.m"
                    {
#line 585 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 585 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "prog_io_type_defn.m"
                    }
#line 584 "prog_io_type_defn.m"
                    {
#line 584 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 584 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 584 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_76_76));
#line 584 "prog_io_type_defn.m"
                    }
#line 585 "prog_io_type_defn.m"
                    {
#line 585 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 585 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "prog_io_type_defn.m"
                    }
#line 583 "prog_io_type_defn.m"
                    {
#line 583 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 583 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 583 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 583 "prog_io_type_defn.m"
                    }
#line 586 "prog_io_type_defn.m"
                    {
#line 586 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_109));
#line 586 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 586 "prog_io_type_defn.m"
                    }
#line 577 "prog_io_type_defn.m"
                  }
#line 565 "prog_io_type_defn.m"
              }
#line 563 "prog_io_type_defn.m"
            else
#line 593 "prog_io_type_defn.m"
              {
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_102_102;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_103_103;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_112;
#line 593 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_113;

#line 592 "prog_io_type_defn.m"
                {
#line 592 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 592 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 592 "prog_io_type_defn.m"
                }
#line 592 "prog_io_type_defn.m"
                {
#line 592 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_90_90));
#line 592 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[83])));
#line 592 "prog_io_type_defn.m"
                }
#line 591 "prog_io_type_defn.m"
                {
#line 591 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[173])));
#line 591 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_89_89));
#line 591 "prog_io_type_defn.m"
                }
#line 590 "prog_io_type_defn.m"
                {
#line 590 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[171])));
#line 590 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 590 "prog_io_type_defn.m"
                }
#line 590 "prog_io_type_defn.m"
                {
#line 590 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[170])));
#line 590 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 590 "prog_io_type_defn.m"
                }
#line 595 "prog_io_type_defn.m"
                {
#line 595 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_101_101 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                }
#line 595 "prog_io_type_defn.m"
                {
#line 595 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 595 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_112));
#line 595 "prog_io_type_defn.m"
                }
#line 595 "prog_io_type_defn.m"
                {
#line 595 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_103_103));
#line 595 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "prog_io_type_defn.m"
                }
#line 595 "prog_io_type_defn.m"
                {
#line 595 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 595 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 595 "prog_io_type_defn.m"
                }
#line 595 "prog_io_type_defn.m"
                {
#line 595 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 595 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "prog_io_type_defn.m"
                }
#line 594 "prog_io_type_defn.m"
                {
#line 594 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 594 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 594 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_99_99));
#line 594 "prog_io_type_defn.m"
                }
#line 596 "prog_io_type_defn.m"
                {
#line 596 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_113));
#line 596 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 596 "prog_io_type_defn.m"
                }
#line 593 "prog_io_type_defn.m"
              }
#line 598 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 598 "prog_io_type_defn.m"
            {
#line 598 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2 = parse_tree__prog_io_type_defn__DirectArgCtors_13;
#line 598 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;

#line 598 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 598 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__2_2 = parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2;
#line 598 "prog_io_type_defn.m"
            }
#line 598 "prog_io_type_defn.m"
            continue;
#line 561 "prog_io_type_defn.m"
          }
#line 559 "prog_io_type_defn.m"
      }
#line 559 "prog_io_type_defn.m"
      break;
#line 559 "prog_io_type_defn.m"
    }
#line 555 "prog_io_type_defn.m"
}

#line 536 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_9(
#line 536 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 536 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 536 "prog_io_type_defn.m"
{
#line 536 "prog_io_type_defn.m"
  {
#line 536 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 536 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 536 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv10_HeadVar__3_301;

#line 536 "prog_io_type_defn.m"
    {
#line 536 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv10_HeadVar__3_301 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__536__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 536 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv10_HeadVar__3_301));
#line 536 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 536 "prog_io_type_defn.m"
  }
#line 536 "prog_io_type_defn.m"
}

#line 530 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_8(
#line 530 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 530 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 530 "prog_io_type_defn.m"
{
#line 530 "prog_io_type_defn.m"
  {
#line 530 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 530 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 530 "prog_io_type_defn.m"
    {
#line 530 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__530__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 530 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 530 "prog_io_type_defn.m"
  }
#line 530 "prog_io_type_defn.m"
}

#line 526 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 526 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 526 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 526 "prog_io_type_defn.m"
{
#line 526 "prog_io_type_defn.m"
  {
#line 526 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 526 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 526 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv9_HeadVar__2_2;

#line 526 "prog_io_type_defn.m"
    {
#line 526 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv9_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 526 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv9_HeadVar__2_2));
#line 526 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 526 "prog_io_type_defn.m"
  }
#line 526 "prog_io_type_defn.m"
}

#line 508 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 508 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 508 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 508 "prog_io_type_defn.m"
{
#line 508 "prog_io_type_defn.m"
  {
#line 508 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 508 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 508 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv6_HeadVar__3_285;

#line 508 "prog_io_type_defn.m"
    {
#line 508 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv6_HeadVar__3_285 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__508__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 508 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv6_HeadVar__3_285));
#line 508 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 508 "prog_io_type_defn.m"
  }
#line 508 "prog_io_type_defn.m"
}

#line 501 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 501 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 501 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 501 "prog_io_type_defn.m"
{
#line 501 "prog_io_type_defn.m"
  {
#line 501 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 501 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 501 "prog_io_type_defn.m"
    {
#line 501 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__501__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 501 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 501 "prog_io_type_defn.m"
  }
#line 501 "prog_io_type_defn.m"
}

#line 497 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 497 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 497 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 497 "prog_io_type_defn.m"
{
#line 497 "prog_io_type_defn.m"
  {
#line 497 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 497 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 497 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv5_LambdaHeadVar__2_125;

#line 497 "prog_io_type_defn.m"
    {
#line 497 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv5_LambdaHeadVar__2_125 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__497__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 497 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv5_LambdaHeadVar__2_125));
#line 497 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 497 "prog_io_type_defn.m"
  }
#line 497 "prog_io_type_defn.m"
}

#line 482 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 482 "prog_io_type_defn.m"
{
#line 482 "prog_io_type_defn.m"
  {
#line 482 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 482 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 482 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv2_HeadVar__3_272;

#line 482 "prog_io_type_defn.m"
    {
#line 482 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv2_HeadVar__3_272 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__482__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 482 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv2_HeadVar__3_272));
#line 482 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 482 "prog_io_type_defn.m"
  }
#line 482 "prog_io_type_defn.m"
}

#line 452 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 452 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 452 "prog_io_type_defn.m"
{
#line 452 "prog_io_type_defn.m"
  {
#line 452 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 452 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 452 "prog_io_type_defn.m"
    {
#line 452 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__452__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 452 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 452 "prog_io_type_defn.m"
  }
#line 452 "prog_io_type_defn.m"
}

#line 449 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 449 "prog_io_type_defn.m"
{
#line 449 "prog_io_type_defn.m"
  {
#line 449 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 449 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_LambdaHeadVar__2_59;

#line 449 "prog_io_type_defn.m"
    {
#line 449 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_LambdaHeadVar__2_59 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__449__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 449 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_LambdaHeadVar__2_59));
#line 449 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 449 "prog_io_type_defn.m"
  }
#line 449 "prog_io_type_defn.m"
}

#line 438 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 438 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6)
#line 438 "prog_io_type_defn.m"
{
#line 441 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 441 "prog_io_type_defn.m"
    {
#line 441 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 441 "prog_io_type_defn.m"
      {
#line 441 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 441 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 441 "prog_io_type_defn.m"
        else
#line 442 "prog_io_type_defn.m"
          {
#line 442 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 0)));
#line 442 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 1)));
#line 442 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 0)));
#line 442 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 1)));
#line 442 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 3)));
#line 442 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;
#line 443 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 2)));
#line 443 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 4)));
#line 443 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 5)));
#line 445 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NotExistQOrParamVars_30;
#line 449 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeInfo_259_259;
#line 449 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_25;
#line 449 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27;
#line 449 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28;
#line 449 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 449 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 452 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___ExistQOrParamVars_29;
#line 454 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 454 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;

#line 449 "prog_io_type_defn.m"
            {
#line 449 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__CtorArgTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[3], parse_tree__prog_io_type_defn__CtorArgs_22);
            }
#line 450 "prog_io_type_defn.m"
            {
#line 450 "prog_io_type_defn.m"
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_25, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27);
            }
#line 11529 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeInfo_259_259 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 451 "prog_io_type_defn.m"
            {
#line 451 "prog_io_type_defn.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_259_259, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28);
            }
#line 452 "prog_io_type_defn.m"
            {
#line 452 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_61_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_259_259, parse_tree__prog_io_type_defn__ExistQVars_19, parse_tree__prog_io_type_defn__HeadVar__1_1);
            }
#line 452 "prog_io_type_defn.m"
            {
#line 452 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 452 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3]));
#line 452 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2));
#line 452 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 452 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 452 "prog_io_type_defn.m"
            }
#line 452 "prog_io_type_defn.m"
            {
#line 452 "prog_io_type_defn.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_259_259, parse_tree__prog_io_type_defn__V_60_60, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28, &parse_tree__prog_io_type_defn___ExistQOrParamVars_29, &parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
            }
#line 454 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQOrParamVars_30)) == (MR_mktag((MR_Integer) 1)));
#line 454 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 454 "prog_io_type_defn.m"
              {
#line 454 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 0)));
#line 454 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 1)));
#line 457 "prog_io_type_defn.m"
                {
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_33;
#line 457 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Pieces_35;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_36;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 457 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__V_66_66;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_79_79;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_80_80;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_81_81;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 457 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 461 "prog_io_type_defn.m"
                  MR_Box parse_tree__prog_io_type_defn__conv1_V_66_66;

#line 457 "prog_io_type_defn.m"
                  {
#line 457 "prog_io_type_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, parse_tree__prog_io_type_defn__TypeCtorInfo_263_263, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_33);
                  }
#line 458 "prog_io_type_defn.m"
                  {
#line 458 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_263_263, parse_tree__prog_io_type_defn__GenericVarSet_33, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
                  }
#line 461 "prog_io_type_defn.m"
                  {
#line 461 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__conv1_V_66_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
                  }
#line 461 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = ((MR_String) parse_tree__prog_io_type_defn__conv1_V_66_66);
#line 461 "prog_io_type_defn.m"
                  {
#line 461 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 461 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 461 "prog_io_type_defn.m"
                  }
#line 463 "prog_io_type_defn.m"
                  {
#line 463 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 463 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34));
#line 463 "prog_io_type_defn.m"
                  }
#line 463 "prog_io_type_defn.m"
                  {
#line 463 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 463 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[57])));
#line 463 "prog_io_type_defn.m"
                  }
#line 462 "prog_io_type_defn.m"
                  {
#line 462 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 462 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 462 "prog_io_type_defn.m"
                  }
#line 460 "prog_io_type_defn.m"
                  {
#line 460 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[165])));
#line 460 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 460 "prog_io_type_defn.m"
                  }
#line 466 "prog_io_type_defn.m"
                  {
#line 466 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, parse_tree__prog_io_type_defn__BodyTerm_3);
                  }
#line 466 "prog_io_type_defn.m"
                  {
#line 466 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 466 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_35));
#line 466 "prog_io_type_defn.m"
                  }
#line 466 "prog_io_type_defn.m"
                  {
#line 466 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 466 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "prog_io_type_defn.m"
                  }
#line 466 "prog_io_type_defn.m"
                  {
#line 466 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_81_81));
#line 466 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 466 "prog_io_type_defn.m"
                  }
#line 466 "prog_io_type_defn.m"
                  {
#line 466 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_80_80));
#line 466 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "prog_io_type_defn.m"
                  }
#line 465 "prog_io_type_defn.m"
                  {
#line 465 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 465 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_79_79));
#line 465 "prog_io_type_defn.m"
                  }
#line 467 "prog_io_type_defn.m"
                  {
#line 467 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_36));
#line 467 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 467 "prog_io_type_defn.m"
                  }
#line 457 "prog_io_type_defn.m"
                }
#line 454 "prog_io_type_defn.m"
              }
#line 454 "prog_io_type_defn.m"
            else
#line 468 "prog_io_type_defn.m"
              {
#line 468 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQParamsSet_39;
#line 473 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_266_266 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 473 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVarsSet_37;
#line 473 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsSet_38;

#line 473 "prog_io_type_defn.m"
                {
#line 473 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn__ExistQVarsSet_37);
                }
#line 474 "prog_io_type_defn.m"
                {
#line 474 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__HeadVar__1_1, &parse_tree__prog_io_type_defn__ParamsSet_38);
                }
#line 475 "prog_io_type_defn.m"
                {
#line 475 "prog_io_type_defn.m"
                  mercury__set__intersect_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__ExistQVarsSet_37, parse_tree__prog_io_type_defn__ParamsSet_38, &parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 476 "prog_io_type_defn.m"
                {
#line 476 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 468 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 479 "prog_io_type_defn.m"
                  {
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_267_267 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_268_268;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_270_270;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_274_274;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParams_40;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_91_91;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 479 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_93_93;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_97_97;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_98_98;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 479 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_101_101;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_115_115;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_117_117;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_118_118;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_119_119;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GenericVarSet_219;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_220;
#line 479 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_221;
#line 484 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv3_V_93_93;
#line 487 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv4_V_101_101;

#line 479 "prog_io_type_defn.m"
                    {
#line 479 "prog_io_type_defn.m"
                      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__ExistQParamsSet_39, &parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 11838 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_268_268 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 480 "prog_io_type_defn.m"
                    {
#line 480 "prog_io_type_defn.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_219);
                    }
#line 11845 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_270_270 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 482 "prog_io_type_defn.m"
                    {
#line 482 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 482 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3));
#line 482 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 482 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_219));
#line 482 "prog_io_type_defn.m"
                    }
#line 482 "prog_io_type_defn.m"
                    {
#line 482 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__V_87_87, parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 11866 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_274_274 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 484 "prog_io_type_defn.m"
                    {
#line 484 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv3_V_93_93 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                    }
#line 484 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_93_93 = ((MR_String) parse_tree__prog_io_type_defn__conv3_V_93_93);
#line 484 "prog_io_type_defn.m"
                    {
#line 484 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 484 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_93_93));
#line 484 "prog_io_type_defn.m"
                    }
#line 485 "prog_io_type_defn.m"
                    {
#line 485 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 485 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "prog_io_type_defn.m"
                    }
#line 483 "prog_io_type_defn.m"
                    {
#line 483 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[166])));
#line 483 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_91_91));
#line 483 "prog_io_type_defn.m"
                    }
#line 486 "prog_io_type_defn.m"
                    {
#line 486 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_98_98 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41);
                    }
#line 487 "prog_io_type_defn.m"
                    {
#line 487 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv4_V_101_101 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
                    }
#line 487 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_101_101 = ((MR_String) parse_tree__prog_io_type_defn__conv4_V_101_101);
#line 487 "prog_io_type_defn.m"
                    {
#line 487 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 487 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 487 "prog_io_type_defn.m"
                    }
#line 487 "prog_io_type_defn.m"
                    {
#line 487 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 487 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[61])));
#line 487 "prog_io_type_defn.m"
                    }
#line 486 "prog_io_type_defn.m"
                    {
#line 486 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_274_274, parse_tree__prog_io_type_defn__V_98_98, parse_tree__prog_io_type_defn__V_99_99);
                    }
#line 485 "prog_io_type_defn.m"
                    {
#line 485 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_220 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_274_274, parse_tree__prog_io_type_defn__V_88_88, parse_tree__prog_io_type_defn__V_97_97);
                    }
#line 491 "prog_io_type_defn.m"
                    {
#line 491 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, parse_tree__prog_io_type_defn__BodyTerm_3);
                    }
#line 491 "prog_io_type_defn.m"
                    {
#line 491 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_220));
#line 491 "prog_io_type_defn.m"
                    }
#line 491 "prog_io_type_defn.m"
                    {
#line 491 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_119_119));
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "prog_io_type_defn.m"
                    }
#line 491 "prog_io_type_defn.m"
                    {
#line 491 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_117_117));
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_118_118));
#line 491 "prog_io_type_defn.m"
                    }
#line 491 "prog_io_type_defn.m"
                    {
#line 491 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 491 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "prog_io_type_defn.m"
                    }
#line 490 "prog_io_type_defn.m"
                    {
#line 490 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 490 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 490 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_221, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_115_115));
#line 490 "prog_io_type_defn.m"
                    }
#line 492 "prog_io_type_defn.m"
                    {
#line 492 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_221));
#line 492 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 492 "prog_io_type_defn.m"
                    }
#line 479 "prog_io_type_defn.m"
                  }
#line 468 "prog_io_type_defn.m"
                else
#line 493 "prog_io_type_defn.m"
                  {
#line 493 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVars_44;
#line 497 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_277_277;
#line 497 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ConstraintTVars_42;
#line 497 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_126_126;
#line 497 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_127_127;
#line 497 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_223;
#line 497 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_224;
#line 497 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_225;
#line 501 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn___OccursExistQVars_43;
#line 503 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 503 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 497 "prog_io_type_defn.m"
                    {
#line 497 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__CtorArgTypes_223 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[4], parse_tree__prog_io_type_defn__CtorArgs_22);
                    }
#line 498 "prog_io_type_defn.m"
                    {
#line 498 "prog_io_type_defn.m"
                      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_223, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_224);
                    }
#line 12051 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeInfo_277_277 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 499 "prog_io_type_defn.m"
                    {
#line 499 "prog_io_type_defn.m"
                      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_277_277, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_224, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_225);
                    }
#line 500 "prog_io_type_defn.m"
                    {
#line 500 "prog_io_type_defn.m"
                      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_type_defn__Constraints_20, &parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 501 "prog_io_type_defn.m"
                    {
#line 501 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_127_127 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_277_277, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_225, parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 501 "prog_io_type_defn.m"
                    {
#line 501 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3]));
#line 501 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5));
#line 501 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 501 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_127_127));
#line 501 "prog_io_type_defn.m"
                    }
#line 501 "prog_io_type_defn.m"
                    {
#line 501 "prog_io_type_defn.m"
                      mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_277_277, parse_tree__prog_io_type_defn__V_126_126, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn___OccursExistQVars_43, &parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                    }
#line 503 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotOccursExistQVars_44)) == (MR_mktag((MR_Integer) 1)));
#line 503 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 503 "prog_io_type_defn.m"
                      {
#line 503 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 0)));
#line 503 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 1)));
#line 506 "prog_io_type_defn.m"
                        {
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_280_280 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeInfo_282_282;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_283_283;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_287_287;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVarStrs_47;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_128_128;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_129_129;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_132_132;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_133_133;
#line 506 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_134_134;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_138_138;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_139_139;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_140_140;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_143_143;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_144_144;
#line 506 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_145_145;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_156_156;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_157_157;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_158_158;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_159_159;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_160_160;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__GenericVarSet_226;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_227;
#line 506 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_228;
#line 511 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv7_V_134_134;
#line 515 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv8_V_145_145;

#line 506 "prog_io_type_defn.m"
                          {
#line 506 "prog_io_type_defn.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_280_280, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_226);
                          }
#line 12157 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeInfo_282_282 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 12159 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 508 "prog_io_type_defn.m"
                          {
#line 508 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 508 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 508 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6));
#line 508 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 508 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_226));
#line 508 "prog_io_type_defn.m"
                          }
#line 508 "prog_io_type_defn.m"
                          {
#line 508 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NotOccursExistQVarStrs_47 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_282_282, parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__V_128_128, parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                          }
#line 12180 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_287_287 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 511 "prog_io_type_defn.m"
                          {
#line 511 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv7_V_134_134 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_282_282, parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                          }
#line 511 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_134_134 = ((MR_String) parse_tree__prog_io_type_defn__conv7_V_134_134);
#line 511 "prog_io_type_defn.m"
                          {
#line 511 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 511 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_133_133, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_134_134));
#line 511 "prog_io_type_defn.m"
                          }
#line 512 "prog_io_type_defn.m"
                          {
#line 512 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_133_133));
#line 512 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "prog_io_type_defn.m"
                          }
#line 510 "prog_io_type_defn.m"
                          {
#line 510 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[166])));
#line 510 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_129_129, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_132_132));
#line 510 "prog_io_type_defn.m"
                          }
#line 513 "prog_io_type_defn.m"
                          {
#line 513 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_139_139 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__NotOccursExistQVarStrs_47);
                          }
#line 515 "prog_io_type_defn.m"
                          {
#line 515 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv8_V_145_145 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_282_282, parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                          }
#line 515 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_145_145 = ((MR_String) parse_tree__prog_io_type_defn__conv8_V_145_145);
#line 515 "prog_io_type_defn.m"
                          {
#line 515 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 515 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_144_144, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_145_145));
#line 515 "prog_io_type_defn.m"
                          }
#line 516 "prog_io_type_defn.m"
                          {
#line 516 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_144_144));
#line 516 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[63])));
#line 516 "prog_io_type_defn.m"
                          }
#line 514 "prog_io_type_defn.m"
                          {
#line 514 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[167])));
#line 514 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_143_143));
#line 514 "prog_io_type_defn.m"
                          }
#line 513 "prog_io_type_defn.m"
                          {
#line 513 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_138_138 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_287_287, parse_tree__prog_io_type_defn__V_139_139, parse_tree__prog_io_type_defn__V_140_140);
                          }
#line 512 "prog_io_type_defn.m"
                          {
#line 512 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_227 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_287_287, parse_tree__prog_io_type_defn__V_129_129, parse_tree__prog_io_type_defn__V_138_138);
                          }
#line 519 "prog_io_type_defn.m"
                          {
#line 519 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_158_158 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_280_280, parse_tree__prog_io_type_defn__BodyTerm_3);
                          }
#line 519 "prog_io_type_defn.m"
                          {
#line 519 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_227));
#line 519 "prog_io_type_defn.m"
                          }
#line 519 "prog_io_type_defn.m"
                          {
#line 519 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_159_159, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_160_160));
#line 519 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "prog_io_type_defn.m"
                          }
#line 519 "prog_io_type_defn.m"
                          {
#line 519 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_157_157, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_158_158));
#line 519 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_159_159));
#line 519 "prog_io_type_defn.m"
                          }
#line 519 "prog_io_type_defn.m"
                          {
#line 519 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_157_157));
#line 519 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "prog_io_type_defn.m"
                          }
#line 518 "prog_io_type_defn.m"
                          {
#line 518 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 518 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_228, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 518 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_228, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_156_156));
#line 518 "prog_io_type_defn.m"
                          }
#line 520 "prog_io_type_defn.m"
                          {
#line 520 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_228));
#line 520 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 520 "prog_io_type_defn.m"
                          }
#line 506 "prog_io_type_defn.m"
                        }
#line 503 "prog_io_type_defn.m"
                      }
#line 503 "prog_io_type_defn.m"
                    else
#line 521 "prog_io_type_defn.m"
                      {
#line 521 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypes_51;
#line 526 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeInfo_293_293;
#line 526 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48;
#line 526 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypes_49;
#line 526 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_165_165;
#line 526 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_229;
#line 526 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_230;
#line 530 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn___ExistQArgTypes_50;
#line 532 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 532 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_53_53;

#line 526 "prog_io_type_defn.m"
                        {
#line 526 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[9], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[5], parse_tree__prog_io_type_defn__Constraints_20);
                        }
#line 527 "prog_io_type_defn.m"
                        {
#line 527 "prog_io_type_defn.m"
                          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48, &parse_tree__prog_io_type_defn__ConstraintArgTypes_49);
                        }
#line 528 "prog_io_type_defn.m"
                        {
#line 528 "prog_io_type_defn.m"
                          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__ConstraintArgTypes_49, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_229);
                        }
#line 12380 "parse_tree.prog_io_type_defn.c"
                        parse_tree__prog_io_type_defn__TypeInfo_293_293 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 529 "prog_io_type_defn.m"
                        {
#line 529 "prog_io_type_defn.m"
                          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_293_293, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_229, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_230);
                        }
#line 530 "prog_io_type_defn.m"
                        {
#line 530 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 530 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3]));
#line 530 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_8));
#line 530 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_19));
#line 530 "prog_io_type_defn.m"
                        }
#line 530 "prog_io_type_defn.m"
                        {
#line 530 "prog_io_type_defn.m"
                          mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_293_293, parse_tree__prog_io_type_defn__V_165_165, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_230, &parse_tree__prog_io_type_defn___ExistQArgTypes_50, &parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                        }
#line 532 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQArgTypes_51)) == (MR_mktag((MR_Integer) 1)));
#line 532 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 532 "prog_io_type_defn.m"
                          {
#line 532 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 0)));
#line 532 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 1)));
#line 534 "prog_io_type_defn.m"
                            {
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_296_296 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeInfo_298_298;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_299_299;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_303_303;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypeStrs_54;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_166_166;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_167_167;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_170_170;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_171_171;
#line 534 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_172_172;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_176_176;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_177_177;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_178_178;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_181_181;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_182_182;
#line 534 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_183_183;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_209_209;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_210_210;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_211_211;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_212_212;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_213_213;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__GenericVarSet_231;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Pieces_232;
#line 534 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Spec_233;
#line 538 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv11_V_172_172;
#line 542 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv12_V_183_183;

#line 534 "prog_io_type_defn.m"
                              {
#line 534 "prog_io_type_defn.m"
                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_296_296, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_231);
                              }
#line 12476 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeInfo_298_298 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 12478 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_299_299 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 536 "prog_io_type_defn.m"
                              {
#line 536 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 536 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_9));
#line 536 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_231));
#line 536 "prog_io_type_defn.m"
                              }
#line 535 "prog_io_type_defn.m"
                              {
#line 535 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__NotExistQArgTypeStrs_54 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_298_298, parse_tree__prog_io_type_defn__TypeCtorInfo_299_299, parse_tree__prog_io_type_defn__V_166_166, parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                              }
#line 12499 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_303_303 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 538 "prog_io_type_defn.m"
                              {
#line 538 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv11_V_172_172 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_298_298, parse_tree__prog_io_type_defn__TypeCtorInfo_299_299, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                              }
#line 538 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_172_172 = ((MR_String) parse_tree__prog_io_type_defn__conv11_V_172_172);
#line 538 "prog_io_type_defn.m"
                              {
#line 538 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 538 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_172_172));
#line 538 "prog_io_type_defn.m"
                              }
#line 539 "prog_io_type_defn.m"
                              {
#line 539 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_171_171));
#line 539 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "prog_io_type_defn.m"
                              }
#line 537 "prog_io_type_defn.m"
                              {
#line 537 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_167_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[166])));
#line 537 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_167_167, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_170_170));
#line 537 "prog_io_type_defn.m"
                              }
#line 540 "prog_io_type_defn.m"
                              {
#line 540 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_177_177 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__NotExistQArgTypeStrs_54);
                              }
#line 542 "prog_io_type_defn.m"
                              {
#line 542 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv12_V_183_183 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_298_298, parse_tree__prog_io_type_defn__TypeCtorInfo_299_299, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                              }
#line 542 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_183_183 = ((MR_String) parse_tree__prog_io_type_defn__conv12_V_183_183);
#line 542 "prog_io_type_defn.m"
                              {
#line 542 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 542 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_183_183));
#line 542 "prog_io_type_defn.m"
                              }
#line 543 "prog_io_type_defn.m"
                              {
#line 543 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_181_181, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_182_182));
#line 543 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[72])));
#line 543 "prog_io_type_defn.m"
                              }
#line 541 "prog_io_type_defn.m"
                              {
#line 541 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[168])));
#line 541 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_178_178, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_181_181));
#line 541 "prog_io_type_defn.m"
                              }
#line 540 "prog_io_type_defn.m"
                              {
#line 540 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_176_176 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_303_303, parse_tree__prog_io_type_defn__V_177_177, parse_tree__prog_io_type_defn__V_178_178);
                              }
#line 540 "prog_io_type_defn.m"
                              {
#line 540 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Pieces_232 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_303_303, parse_tree__prog_io_type_defn__V_167_167, parse_tree__prog_io_type_defn__V_176_176);
                              }
#line 548 "prog_io_type_defn.m"
                              {
#line 548 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_211_211 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_296_296, parse_tree__prog_io_type_defn__BodyTerm_3);
                              }
#line 548 "prog_io_type_defn.m"
                              {
#line 548 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 548 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_213_213, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_232));
#line 548 "prog_io_type_defn.m"
                              }
#line 548 "prog_io_type_defn.m"
                              {
#line 548 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_212_212, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_213_213));
#line 548 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "prog_io_type_defn.m"
                              }
#line 548 "prog_io_type_defn.m"
                              {
#line 548 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_211_211));
#line 548 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_210_210, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_212_212));
#line 548 "prog_io_type_defn.m"
                              }
#line 548 "prog_io_type_defn.m"
                              {
#line 548 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_209_209, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_210_210));
#line 548 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "prog_io_type_defn.m"
                              }
#line 547 "prog_io_type_defn.m"
                              {
#line 547 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Spec_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 547 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_233, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_209_209));
#line 547 "prog_io_type_defn.m"
                              }
#line 549 "prog_io_type_defn.m"
                              {
#line 549 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_233));
#line 549 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 549 "prog_io_type_defn.m"
                              }
#line 534 "prog_io_type_defn.m"
                            }
#line 532 "prog_io_type_defn.m"
                          }
#line 532 "prog_io_type_defn.m"
                        else
#line 521 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 521 "prog_io_type_defn.m"
                      }
#line 493 "prog_io_type_defn.m"
                  }
#line 468 "prog_io_type_defn.m"
              }
#line 553 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 553 "prog_io_type_defn.m"
            {
#line 553 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4 = parse_tree__prog_io_type_defn__Ctors_17;
#line 553 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;

#line 553 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 553 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4;
#line 553 "prog_io_type_defn.m"
            }
#line 553 "prog_io_type_defn.m"
            continue;
#line 442 "prog_io_type_defn.m"
          }
#line 441 "prog_io_type_defn.m"
      }
#line 441 "prog_io_type_defn.m"
      break;
#line 441 "prog_io_type_defn.m"
    }
#line 438 "prog_io_type_defn.m"
}

#line 412 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 412 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11)
#line 412 "prog_io_type_defn.m"
{
#line 416 "prog_io_type_defn.m"
  {
#line 416 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 416 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 416 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ContextPieces_13;
#line 416 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeType_14;

#line 417 "prog_io_type_defn.m"
    {
#line 417 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[155]))));
    }
#line 418 "prog_io_type_defn.m"
    {
#line 418 "prog_io_type_defn.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__TypeTerm_10, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__ContextPieces_13, &parse_tree__prog_io_type_defn__MaybeType_14);
    }
#line 433 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 435 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_14;
#line 433 "prog_io_type_defn.m"
    else
#line 420 "prog_io_type_defn.m"
      {
#line 420 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_14, (MR_Integer) 0)));
#line 420 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_16;
#line 420 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Arg_17;
#line 420 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailArgs_18;

#line 421 "prog_io_type_defn.m"
        {
#line 421 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__TypeTerm_10);
        }
#line 423 "prog_io_type_defn.m"
        {
#line 423 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCtorFieldName_9));
#line 423 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_15));
#line 423 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 423 "prog_io_type_defn.m"
        }
#line 376 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__Terms_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "prog_io_type_defn.m"
          {
#line 376 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[10]);
#line 376 "prog_io_type_defn.m"
          }
#line 376 "prog_io_type_defn.m"
        else
#line 378 "prog_io_type_defn.m"
          {
#line 378 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 0)));
#line 378 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Terms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NameTerm_36;
#line 379 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeTerm_37;
#line 379 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 379 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 379 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 379 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 379 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 379 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_38_38;

#line 379 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_33)) == (MR_mktag((MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
              {
#line 379 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 2)));
#line 379 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
                  {
#line 379 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "::") == 0);
#line 379 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
                      {
#line 379 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
                          {
#line 379 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NameTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
                              {
#line 379 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__TypeTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_type_defn.m"
                              }
#line 379 "prog_io_type_defn.m"
                          }
#line 379 "prog_io_type_defn.m"
                      }
#line 379 "prog_io_type_defn.m"
                  }
#line 379 "prog_io_type_defn.m"
              }
#line 379 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 380 "prog_io_type_defn.m"
              {
#line 380 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_77;
#line 380 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ContextPieces_39;
#line 380 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40;

#line 380 "prog_io_type_defn.m"
                {
#line 380 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ContextPieces_39 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[163]))));
                }
#line 12876 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_54_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 381 "prog_io_type_defn.m"
                {
#line 381 "prog_io_type_defn.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__NameTerm_36, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__ContextPieces_39, &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40);
                }
#line 386 "prog_io_type_defn.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40)) == (MR_mktag((MR_Integer) 0))))
#line 384 "prog_io_type_defn.m"
                  {
#line 384 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));

#line 385 "prog_io_type_defn.m"
                    {
#line 385 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 385 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_41));
#line 385 "prog_io_type_defn.m"
                    }
#line 384 "prog_io_type_defn.m"
                  }
#line 386 "prog_io_type_defn.m"
                else
#line 387 "prog_io_type_defn.m"
                  {
#line 387 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));
#line 387 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymNameArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 1)));

#line 396 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__SymNameArgs_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "prog_io_type_defn.m"
                      {
#line 397 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NameCtxt_48;
#line 397 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_49;
#line 397 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_57_57;

#line 398 "prog_io_type_defn.m"
                        {
#line 398 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__NameCtxt_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__NameTerm_36);
                        }
#line 399 "prog_io_type_defn.m"
                        {
#line 399 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_42));
#line 399 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_48));
#line 399 "prog_io_type_defn.m"
                        }
#line 399 "prog_io_type_defn.m"
                        {
#line 399 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeCtorFieldName_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 399 "prog_io_type_defn.m"
                        }
#line 400 "prog_io_type_defn.m"
                        {
#line 400 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, parse_tree__prog_io_type_defn__TypeTerm_37, parse_tree__prog_io_type_defn__Terms_34);
                        }
#line 397 "prog_io_type_defn.m"
                      }
#line 396 "prog_io_type_defn.m"
                    else
#line 389 "prog_io_type_defn.m"
                      {
#line 389 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_47;
#line 389 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 389 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 389 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 389 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_72_72;

#line 394 "prog_io_type_defn.m"
                        {
#line 394 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_67_67 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__Term_33);
                        }
#line 394 "prog_io_type_defn.m"
                        {
#line 394 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 394 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[164])));
#line 394 "prog_io_type_defn.m"
                        }
#line 394 "prog_io_type_defn.m"
                        {
#line 394 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 394 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "prog_io_type_defn.m"
                        }
#line 393 "prog_io_type_defn.m"
                        {
#line 393 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 393 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 393 "prog_io_type_defn.m"
                        }
#line 395 "prog_io_type_defn.m"
                        {
#line 395 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_47));
#line 395 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "prog_io_type_defn.m"
                        }
#line 395 "prog_io_type_defn.m"
                        {
#line 395 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_72_72));
#line 395 "prog_io_type_defn.m"
                        }
#line 389 "prog_io_type_defn.m"
                      }
#line 387 "prog_io_type_defn.m"
                  }
#line 380 "prog_io_type_defn.m"
              }
#line 379 "prog_io_type_defn.m"
            else
#line 406 "prog_io_type_defn.m"
              {
#line 408 "prog_io_type_defn.m"
                {
#line 408 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_33, parse_tree__prog_io_type_defn__Terms_34);
                }
#line 406 "prog_io_type_defn.m"
              }
#line 378 "prog_io_type_defn.m"
          }
#line 429 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
#line 428 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeArgs_12 = parse_tree__prog_io_type_defn__MaybeTailArgs_18;
#line 429 "prog_io_type_defn.m"
        else
#line 430 "prog_io_type_defn.m"
          {
#line 430 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailArgs_18, (MR_Integer) 0)));
#line 430 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_24_24;

#line 431 "prog_io_type_defn.m"
            {
#line 431 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Arg_17));
#line 431 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Args_20));
#line 431 "prog_io_type_defn.m"
            }
#line 431 "prog_io_type_defn.m"
            {
#line 431 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 431 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeArgs_12, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 431 "prog_io_type_defn.m"
            }
#line 430 "prog_io_type_defn.m"
          }
#line 420 "prog_io_type_defn.m"
      }
#line 416 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 416 "prog_io_type_defn.m"
  }
#line 412 "prog_io_type_defn.m"
}

#line 373 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 373 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3)
#line 373 "prog_io_type_defn.m"
{
#line 376 "prog_io_type_defn.m"
  {
#line 376 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 376 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4;

#line 376 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "prog_io_type_defn.m"
      {
#line 376 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[10]);
#line 376 "prog_io_type_defn.m"
      }
#line 376 "prog_io_type_defn.m"
    else
#line 378 "prog_io_type_defn.m"
      {
#line 378 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 378 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NameTerm_13;
#line 379 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeTerm_14;
#line 379 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 379 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_28_28;
#line 379 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_29_29;
#line 379 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 379 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 379 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 379 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
          {
#line 379 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 379 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
              {
#line 379 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_28_28, (MR_String) "::") == 0);
#line 379 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
                  {
#line 379 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
                      {
#line 379 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 379 "prog_io_type_defn.m"
                          {
#line 379 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 0)));
#line 379 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 1)));
#line 379 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_type_defn.m"
                          }
#line 379 "prog_io_type_defn.m"
                      }
#line 379 "prog_io_type_defn.m"
                  }
#line 379 "prog_io_type_defn.m"
              }
#line 379 "prog_io_type_defn.m"
          }
#line 379 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 380 "prog_io_type_defn.m"
          {
#line 380 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_54;
#line 380 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ContextPieces_16;
#line 380 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17;

#line 380 "prog_io_type_defn.m"
            {
#line 380 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ContextPieces_16 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[163]))));
            }
#line 13206 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 381 "prog_io_type_defn.m"
            {
#line 381 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__NameTerm_13, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__ContextPieces_16, &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17);
            }
#line 386 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
#line 384 "prog_io_type_defn.m"
              {
#line 384 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));

#line 385 "prog_io_type_defn.m"
                {
#line 385 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 385 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 385 "prog_io_type_defn.m"
                }
#line 384 "prog_io_type_defn.m"
              }
#line 386 "prog_io_type_defn.m"
            else
#line 387 "prog_io_type_defn.m"
              {
#line 387 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));
#line 387 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 1)));

#line 396 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "prog_io_type_defn.m"
                  {
#line 397 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NameCtxt_25;
#line 397 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_26;
#line 397 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_34_34;

#line 398 "prog_io_type_defn.m"
                    {
#line 398 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__NameCtxt_25 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__NameTerm_13);
                    }
#line 399 "prog_io_type_defn.m"
                    {
#line 399 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_19));
#line 399 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_25));
#line 399 "prog_io_type_defn.m"
                    }
#line 399 "prog_io_type_defn.m"
                    {
#line 399 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_34_34));
#line 399 "prog_io_type_defn.m"
                    }
#line 400 "prog_io_type_defn.m"
                    {
#line 400 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, parse_tree__prog_io_type_defn__TypeTerm_14, parse_tree__prog_io_type_defn__Terms_11);
                    }
#line 397 "prog_io_type_defn.m"
                  }
#line 396 "prog_io_type_defn.m"
                else
#line 389 "prog_io_type_defn.m"
                  {
#line 389 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_24;
#line 389 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 389 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 389 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 389 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 394 "prog_io_type_defn.m"
                    {
#line 394 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_44_44 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__Term_10);
                    }
#line 394 "prog_io_type_defn.m"
                    {
#line 394 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 394 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[164])));
#line 394 "prog_io_type_defn.m"
                    }
#line 394 "prog_io_type_defn.m"
                    {
#line 394 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 394 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "prog_io_type_defn.m"
                    }
#line 393 "prog_io_type_defn.m"
                    {
#line 393 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 393 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 393 "prog_io_type_defn.m"
                    }
#line 395 "prog_io_type_defn.m"
                    {
#line 395 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_24));
#line 395 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "prog_io_type_defn.m"
                    }
#line 395 "prog_io_type_defn.m"
                    {
#line 395 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 395 "prog_io_type_defn.m"
                    }
#line 389 "prog_io_type_defn.m"
                  }
#line 387 "prog_io_type_defn.m"
              }
#line 380 "prog_io_type_defn.m"
          }
#line 379 "prog_io_type_defn.m"
        else
#line 406 "prog_io_type_defn.m"
          {
#line 408 "prog_io_type_defn.m"
            {
#line 408 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_10, parse_tree__prog_io_type_defn__Terms_11);
            }
#line 406 "prog_io_type_defn.m"
          }
#line 378 "prog_io_type_defn.m"
      }
#line 376 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_4;
#line 376 "prog_io_type_defn.m"
  }
#line 373 "prog_io_type_defn.m"
}

#line 314 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_5_p_0(
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9,
#line 314 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructor_10)
#line 314 "prog_io_type_defn.m"
{
#line 317 "prog_io_type_defn.m"
  {
#line 317 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 317 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 317 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 363 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ExistentialConstraints_48;
#line 363 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 364 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 364 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 364 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 364 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 364 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 364 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 364 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 364 "prog_io_type_defn.m"
      {
#line 364 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 364 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 364 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 364 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 364 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 364 "prog_io_type_defn.m"
          {
#line 364 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 364 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "=>") == 0);
#line 364 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 364 "prog_io_type_defn.m"
              {
#line 365 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 365 "prog_io_type_defn.m"
                  {
#line 365 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 365 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 365 "prog_io_type_defn.m"
                      {
#line 365 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__ExistentialConstraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 0)));
#line 365 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "prog_io_type_defn.m"
                      }
#line 365 "prog_io_type_defn.m"
                  }
#line 364 "prog_io_type_defn.m"
              }
#line 364 "prog_io_type_defn.m"
          }
#line 364 "prog_io_type_defn.m"
      }
#line 363 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 367 "prog_io_type_defn.m"
      {
#line 367 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 367 "prog_io_type_defn.m"
        {
#line 367 "prog_io_type_defn.m"
          parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistentialConstraints_48, &parse_tree__prog_io_type_defn__MaybeConstraints_12);
        }
#line 367 "prog_io_type_defn.m"
      }
#line 363 "prog_io_type_defn.m"
    else
#line 370 "prog_io_type_defn.m"
      {
#line 370 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[9]);
#line 370 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__Term_9;
#line 370 "prog_io_type_defn.m"
      }
#line 323 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
#line 322 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 323 "prog_io_type_defn.m"
    else
#line 324 "prog_io_type_defn.m"
      {
#line 324 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_40_40;
#line 324 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstraints_12, (MR_Integer) 0)));
#line 324 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MainTerm_17;
#line 324 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ContextPieces_18;
#line 324 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19;
#line 325 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 329 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 329 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_26_26;
#line 329 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 329 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 329 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Context_16;

#line 329 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 329 "prog_io_type_defn.m"
          {
#line 329 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 1)));
#line 329 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 2)));
#line 329 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 329 "prog_io_type_defn.m"
              {
#line 329 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_25_25, (MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_26_26, (MR_String) "{}") == 0);
#line 329 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 329 "prog_io_type_defn.m"
                  {
#line 330 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 330 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 330 "prog_io_type_defn.m"
                      {
#line 330 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 330 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 1)));
#line 330 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "prog_io_type_defn.m"
                      }
#line 329 "prog_io_type_defn.m"
                  }
#line 329 "prog_io_type_defn.m"
              }
#line 329 "prog_io_type_defn.m"
          }
#line 325 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 332 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 325 "prog_io_type_defn.m"
        else
#line 334 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 336 "prog_io_type_defn.m"
        {
#line 336 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ContextPieces_18 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[162]))));
        }
#line 13585 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 337 "prog_io_type_defn.m"
        {
#line 337 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__MainTerm_17, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ContextPieces_18, &parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19);
        }
#line 342 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
#line 340 "prog_io_type_defn.m"
          {
#line 340 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

#line 341 "prog_io_type_defn.m"
            {
#line 341 "prog_io_type_defn.m"
              MR_Word base;
#line 341 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 341 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructor_10 = base;
#line 341 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_33));
#line 341 "prog_io_type_defn.m"
            }
#line 340 "prog_io_type_defn.m"
          }
#line 342 "prog_io_type_defn.m"
        else
#line 343 "prog_io_type_defn.m"
          {
#line 343 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
#line 343 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
#line 343 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;

#line 344 "prog_io_type_defn.m"
            {
#line 344 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructorArgs_22 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ArgTerms_21);
            }
#line 349 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
#line 348 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;
#line 349 "prog_io_type_defn.m"
            else
#line 350 "prog_io_type_defn.m"
              {
#line 350 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructorArgs_22, (MR_Integer) 0)));
#line 350 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Ctor_24;
#line 350 "prog_io_type_defn.m"
                MR_Integer parse_tree__prog_io_type_defn__V_31_31;
#line 350 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_32_32;

#line 352 "prog_io_type_defn.m"
                {
#line 352 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__prog_io_type_defn__ConstructorArgs_23);
                }
#line 352 "prog_io_type_defn.m"
                {
#line 352 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__MainTerm_17);
                }
#line 351 "prog_io_type_defn.m"
                {
#line 351 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_8));
#line 351 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Constraints_14));
#line 351 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Functor_20));
#line 351 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ConstructorArgs_23));
#line 351 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 351 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 351 "prog_io_type_defn.m"
                }
#line 353 "prog_io_type_defn.m"
                {
#line 353 "prog_io_type_defn.m"
                  MR_Word base;
#line 353 "prog_io_type_defn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeConstructor_10 = base;
#line 353 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctor_24));
#line 353 "prog_io_type_defn.m"
                }
#line 350 "prog_io_type_defn.m"
              }
#line 343 "prog_io_type_defn.m"
          }
#line 324 "prog_io_type_defn.m"
      }
#line 317 "prog_io_type_defn.m"
  }
#line 314 "prog_io_type_defn.m"
}

#line 301 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructor_4_p_0_1(
#line 301 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 301 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 301 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 301 "prog_io_type_defn.m"
{
#line 301 "prog_io_type_defn.m"
  {
#line 301 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 301 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_37;

#line 301 "prog_io_type_defn.m"
    {
#line 301 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_maybe_exist_quant_constructor__301__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_HeadVar__2_37);
    }
#line 301 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_37));
#line 301 "prog_io_type_defn.m"
  }
#line 301 "prog_io_type_defn.m"
}

#line 290 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructor_4_p_0(
#line 290 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 290 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 290 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 290 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructor_8)
#line 290 "prog_io_type_defn.m"
{
#line 295 "prog_io_type_defn.m"
  {
#line 295 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarsTerm_9;
#line 295 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SubTerm_10;
#line 295 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_17_17;
#line 295 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_18_18;
#line 295 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 295 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 295 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 295 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 295 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 295 "prog_io_type_defn.m"
      {
#line 295 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 295 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 295 "prog_io_type_defn.m"
          {
#line 295 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_17_17, (MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_18_18, (MR_String) "some") == 0);
#line 295 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 295 "prog_io_type_defn.m"
              {
#line 295 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 295 "prog_io_type_defn.m"
                  {
#line 295 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__VarsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 295 "prog_io_type_defn.m"
                      {
#line 295 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__SubTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "prog_io_type_defn.m"
                      }
#line 295 "prog_io_type_defn.m"
                  }
#line 295 "prog_io_type_defn.m"
              }
#line 295 "prog_io_type_defn.m"
          }
#line 295 "prog_io_type_defn.m"
      }
#line 295 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 297 "prog_io_type_defn.m"
      {
#line 297 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ContextPieces_12;
#line 297 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeExistQVars_13;

#line 296 "prog_io_type_defn.m"
        {
#line 296 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ContextPieces_12 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[53]));
        }
#line 298 "prog_io_type_defn.m"
        {
#line 298 "prog_io_type_defn.m"
          parse_tree__prog_io_util__parse_list_of_vars_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__ContextPieces_12, parse_tree__prog_io_type_defn__VarsTerm_9, &parse_tree__prog_io_type_defn__MaybeExistQVars_13);
        }
#line 304 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeExistQVars_13)) == (MR_mktag((MR_Integer) 0))))
#line 306 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__prog_io_type_defn__MaybeExistQVars_13;
#line 304 "prog_io_type_defn.m"
        else
#line 300 "prog_io_type_defn.m"
          {
#line 300 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeExistQVars_13, (MR_Integer) 0)));
#line 300 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQTVars_15;
#line 300 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47;
#line 300 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeConstraints_48;
#line 363 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistentialConstraints_84;
#line 363 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_89;
#line 364 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 364 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__V_87_87;
#line 364 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 364 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 364 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_91_91;
#line 364 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_85_85;

#line 301 "prog_io_type_defn.m"
            {
#line 301 "prog_io_type_defn.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[2], parse_tree__prog_io_type_defn__ExistQVars_14, &parse_tree__prog_io_type_defn__ExistQTVars_15);
            }
#line 364 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__SubTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 364 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 364 "prog_io_type_defn.m"
              {
#line 364 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SubTerm_10, (MR_Integer) 0)));
#line 364 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SubTerm_10, (MR_Integer) 1)));
#line 364 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SubTerm_10, (MR_Integer) 2)));
#line 364 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_86_86)) == (MR_mktag((MR_Integer) 0)));
#line 364 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 364 "prog_io_type_defn.m"
                  {
#line 364 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, (MR_Integer) 0)));
#line 364 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_87_87, (MR_String) "=>") == 0);
#line 364 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 364 "prog_io_type_defn.m"
                      {
#line 365 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 365 "prog_io_type_defn.m"
                          {
#line 365 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, (MR_Integer) 0)));
#line 365 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, (MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_90_90)) == (MR_mktag((MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 365 "prog_io_type_defn.m"
                              {
#line 365 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__ExistentialConstraints_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, (MR_Integer) 0)));
#line 365 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_90_90, (MR_Integer) 1)));
#line 365 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_91_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "prog_io_type_defn.m"
                              }
#line 365 "prog_io_type_defn.m"
                          }
#line 364 "prog_io_type_defn.m"
                      }
#line 364 "prog_io_type_defn.m"
                  }
#line 364 "prog_io_type_defn.m"
              }
#line 363 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 367 "prog_io_type_defn.m"
              {
#line 367 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47 = parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_89;
#line 367 "prog_io_type_defn.m"
                {
#line 367 "prog_io_type_defn.m"
                  parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__ExistentialConstraints_84, &parse_tree__prog_io_type_defn__MaybeConstraints_48);
                }
#line 367 "prog_io_type_defn.m"
              }
#line 363 "prog_io_type_defn.m"
            else
#line 370 "prog_io_type_defn.m"
              {
#line 370 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeConstraints_48 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[9]);
#line 370 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47 = parse_tree__prog_io_type_defn__SubTerm_10;
#line 370 "prog_io_type_defn.m"
              }
#line 323 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_48)) == (MR_mktag((MR_Integer) 0))))
#line 322 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_48;
#line 323 "prog_io_type_defn.m"
            else
#line 324 "prog_io_type_defn.m"
              {
#line 324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_40_76;
#line 324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Constraints_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstraints_48, (MR_Integer) 0)));
#line 324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MainTerm_53;
#line 324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ContextPieces_54;
#line 324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_55;
#line 325 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__InsideBracesTerm_51;
#line 329 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 329 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__V_62_62;
#line 329 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 329 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 329 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Context_52;

#line 329 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47)) == (MR_mktag((MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 329 "prog_io_type_defn.m"
                  {
#line 329 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 1)));
#line 329 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn___Context_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47, (MR_Integer) 2)));
#line 329 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_61_61)) == (MR_mktag((MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 329 "prog_io_type_defn.m"
                      {
#line 329 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, (MR_Integer) 0)));
#line 329 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_62_62, (MR_String) "{}") == 0);
#line 329 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 329 "prog_io_type_defn.m"
                          {
#line 330 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_63_63)) == (MR_mktag((MR_Integer) 1)));
#line 330 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 330 "prog_io_type_defn.m"
                              {
#line 330 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__InsideBracesTerm_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, (MR_Integer) 0)));
#line 330 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, (MR_Integer) 1)));
#line 330 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 330 "prog_io_type_defn.m"
                              }
#line 329 "prog_io_type_defn.m"
                          }
#line 329 "prog_io_type_defn.m"
                      }
#line 329 "prog_io_type_defn.m"
                  }
#line 325 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 332 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MainTerm_53 = parse_tree__prog_io_type_defn__InsideBracesTerm_51;
#line 325 "prog_io_type_defn.m"
                else
#line 334 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MainTerm_53 = parse_tree__prog_io_type_defn__BeforeConstraintsTerm_47;
#line 336 "prog_io_type_defn.m"
                {
#line 336 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ContextPieces_54 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[162]))));
                }
#line 14045 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_40_76 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 337 "prog_io_type_defn.m"
                {
#line 337 "prog_io_type_defn.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_76, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__MainTerm_53, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__ContextPieces_54, &parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_55);
                }
#line 342 "prog_io_type_defn.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_55)) == (MR_mktag((MR_Integer) 0))))
#line 340 "prog_io_type_defn.m"
                  {
#line 340 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Specs_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));

#line 341 "prog_io_type_defn.m"
                    {
#line 341 "prog_io_type_defn.m"
                      MR_Word base;
#line 341 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 341 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeConstructor_8 = base;
#line 341 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_69));
#line 341 "prog_io_type_defn.m"
                    }
#line 340 "prog_io_type_defn.m"
                  }
#line 342 "prog_io_type_defn.m"
                else
#line 343 "prog_io_type_defn.m"
                  {
#line 343 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Functor_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 0)));
#line 343 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ArgTerms_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_55, (MR_Integer) 1)));
#line 343 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeConstructorArgs_58;

#line 344 "prog_io_type_defn.m"
                    {
#line 344 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeConstructorArgs_58 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__ArgTerms_57);
                    }
#line 349 "prog_io_type_defn.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_58)) == (MR_mktag((MR_Integer) 0))))
#line 348 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeConstructor_8 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_58;
#line 349 "prog_io_type_defn.m"
                    else
#line 350 "prog_io_type_defn.m"
                      {
#line 350 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstructorArgs_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructorArgs_58, (MR_Integer) 0)));
#line 350 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Ctor_60;
#line 350 "prog_io_type_defn.m"
                        MR_Integer parse_tree__prog_io_type_defn__V_67_67;
#line 350 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_68_68;

#line 352 "prog_io_type_defn.m"
                        {
#line 352 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_67_67 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__prog_io_type_defn__ConstructorArgs_59);
                        }
#line 352 "prog_io_type_defn.m"
                        {
#line 352 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_76, parse_tree__prog_io_type_defn__MainTerm_53);
                        }
#line 351 "prog_io_type_defn.m"
                        {
#line 351 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Ctor_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_60, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQTVars_15));
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Constraints_50));
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_60, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Functor_56));
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_60, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ConstructorArgs_59));
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_60, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_60, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 351 "prog_io_type_defn.m"
                        }
#line 353 "prog_io_type_defn.m"
                        {
#line 353 "prog_io_type_defn.m"
                          MR_Word base;
#line 353 "prog_io_type_defn.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_type_defn.m"
                          *parse_tree__prog_io_type_defn__MaybeConstructor_8 = base;
#line 353 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctor_60));
#line 353 "prog_io_type_defn.m"
                        }
#line 350 "prog_io_type_defn.m"
                      }
#line 343 "prog_io_type_defn.m"
                  }
#line 324 "prog_io_type_defn.m"
              }
#line 300 "prog_io_type_defn.m"
          }
#line 297 "prog_io_type_defn.m"
      }
#line 295 "prog_io_type_defn.m"
    else
#line 309 "prog_io_type_defn.m"
      {
#line 310 "prog_io_type_defn.m"
        {
#line 310 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_constructor_5_p_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_7, parse_tree__prog_io_type_defn__MaybeConstructor_8);
        }
#line 309 "prog_io_type_defn.m"
      }
#line 295 "prog_io_type_defn.m"
  }
#line 290 "prog_io_type_defn.m"
}

#line 257 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_8,
#line 257 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TailTerms_9,
#line 257 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_10)
#line 257 "prog_io_type_defn.m"
{
#line 261 "prog_io_type_defn.m"
  {
#line 261 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 261 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeHeadConstructor_11;

#line 262 "prog_io_type_defn.m"
    {
#line 262 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructor_4_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__HeadTerm_8, &parse_tree__prog_io_type_defn__MaybeHeadConstructor_11);
    }
#line 273 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__TailTerms_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "prog_io_type_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 0))))
#line 271 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeConstructors_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11;
#line 269 "prog_io_type_defn.m"
      else
#line 267 "prog_io_type_defn.m"
        {
#line 267 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__HeadConstructor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
#line 267 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 268 "prog_io_type_defn.m"
          {
#line 268 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 268 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_12));
#line 268 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_type_defn.m"
          }
#line 268 "prog_io_type_defn.m"
          {
#line 268 "prog_io_type_defn.m"
            MR_Word base;
#line 268 "prog_io_type_defn.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "prog_io_type_defn.m"
            *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 268 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 268 "prog_io_type_defn.m"
          }
#line 267 "prog_io_type_defn.m"
        }
#line 273 "prog_io_type_defn.m"
    else
#line 274 "prog_io_type_defn.m"
      {
#line 274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTailTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TailTerms_9, (MR_Integer) 0)));
#line 274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTailTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TailTerms_9, (MR_Integer) 1)));
#line 274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailConstructors_16;
#line 277 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailConstructors_17;
#line 277 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadConstructor_24;

#line 275 "prog_io_type_defn.m"
        {
#line 275 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__HeadTailTerm_14, parse_tree__prog_io_type_defn__TailTailTerms_15, &parse_tree__prog_io_type_defn__MaybeTailConstructors_16);
        }
#line 278 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 1)));
#line 278 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 278 "prog_io_type_defn.m"
          {
#line 278 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__HeadConstructor_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
#line 279 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailConstructors_16)) == (MR_mktag((MR_Integer) 1)));
#line 279 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 279 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TailConstructors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailConstructors_16, (MR_Integer) 0)));
#line 278 "prog_io_type_defn.m"
          }
#line 277 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 281 "prog_io_type_defn.m"
          {
#line 281 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 282 "prog_io_type_defn.m"
            {
#line 282 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_18_18 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_24)), parse_tree__prog_io_type_defn__TailConstructors_17);
            }
#line 282 "prog_io_type_defn.m"
            {
#line 282 "prog_io_type_defn.m"
              MR_Word base;
#line 282 "prog_io_type_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 282 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 282 "prog_io_type_defn.m"
            }
#line 281 "prog_io_type_defn.m"
          }
#line 277 "prog_io_type_defn.m"
        else
#line 285 "prog_io_type_defn.m"
          {
#line 285 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 285 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 285 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_23;

#line 284 "prog_io_type_defn.m"
            {
#line 284 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, parse_tree__prog_io_type_defn__MaybeHeadConstructor_11);
            }
#line 285 "prog_io_type_defn.m"
            {
#line 285 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_20_20 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[5], parse_tree__prog_io_type_defn__MaybeTailConstructors_16);
            }
#line 284 "prog_io_type_defn.m"
            {
#line 284 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__V_20_20);
            }
#line 286 "prog_io_type_defn.m"
            {
#line 286 "prog_io_type_defn.m"
              MR_Word base;
#line 286 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 286 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_23));
#line 286 "prog_io_type_defn.m"
            }
#line 285 "prog_io_type_defn.m"
          }
#line 274 "prog_io_type_defn.m"
      }
#line 261 "prog_io_type_defn.m"
  }
#line 257 "prog_io_type_defn.m"
}

#line 246 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructors_4_p_0(
#line 246 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 246 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 246 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 246 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_8)
#line 246 "prog_io_type_defn.m"
{
#line 250 "prog_io_type_defn.m"
  {
#line 250 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 250 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadBodyTerm_9;
#line 250 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TailBodyTerms_10;
#line 250 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 251 "prog_io_type_defn.m"
    {
#line 251 "prog_io_type_defn.m"
      parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__V_11_11);
    }
#line 251 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__HeadBodyTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 251 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__TailBodyTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 1)));
#line 252 "prog_io_type_defn.m"
    {
#line 252 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructors_loop_5_p_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadBodyTerm_9, parse_tree__prog_io_type_defn__TailBodyTerms_10, parse_tree__prog_io_type_defn__MaybeConstructors_8);
    }
#line 250 "prog_io_type_defn.m"
  }
#line 246 "prog_io_type_defn.m"
}

#line 227 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 227 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 227 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 227 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6)
#line 227 "prog_io_type_defn.m"
{
#line 231 "prog_io_type_defn.m"
  {
#line 231 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 231 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CtorsTermPrime_9;
#line 231 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_10;
#line 232 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 232 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 232 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_12_12;
#line 232 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 232 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 232 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn___Context_8;

#line 232 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 232 "prog_io_type_defn.m"
      {
#line 232 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 0)));
#line 232 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 1)));
#line 232 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 2)));
#line 232 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 232 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 232 "prog_io_type_defn.m"
          {
#line 232 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 232 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_12_12, (MR_String) "where") == 0);
#line 232 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 232 "prog_io_type_defn.m"
              {
#line 233 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_7)) == (MR_mktag((MR_Integer) 1)));
#line 233 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 233 "prog_io_type_defn.m"
                  {
#line 233 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__CtorsTermPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 0)));
#line 233 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 1)));
#line 233 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 233 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 233 "prog_io_type_defn.m"
                      {
#line 233 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 233 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 1)));
#line 233 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "prog_io_type_defn.m"
                      }
#line 233 "prog_io_type_defn.m"
                  }
#line 232 "prog_io_type_defn.m"
              }
#line 232 "prog_io_type_defn.m"
          }
#line 232 "prog_io_type_defn.m"
      }
#line 231 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 235 "prog_io_type_defn.m"
      {
#line 235 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__CtorsTermPrime_9;
#line 236 "prog_io_type_defn.m"
        {
#line 236 "prog_io_type_defn.m"
          MR_Word base;
#line 236 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = base;
#line 236 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_10));
#line 236 "prog_io_type_defn.m"
        }
#line 235 "prog_io_type_defn.m"
      }
#line 231 "prog_io_type_defn.m"
    else
#line 238 "prog_io_type_defn.m"
      {
#line 238 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__Term_4;
#line 239 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "prog_io_type_defn.m"
      }
#line 231 "prog_io_type_defn.m"
  }
#line 227 "prog_io_type_defn.m"
}

#line 193 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0_1(
#line 193 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg)
#line 193 "prog_io_type_defn.m"
{
#line 193 "prog_io_type_defn.m"
  {
#line 193 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 193 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 193 "prog_io_type_defn.m"
    {
#line 193 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_du_type_defn__193__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))));
    }
#line 193 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 193 "prog_io_type_defn.m"
  }
#line 193 "prog_io_type_defn.m"
}

#line 153 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_13,
#line 153 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_14,
#line 153 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_15,
#line 153 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_16)
#line 153 "prog_io_type_defn.m"
{
#line 158 "prog_io_type_defn.m"
  {
#line 158 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 158 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverSpecs_19;
#line 158 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_20;
#line 158 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CtorsTerm_21;
#line 158 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereTerm_22;
#line 158 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_23;
#line 158 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhere_24;
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_26;
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Params_27;
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__OneOrMoreCtors_28;
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_29;
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_30;
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_31;

#line 166 "prog_io_type_defn.m"
#line 166 "prog_io_type_defn.m"
    switch (parse_tree__prog_io_type_defn__IsSolverType_15) {
#line 166 "prog_io_type_defn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 166 "prog_io_type_defn.m"
      case (MR_Integer) 0:
#line 168 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "prog_io_type_defn.m"
        break;
#line 166 "prog_io_type_defn.m"
      case (MR_Integer) 1:
#line 160 "prog_io_type_defn.m"
        {
#line 160 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__SolverSpec_18;
#line 160 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 160 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 160 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_57_57;

#line 164 "prog_io_type_defn.m"
          {
#line 164 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_57_57 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
          }
#line 164 "prog_io_type_defn.m"
          {
#line 164 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 164 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 164 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[161])));
#line 164 "prog_io_type_defn.m"
          }
#line 164 "prog_io_type_defn.m"
          {
#line 164 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 164 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "prog_io_type_defn.m"
          }
#line 163 "prog_io_type_defn.m"
          {
#line 163 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SolverSpec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 163 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 163 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_18, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 163 "prog_io_type_defn.m"
          }
#line 165 "prog_io_type_defn.m"
          {
#line 165 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SolverSpecs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_19, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverSpec_18));
#line 165 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "prog_io_type_defn.m"
          }
#line 160 "prog_io_type_defn.m"
        }
#line 166 "prog_io_type_defn.m"
        break;
#line 166 "prog_io_type_defn.m"
    }
#line 171 "prog_io_type_defn.m"
    {
#line 171 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_20);
    }
#line 172 "prog_io_type_defn.m"
    {
#line 172 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(parse_tree__prog_io_type_defn__BodyTerm_12, &parse_tree__prog_io_type_defn__CtorsTerm_21, &parse_tree__prog_io_type_defn__MaybeWhereTerm_22);
    }
#line 173 "prog_io_type_defn.m"
    {
#line 173 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_maybe_exist_quant_constructors_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__CtorsTerm_21, &parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_23);
    }
#line 178 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeWhereTerm_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "prog_io_type_defn.m"
      {
#line 177 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhere_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 176 "prog_io_type_defn.m"
      }
#line 178 "prog_io_type_defn.m"
    else
#line 179 "prog_io_type_defn.m"
      {
#line 179 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__WhereTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereTerm_22, (MR_Integer) 0)));

#line 180 "prog_io_type_defn.m"
        {
#line 180 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 0, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__WhereTerm_25, &parse_tree__prog_io_type_defn__MaybeWhere_24);
        }
#line 179 "prog_io_type_defn.m"
      }
#line 184 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__SolverSpecs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 184 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 184 "prog_io_type_defn.m"
      {
#line 185 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_20)) == (MR_mktag((MR_Integer) 1)));
#line 185 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 185 "prog_io_type_defn.m"
          {
#line 185 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_20, (MR_Integer) 0)));
#line 185 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_20, (MR_Integer) 1)));
#line 186 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_23)) == (MR_mktag((MR_Integer) 1)));
#line 186 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 186 "prog_io_type_defn.m"
              {
#line 186 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__OneOrMoreCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_23, (MR_Integer) 0)));
#line 187 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_24)) == (MR_mktag((MR_Integer) 1)));
#line 187 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 187 "prog_io_type_defn.m"
                  {
#line 187 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_24, (MR_Integer) 0)));
#line 187 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_24, (MR_Integer) 1)));
#line 187 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeDirectArgIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_24, (MR_Integer) 2)));
#line 187 "prog_io_type_defn.m"
                  }
#line 186 "prog_io_type_defn.m"
              }
#line 185 "prog_io_type_defn.m"
          }
#line 184 "prog_io_type_defn.m"
      }
#line 183 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 194 "prog_io_type_defn.m"
      {
#line 194 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadCtor_32;
#line 194 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailCtors_33;
#line 194 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctors_34;
#line 194 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__CtorsSpecs_35;
#line 194 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ErrorSpecs_37;
#line 194 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_67_67;

#line 193 "prog_io_type_defn.m"
        {
#line 193 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 193 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[1]));
#line 193 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0_1));
#line 193 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 193 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_29));
#line 193 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "prog_io_type_defn.m"
        }
#line 193 "prog_io_type_defn.m"
        {
#line 193 "prog_io_type_defn.m"
          mercury__require__expect_4_p_0(parse_tree__prog_io_type_defn__V_67_67, (MR_String) "parse_tree.prog_io_type_defn", (MR_String) "predicate \140parse_tree.prog_io_type_defn.parse_du_type_defn\'/8", (MR_String) "discriminated union type has solver type details");
        }
#line 195 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__OneOrMoreCtors_28, (MR_Integer) 0)));
#line 195 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TailCtors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__OneOrMoreCtors_28, (MR_Integer) 1)));
#line 196 "prog_io_type_defn.m"
        {
#line 196 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Ctors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Ctors_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadCtor_32));
#line 196 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Ctors_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TailCtors_33));
#line 196 "prog_io_type_defn.m"
        }
#line 197 "prog_io_type_defn.m"
        {
#line 197 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(parse_tree__prog_io_type_defn__Params_27, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Ctors_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__CtorsSpecs_35);
        }
#line 202 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__MaybeDirectArgIs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ErrorSpecs_37 = parse_tree__prog_io_type_defn__CtorsSpecs_35;
#line 202 "prog_io_type_defn.m"
        else
#line 199 "prog_io_type_defn.m"
          {
#line 199 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_31, (MR_Integer) 0)));

#line 200 "prog_io_type_defn.m"
            {
#line 200 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(parse_tree__prog_io_type_defn__Ctors_34, parse_tree__prog_io_type_defn__DirectArgCtors_36, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__CtorsSpecs_35, &parse_tree__prog_io_type_defn__ErrorSpecs_37);
            }
#line 199 "prog_io_type_defn.m"
          }
#line 215 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__ErrorSpecs_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "prog_io_type_defn.m"
          {
#line 207 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeVarSet_38;
#line 207 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeDefn_39;
#line 207 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_40;
#line 207 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Item_41;
#line 207 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_73_73;

#line 208 "prog_io_type_defn.m"
            {
#line 208 "prog_io_type_defn.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TypeVarSet_38);
            }
#line 209 "prog_io_type_defn.m"
            {
#line 209 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 209 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctors_34));
#line 209 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_30));
#line 209 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeDirectArgIs_31));
#line 209 "prog_io_type_defn.m"
            }
#line 211 "prog_io_type_defn.m"
            {
#line 211 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ItemTypeDefn_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 211 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_26));
#line 211 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_27));
#line 211 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_39));
#line 211 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_38));
#line 211 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_13));
#line 211 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_14));
#line 211 "prog_io_type_defn.m"
            }
#line 213 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Item_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_40);
#line 214 "prog_io_type_defn.m"
            {
#line 214 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 214 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_41));
#line 214 "prog_io_type_defn.m"
            }
#line 214 "prog_io_type_defn.m"
            {
#line 214 "prog_io_type_defn.m"
              MR_Word base;
#line 214 "prog_io_type_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 214 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 214 "prog_io_type_defn.m"
            }
#line 207 "prog_io_type_defn.m"
          }
#line 215 "prog_io_type_defn.m"
        else
#line 217 "prog_io_type_defn.m"
          {
#line 217 "prog_io_type_defn.m"
            MR_Word base;
#line 217 "prog_io_type_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 217 "prog_io_type_defn.m"
            *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 217 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ErrorSpecs_37));
#line 217 "prog_io_type_defn.m"
          }
#line 194 "prog_io_type_defn.m"
      }
#line 183 "prog_io_type_defn.m"
    else
#line 223 "prog_io_type_defn.m"
      {
#line 223 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_83_83 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 223 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_44;
#line 223 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 223 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 223 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 223 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 223 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;

#line 221 "prog_io_type_defn.m"
        {
#line 221 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_75_75 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_20);
        }
#line 222 "prog_io_type_defn.m"
        {
#line 222 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[5], parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_23);
        }
#line 223 "prog_io_type_defn.m"
        {
#line 223 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[8], parse_tree__prog_io_type_defn__MaybeWhere_24);
        }
#line 222 "prog_io_type_defn.m"
        {
#line 222 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_76_76 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_83_83, parse_tree__prog_io_type_defn__V_77_77, parse_tree__prog_io_type_defn__V_78_78);
        }
#line 221 "prog_io_type_defn.m"
        {
#line 221 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_83_83, parse_tree__prog_io_type_defn__V_75_75, parse_tree__prog_io_type_defn__V_76_76);
        }
#line 220 "prog_io_type_defn.m"
        {
#line 220 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_83_83, parse_tree__prog_io_type_defn__SolverSpecs_19, parse_tree__prog_io_type_defn__V_74_74);
        }
#line 224 "prog_io_type_defn.m"
        {
#line 224 "prog_io_type_defn.m"
          MR_Word base;
#line 224 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 224 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_16 = base;
#line 224 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_44));
#line 224 "prog_io_type_defn.m"
        }
#line 223 "prog_io_type_defn.m"
      }
#line 158 "prog_io_type_defn.m"
  }
#line 153 "prog_io_type_defn.m"
}

#line 66 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_unify_compare_4_p_0(
#line 66 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 66 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 66 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term0_7,
#line 66 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeUnifyCompare_8)
#line 66 "prog_io_type_defn.m"
{
#line 923 "prog_io_type_defn.m"
  {
#line 923 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_10;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_11;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_12;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_13;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_29_29;
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33;
#line 946 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_17;
#line 946 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__EqualityIs_18;
#line 946 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ComparisonIs_19;

#line 925 "prog_io_type_defn.m"
    {
#line 925 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Term0_7));
#line 925 "prog_io_type_defn.m"
    }
#line 926 "prog_io_type_defn.m"
    {
#line 926 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(&parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_10, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27);
    }
#line 928 "prog_io_type_defn.m"
    {
#line 928 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, &parse_tree__prog_io_type_defn__MaybeEqualityIs_11, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_29_29);
    }
#line 931 "prog_io_type_defn.m"
    {
#line 931 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_49_49_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, &parse_tree__prog_io_type_defn__MaybeComparisonIs_12, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_29_29, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33);
    }
#line 937 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "prog_io_type_defn.m"
      {
#line 936 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 936 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhereEnd_13 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[3]);
#line 935 "prog_io_type_defn.m"
      }
#line 937 "prog_io_type_defn.m"
    else
#line 938 "prog_io_type_defn.m"
      {
#line 938 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__EndTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33, (MR_Integer) 0)));
#line 938 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__EndSpec_16;
#line 938 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 938 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 938 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 938 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 942 "prog_io_type_defn.m"
        {
#line 942 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__EndTerm_14);
        }
#line 942 "prog_io_type_defn.m"
        {
#line 942 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 942 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[160])));
#line 942 "prog_io_type_defn.m"
        }
#line 942 "prog_io_type_defn.m"
        {
#line 942 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 942 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "prog_io_type_defn.m"
        }
#line 941 "prog_io_type_defn.m"
        {
#line 941 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__EndSpec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 941 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__EndSpec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__EndSpec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 941 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__EndSpec_16, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 941 "prog_io_type_defn.m"
        }
#line 943 "prog_io_type_defn.m"
        {
#line 943 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__EndSpec_16));
#line 943 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "prog_io_type_defn.m"
        }
#line 943 "prog_io_type_defn.m"
        {
#line 943 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhereEnd_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 943 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereEnd_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 943 "prog_io_type_defn.m"
        }
#line 938 "prog_io_type_defn.m"
      }
#line 950 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhereEnd_13)) == (MR_mktag((MR_Integer) 1)));
#line 947 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 947 "prog_io_type_defn.m"
      {
#line 947 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_10)) == (MR_mktag((MR_Integer) 1)));
#line 947 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 947 "prog_io_type_defn.m"
          {
#line 947 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_10, (MR_Integer) 0)));
#line 948 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeEqualityIs_11)) == (MR_mktag((MR_Integer) 1)));
#line 948 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 948 "prog_io_type_defn.m"
              {
#line 948 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__EqualityIs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeEqualityIs_11, (MR_Integer) 0)));
#line 949 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeComparisonIs_12)) == (MR_mktag((MR_Integer) 1)));
#line 949 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 949 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ComparisonIs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeComparisonIs_12, (MR_Integer) 0)));
#line 948 "prog_io_type_defn.m"
              }
#line 947 "prog_io_type_defn.m"
          }
#line 947 "prog_io_type_defn.m"
      }
#line 946 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 964 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 965 "prog_io_type_defn.m"
        {
#line 965 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__MaybeUC_23;

#line 1383 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1383 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 1384 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 1386 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeUC_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1381 "prog_io_type_defn.m"
          else
#line 1388 "prog_io_type_defn.m"
            {
#line 1388 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_82_82;

#line 1388 "prog_io_type_defn.m"
              {
#line 1388 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__EqualityIs_18));
#line 1388 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ComparisonIs_19));
#line 1388 "prog_io_type_defn.m"
              }
#line 1388 "prog_io_type_defn.m"
              {
#line 1388 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__MaybeUC_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeUC_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 1388 "prog_io_type_defn.m"
              }
#line 1388 "prog_io_type_defn.m"
            }
#line 967 "prog_io_type_defn.m"
          {
#line 967 "prog_io_type_defn.m"
            MR_Word base;
#line 967 "prog_io_type_defn.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 967 "prog_io_type_defn.m"
            *parse_tree__prog_io_type_defn__MaybeUnifyCompare_8 = base;
#line 967 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUC_23));
#line 967 "prog_io_type_defn.m"
          }
#line 965 "prog_io_type_defn.m"
        }
#line 964 "prog_io_type_defn.m"
      else
#line 954 "prog_io_type_defn.m"
        {
#line 955 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 955 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 956 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 958 "prog_io_type_defn.m"
            {
#line 959 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeUnifyCompare_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[7]);
#line 958 "prog_io_type_defn.m"
            }
#line 954 "prog_io_type_defn.m"
          else
#line 961 "prog_io_type_defn.m"
            {
#line 961 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__Spec_22;
#line 961 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_56_56;

#line 961 "prog_io_type_defn.m"
              {
#line 961 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Spec_22 = parse_tree__prog_io_type_defn__abstract_noncanonical_excludes_others_1_f_0(parse_tree__prog_io_type_defn__Term0_7);
              }
#line 962 "prog_io_type_defn.m"
              {
#line 962 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_22));
#line 962 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "prog_io_type_defn.m"
              }
#line 962 "prog_io_type_defn.m"
              {
#line 962 "prog_io_type_defn.m"
                MR_Word base;
#line 962 "prog_io_type_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 962 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__MaybeUnifyCompare_8 = base;
#line 962 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 962 "prog_io_type_defn.m"
              }
#line 961 "prog_io_type_defn.m"
            }
#line 954 "prog_io_type_defn.m"
        }
#line 946 "prog_io_type_defn.m"
    else
#line 973 "prog_io_type_defn.m"
      {
#line 973 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_77_77 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 973 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_78_78 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[2];
#line 973 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_24;
#line 973 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 973 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 973 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 973 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_61_61;

#line 971 "prog_io_type_defn.m"
        {
#line 971 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_58_58 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_78_78, parse_tree__prog_io_type_defn__MaybeEqualityIs_11);
        }
#line 972 "prog_io_type_defn.m"
        {
#line 972 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_60_60 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_78_78, parse_tree__prog_io_type_defn__MaybeComparisonIs_12);
        }
#line 973 "prog_io_type_defn.m"
        {
#line 973 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_61_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, parse_tree__prog_io_type_defn__MaybeWhereEnd_13);
        }
#line 972 "prog_io_type_defn.m"
        {
#line 972 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_59_59 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_77_77, parse_tree__prog_io_type_defn__V_60_60, parse_tree__prog_io_type_defn__V_61_61);
        }
#line 971 "prog_io_type_defn.m"
        {
#line 971 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_24 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_77_77, parse_tree__prog_io_type_defn__V_58_58, parse_tree__prog_io_type_defn__V_59_59);
        }
#line 974 "prog_io_type_defn.m"
        {
#line 974 "prog_io_type_defn.m"
          MR_Word base;
#line 974 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 974 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeUnifyCompare_8 = base;
#line 974 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_24));
#line 974 "prog_io_type_defn.m"
        }
#line 973 "prog_io_type_defn.m"
      }
#line 923 "prog_io_type_defn.m"
  }
#line 66 "prog_io_type_defn.m"
}

#line 55 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_part_if_present_6_p_0(
#line 55 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_7,
#line 55 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 55 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 55 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_10,
#line 55 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__BeforeWhereTerm_11,
#line 55 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_12)
#line 55 "prog_io_type_defn.m"
{
#line 849 "prog_io_type_defn.m"
  {
#line 849 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 849 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 849 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_14;
#line 850 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 850 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 850 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 850 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 850 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 850 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 850 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 850 "prog_io_type_defn.m"
      {
#line 850 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 850 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 850 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 850 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 850 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 850 "prog_io_type_defn.m"
          {
#line 850 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 850 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) "where") == 0);
#line 850 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 850 "prog_io_type_defn.m"
              {
#line 851 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 851 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 851 "prog_io_type_defn.m"
                  {
#line 851 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 851 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 851 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 851 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 851 "prog_io_type_defn.m"
                      {
#line 851 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 851 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 851 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "prog_io_type_defn.m"
                      }
#line 851 "prog_io_type_defn.m"
                  }
#line 850 "prog_io_type_defn.m"
              }
#line 850 "prog_io_type_defn.m"
          }
#line 850 "prog_io_type_defn.m"
      }
#line 849 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 853 "prog_io_type_defn.m"
      {
#line 853 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 854 "prog_io_type_defn.m"
        {
#line 854 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0(parse_tree__prog_io_type_defn__IsSolverType_7, parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__WhereTerm_14, parse_tree__prog_io_type_defn__MaybeWhereDetails_12);
        }
#line 853 "prog_io_type_defn.m"
      }
#line 849 "prog_io_type_defn.m"
    else
#line 857 "prog_io_type_defn.m"
      {
#line 857 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__Term_10;
#line 858 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 857 "prog_io_type_defn.m"
      }
#line 849 "prog_io_type_defn.m"
  }
#line 55 "prog_io_type_defn.m"
}

#line 1432 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1432 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1432 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 1432 "prog_io_type_defn.m"
{
#line 1432 "prog_io_type_defn.m"
  {
#line 1432 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1432 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1432 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv1_HeadVar__3_120;

#line 1432 "prog_io_type_defn.m"
    {
#line 1432 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv1_HeadVar__3_120 = parse_tree__prog_io_type_defn__IntroducedFrom__func__parse_type_defn_head__1432__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 1432 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv1_HeadVar__3_120));
#line 1432 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1432 "prog_io_type_defn.m"
  }
#line 1432 "prog_io_type_defn.m"
}

#line 1423 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1423 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1423 "prog_io_type_defn.m"
{
#line 1423 "prog_io_type_defn.m"
  {
#line 1423 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1423 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_114;

#line 1423 "prog_io_type_defn.m"
    {
#line 1423 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1423__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_HeadVar__2_114);
    }
#line 1423 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_114));
#line 1423 "prog_io_type_defn.m"
  }
#line 1423 "prog_io_type_defn.m"
}

#line 45 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(
#line 45 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 45 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 45 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_7,
#line 45 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8)
#line 45 "prog_io_type_defn.m"
{
#line 1398 "prog_io_type_defn.m"
  {
#line 1398 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1398 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1404 "prog_io_type_defn.m"
      {
#line 1404 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1404 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_111_111;
#line 1404 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 2)));
#line 1404 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ContextPieces_16;
#line 1404 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadResult_17;
#line 1404 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));
#line 1404 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));

#line 1405 "prog_io_type_defn.m"
        {
#line 1405 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ContextPieces_16 = mercury__cord__singleton_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_110_110, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[155]))));
        }
#line 15568 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1406 "prog_io_type_defn.m"
        {
#line 1406 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_111_111, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__HeadTerm_7, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__ContextPieces_16, &parse_tree__prog_io_type_defn__HeadResult_17);
        }
#line 1411 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadResult_17)) == (MR_mktag((MR_Integer) 0))))
#line 1410 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = (MR_Word) parse_tree__prog_io_type_defn__HeadResult_17;
#line 1411 "prog_io_type_defn.m"
        else
#line 1412 "prog_io_type_defn.m"
          {
#line 1412 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 0)));
#line 1412 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 1)));
#line 1412 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NameSpecs_21;
#line 1415 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ParamVars_22;

#line 1414 "prog_io_type_defn.m"
            {
#line 1414 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__check_user_type_name_3_p_0(parse_tree__prog_io_type_defn__SymName_19, parse_tree__prog_io_type_defn__HeadContext_15, &parse_tree__prog_io_type_defn__NameSpecs_21);
            }
#line 1415 "prog_io_type_defn.m"
            {
#line 1415 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_111_111, parse_tree__prog_io_type_defn__ArgTerms_20, &parse_tree__prog_io_type_defn__ParamVars_22);
            }
#line 1415 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1417 "prog_io_type_defn.m"
              {
#line 1417 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_112_112 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0];
#line 1417 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsBag_23;
#line 1417 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__DupParamVars_24;

#line 1417 "prog_io_type_defn.m"
                {
#line 1417 "prog_io_type_defn.m"
                  mercury__bag__from_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, parse_tree__prog_io_type_defn__ParamVars_22, &parse_tree__prog_io_type_defn__ParamsBag_23);
                }
#line 1418 "prog_io_type_defn.m"
                {
#line 1418 "prog_io_type_defn.m"
                  mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, parse_tree__prog_io_type_defn__ParamsBag_23, &parse_tree__prog_io_type_defn__DupParamVars_24);
                }
#line 1429 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__DupParamVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1425 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "prog_io_type_defn.m"
                    {
#line 1422 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__PrgParamVars_25;

#line 1423 "prog_io_type_defn.m"
                      {
#line 1423 "prog_io_type_defn.m"
                        mercury__list__map_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[0], parse_tree__prog_io_type_defn__ParamVars_22, &parse_tree__prog_io_type_defn__PrgParamVars_25);
                      }
#line 1424 "prog_io_type_defn.m"
                      {
#line 1424 "prog_io_type_defn.m"
                        MR_Word base;
#line 1424 "prog_io_type_defn.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "prog_io_type_defn.m"
                        *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1424 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_19));
#line 1424 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__PrgParamVars_25));
#line 1424 "prog_io_type_defn.m"
                      }
#line 1422 "prog_io_type_defn.m"
                    }
#line 1425 "prog_io_type_defn.m"
                  else
#line 1427 "prog_io_type_defn.m"
                    {
#line 1427 "prog_io_type_defn.m"
                      MR_Word base;
#line 1427 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1427 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1427 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpecs_21));
#line 1427 "prog_io_type_defn.m"
                    }
#line 1429 "prog_io_type_defn.m"
                else
#line 1430 "prog_io_type_defn.m"
                  {
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__DupParamVarNames_30;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_94;
#line 1430 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_95;

#line 1432 "prog_io_type_defn.m"
                    {
#line 1432 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[0]));
#line 1432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2));
#line 1432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1432 "prog_io_type_defn.m"
                    }
#line 1431 "prog_io_type_defn.m"
                    {
#line 1431 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__DupParamVarNames_30 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__V_34_34, parse_tree__prog_io_type_defn__DupParamVars_24);
                    }
#line 1434 "prog_io_type_defn.m"
                    {
#line 1434 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_40_40 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_type_defn__DupParamVarNames_30);
                    }
#line 1434 "prog_io_type_defn.m"
                    {
#line 1434 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_110_110, parse_tree__prog_io_type_defn__V_40_40, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[37]));
                    }
#line 1433 "prog_io_type_defn.m"
                    {
#line 1433 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_94 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_110_110, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[157]), parse_tree__prog_io_type_defn__V_39_39);
                    }
#line 1438 "prog_io_type_defn.m"
                    {
#line 1438 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_94));
#line 1438 "prog_io_type_defn.m"
                    }
#line 1438 "prog_io_type_defn.m"
                    {
#line 1438 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 1438 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1438 "prog_io_type_defn.m"
                    }
#line 1438 "prog_io_type_defn.m"
                    {
#line 1438 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1438 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 1438 "prog_io_type_defn.m"
                    }
#line 1438 "prog_io_type_defn.m"
                    {
#line 1438 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 1438 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1438 "prog_io_type_defn.m"
                    }
#line 1437 "prog_io_type_defn.m"
                    {
#line 1437 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1437 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1437 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_95, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 1437 "prog_io_type_defn.m"
                    }
#line 1439 "prog_io_type_defn.m"
                    {
#line 1439 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_95));
#line 1439 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpecs_21));
#line 1439 "prog_io_type_defn.m"
                    }
#line 1439 "prog_io_type_defn.m"
                    {
#line 1439 "prog_io_type_defn.m"
                      MR_Word base;
#line 1439 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1439 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 1439 "prog_io_type_defn.m"
                    }
#line 1430 "prog_io_type_defn.m"
                  }
#line 1417 "prog_io_type_defn.m"
              }
#line 1415 "prog_io_type_defn.m"
            else
#line 1442 "prog_io_type_defn.m"
              {
#line 1442 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_31;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_72_72;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_78_78;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_100;
#line 1442 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_101;

#line 1442 "prog_io_type_defn.m"
                {
#line 1442 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_31 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_111_111, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadTerm_7);
                }
#line 1444 "prog_io_type_defn.m"
                {
#line 1444 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1444 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_31));
#line 1444 "prog_io_type_defn.m"
                }
#line 1444 "prog_io_type_defn.m"
                {
#line 1444 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1444 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[39])));
#line 1444 "prog_io_type_defn.m"
                }
#line 1443 "prog_io_type_defn.m"
                {
#line 1443 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[158])));
#line 1443 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1443 "prog_io_type_defn.m"
                }
#line 1446 "prog_io_type_defn.m"
                {
#line 1446 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_100));
#line 1446 "prog_io_type_defn.m"
                }
#line 1446 "prog_io_type_defn.m"
                {
#line 1446 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 1446 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "prog_io_type_defn.m"
                }
#line 1446 "prog_io_type_defn.m"
                {
#line 1446 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1446 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 1446 "prog_io_type_defn.m"
                }
#line 1446 "prog_io_type_defn.m"
                {
#line 1446 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 1446 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "prog_io_type_defn.m"
                }
#line 1445 "prog_io_type_defn.m"
                {
#line 1445 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1445 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1445 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_101, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_72_72));
#line 1445 "prog_io_type_defn.m"
                }
#line 1447 "prog_io_type_defn.m"
                {
#line 1447 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_101));
#line 1447 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_78_78, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpecs_21));
#line 1447 "prog_io_type_defn.m"
                }
#line 1447 "prog_io_type_defn.m"
                {
#line 1447 "prog_io_type_defn.m"
                  MR_Word base;
#line 1447 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1447 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_78_78));
#line 1447 "prog_io_type_defn.m"
                }
#line 1442 "prog_io_type_defn.m"
              }
#line 1412 "prog_io_type_defn.m"
          }
#line 1404 "prog_io_type_defn.m"
      }
#line 1398 "prog_io_type_defn.m"
    else
#line 1398 "prog_io_type_defn.m"
      {
#line 1398 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));
#line 1398 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1398 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1398 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1398 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 1398 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));

#line 1401 "prog_io_type_defn.m"
        {
#line 1401 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_10));
#line 1401 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[159])));
#line 1401 "prog_io_type_defn.m"
        }
#line 1401 "prog_io_type_defn.m"
        {
#line 1401 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_87_87));
#line 1401 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1401 "prog_io_type_defn.m"
        }
#line 1400 "prog_io_type_defn.m"
        {
#line 1400 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1400 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1400 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 1400 "prog_io_type_defn.m"
        }
#line 1402 "prog_io_type_defn.m"
        {
#line 1402 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1402 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1402 "prog_io_type_defn.m"
        }
#line 1402 "prog_io_type_defn.m"
        {
#line 1402 "prog_io_type_defn.m"
          MR_Word base;
#line 1402 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1402 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1402 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 1402 "prog_io_type_defn.m"
        }
#line 1398 "prog_io_type_defn.m"
      }
#line 1398 "prog_io_type_defn.m"
  }
#line 45 "prog_io_type_defn.m"
}

#line 37 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_item_7_p_0(
#line 37 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 37 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 37 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ArgTerms_10,
#line 37 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_11,
#line 37 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_12,
#line 37 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_13,
#line 37 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_14)
#line 37 "prog_io_type_defn.m"
{
#line 110 "prog_io_type_defn.m"
  {
#line 110 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 110 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeDefnTerm_15;
#line 110 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_23_23;

#line 110 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 110 "prog_io_type_defn.m"
      {
#line 110 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TypeDefnTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_10, (MR_Integer) 0)));
#line 110 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_10, (MR_Integer) 1)));
#line 110 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "prog_io_type_defn.m"
      }
#line 110 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 111 "prog_io_type_defn.m"
      {
#line 111 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__Name_16;
#line 111 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_19;
#line 111 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__BodyTerm_20;
#line 112 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefnArgTerms_17;
#line 112 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 112 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 112 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 112 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 112 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__TypeDefnTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 112 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 112 "prog_io_type_defn.m"
          {
#line 112 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_15, (MR_Integer) 0)));
#line 112 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__TypeDefnArgTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_15, (MR_Integer) 1)));
#line 112 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_15, (MR_Integer) 2)));
#line 112 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 112 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 112 "prog_io_type_defn.m"
              {
#line 112 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, (MR_Integer) 0)));
#line 115 "prog_io_type_defn.m"
                if ((strcmp(parse_tree__prog_io_type_defn__Name_16, (MR_String) "==") == 0))
#line 115 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 115 "prog_io_type_defn.m"
                else
#line 115 "prog_io_type_defn.m"
                if ((strcmp(parse_tree__prog_io_type_defn__Name_16, (MR_String) "--->") == 0))
#line 114 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 115 "prog_io_type_defn.m"
                else
#line 115 "prog_io_type_defn.m"
                if ((strcmp(parse_tree__prog_io_type_defn__Name_16, (MR_String) "where") == 0))
#line 116 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 115 "prog_io_type_defn.m"
                else
#line 115 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = MR_FALSE;
#line 112 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 112 "prog_io_type_defn.m"
                  {
#line 113 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__TypeDefnArgTerms_17)) == (MR_mktag((MR_Integer) 1)));
#line 113 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 113 "prog_io_type_defn.m"
                      {
#line 113 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefnArgTerms_17, (MR_Integer) 0)));
#line 113 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefnArgTerms_17, (MR_Integer) 1)));
#line 113 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 113 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 113 "prog_io_type_defn.m"
                          {
#line 113 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__BodyTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, (MR_Integer) 0)));
#line 113 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, (MR_Integer) 1)));
#line 113 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "prog_io_type_defn.m"
                          }
#line 113 "prog_io_type_defn.m"
                      }
#line 112 "prog_io_type_defn.m"
                  }
#line 112 "prog_io_type_defn.m"
              }
#line 112 "prog_io_type_defn.m"
          }
#line 111 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 123 "prog_io_type_defn.m"
          if ((strcmp(parse_tree__prog_io_type_defn__Name_16, (MR_String) "==") == 0))
#line 125 "prog_io_type_defn.m"
            {
#line 125 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_19, parse_tree__prog_io_type_defn__BodyTerm_20, parse_tree__prog_io_type_defn__Context_11, parse_tree__prog_io_type_defn__SeqNum_12, parse_tree__prog_io_type_defn__IsSolverType_13, parse_tree__prog_io_type_defn__MaybeIOM_14);
            }
#line 123 "prog_io_type_defn.m"
          else
#line 123 "prog_io_type_defn.m"
          if ((strcmp(parse_tree__prog_io_type_defn__Name_16, (MR_String) "--->") == 0))
#line 121 "prog_io_type_defn.m"
            {
#line 121 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_19, parse_tree__prog_io_type_defn__BodyTerm_20, parse_tree__prog_io_type_defn__Context_11, parse_tree__prog_io_type_defn__SeqNum_12, parse_tree__prog_io_type_defn__IsSolverType_13, parse_tree__prog_io_type_defn__MaybeIOM_14);
            }
#line 123 "prog_io_type_defn.m"
          else
#line 129 "prog_io_type_defn.m"
            {
#line 129 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_19, parse_tree__prog_io_type_defn__BodyTerm_20, parse_tree__prog_io_type_defn__Context_11, parse_tree__prog_io_type_defn__SeqNum_12, parse_tree__prog_io_type_defn__IsSolverType_13, parse_tree__prog_io_type_defn__MaybeIOM_14);
            }
#line 111 "prog_io_type_defn.m"
        else
#line 802 "prog_io_type_defn.m"
          {
#line 802 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_61;

#line 803 "prog_io_type_defn.m"
            {
#line 803 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__TypeDefnTerm_15, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_61);
            }
#line 807 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_61)) == (MR_mktag((MR_Integer) 0))))
#line 805 "prog_io_type_defn.m"
              {
#line 805 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));

#line 806 "prog_io_type_defn.m"
                {
#line 806 "prog_io_type_defn.m"
                  MR_Word base;
#line 806 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 806 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeIOM_14 = base;
#line 806 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_62));
#line 806 "prog_io_type_defn.m"
                }
#line 805 "prog_io_type_defn.m"
              }
#line 807 "prog_io_type_defn.m"
            else
#line 808 "prog_io_type_defn.m"
              {
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Name_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 0)));
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Params_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_61, (MR_Integer) 1)));
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_65;
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__AbstractTypeDetails_66;
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_67;
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_68;
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_69;
#line 808 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_70_70;

#line 809 "prog_io_type_defn.m"
                {
#line 809 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_65);
                }
#line 813 "prog_io_type_defn.m"
#line 813 "prog_io_type_defn.m"
                switch (parse_tree__prog_io_type_defn__IsSolverType_13) {
#line 813 "prog_io_type_defn.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 813 "prog_io_type_defn.m"
                  case (MR_Integer) 0:
#line 812 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 813 "prog_io_type_defn.m"
                    break;
#line 813 "prog_io_type_defn.m"
                  case (MR_Integer) 1:
#line 815 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__AbstractTypeDetails_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 813 "prog_io_type_defn.m"
                    break;
#line 813 "prog_io_type_defn.m"
                }
#line 817 "prog_io_type_defn.m"
                {
#line 817 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 817 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__AbstractTypeDetails_66));
#line 817 "prog_io_type_defn.m"
                }
#line 818 "prog_io_type_defn.m"
                {
#line 818 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 818 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_63));
#line 818 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_68, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_64));
#line 818 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_68, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_67));
#line 818 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_68, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_65));
#line 818 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_68, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_11));
#line 818 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_68, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_12));
#line 818 "prog_io_type_defn.m"
                }
#line 820 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Item_69 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_68);
#line 821 "prog_io_type_defn.m"
                {
#line 821 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 821 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_69));
#line 821 "prog_io_type_defn.m"
                }
#line 821 "prog_io_type_defn.m"
                {
#line 821 "prog_io_type_defn.m"
                  MR_Word base;
#line 821 "prog_io_type_defn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeIOM_14 = base;
#line 821 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 821 "prog_io_type_defn.m"
                }
#line 808 "prog_io_type_defn.m"
              }
#line 802 "prog_io_type_defn.m"
          }
#line 111 "prog_io_type_defn.m"
      }
#line 110 "prog_io_type_defn.m"
    else
#line 140 "prog_io_type_defn.m"
      {
#line 140 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_22;
#line 140 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 140 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 140 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 142 "prog_io_type_defn.m"
        {
#line 142 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_11));
#line 142 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[154])));
#line 142 "prog_io_type_defn.m"
        }
#line 142 "prog_io_type_defn.m"
        {
#line 142 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 142 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "prog_io_type_defn.m"
        }
#line 141 "prog_io_type_defn.m"
        {
#line 141 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 141 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 141 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 141 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 141 "prog_io_type_defn.m"
        }
#line 143 "prog_io_type_defn.m"
        {
#line 143 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_22));
#line 143 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "prog_io_type_defn.m"
        }
#line 143 "prog_io_type_defn.m"
        {
#line 143 "prog_io_type_defn.m"
          MR_Word base;
#line 143 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 143 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_14 = base;
#line 143 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 143 "prog_io_type_defn.m"
        }
#line 140 "prog_io_type_defn.m"
      }
#line 110 "prog_io_type_defn.m"
  }
#line 37 "prog_io_type_defn.m"
}

#line 31 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_defn_item_6_p_0(
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ArgTerms_9,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_10,
#line 31 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_11,
#line 31 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeIOM_12)
#line 31 "prog_io_type_defn.m"
{
#line 94 "prog_io_type_defn.m"
  {
#line 94 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 94 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SubArgTerms_14;
#line 94 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SubContext_15;
#line 95 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ArgTerm_13;
#line 95 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 95 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 95 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_20_20;

#line 95 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 95 "prog_io_type_defn.m"
      {
#line 95 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_9, (MR_Integer) 0)));
#line 95 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_9, (MR_Integer) 1)));
#line 95 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 95 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 95 "prog_io_type_defn.m"
          {
#line 96 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 96 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 96 "prog_io_type_defn.m"
              {
#line 96 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ArgTerm_13, (MR_Integer) 0)));
#line 96 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__SubArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ArgTerm_13, (MR_Integer) 1)));
#line 96 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__SubContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ArgTerm_13, (MR_Integer) 2)));
#line 96 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 96 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 96 "prog_io_type_defn.m"
                  {
#line 96 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 96 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_20_20, (MR_String) "type") == 0);
#line 96 "prog_io_type_defn.m"
                  }
#line 96 "prog_io_type_defn.m"
              }
#line 95 "prog_io_type_defn.m"
          }
#line 95 "prog_io_type_defn.m"
      }
#line 94 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 98 "prog_io_type_defn.m"
      {
#line 98 "prog_io_type_defn.m"
        {
#line 98 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_item_7_p_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__SubArgTerms_14, parse_tree__prog_io_type_defn__SubContext_15, parse_tree__prog_io_type_defn__SeqNum_11, (MR_Integer) 1, parse_tree__prog_io_type_defn__MaybeIOM_12);
        }
#line 98 "prog_io_type_defn.m"
      }
#line 94 "prog_io_type_defn.m"
    else
#line 102 "prog_io_type_defn.m"
      {
#line 102 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 102 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 102 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 102 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;

#line 104 "prog_io_type_defn.m"
        {
#line 104 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_10));
#line 104 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[153])));
#line 104 "prog_io_type_defn.m"
        }
#line 104 "prog_io_type_defn.m"
        {
#line 104 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_39_39));
#line 104 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_type_defn.m"
        }
#line 103 "prog_io_type_defn.m"
        {
#line 103 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 103 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 103 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 103 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_38_38));
#line 103 "prog_io_type_defn.m"
        }
#line 105 "prog_io_type_defn.m"
        {
#line 105 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 105 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_type_defn.m"
        }
#line 105 "prog_io_type_defn.m"
        {
#line 105 "prog_io_type_defn.m"
          MR_Word base;
#line 105 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeIOM_12 = base;
#line 105 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 105 "prog_io_type_defn.m"
        }
#line 102 "prog_io_type_defn.m"
      }
#line 94 "prog_io_type_defn.m"
  }
#line 31 "prog_io_type_defn.m"
}

void mercury__parse_tree__prog_io_type_defn__init(void)
{
}

void mercury__parse_tree__prog_io_type_defn__init_type_tables(void)
{
}

void mercury__parse_tree__prog_io_type_defn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_type_defn. */
