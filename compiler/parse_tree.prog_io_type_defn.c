/*
** Automatically generated from `prog_io_type_defn.m'
** by the Mercury compiler,
** version DEV
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


#include "check_hlds.mih"
#include "hlds.mih"
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
#include "parse_tree.prog_io_mutable.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_typeclass.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 107 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 110 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 113 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 116 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0;

#line 119 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 122 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 125 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 128 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 131 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 134 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 137 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 835 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 835 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_53,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_94);

#line 826 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 826 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_41,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_78);

#line 823 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 823 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_37,
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_73);

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_33,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_67);

#line 832 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 832 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_49,
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_89);

#line 829 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 829 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_45,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_84);

#line 814 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 814 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_27,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_58);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1126 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 976 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 976 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 1370 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__check_no_free_body_vars__1370__1_2_f_0(
#line 1370 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1370 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_55);

#line 488 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__488__1_2_f_0(
#line 488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_231,
#line 488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_300);

#line 482 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__482__1_2_p_0(
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_294);

#line 460 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__460__1_2_f_0(
#line 460 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_226,
#line 460 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_284);

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__453__1_2_p_0(
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_127,
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_278);

#line 449 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__449__1_1_f_0(
#line 449 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_124);

#line 434 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__434__1_2_f_0(
#line 434 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_219,
#line 434 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_271);

#line 404 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__404__1_2_p_0(
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_260);

#line 401 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__401__1_1_f_0(
#line 401 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_58);

#line 249 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__249__1_2_p_0(
#line 249 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 249 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47);

#line 149 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_du_type_defn__149__1_2_p_0(
#line 149 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_31,
#line 149 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_74);

#line 1314 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__parse_type_defn_head__1314__1_2_f_0(
#line 1314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_119);

#line 1305 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1305__1_2_p_0(
#line 1305 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_113,
#line 1305 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_114);

#line 1386 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__get_is_solver_type_3_p_0(
#line 1386 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__IsSolverType_4,
#line 1386 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_0_7,
#line 1386 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_8);

#line 1370 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0_1(
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 1355 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0(
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ParamTVars_7,
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyType_8,
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyContext_9,
#line 1355 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Specs_10);

#line 1336 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_user_type_name_3_p_0(
#line 1336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_4,
#line 1336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_5,
#line 1336 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NameSpecs_6);

#line 1260 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1260 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1260 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5);

#line 1080 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 1071 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1071 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1071 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2);

#line 1055 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1055 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8);

#line 1044 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1044 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1044 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1044 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1039 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1021 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1021 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1021 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1021 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6);

#line 1012 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1012 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1012 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1012 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 998 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 998 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 998 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 932 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 932 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 932 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 932 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 921 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 921 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3);

#line 803 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0(
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term0_9,
#line 803 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_10);

#line 738 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 738 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 738 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 688 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 688 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18);

#line 644 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 644 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 644 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 1370 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0_1(
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 566 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0(
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_13,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 566 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 566 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 552 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 552 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 552 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 552 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 552 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NamedCtor_9);

#line 507 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 507 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5);

#line 488 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_9(
#line 488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 482 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_8(
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 478 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 478 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 478 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 460 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 460 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 460 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 449 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 449 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 434 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 434 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 434 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 404 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 401 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 401 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 401 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 390 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 390 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6);

#line 364 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11);

#line 325 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 325 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 325 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 325 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3);

#line 266 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9);

#line 249 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0_1(
#line 249 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 249 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 249 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 213 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Head_8,
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Tail_9,
#line 213 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_10);

#line 203 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_3_f_0(
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 184 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 184 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 184 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 184 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6);

#line 149 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0_1(
#line 149 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg);

#line 110 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 110 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 110 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 1314 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1314 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1314 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 1305 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1305 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1305 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1305 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[166][2];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[29][1];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[5][5];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[3][6];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[166][2] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_compare_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[9]))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of this type definition."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are duplicated in the LHS"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: variable on LHS of type definition."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have data constructors."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a solver type"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in constructor name."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in RHS of type definition."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(explicit type quantifier shadows argument type)."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "overlapping scopes"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in arguments or constraints of constructor."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "using"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be explicitly existentially quantified"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "=>"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "introduced with"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not 1."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol whose arity"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with existentially quantified type variables."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is not in the type definition."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have a"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type_is_abstract_enum."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid argument for"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes for abstract non-solver type."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where ..."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Solver type with no solver_type_details."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in solver type definition."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unknown attribute"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a ground, unconstrained inst."))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or a list of mutable declarations."))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a mutable declaration."))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed functors list in"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[62])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or contain an unrecognised attribute."))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: attributes are either badly ordered"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for non-solver type."))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type attribute given"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attributes."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions cannot have"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "representation"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[61])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: solver type definitions must have a"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[106])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "excludes other"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where type_is_abstract_noncanonical"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is reserved for the Mercury implementation."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only in the RHS of this type definition."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 125 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables:"))
  },
  /* row 131 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 132 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in variable list at"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 138 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in existential quantifier"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in class constraints,"))
  },
  /* row 143 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 148 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 149 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 151 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 152 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 153 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected functor"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "name/arity for"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
  /* row 158 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type name"))
  },
  /* row 160 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 161 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 162 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 163 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 164 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 165 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[29][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[66])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[23])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[27])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[29])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[55])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[70])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[76])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[78])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[86])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[92])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[94])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[96])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[100])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[88])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[104])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[109])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[113])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[120])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[82])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
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
    ((MR_Box) (parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0_1)),
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



#line 2122 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2130 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2138 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2146 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_solver_type_details_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0
  }
};

#line 2154 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2162 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2170 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2178 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2186 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2194 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 2202 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 897 "prog_io_type_defn.m"
{
#line 914 "prog_io_type_defn.m"
  {
#line 914 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 901 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
          {
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 901 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                  {
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                      {
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_type_defn.m"
                      }
#line 901 "prog_io_type_defn.m"
                  }
#line 901 "prog_io_type_defn.m"
              }
#line 901 "prog_io_type_defn.m"
          }
#line 901 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 902 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 902 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
          {
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
              {
#line 902 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
                  {
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 902 "prog_io_type_defn.m"
                  }
#line 902 "prog_io_type_defn.m"
              }
#line 902 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 903 "prog_io_type_defn.m"
          {
#line 903 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 996 "prog_io_type_defn.m"
            {
#line 996 "prog_io_type_defn.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__RHS_10, parse_tree__prog_io_type_defn__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 907 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 909 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 907 "prog_io_type_defn.m"
            else
#line 905 "prog_io_type_defn.m"
              {
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 906 "prog_io_type_defn.m"
                }
#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 906 "prog_io_type_defn.m"
                }
#line 905 "prog_io_type_defn.m"
              }
#line 903 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        else
#line 912 "prog_io_type_defn.m"
          {
#line 912 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[28]);
#line 912 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    else
#line 915 "prog_io_type_defn.m"
      {
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[165])));
#line 917 "prog_io_type_defn.m"
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "prog_io_type_defn.m"
        }
#line 916 "prog_io_type_defn.m"
        {
#line 916 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 916 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 918 "prog_io_type_defn.m"
        }
#line 915 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
  }
#line 897 "prog_io_type_defn.m"
}

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 897 "prog_io_type_defn.m"
{
#line 914 "prog_io_type_defn.m"
  {
#line 914 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 901 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
          {
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 901 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                  {
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                      {
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_type_defn.m"
                      }
#line 901 "prog_io_type_defn.m"
                  }
#line 901 "prog_io_type_defn.m"
              }
#line 901 "prog_io_type_defn.m"
          }
#line 901 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 902 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 902 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
          {
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
              {
#line 902 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
                  {
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 902 "prog_io_type_defn.m"
                  }
#line 902 "prog_io_type_defn.m"
              }
#line 902 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 903 "prog_io_type_defn.m"
          {
#line 903 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 903 "prog_io_type_defn.m"
            {
#line 903 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(parse_tree__prog_io_type_defn__RHS_10);
            }
#line 907 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 909 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 907 "prog_io_type_defn.m"
            else
#line 905 "prog_io_type_defn.m"
              {
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 906 "prog_io_type_defn.m"
                }
#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 906 "prog_io_type_defn.m"
                }
#line 905 "prog_io_type_defn.m"
              }
#line 903 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        else
#line 912 "prog_io_type_defn.m"
          {
#line 912 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[27]);
#line 912 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    else
#line 915 "prog_io_type_defn.m"
      {
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[165])));
#line 917 "prog_io_type_defn.m"
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "prog_io_type_defn.m"
        }
#line 916 "prog_io_type_defn.m"
        {
#line 916 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 916 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 918 "prog_io_type_defn.m"
        }
#line 915 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
  }
#line 897 "prog_io_type_defn.m"
}

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 897 "prog_io_type_defn.m"
{
#line 914 "prog_io_type_defn.m"
  {
#line 914 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 901 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
          {
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 901 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                  {
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                      {
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_type_defn.m"
                      }
#line 901 "prog_io_type_defn.m"
                  }
#line 901 "prog_io_type_defn.m"
              }
#line 901 "prog_io_type_defn.m"
          }
#line 901 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 902 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 902 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
          {
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
              {
#line 902 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
                  {
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 902 "prog_io_type_defn.m"
                  }
#line 902 "prog_io_type_defn.m"
              }
#line 902 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 903 "prog_io_type_defn.m"
          {
#line 903 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 903 "prog_io_type_defn.m"
            {
#line 903 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 907 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 909 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 907 "prog_io_type_defn.m"
            else
#line 905 "prog_io_type_defn.m"
              {
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 906 "prog_io_type_defn.m"
                }
#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 906 "prog_io_type_defn.m"
                }
#line 905 "prog_io_type_defn.m"
              }
#line 903 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        else
#line 912 "prog_io_type_defn.m"
          {
#line 912 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[26]);
#line 912 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    else
#line 915 "prog_io_type_defn.m"
      {
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[165])));
#line 917 "prog_io_type_defn.m"
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "prog_io_type_defn.m"
        }
#line 916 "prog_io_type_defn.m"
        {
#line 916 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 916 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 918 "prog_io_type_defn.m"
        }
#line 915 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
  }
#line 897 "prog_io_type_defn.m"
}

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 897 "prog_io_type_defn.m"
{
#line 914 "prog_io_type_defn.m"
  {
#line 914 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 901 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
          {
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 901 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                  {
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                      {
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_type_defn.m"
                      }
#line 901 "prog_io_type_defn.m"
                  }
#line 901 "prog_io_type_defn.m"
              }
#line 901 "prog_io_type_defn.m"
          }
#line 901 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 902 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 902 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
          {
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
              {
#line 902 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
                  {
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 902 "prog_io_type_defn.m"
                  }
#line 902 "prog_io_type_defn.m"
              }
#line 902 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 903 "prog_io_type_defn.m"
          {
#line 903 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 903 "prog_io_type_defn.m"
            {
#line 903 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 907 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 909 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 907 "prog_io_type_defn.m"
            else
#line 905 "prog_io_type_defn.m"
              {
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 906 "prog_io_type_defn.m"
                }
#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 906 "prog_io_type_defn.m"
                }
#line 905 "prog_io_type_defn.m"
              }
#line 903 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        else
#line 912 "prog_io_type_defn.m"
          {
#line 912 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[25]);
#line 912 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    else
#line 915 "prog_io_type_defn.m"
      {
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[165])));
#line 917 "prog_io_type_defn.m"
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "prog_io_type_defn.m"
        }
#line 916 "prog_io_type_defn.m"
        {
#line 916 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 916 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 918 "prog_io_type_defn.m"
        }
#line 915 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
  }
#line 897 "prog_io_type_defn.m"
}

#line 835 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 835 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_53,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_94)
#line 835 "prog_io_type_defn.m"
{
#line 835 "prog_io_type_defn.m"
  {
#line 835 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 835 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_95;

#line 835 "prog_io_type_defn.m"
    {
#line 835 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_95 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_100_100, parse_tree__prog_io_type_defn__V_101_101, parse_tree__prog_io_type_defn__HeadVar__1_53, parse_tree__prog_io_type_defn__HeadVar__3_94);
    }
#line 835 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_95;
#line 835 "prog_io_type_defn.m"
  }
#line 835 "prog_io_type_defn.m"
}

#line 826 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 826 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_41,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_78)
#line 826 "prog_io_type_defn.m"
{
#line 826 "prog_io_type_defn.m"
  {
#line 826 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 826 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_79;

#line 826 "prog_io_type_defn.m"
    {
#line 826 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_79 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_100_100, parse_tree__prog_io_type_defn__HeadVar__1_41, parse_tree__prog_io_type_defn__HeadVar__3_78);
    }
#line 826 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_79;
#line 826 "prog_io_type_defn.m"
  }
#line 826 "prog_io_type_defn.m"
}

#line 823 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 823 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_37,
#line 823 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_73)
#line 823 "prog_io_type_defn.m"
{
#line 823 "prog_io_type_defn.m"
  {
#line 823 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 823 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_74;

#line 823 "prog_io_type_defn.m"
    {
#line 823 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_74 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_37, parse_tree__prog_io_type_defn__HeadVar__3_73);
    }
#line 823 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_74;
#line 823 "prog_io_type_defn.m"
  }
#line 823 "prog_io_type_defn.m"
}

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_33,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_67)
#line 820 "prog_io_type_defn.m"
{
#line 820 "prog_io_type_defn.m"
  {
#line 820 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 820 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_68;

#line 820 "prog_io_type_defn.m"
    {
#line 820 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_68 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_33, parse_tree__prog_io_type_defn__HeadVar__3_67);
    }
#line 820 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_68;
#line 820 "prog_io_type_defn.m"
  }
#line 820 "prog_io_type_defn.m"
}

#line 832 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 832 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_49,
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_89)
#line 832 "prog_io_type_defn.m"
{
#line 832 "prog_io_type_defn.m"
  {
#line 832 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 832 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_90;

#line 832 "prog_io_type_defn.m"
    {
#line 832 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_90 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_100_100, parse_tree__prog_io_type_defn__V_101_101, parse_tree__prog_io_type_defn__HeadVar__1_49, parse_tree__prog_io_type_defn__HeadVar__3_89);
    }
#line 832 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_90;
#line 832 "prog_io_type_defn.m"
  }
#line 832 "prog_io_type_defn.m"
}

#line 829 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_100_100,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 829 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_45,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_84)
#line 829 "prog_io_type_defn.m"
{
#line 829 "prog_io_type_defn.m"
  {
#line 829 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 829 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_85;

#line 829 "prog_io_type_defn.m"
    {
#line 829 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_85 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_100_100, parse_tree__prog_io_type_defn__V_101_101, parse_tree__prog_io_type_defn__HeadVar__1_45, parse_tree__prog_io_type_defn__HeadVar__3_84);
    }
#line 829 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_85;
#line 829 "prog_io_type_defn.m"
  }
#line 829 "prog_io_type_defn.m"
}

#line 814 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_101_101,
#line 814 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_27,
#line 814 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_58)
#line 814 "prog_io_type_defn.m"
{
#line 814 "prog_io_type_defn.m"
  {
#line 814 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 814 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_59;

#line 814 "prog_io_type_defn.m"
    {
#line 814 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__4_59 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_101_101, parse_tree__prog_io_type_defn__HeadVar__1_27, parse_tree__prog_io_type_defn__HeadVar__3_58);
    }
#line 814 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_59;
#line 814 "prog_io_type_defn.m"
  }
#line 814 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[28]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_49_52_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[27]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[27]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_51_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[26]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[25]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 897 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 897 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 897 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 897 "prog_io_type_defn.m"
{
#line 914 "prog_io_type_defn.m"
  {
#line 914 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 914 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 901 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 901 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 901 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
      {
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 901 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
          {
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 901 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
              {
#line 901 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                  {
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 901 "prog_io_type_defn.m"
                      {
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 901 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_type_defn.m"
                      }
#line 901 "prog_io_type_defn.m"
                  }
#line 901 "prog_io_type_defn.m"
              }
#line 901 "prog_io_type_defn.m"
          }
#line 901 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
      {
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 902 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 902 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 902 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
          {
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 902 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
              {
#line 902 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 902 "prog_io_type_defn.m"
                  {
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 902 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 902 "prog_io_type_defn.m"
                  }
#line 902 "prog_io_type_defn.m"
              }
#line 902 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 903 "prog_io_type_defn.m"
          {
#line 903 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 973 "prog_io_type_defn.m"
            {
#line 973 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10, &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 907 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 909 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 907 "prog_io_type_defn.m"
            else
#line 905 "prog_io_type_defn.m"
              {
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 905 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 906 "prog_io_type_defn.m"
                }
#line 906 "prog_io_type_defn.m"
                {
#line 906 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 906 "prog_io_type_defn.m"
                }
#line 905 "prog_io_type_defn.m"
              }
#line 903 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
        else
#line 912 "prog_io_type_defn.m"
          {
#line 912 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[23]);
#line 912 "prog_io_type_defn.m"
          }
#line 911 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    else
#line 915 "prog_io_type_defn.m"
      {
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 915 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[165])));
#line 917 "prog_io_type_defn.m"
        }
#line 917 "prog_io_type_defn.m"
        {
#line 917 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 917 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "prog_io_type_defn.m"
        }
#line 916 "prog_io_type_defn.m"
        {
#line 916 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 916 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 916 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_type_defn.m"
        }
#line 918 "prog_io_type_defn.m"
        {
#line 918 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 918 "prog_io_type_defn.m"
        }
#line 915 "prog_io_type_defn.m"
      }
#line 914 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 914 "prog_io_type_defn.m"
  }
#line 897 "prog_io_type_defn.m"
}

#line 1126 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1126 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1126 "prog_io_type_defn.m"
{
#line 1139 "prog_io_type_defn.m"
  {
#line 1139 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1139 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;

#line 1139 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "prog_io_type_defn.m"
#line 1237 "prog_io_type_defn.m"
      switch (parse_tree__prog_io_type_defn__IsSolverType_14) {
#line 1237 "prog_io_type_defn.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1237 "prog_io_type_defn.m"
        case (MR_Integer) 0:
#line 1253 "prog_io_type_defn.m"
          {
#line 1240 "prog_io_type_defn.m"
            {
#line 1240 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 1240 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1240 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1240 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1240 "prog_io_type_defn.m"
            }
#line 1241 "prog_io_type_defn.m"
            if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1241 "prog_io_type_defn.m"
              {
#line 1241 "prog_io_type_defn.m"
                {
#line 1241 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1241 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__InitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1241 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1241 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__InitialisationIs_17, (MR_Integer) 0)));
#line 1241 "prog_io_type_defn.m"
                }
#line 1241 "prog_io_type_defn.m"
                if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1241 "prog_io_type_defn.m"
                  {
#line 1242 "prog_io_type_defn.m"
                    {
#line 1242 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 1242 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__GroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1242 "prog_io_type_defn.m"
                      if (parse_tree__prog_io_type_defn__succeeded)
#line 1242 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__GroundIs_18, (MR_Integer) 0)));
#line 1242 "prog_io_type_defn.m"
                    }
#line 1241 "prog_io_type_defn.m"
                    if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1241 "prog_io_type_defn.m"
                      {
#line 1243 "prog_io_type_defn.m"
                        {
#line 1243 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 1243 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__AnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1243 "prog_io_type_defn.m"
                          if (parse_tree__prog_io_type_defn__succeeded)
#line 1243 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__AnyIs_19, (MR_Integer) 0)));
#line 1243 "prog_io_type_defn.m"
                        }
#line 1241 "prog_io_type_defn.m"
                        if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1244 "prog_io_type_defn.m"
                          {
#line 1244 "prog_io_type_defn.m"
                            MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 1244 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__CStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1244 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1244 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__CStoreIs_20, (MR_Integer) 0)));
#line 1244 "prog_io_type_defn.m"
                          }
#line 1241 "prog_io_type_defn.m"
                      }
#line 1241 "prog_io_type_defn.m"
                  }
#line 1241 "prog_io_type_defn.m"
              }
#line 1253 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1248 "prog_io_type_defn.m"
              {
#line 1248 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1248 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1248 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1248 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 1248 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_168;

#line 1250 "prog_io_type_defn.m"
                {
#line 1250 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                }
#line 1250 "prog_io_type_defn.m"
                {
#line 1250 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1250 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[161])));
#line 1250 "prog_io_type_defn.m"
                }
#line 1251 "prog_io_type_defn.m"
                {
#line 1251 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1251 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1251 "prog_io_type_defn.m"
                }
#line 1249 "prog_io_type_defn.m"
                {
#line 1249 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1249 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1249 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1249 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1249 "prog_io_type_defn.m"
                }
#line 1252 "prog_io_type_defn.m"
                {
#line 1252 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_168));
#line 1252 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1252 "prog_io_type_defn.m"
                }
#line 1252 "prog_io_type_defn.m"
                {
#line 1252 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 1252 "prog_io_type_defn.m"
                }
#line 1248 "prog_io_type_defn.m"
              }
#line 1253 "prog_io_type_defn.m"
            else
#line 1254 "prog_io_type_defn.m"
              {
#line 1254 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeUC_51;

#line 1254 "prog_io_type_defn.m"
                {
#line 1254 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeUC_51 = parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(parse_tree__prog_io_type_defn__EqualityIs_21, parse_tree__prog_io_type_defn__ComparisonIs_22);
                }
#line 1255 "prog_io_type_defn.m"
                {
#line 1255 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1255 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUC_51));
#line 1255 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgIs_23));
#line 1255 "prog_io_type_defn.m"
                }
#line 1254 "prog_io_type_defn.m"
              }
#line 1253 "prog_io_type_defn.m"
          }
#line 1237 "prog_io_type_defn.m"
          break;
#line 1237 "prog_io_type_defn.m"
        case (MR_Integer) 1:
#line 1176 "prog_io_type_defn.m"
          {
#line 1168 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1168 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__DirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1168 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1168 "prog_io_type_defn.m"
              {
#line 1168 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__DirectArgIs_23, (MR_Integer) 0)));
#line 1171 "prog_io_type_defn.m"
                {
#line 1171 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1171 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1171 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1171 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 1171 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_156;

#line 1173 "prog_io_type_defn.m"
                  {
#line 1173 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_87_87 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                  }
#line 1173 "prog_io_type_defn.m"
                  {
#line 1173 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_87_87));
#line 1173 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[162])));
#line 1173 "prog_io_type_defn.m"
                  }
#line 1174 "prog_io_type_defn.m"
                  {
#line 1174 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 1174 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "prog_io_type_defn.m"
                  }
#line 1172 "prog_io_type_defn.m"
                  {
#line 1172 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1172 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1172 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 1172 "prog_io_type_defn.m"
                  }
#line 1175 "prog_io_type_defn.m"
                  {
#line 1175 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_156));
#line 1175 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1175 "prog_io_type_defn.m"
                  }
#line 1175 "prog_io_type_defn.m"
                  {
#line 1175 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 1175 "prog_io_type_defn.m"
                  }
#line 1171 "prog_io_type_defn.m"
                }
#line 1168 "prog_io_type_defn.m"
              }
#line 1168 "prog_io_type_defn.m"
            else
#line 1224 "prog_io_type_defn.m"
              {
#line 1224 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__RepnType_31;
#line 1224 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeInitialisation_32;
#line 1224 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeGroundInst_33;
#line 1224 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeAnyInst_34;
#line 1224 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_35;
#line 1224 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_36;
#line 1224 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfos_37;

#line 1177 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1177 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1177 "prog_io_type_defn.m"
                  {
#line 1177 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__RepnType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1178 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeInitialisation_32 = parse_tree__prog_io_type_defn__InitialisationIs_17;
#line 1179 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeGroundInst_33 = parse_tree__prog_io_type_defn__GroundIs_18;
#line 1180 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeAnyInst_34 = parse_tree__prog_io_type_defn__AnyIs_19;
#line 1181 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeEqPred_35 = parse_tree__prog_io_type_defn__EqualityIs_21;
#line 1182 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeCmpPred_36 = parse_tree__prog_io_type_defn__ComparisonIs_22;
#line 1183 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeMutableInfos_37 = parse_tree__prog_io_type_defn__CStoreIs_20;
#line 1183 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 1177 "prog_io_type_defn.m"
                  }
#line 1224 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1190 "prog_io_type_defn.m"
                  {
#line 1190 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GroundInst_38;
#line 1190 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__AnyInst_39;
#line 1190 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MutableInfos_40;
#line 1190 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__HowToInit_42;
#line 1190 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_43;
#line 1190 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44;
#line 1190 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeUnifyCompare_45;

#line 1187 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeGroundInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "prog_io_type_defn.m"
                      {
#line 1189 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__GroundInst_38 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1187 "prog_io_type_defn.m"
                    else
#line 1186 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__GroundInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundInst_33, (MR_Integer) 0)));
#line 1193 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeAnyInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "prog_io_type_defn.m"
                      {
#line 1195 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyInst_39 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1193 "prog_io_type_defn.m"
                    else
#line 1192 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyInst_34, (MR_Integer) 0)));
#line 1199 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeMutableInfos_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1199 "prog_io_type_defn.m"
                    else
#line 1198 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeMutableInfos_37, (MR_Integer) 0)));
#line 1206 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeInitialisation_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1208 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1206 "prog_io_type_defn.m"
                    else
#line 1204 "prog_io_type_defn.m"
                      {
#line 1204 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__InitPred_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisation_32, (MR_Integer) 0)));

#line 1205 "prog_io_type_defn.m"
                        {
#line 1205 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HowToInit_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__InitPred_41));
#line 1205 "prog_io_type_defn.m"
                        }
#line 1204 "prog_io_type_defn.m"
                      }
#line 1210 "prog_io_type_defn.m"
                    {
#line 1210 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__SolverTypeDetails_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__RepnType_31));
#line 1210 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HowToInit_42));
#line 1210 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__GroundInst_38));
#line 1210 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__AnyInst_39));
#line 1210 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__MutableInfos_40));
#line 1210 "prog_io_type_defn.m"
                    }
#line 1212 "prog_io_type_defn.m"
                    {
#line 1212 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_43));
#line 1212 "prog_io_type_defn.m"
                    }
#line 1214 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1215 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1217 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1218 "prog_io_type_defn.m"
                    else
#line 1219 "prog_io_type_defn.m"
                      {
#line 1219 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_94_94;

#line 1219 "prog_io_type_defn.m"
                        {
#line 1219 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_35));
#line 1219 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_36));
#line 1219 "prog_io_type_defn.m"
                        }
#line 1219 "prog_io_type_defn.m"
                        {
#line 1219 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeUnifyCompare_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_94_94));
#line 1219 "prog_io_type_defn.m"
                        }
#line 1219 "prog_io_type_defn.m"
                      }
#line 1222 "prog_io_type_defn.m"
                    {
#line 1222 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44));
#line 1222 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUnifyCompare_45));
#line 1222 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "prog_io_type_defn.m"
                    }
#line 1190 "prog_io_type_defn.m"
                  }
#line 1224 "prog_io_type_defn.m"
                else
#line 1233 "prog_io_type_defn.m"
                  {
#line 1225 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1228 "prog_io_type_defn.m"
                      {
#line 1228 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_109_109;
#line 1228 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_110_110;
#line 1228 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_111_111;
#line 1228 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 1228 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_158;

#line 1230 "prog_io_type_defn.m"
                        {
#line 1230 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_111_111 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                        }
#line 1230 "prog_io_type_defn.m"
                        {
#line 1230 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_111_111));
#line 1230 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[163])));
#line 1230 "prog_io_type_defn.m"
                        }
#line 1231 "prog_io_type_defn.m"
                        {
#line 1231 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_110_110));
#line 1231 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "prog_io_type_defn.m"
                        }
#line 1229 "prog_io_type_defn.m"
                        {
#line 1229 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1229 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1229 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_109_109));
#line 1229 "prog_io_type_defn.m"
                        }
#line 1232 "prog_io_type_defn.m"
                        {
#line 1232 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_158));
#line 1232 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1232 "prog_io_type_defn.m"
                        }
#line 1232 "prog_io_type_defn.m"
                        {
#line 1232 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 1232 "prog_io_type_defn.m"
                        }
#line 1228 "prog_io_type_defn.m"
                      }
#line 1233 "prog_io_type_defn.m"
                    else
#line 1234 "prog_io_type_defn.m"
                      {
#line 1234 "prog_io_type_defn.m"
                        {
#line 1234 "prog_io_type_defn.m"
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_type_defn", (MR_String) "function \140parse_tree.prog_io_type_defn.make_maybe_where_details_2\'/12", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                        }
#line 1234 "prog_io_type_defn.m"
                      }
#line 1233 "prog_io_type_defn.m"
                  }
#line 1224 "prog_io_type_defn.m"
              }
#line 1176 "prog_io_type_defn.m"
          }
#line 1237 "prog_io_type_defn.m"
          break;
#line 1237 "prog_io_type_defn.m"
      }
#line 1139 "prog_io_type_defn.m"
    else
#line 1154 "prog_io_type_defn.m"
      {
#line 1143 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1143 "prog_io_type_defn.m"
          {
#line 1144 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__InitialisationIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1143 "prog_io_type_defn.m"
              {
#line 1145 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__GroundIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1143 "prog_io_type_defn.m"
                  {
#line 1146 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__AnyIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1143 "prog_io_type_defn.m"
                      {
#line 1147 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1143 "prog_io_type_defn.m"
                          {
#line 1148 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1143 "prog_io_type_defn.m"
                              {
#line 1149 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__CStoreIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1150 "prog_io_type_defn.m"
                                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__DirectArgIs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "prog_io_type_defn.m"
                              }
#line 1143 "prog_io_type_defn.m"
                          }
#line 1143 "prog_io_type_defn.m"
                      }
#line 1143 "prog_io_type_defn.m"
                  }
#line 1143 "prog_io_type_defn.m"
              }
#line 1143 "prog_io_type_defn.m"
          }
#line 1154 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1152 "prog_io_type_defn.m"
          {
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_124_124;
#line 1152 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_125_125;

#line 1153 "prog_io_type_defn.m"
            {
#line 1153 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__IsSolverType_14));
#line 1153 "prog_io_type_defn.m"
            }
#line 1153 "prog_io_type_defn.m"
            {
#line 1153 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_125_125));
#line 1153 "prog_io_type_defn.m"
            }
#line 1153 "prog_io_type_defn.m"
            {
#line 1153 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_124_124));
#line 1153 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "prog_io_type_defn.m"
            }
#line 1152 "prog_io_type_defn.m"
          }
#line 1154 "prog_io_type_defn.m"
        else
#line 1158 "prog_io_type_defn.m"
          {
#line 1158 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 1158 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_146_146;
#line 1158 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_147_147;
#line 1158 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_148_148;
#line 1158 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_153_153;

#line 1160 "prog_io_type_defn.m"
            {
#line 1160 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_148_148 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
            }
#line 1160 "prog_io_type_defn.m"
            {
#line 1160 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_148_148));
#line 1160 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[164])));
#line 1160 "prog_io_type_defn.m"
            }
#line 1160 "prog_io_type_defn.m"
            {
#line 1160 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_147_147));
#line 1160 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1160 "prog_io_type_defn.m"
            }
#line 1159 "prog_io_type_defn.m"
            {
#line 1159 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1159 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_146_146));
#line 1159 "prog_io_type_defn.m"
            }
#line 1161 "prog_io_type_defn.m"
            {
#line 1161 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "prog_io_type_defn.m"
            }
#line 1161 "prog_io_type_defn.m"
            {
#line 1161 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_153_153));
#line 1161 "prog_io_type_defn.m"
            }
#line 1158 "prog_io_type_defn.m"
          }
#line 1154 "prog_io_type_defn.m"
      }
#line 1139 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1139 "prog_io_type_defn.m"
  }
#line 1126 "prog_io_type_defn.m"
}

#line 976 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 976 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 976 "prog_io_type_defn.m"
{
#line 984 "prog_io_type_defn.m"
  {
#line 984 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 984 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInst_6;
#line 984 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Inst_7;

#line 980 "prog_io_type_defn.m"
    {
#line 980 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Inst_7);
    }
#line 980 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 980 "prog_io_type_defn.m"
      {
#line 981 "prog_io_type_defn.m"
        {
#line 981 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_io_type_defn__Inst_7);
        }
#line 981 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 980 "prog_io_type_defn.m"
      }
#line 984 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 983 "prog_io_type_defn.m"
      {
#line 983 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 983 "prog_io_type_defn.m"
        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Inst_7));
#line 983 "prog_io_type_defn.m"
      }
#line 984 "prog_io_type_defn.m"
    else
#line 985 "prog_io_type_defn.m"
      {
#line 985 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_9;
#line 985 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 985 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 985 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 985 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 987 "prog_io_type_defn.m"
        {
#line 987 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 987 "prog_io_type_defn.m"
        {
#line 987 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 987 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 987 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[160])));
#line 987 "prog_io_type_defn.m"
        }
#line 987 "prog_io_type_defn.m"
        {
#line 987 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_19_19));
#line 987 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "prog_io_type_defn.m"
        }
#line 986 "prog_io_type_defn.m"
        {
#line 986 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 986 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 986 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 986 "prog_io_type_defn.m"
        }
#line 988 "prog_io_type_defn.m"
        {
#line 988 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_9));
#line 988 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 988 "prog_io_type_defn.m"
        }
#line 988 "prog_io_type_defn.m"
        {
#line 988 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 988 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 988 "prog_io_type_defn.m"
        }
#line 985 "prog_io_type_defn.m"
      }
#line 984 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeInst_6;
#line 984 "prog_io_type_defn.m"
  }
#line 976 "prog_io_type_defn.m"
}

#line 863 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 863 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 863 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 863 "prog_io_type_defn.m"
{
#line 871 "prog_io_type_defn.m"
  {
#line 871 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 871 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_type_defn.m"
      {
#line 869 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[12]);
#line 868 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
    else
#line 872 "prog_io_type_defn.m"
      {
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 872 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 878 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 874 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 874 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 874 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
          {
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 874 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
              {
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 874 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                  {
#line 874 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                      {
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 874 "prog_io_type_defn.m"
                          {
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 874 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "prog_io_type_defn.m"
                          }
#line 874 "prog_io_type_defn.m"
                      }
#line 874 "prog_io_type_defn.m"
                  }
#line 874 "prog_io_type_defn.m"
              }
#line 874 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 876 "prog_io_type_defn.m"
          {
#line 876 "prog_io_type_defn.m"
            {
#line 876 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 877 "prog_io_type_defn.m"
            {
#line 877 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 877 "prog_io_type_defn.m"
            }
#line 876 "prog_io_type_defn.m"
          }
#line 878 "prog_io_type_defn.m"
        else
#line 879 "prog_io_type_defn.m"
          {
#line 879 "prog_io_type_defn.m"
            {
#line 879 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__Term_9);
            }
#line 880 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "prog_io_type_defn.m"
          }
#line 885 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 884 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "prog_io_type_defn.m"
        else
#line 885 "prog_io_type_defn.m"
          {
#line 885 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 885 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 885 "prog_io_type_defn.m"
            else
#line 890 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 885 "prog_io_type_defn.m"
          }
#line 872 "prog_io_type_defn.m"
      }
#line 871 "prog_io_type_defn.m"
  }
#line 863 "prog_io_type_defn.m"
}

#line 1370 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__check_no_free_body_vars__1370__1_2_f_0(
#line 1370 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1370 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_55)
#line 1370 "prog_io_type_defn.m"
{
#line 1370 "prog_io_type_defn.m"
  {
#line 1370 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1370 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_56;

#line 1370 "prog_io_type_defn.m"
    {
#line 1370 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_56 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__TVarSet_6, parse_tree__prog_io_type_defn__HeadVar__2_55);
    }
#line 1370 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_56;
#line 1370 "prog_io_type_defn.m"
  }
#line 1370 "prog_io_type_defn.m"
}

#line 488 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__488__1_2_f_0(
#line 488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_231,
#line 488 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_300)
#line 488 "prog_io_type_defn.m"
{
#line 488 "prog_io_type_defn.m"
  {
#line 488 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 488 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_301;

#line 488 "prog_io_type_defn.m"
    {
#line 488 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_301 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_231, parse_tree__prog_io_type_defn__HeadVar__2_300);
    }
#line 488 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_301;
#line 488 "prog_io_type_defn.m"
  }
#line 488 "prog_io_type_defn.m"
}

#line 482 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__482__1_2_p_0(
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 482 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_294)
#line 482 "prog_io_type_defn.m"
{
#line 482 "prog_io_type_defn.m"
  {
#line 482 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 482 "prog_io_type_defn.m"
    {
#line 482 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_294)));
    }
#line 482 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 482 "prog_io_type_defn.m"
  }
#line 482 "prog_io_type_defn.m"
}

#line 460 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__460__1_2_f_0(
#line 460 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_226,
#line 460 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_284)
#line 460 "prog_io_type_defn.m"
{
#line 460 "prog_io_type_defn.m"
  {
#line 460 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 460 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_285;

#line 460 "prog_io_type_defn.m"
    {
#line 460 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_285 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_226, parse_tree__prog_io_type_defn__HeadVar__2_284);
    }
#line 460 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_285;
#line 460 "prog_io_type_defn.m"
  }
#line 460 "prog_io_type_defn.m"
}

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__453__1_2_p_0(
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_127,
#line 453 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_278)
#line 453 "prog_io_type_defn.m"
{
#line 453 "prog_io_type_defn.m"
  {
#line 453 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 453 "prog_io_type_defn.m"
    {
#line 453 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_127, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_278)));
    }
#line 453 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 453 "prog_io_type_defn.m"
  }
#line 453 "prog_io_type_defn.m"
}

#line 449 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__449__1_1_f_0(
#line 449 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_124)
#line 449 "prog_io_type_defn.m"
{
#line 449 "prog_io_type_defn.m"
  {
#line 449 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__2_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 1)));
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 0)));
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 2)));
#line 449 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_124, (MR_Integer) 3)));

#line 449 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__LambdaHeadVar__2_125;
#line 449 "prog_io_type_defn.m"
  }
#line 449 "prog_io_type_defn.m"
}

#line 434 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__434__1_2_f_0(
#line 434 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_219,
#line 434 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_271)
#line 434 "prog_io_type_defn.m"
{
#line 434 "prog_io_type_defn.m"
  {
#line 434 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 434 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_272;

#line 434 "prog_io_type_defn.m"
    {
#line 434 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_272 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_219, parse_tree__prog_io_type_defn__HeadVar__2_271);
    }
#line 434 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_272;
#line 434 "prog_io_type_defn.m"
  }
#line 434 "prog_io_type_defn.m"
}

#line 404 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__404__1_2_p_0(
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 404 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_260)
#line 404 "prog_io_type_defn.m"
{
#line 404 "prog_io_type_defn.m"
  {
#line 404 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 404 "prog_io_type_defn.m"
    {
#line 404 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_61, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_260)));
    }
#line 404 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 404 "prog_io_type_defn.m"
  }
#line 404 "prog_io_type_defn.m"
}

#line 401 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__401__1_1_f_0(
#line 401 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__1_58)
#line 401 "prog_io_type_defn.m"
{
#line 401 "prog_io_type_defn.m"
  {
#line 401 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 401 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LambdaHeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 1)));
#line 401 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 0)));
#line 401 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 2)));
#line 401 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LambdaHeadVar__1_58, (MR_Integer) 3)));

#line 401 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__LambdaHeadVar__2_59;
#line 401 "prog_io_type_defn.m"
  }
#line 401 "prog_io_type_defn.m"
}

#line 249 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__249__1_2_p_0(
#line 249 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 249 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47)
#line 249 "prog_io_type_defn.m"
{
#line 249 "prog_io_type_defn.m"
  {
#line 249 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 249 "prog_io_type_defn.m"
    {
#line 249 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__2_47);
    }
#line 249 "prog_io_type_defn.m"
  }
#line 249 "prog_io_type_defn.m"
}

#line 149 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_du_type_defn__149__1_2_p_0(
#line 149 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_31,
#line 149 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_74)
#line 149 "prog_io_type_defn.m"
{
#line 149 "prog_io_type_defn.m"
  {
#line 149 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 149 "prog_io_type_defn.m"
    {
#line 149 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[2], ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_31)), ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_74)));
    }
#line 149 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 149 "prog_io_type_defn.m"
  }
#line 149 "prog_io_type_defn.m"
}

#line 1314 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__parse_type_defn_head__1314__1_2_f_0(
#line 1314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_119)
#line 1314 "prog_io_type_defn.m"
{
#line 1314 "prog_io_type_defn.m"
  {
#line 1314 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1314 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_120;

#line 1314 "prog_io_type_defn.m"
    {
#line 1314 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_120 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadVar__2_119);
    }
#line 1314 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_120;
#line 1314 "prog_io_type_defn.m"
  }
#line 1314 "prog_io_type_defn.m"
}

#line 1305 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1305__1_2_p_0(
#line 1305 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_113,
#line 1305 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_114)
#line 1305 "prog_io_type_defn.m"
{
#line 1305 "prog_io_type_defn.m"
  {
#line 1305 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1305 "prog_io_type_defn.m"
    {
#line 1305 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_113, parse_tree__prog_io_type_defn__HeadVar__2_114);
    }
#line 1305 "prog_io_type_defn.m"
  }
#line 1305 "prog_io_type_defn.m"
}

#line 1386 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__get_is_solver_type_3_p_0(
#line 1386 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__IsSolverType_4,
#line 1386 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_0_7,
#line 1386 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_8)
#line 1386 "prog_io_type_defn.m"
{
#line 1392 "prog_io_type_defn.m"
  {
#line 1392 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_0_7)) == (MR_mktag((MR_Integer) 1)));
#line 1392 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_9;
#line 1390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_10_10;
#line 1390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 1390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_6_6;

#line 1390 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1390 "prog_io_type_defn.m"
      {
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_0_7, (MR_Integer) 0)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_0_7, (MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_10_10, (MR_Integer) 0)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_10_10, (MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1390 "prog_io_type_defn.m"
      }
#line 1392 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1391 "prog_io_type_defn.m"
      {
#line 1391 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_8 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_9;
#line 1391 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__IsSolverType_4 = (MR_Integer) 1;
#line 1391 "prog_io_type_defn.m"
      }
#line 1392 "prog_io_type_defn.m"
    else
#line 1393 "prog_io_type_defn.m"
      {
#line 1393 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__IsSolverType_4 = (MR_Integer) 0;
#line 1393 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_8 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_0_7;
#line 1393 "prog_io_type_defn.m"
      }
#line 1392 "prog_io_type_defn.m"
  }
#line 1386 "prog_io_type_defn.m"
}

#line 1370 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0_1(
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 1370 "prog_io_type_defn.m"
{
#line 1370 "prog_io_type_defn.m"
  {
#line 1370 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1370 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1370 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv0_HeadVar__3_56;

#line 1370 "prog_io_type_defn.m"
    {
#line 1370 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_HeadVar__3_56 = parse_tree__prog_io_type_defn__IntroducedFrom__func__check_no_free_body_vars__1370__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 1370 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__3_56));
#line 1370 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1370 "prog_io_type_defn.m"
  }
#line 1370 "prog_io_type_defn.m"
}

#line 1355 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0(
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TVarSet_6,
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ParamTVars_7,
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyType_8,
#line 1355 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyContext_9,
#line 1355 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Specs_10)
#line 1355 "prog_io_type_defn.m"
{
#line 1358 "prog_io_type_defn.m"
  {
#line 1358 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1358 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeInfo_53_53;
#line 1358 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BodyTVars_11;
#line 1358 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVarSet_12;
#line 1358 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BodyTVarSet_13;
#line 1358 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVarSet_14;
#line 1358 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVars_15;

#line 1360 "prog_io_type_defn.m"
    {
#line 1360 "prog_io_type_defn.m"
      parse_tree__prog_type__type_vars_2_p_0(parse_tree__prog_io_type_defn__BodyType_8, &parse_tree__prog_io_type_defn__BodyTVars_11);
    }
#line 6721 "parse_tree.prog_io_type_defn.c"
    parse_tree__prog_io_type_defn__TypeInfo_53_53 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 1361 "prog_io_type_defn.m"
    {
#line 1361 "prog_io_type_defn.m"
      mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__ParamTVars_7, &parse_tree__prog_io_type_defn__ParamTVarSet_12);
    }
#line 1362 "prog_io_type_defn.m"
    {
#line 1362 "prog_io_type_defn.m"
      mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__BodyTVars_11, &parse_tree__prog_io_type_defn__BodyTVarSet_13);
    }
#line 1363 "prog_io_type_defn.m"
    {
#line 1363 "prog_io_type_defn.m"
      mercury__set__difference_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__BodyTVarSet_13, parse_tree__prog_io_type_defn__ParamTVarSet_12, &parse_tree__prog_io_type_defn__OnlyBodyTVarSet_14);
    }
#line 1364 "prog_io_type_defn.m"
    {
#line 1364 "prog_io_type_defn.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__OnlyBodyTVarSet_14, &parse_tree__prog_io_type_defn__OnlyBodyTVars_15);
    }
#line 1368 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__OnlyBodyTVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1367 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1368 "prog_io_type_defn.m"
    else
#line 1369 "prog_io_type_defn.m"
      {
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_58_58;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVarNames_18;
#line 1369 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__VarWord_19;
#line 1369 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__OccurWord_20;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_21;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_22;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1369 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1372 "prog_io_type_defn.m"
        MR_Box parse_tree__prog_io_type_defn__conv1_VarWord_19;
#line 1374 "prog_io_type_defn.m"
        MR_Box parse_tree__prog_io_type_defn__conv2_OccurWord_20;

#line 1370 "prog_io_type_defn.m"
        {
#line 1370 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 1370 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0_1));
#line 1370 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1370 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TVarSet_6));
#line 1370 "prog_io_type_defn.m"
        }
#line 1370 "prog_io_type_defn.m"
        {
#line 1370 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__OnlyBodyTVarNames_18 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__V_23_23, parse_tree__prog_io_type_defn__OnlyBodyTVars_15);
        }
#line 1372 "prog_io_type_defn.m"
        {
#line 1372 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__conv1_VarWord_19 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
        }
#line 1372 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__VarWord_19 = ((MR_String) parse_tree__prog_io_type_defn__conv1_VarWord_19);
#line 1374 "prog_io_type_defn.m"
        {
#line 1374 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__conv2_OccurWord_20 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_53, parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__OnlyBodyTVars_15, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
        }
#line 1374 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__OccurWord_20 = ((MR_String) parse_tree__prog_io_type_defn__conv2_OccurWord_20);
#line 6827 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1376 "prog_io_type_defn.m"
        {
#line 1376 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1376 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__VarWord_19));
#line 1376 "prog_io_type_defn.m"
        }
#line 1376 "prog_io_type_defn.m"
        {
#line 1376 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1376 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1376 "prog_io_type_defn.m"
        }
#line 1376 "prog_io_type_defn.m"
        {
#line 1376 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 1376 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1376 "prog_io_type_defn.m"
        }
#line 1377 "prog_io_type_defn.m"
        {
#line 1377 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_35_35 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_type_defn__OnlyBodyTVarNames_18);
        }
#line 1377 "prog_io_type_defn.m"
        {
#line 1377 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1377 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__OccurWord_20));
#line 1377 "prog_io_type_defn.m"
        }
#line 1377 "prog_io_type_defn.m"
        {
#line 1377 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1377 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124])));
#line 1377 "prog_io_type_defn.m"
        }
#line 1377 "prog_io_type_defn.m"
        {
#line 1377 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_58_58, parse_tree__prog_io_type_defn__V_35_35, parse_tree__prog_io_type_defn__V_36_36);
        }
#line 1376 "prog_io_type_defn.m"
        {
#line 1376 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_21 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_58_58, parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_34_34);
        }
#line 1380 "prog_io_type_defn.m"
        {
#line 1380 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_21));
#line 1380 "prog_io_type_defn.m"
        }
#line 1380 "prog_io_type_defn.m"
        {
#line 1380 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 1380 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1380 "prog_io_type_defn.m"
        }
#line 1380 "prog_io_type_defn.m"
        {
#line 1380 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyContext_9));
#line 1380 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 1380 "prog_io_type_defn.m"
        }
#line 1380 "prog_io_type_defn.m"
        {
#line 1380 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1380 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1380 "prog_io_type_defn.m"
        }
#line 1379 "prog_io_type_defn.m"
        {
#line 1379 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1379 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1379 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 1379 "prog_io_type_defn.m"
        }
#line 1381 "prog_io_type_defn.m"
        {
#line 1381 "prog_io_type_defn.m"
          MR_Word base;
#line 1381 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__Specs_10 = base;
#line 1381 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_22));
#line 1381 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "prog_io_type_defn.m"
        }
#line 1369 "prog_io_type_defn.m"
      }
#line 1358 "prog_io_type_defn.m"
  }
#line 1355 "prog_io_type_defn.m"
}

#line 1336 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_user_type_name_3_p_0(
#line 1336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_4,
#line 1336 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_5,
#line 1336 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NameSpecs_6)
#line 1336 "prog_io_type_defn.m"
{
#line 1339 "prog_io_type_defn.m"
  {
#line 1339 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1339 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__Name_7;

#line 1341 "prog_io_type_defn.m"
    {
#line 1341 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_type_defn__SymName_4);
    }
#line 1342 "prog_io_type_defn.m"
    {
#line 1342 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__is_known_type_name_1_p_0(parse_tree__prog_io_type_defn__Name_7);
    }
#line 1348 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1344 "prog_io_type_defn.m"
      {
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NamePieces_8;
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NameSpec_9;
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1344 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 1343 "prog_io_type_defn.m"
        {
#line 1343 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1343 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_7));
#line 1343 "prog_io_type_defn.m"
        }
#line 1343 "prog_io_type_defn.m"
        {
#line 1343 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_13_13));
#line 1343 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[122])));
#line 1343 "prog_io_type_defn.m"
        }
#line 1343 "prog_io_type_defn.m"
        {
#line 1343 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__NamePieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NamePieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[159])));
#line 1343 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NamePieces_8, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_12_12));
#line 1343 "prog_io_type_defn.m"
        }
#line 1346 "prog_io_type_defn.m"
        {
#line 1346 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1346 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NamePieces_8));
#line 1346 "prog_io_type_defn.m"
        }
#line 1346 "prog_io_type_defn.m"
        {
#line 1346 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1346 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "prog_io_type_defn.m"
        }
#line 1346 "prog_io_type_defn.m"
        {
#line 1346 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1346 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_5));
#line 1346 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1346 "prog_io_type_defn.m"
        }
#line 1346 "prog_io_type_defn.m"
        {
#line 1346 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1346 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "prog_io_type_defn.m"
        }
#line 1345 "prog_io_type_defn.m"
        {
#line 1345 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__NameSpec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__NameSpec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1345 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__NameSpec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1345 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__NameSpec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_22_22));
#line 1345 "prog_io_type_defn.m"
        }
#line 1347 "prog_io_type_defn.m"
        {
#line 1347 "prog_io_type_defn.m"
          MR_Word base;
#line 1347 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__NameSpecs_6 = base;
#line 1347 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpec_9));
#line 1347 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1347 "prog_io_type_defn.m"
        }
#line 1344 "prog_io_type_defn.m"
      }
#line 1348 "prog_io_type_defn.m"
    else
#line 1349 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__NameSpecs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1339 "prog_io_type_defn.m"
  }
#line 1336 "prog_io_type_defn.m"
}

#line 1260 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1260 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1260 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5)
#line 1260 "prog_io_type_defn.m"
{
#line 1263 "prog_io_type_defn.m"
  {
#line 1263 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3;

#line 1265 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1266 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1268 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1263 "prog_io_type_defn.m"
    else
#line 1270 "prog_io_type_defn.m"
      {
#line 1270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_6_6;

#line 1270 "prog_io_type_defn.m"
        {
#line 1270 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_4));
#line 1270 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_5));
#line 1270 "prog_io_type_defn.m"
        }
#line 1270 "prog_io_type_defn.m"
        {
#line 1270 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_6_6));
#line 1270 "prog_io_type_defn.m"
        }
#line 1270 "prog_io_type_defn.m"
      }
#line 1263 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_3;
#line 1263 "prog_io_type_defn.m"
  }
#line 1260 "prog_io_type_defn.m"
}

#line 1080 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1080 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1080 "prog_io_type_defn.m"
{
#line 1111 "prog_io_type_defn.m"
  {
#line 1111 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15)) == (MR_mktag((MR_Integer) 1)));
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RepresentationIs_28;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__InitialisationIs_29;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__GroundIs_30;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__AnyIs_31;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CStoreIs_32;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__EqualityIs_33;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ComparisonIs_34;
#line 1111 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__DirectArgIs_35;
#line 1105 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereEnd_36;

#line 1096 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1096 "prog_io_type_defn.m"
      {
#line 1096 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15, (MR_Integer) 0)));
#line 1097 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeRepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1097 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1097 "prog_io_type_defn.m"
          {
#line 1097 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__RepresentationIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeRepresentationIs_16, (MR_Integer) 0)));
#line 1098 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeInitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1098 "prog_io_type_defn.m"
              {
#line 1098 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__InitialisationIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisationIs_17, (MR_Integer) 0)));
#line 1099 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeGroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1099 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1099 "prog_io_type_defn.m"
                  {
#line 1099 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__GroundIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundIs_18, (MR_Integer) 0)));
#line 1100 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeAnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1100 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1100 "prog_io_type_defn.m"
                      {
#line 1100 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyIs_19, (MR_Integer) 0)));
#line 1101 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1101 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1101 "prog_io_type_defn.m"
                          {
#line 1101 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__CStoreIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCStoreIs_20, (MR_Integer) 0)));
#line 1102 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeEqualityIs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1102 "prog_io_type_defn.m"
                              {
#line 1102 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__EqualityIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeEqualityIs_21, (MR_Integer) 0)));
#line 1103 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeComparisonIs_22)) == (MR_mktag((MR_Integer) 1)));
#line 1103 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1103 "prog_io_type_defn.m"
                                  {
#line 1103 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__ComparisonIs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeComparisonIs_22, (MR_Integer) 0)));
#line 1104 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeDirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1104 "prog_io_type_defn.m"
                                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1104 "prog_io_type_defn.m"
                                      {
#line 1104 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__DirectArgIs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_23, (MR_Integer) 0)));
#line 1105 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhereEnd_24)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "prog_io_type_defn.m"
                                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1105 "prog_io_type_defn.m"
                                          parse_tree__prog_io_type_defn__WhereEnd_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereEnd_24, (MR_Integer) 0)));
#line 1104 "prog_io_type_defn.m"
                                      }
#line 1103 "prog_io_type_defn.m"
                                  }
#line 1102 "prog_io_type_defn.m"
                              }
#line 1101 "prog_io_type_defn.m"
                          }
#line 1100 "prog_io_type_defn.m"
                      }
#line 1099 "prog_io_type_defn.m"
                  }
#line 1098 "prog_io_type_defn.m"
              }
#line 1097 "prog_io_type_defn.m"
          }
#line 1096 "prog_io_type_defn.m"
      }
#line 1111 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1107 "prog_io_type_defn.m"
      {
#line 1107 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_14, parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27, parse_tree__prog_io_type_defn__RepresentationIs_28, parse_tree__prog_io_type_defn__InitialisationIs_29, parse_tree__prog_io_type_defn__GroundIs_30, parse_tree__prog_io_type_defn__AnyIs_31, parse_tree__prog_io_type_defn__CStoreIs_32, parse_tree__prog_io_type_defn__EqualityIs_33, parse_tree__prog_io_type_defn__ComparisonIs_34, parse_tree__prog_io_type_defn__DirectArgIs_35, parse_tree__prog_io_type_defn__WhereTerm_25);
      }
#line 1111 "prog_io_type_defn.m"
    else
#line 1122 "prog_io_type_defn.m"
      {
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_57_57 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[10];
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_59_59;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_60_60;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_37;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1122 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55;

#line 1113 "prog_io_type_defn.m"
        {
#line 1113 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15);
        }
#line 1114 "prog_io_type_defn.m"
        {
#line 1114 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[11], parse_tree__prog_io_type_defn__MaybeRepresentationIs_16);
        }
#line 7395 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[12];
#line 1115 "prog_io_type_defn.m"
        {
#line 1115 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeInitialisationIs_17);
        }
#line 7402 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[13];
#line 1116 "prog_io_type_defn.m"
        {
#line 1116 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeGroundIs_18);
        }
#line 1117 "prog_io_type_defn.m"
        {
#line 1117 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeAnyIs_19);
        }
#line 1118 "prog_io_type_defn.m"
        {
#line 1118 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[14], parse_tree__prog_io_type_defn__MaybeCStoreIs_20);
        }
#line 1119 "prog_io_type_defn.m"
        {
#line 1119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeEqualityIs_21);
        }
#line 1120 "prog_io_type_defn.m"
        {
#line 1120 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeComparisonIs_22);
        }
#line 1121 "prog_io_type_defn.m"
        {
#line 1121 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeDirectArgIs_23);
        }
#line 1122 "prog_io_type_defn.m"
        {
#line 1122 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_55_55 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeWhereEnd_24);
        }
#line 1121 "prog_io_type_defn.m"
        {
#line 1121 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_54_54, parse_tree__prog_io_type_defn__V_55_55);
        }
#line 1120 "prog_io_type_defn.m"
        {
#line 1120 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53);
        }
#line 1119 "prog_io_type_defn.m"
        {
#line 1119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_50_50, parse_tree__prog_io_type_defn__V_51_51);
        }
#line 1118 "prog_io_type_defn.m"
        {
#line 1118 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_48_48, parse_tree__prog_io_type_defn__V_49_49);
        }
#line 1117 "prog_io_type_defn.m"
        {
#line 1117 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_46_46, parse_tree__prog_io_type_defn__V_47_47);
        }
#line 1116 "prog_io_type_defn.m"
        {
#line 1116 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_44_44, parse_tree__prog_io_type_defn__V_45_45);
        }
#line 1115 "prog_io_type_defn.m"
        {
#line 1115 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_42_42, parse_tree__prog_io_type_defn__V_43_43);
        }
#line 1114 "prog_io_type_defn.m"
        {
#line 1114 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_40_40, parse_tree__prog_io_type_defn__V_41_41);
        }
#line 1113 "prog_io_type_defn.m"
        {
#line 1113 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_38_38, parse_tree__prog_io_type_defn__V_39_39);
        }
#line 1123 "prog_io_type_defn.m"
        {
#line 1123 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_37));
#line 1123 "prog_io_type_defn.m"
        }
#line 1122 "prog_io_type_defn.m"
      }
#line 1111 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1111 "prog_io_type_defn.m"
  }
#line 1080 "prog_io_type_defn.m"
}

#line 1071 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1071 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1071 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2)
#line 1071 "prog_io_type_defn.m"
{
#line 1073 "prog_io_type_defn.m"
  {
#line 1073 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1073 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1073 "prog_io_type_defn.m"
      {
#line 1073 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1073 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[11]);
#line 1073 "prog_io_type_defn.m"
      }
#line 1073 "prog_io_type_defn.m"
    else
#line 1074 "prog_io_type_defn.m"
      {
#line 1074 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 1074 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_6;
#line 1074 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_8_8;
#line 1074 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1074 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1074 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;

#line 1078 "prog_io_type_defn.m"
        {
#line 1078 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1078 "prog_io_type_defn.m"
        {
#line 1078 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_22_22));
#line 1078 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[158])));
#line 1078 "prog_io_type_defn.m"
        }
#line 1078 "prog_io_type_defn.m"
        {
#line 1078 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 1078 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1078 "prog_io_type_defn.m"
        }
#line 1077 "prog_io_type_defn.m"
        {
#line 1077 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1077 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1077 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1077 "prog_io_type_defn.m"
        }
#line 1074 "prog_io_type_defn.m"
        {
#line 1074 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_6));
#line 1074 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1074 "prog_io_type_defn.m"
        }
#line 1074 "prog_io_type_defn.m"
        {
#line 1074 "prog_io_type_defn.m"
          MR_Word base;
#line 1074 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__HeadVar__2_2 = base;
#line 1074 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_8_8));
#line 1074 "prog_io_type_defn.m"
        }
#line 1074 "prog_io_type_defn.m"
      }
#line 1073 "prog_io_type_defn.m"
  }
#line 1071 "prog_io_type_defn.m"
}

#line 1055 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1055 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1055 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8)
#line 1055 "prog_io_type_defn.m"
{
#line 1061 "prog_io_type_defn.m"
  {
#line 1061 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1061 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_9;
#line 1061 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__Arity_10;

#line 1059 "prog_io_type_defn.m"
    {
#line 1059 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__Name_9, &parse_tree__prog_io_type_defn__Arity_10);
    }
#line 1061 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1060 "prog_io_type_defn.m"
      {
#line 1060 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;

#line 1060 "prog_io_type_defn.m"
        {
#line 1060 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_9));
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Arity_10));
#line 1060 "prog_io_type_defn.m"
        }
#line 1060 "prog_io_type_defn.m"
        {
#line 1060 "prog_io_type_defn.m"
          MR_Word base;
#line 1060 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_14_14));
#line 1060 "prog_io_type_defn.m"
        }
#line 1060 "prog_io_type_defn.m"
      }
#line 1061 "prog_io_type_defn.m"
    else
#line 1062 "prog_io_type_defn.m"
      {
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1062 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__TermStr_11;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_12;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_13;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_17_17;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1062 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;

#line 1062 "prog_io_type_defn.m"
        {
#line 1062 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1065 "prog_io_type_defn.m"
        {
#line 1065 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1065 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_11));
#line 1065 "prog_io_type_defn.m"
        }
#line 1065 "prog_io_type_defn.m"
        {
#line 1065 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1065 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1065 "prog_io_type_defn.m"
        }
#line 1065 "prog_io_type_defn.m"
        {
#line 1065 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[157])));
#line 1065 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1065 "prog_io_type_defn.m"
        }
#line 1064 "prog_io_type_defn.m"
        {
#line 1064 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[145])));
#line 1064 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1064 "prog_io_type_defn.m"
        }
#line 1064 "prog_io_type_defn.m"
        {
#line 1064 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[156])));
#line 1064 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1064 "prog_io_type_defn.m"
        }
#line 1063 "prog_io_type_defn.m"
        {
#line 1063 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 1063 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1063 "prog_io_type_defn.m"
        }
#line 1067 "prog_io_type_defn.m"
        {
#line 1067 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1067 "prog_io_type_defn.m"
        {
#line 1067 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_12));
#line 1067 "prog_io_type_defn.m"
        }
#line 1067 "prog_io_type_defn.m"
        {
#line 1067 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1067 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "prog_io_type_defn.m"
        }
#line 1067 "prog_io_type_defn.m"
        {
#line 1067 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_38_38));
#line 1067 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_39_39));
#line 1067 "prog_io_type_defn.m"
        }
#line 1067 "prog_io_type_defn.m"
        {
#line 1067 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1067 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "prog_io_type_defn.m"
        }
#line 1066 "prog_io_type_defn.m"
        {
#line 1066 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1066 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1066 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1066 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_36_36));
#line 1066 "prog_io_type_defn.m"
        }
#line 1068 "prog_io_type_defn.m"
        {
#line 1068 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_13));
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "prog_io_type_defn.m"
        }
#line 1068 "prog_io_type_defn.m"
        {
#line 1068 "prog_io_type_defn.m"
          MR_Word base;
#line 1068 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 1068 "prog_io_type_defn.m"
        }
#line 1062 "prog_io_type_defn.m"
      }
#line 1061 "prog_io_type_defn.m"
  }
#line 1055 "prog_io_type_defn.m"
}

#line 1044 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1044 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1044 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1044 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1044 "prog_io_type_defn.m"
{
#line 1044 "prog_io_type_defn.m"
  {
#line 1044 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1044 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8;

#line 1044 "prog_io_type_defn.m"
    {
#line 1044 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8);
    }
#line 1044 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8));
#line 1044 "prog_io_type_defn.m"
  }
#line 1044 "prog_io_type_defn.m"
}

#line 1039 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1039 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1039 "prog_io_type_defn.m"
{
#line 1046 "prog_io_type_defn.m"
  {
#line 1046 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1046 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1046 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FunctorsTerms_9;

#line 1043 "prog_io_type_defn.m"
    {
#line 1043 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__FunctorsTerms_9);
    }
#line 1046 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1044 "prog_io_type_defn.m"
      {
#line 1044 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1044 "prog_io_type_defn.m"
        {
#line 1044 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_6[0]));
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1));
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_5));
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1044 "prog_io_type_defn.m"
        }
#line 1044 "prog_io_type_defn.m"
        {
#line 1044 "prog_io_type_defn.m"
          parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__prog_io_type_defn__V_12_12, parse_tree__prog_io_type_defn__FunctorsTerms_9, &parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8);
        }
#line 1044 "prog_io_type_defn.m"
      }
#line 1046 "prog_io_type_defn.m"
    else
#line 1048 "prog_io_type_defn.m"
      {
#line 1048 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_11;
#line 1048 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1048 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1048 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1048 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 1050 "prog_io_type_defn.m"
        {
#line 1050 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1050 "prog_io_type_defn.m"
        {
#line 1050 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_28_28));
#line 1050 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[154])));
#line 1050 "prog_io_type_defn.m"
        }
#line 1051 "prog_io_type_defn.m"
        {
#line 1051 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1051 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "prog_io_type_defn.m"
        }
#line 1049 "prog_io_type_defn.m"
        {
#line 1049 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1049 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1049 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_11));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1052 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 1052 "prog_io_type_defn.m"
        }
#line 1048 "prog_io_type_defn.m"
      }
#line 1046 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1046 "prog_io_type_defn.m"
  }
#line 1039 "prog_io_type_defn.m"
}

#line 1021 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1021 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1021 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1021 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6)
#line 1021 "prog_io_type_defn.m"
{
#line 1032 "prog_io_type_defn.m"
  {
#line 1032 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1032 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1026 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_32_32;
#line 1026 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 1026 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Context_8;
#line 1026 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarSet_9;
#line 1026 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1026 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_14_14;
#line 1026 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__V_15_15;

#line 1026 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1026 "prog_io_type_defn.m"
      {
#line 1026 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1026 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1026 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1026 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1026 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1026 "prog_io_type_defn.m"
          {
#line 1026 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 1026 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_14_14, (MR_String) "mutable") == 0);
#line 1026 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1026 "prog_io_type_defn.m"
              {
#line 8070 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1027 "prog_io_type_defn.m"
                {
#line 1027 "prog_io_type_defn.m"
                  mercury__varset__init_1_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_32_32, &parse_tree__prog_io_type_defn__VarSet_9);
                }
#line 1028 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_15_15 = (MR_Integer) -1;
#line 1028 "prog_io_type_defn.m"
                {
#line 1028 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_info_6_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__Args_7, parse_tree__prog_io_type_defn__Context_8, parse_tree__prog_io_type_defn__V_15_15, &parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10);
                }
#line 1026 "prog_io_type_defn.m"
              }
#line 1026 "prog_io_type_defn.m"
          }
#line 1026 "prog_io_type_defn.m"
      }
#line 1032 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1031 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1032 "prog_io_type_defn.m"
    else
#line 1033 "prog_io_type_defn.m"
      {
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 1033 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1035 "prog_io_type_defn.m"
        {
#line 1035 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1035 "prog_io_type_defn.m"
        {
#line 1035 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[153])));
#line 1035 "prog_io_type_defn.m"
        }
#line 1035 "prog_io_type_defn.m"
        {
#line 1035 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1035 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_type_defn.m"
        }
#line 1034 "prog_io_type_defn.m"
        {
#line 1034 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1034 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1034 "prog_io_type_defn.m"
        }
#line 1036 "prog_io_type_defn.m"
        {
#line 1036 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "prog_io_type_defn.m"
        }
#line 1036 "prog_io_type_defn.m"
        {
#line 1036 "prog_io_type_defn.m"
          MR_Word base;
#line 1036 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = base;
#line 1036 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1036 "prog_io_type_defn.m"
        }
#line 1033 "prog_io_type_defn.m"
      }
#line 1032 "prog_io_type_defn.m"
  }
#line 1021 "prog_io_type_defn.m"
}

#line 1012 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1012 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1012 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1012 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1012 "prog_io_type_defn.m"
{
#line 1012 "prog_io_type_defn.m"
  {
#line 1012 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1012 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6;

#line 1012 "prog_io_type_defn.m"
    {
#line 1012 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6);
    }
#line 1012 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6));
#line 1012 "prog_io_type_defn.m"
  }
#line 1012 "prog_io_type_defn.m"
}

#line 998 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 998 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 998 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 998 "prog_io_type_defn.m"
{
#line 1011 "prog_io_type_defn.m"
  {
#line 1011 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1011 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeItems_6;
#line 1002 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 1002 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_16_16;
#line 1002 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 1002 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_8_8;

#line 1002 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1002 "prog_io_type_defn.m"
      {
#line 1002 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1002 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1002 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1002 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 1002 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1002 "prog_io_type_defn.m"
          {
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_15_15, (MR_Integer) 0)));
#line 1002 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_16_16, (MR_String) "mutable") == 0);
#line 1002 "prog_io_type_defn.m"
          }
#line 1002 "prog_io_type_defn.m"
      }
#line 1011 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1003 "prog_io_type_defn.m"
      {
#line 1003 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem_9;

#line 1003 "prog_io_type_defn.m"
        {
#line 1003 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__MaybeItem_9);
        }
#line 1007 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
#line 1009 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9;
#line 1007 "prog_io_type_defn.m"
        else
#line 1005 "prog_io_type_defn.m"
          {
#line 1005 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem_9, (MR_Integer) 0)));
#line 1005 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 1006 "prog_io_type_defn.m"
            {
#line 1006 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Mutable_10));
#line 1006 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_io_type_defn.m"
            }
#line 1006 "prog_io_type_defn.m"
            {
#line 1006 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1006 "prog_io_type_defn.m"
            }
#line 1005 "prog_io_type_defn.m"
          }
#line 1003 "prog_io_type_defn.m"
      }
#line 1011 "prog_io_type_defn.m"
    else
#line 1013 "prog_io_type_defn.m"
      {
#line 1013 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_12;

#line 1011 "prog_io_type_defn.m"
        {
#line 1011 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Terms_12);
        }
#line 1013 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1012 "prog_io_type_defn.m"
          {
#line 1012 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;

#line 1012 "prog_io_type_defn.m"
            {
#line 1012 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[2]));
#line 1012 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1));
#line 1012 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1012 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_4));
#line 1012 "prog_io_type_defn.m"
            }
#line 1012 "prog_io_type_defn.m"
            {
#line 1012 "prog_io_type_defn.m"
              parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__Terms_12, &parse_tree__prog_io_type_defn__MaybeItems_6);
            }
#line 1012 "prog_io_type_defn.m"
          }
#line 1013 "prog_io_type_defn.m"
        else
#line 1015 "prog_io_type_defn.m"
          {
#line 1015 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 1015 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 1015 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 1015 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 1015 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 1017 "prog_io_type_defn.m"
            {
#line 1017 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
            }
#line 1017 "prog_io_type_defn.m"
            {
#line 1017 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1017 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[152])));
#line 1017 "prog_io_type_defn.m"
            }
#line 1017 "prog_io_type_defn.m"
            {
#line 1017 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1017 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "prog_io_type_defn.m"
            }
#line 1016 "prog_io_type_defn.m"
            {
#line 1016 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1016 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1016 "prog_io_type_defn.m"
            }
#line 1018 "prog_io_type_defn.m"
            {
#line 1018 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 1018 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1018 "prog_io_type_defn.m"
            }
#line 1018 "prog_io_type_defn.m"
            {
#line 1018 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1018 "prog_io_type_defn.m"
            }
#line 1015 "prog_io_type_defn.m"
          }
#line 1013 "prog_io_type_defn.m"
      }
#line 1011 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeItems_6;
#line 1011 "prog_io_type_defn.m"
  }
#line 998 "prog_io_type_defn.m"
}

#line 932 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 932 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 932 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 932 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 932 "prog_io_type_defn.m"
{
#line 935 "prog_io_type_defn.m"
  {
#line 935 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 935 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 935 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result0_9;
#line 935 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result1_10;
#line 939 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 936 "prog_io_type_defn.m"
    {
#line 936 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result0_9 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialisation", parse_tree__prog_io_type_defn__Term_7);
    }
#line 939 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result0_9)) == (MR_mktag((MR_Integer) 1)));
#line 939 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 939 "prog_io_type_defn.m"
      {
#line 939 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result0_9, (MR_Integer) 0)));
#line 939 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "prog_io_type_defn.m"
      }
#line 943 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 941 "prog_io_type_defn.m"
      {
#line 941 "prog_io_type_defn.m"
        {
#line 941 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialization", parse_tree__prog_io_type_defn__Term_7);
        }
#line 941 "prog_io_type_defn.m"
      }
#line 943 "prog_io_type_defn.m"
    else
#line 944 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__Result0_9;
#line 962 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result1_10)) == (MR_mktag((MR_Integer) 0))))
#line 966 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 962 "prog_io_type_defn.m"
    else
#line 962 "prog_io_type_defn.m"
      {
#line 962 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result1_10, (MR_Integer) 0)));

#line 962 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 966 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 962 "prog_io_type_defn.m"
        else
#line 948 "prog_io_type_defn.m"
          {
#line 948 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__AutoInitSupported_12;

#line 950 "prog_io_type_defn.m"
            {
#line 950 "prog_io_type_defn.m"
              libs__globals__semipure_get_solver_auto_init_supported_1_p_0(&parse_tree__prog_io_type_defn__AutoInitSupported_12);
            }
#line 954 "prog_io_type_defn.m"
#line 954 "prog_io_type_defn.m"
            switch (parse_tree__prog_io_type_defn__AutoInitSupported_12) {
#line 954 "prog_io_type_defn.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 954 "prog_io_type_defn.m"
              case (MR_Integer) 0:
#line 955 "prog_io_type_defn.m"
                {
#line 955 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 955 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 955 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 955 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 955 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_40_40;

#line 959 "prog_io_type_defn.m"
                  {
#line 959 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
                  }
#line 959 "prog_io_type_defn.m"
                  {
#line 959 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 959 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 959 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[151])));
#line 959 "prog_io_type_defn.m"
                  }
#line 959 "prog_io_type_defn.m"
                  {
#line 959 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_34_34));
#line 959 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "prog_io_type_defn.m"
                  }
#line 958 "prog_io_type_defn.m"
                  {
#line 958 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 958 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 958 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 958 "prog_io_type_defn.m"
                  }
#line 960 "prog_io_type_defn.m"
                  {
#line 960 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 960 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "prog_io_type_defn.m"
                  }
#line 960 "prog_io_type_defn.m"
                  {
#line 960 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 960 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 960 "prog_io_type_defn.m"
                  }
#line 955 "prog_io_type_defn.m"
                }
#line 954 "prog_io_type_defn.m"
                break;
#line 954 "prog_io_type_defn.m"
              case (MR_Integer) 1:
#line 952 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 954 "prog_io_type_defn.m"
                break;
#line 954 "prog_io_type_defn.m"
            }
#line 948 "prog_io_type_defn.m"
          }
#line 962 "prog_io_type_defn.m"
      }
#line 935 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 935 "prog_io_type_defn.m"
  }
#line 932 "prog_io_type_defn.m"
}

#line 921 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 921 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3)
#line 921 "prog_io_type_defn.m"
{
#line 923 "prog_io_type_defn.m"
  {
#line 923 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 923 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 925 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_5_5;
#line 925 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_6_6;
#line 925 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 925 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_4_4;

#line 925 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 925 "prog_io_type_defn.m"
      {
#line 925 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 0)));
#line 925 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 1)));
#line 925 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 2)));
#line 925 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 925 "prog_io_type_defn.m"
          {
#line 925 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 925 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 925 "prog_io_type_defn.m"
              {
#line 925 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_5_5, (MR_Integer) 0)));
#line 925 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_6_6, (MR_String) "type_is_abstract_noncanonical") == 0);
#line 925 "prog_io_type_defn.m"
              }
#line 925 "prog_io_type_defn.m"
          }
#line 925 "prog_io_type_defn.m"
      }
#line 923 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 927 "prog_io_type_defn.m"
      {
#line 927 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 927 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[11]);
#line 927 "prog_io_type_defn.m"
      }
#line 923 "prog_io_type_defn.m"
    else
#line 929 "prog_io_type_defn.m"
      {
#line 929 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[12]);
#line 929 "prog_io_type_defn.m"
      }
#line 923 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 923 "prog_io_type_defn.m"
  }
#line 921 "prog_io_type_defn.m"
}

#line 803 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0(
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 803 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term0_9,
#line 803 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_10)
#line 803 "prog_io_type_defn.m"
{
#line 809 "prog_io_type_defn.m"
  {
#line 809 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_12;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_13;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_14;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_15;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_16;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_17;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_18;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_19;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_20;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_21;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_22_22;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_24_24;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_26_26;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_30_30;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_32_32;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_36_36;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_40_40;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_44_44;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_48_48;
#line 809 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_52_52;

#line 811 "prog_io_type_defn.m"
    {
#line 811 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "prog_io_type_defn.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_22_22, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Term0_9));
#line 811 "prog_io_type_defn.m"
    }
#line 812 "prog_io_type_defn.m"
    {
#line 812 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(&parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_12, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_22_22, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_24_24);
    }
#line 814 "prog_io_type_defn.m"
    {
#line 814 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeRepresentationIs_13, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_24_24, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_26_26);
    }
#line 817 "prog_io_type_defn.m"
    {
#line 817 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeInitialisationIs_14, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_26_26, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_30_30);
    }
#line 820 "prog_io_type_defn.m"
    {
#line 820 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "ground", &parse_tree__prog_io_type_defn__MaybeGroundIs_15, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_30_30, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_32_32);
    }
#line 823 "prog_io_type_defn.m"
    {
#line 823 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "any", &parse_tree__prog_io_type_defn__MaybeAnyIs_16, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_32_32, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_36_36);
    }
#line 826 "prog_io_type_defn.m"
    {
#line 826 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__prog_io_type_defn__ModuleName_7, &parse_tree__prog_io_type_defn__MaybeCStoreIs_17, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_36_36, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_40_40);
    }
#line 829 "prog_io_type_defn.m"
    {
#line 829 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeEqualityIs_18, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_40_40, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_44_44);
    }
#line 832 "prog_io_type_defn.m"
    {
#line 832 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeComparisonIs_19, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_44_44, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_48_48);
    }
#line 835 "prog_io_type_defn.m"
    {
#line 835 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeDirectArgIs_20, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_48_48, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_52_52);
    }
#line 838 "prog_io_type_defn.m"
    {
#line 838 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_where_end_2_p_0(parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_52_52, &parse_tree__prog_io_type_defn__MaybeWhereEnd_21);
    }
#line 840 "prog_io_type_defn.m"
    {
#line 840 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_6, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_12, parse_tree__prog_io_type_defn__MaybeRepresentationIs_13, parse_tree__prog_io_type_defn__MaybeInitialisationIs_14, parse_tree__prog_io_type_defn__MaybeGroundIs_15, parse_tree__prog_io_type_defn__MaybeAnyIs_16, parse_tree__prog_io_type_defn__MaybeCStoreIs_17, parse_tree__prog_io_type_defn__MaybeEqualityIs_18, parse_tree__prog_io_type_defn__MaybeComparisonIs_19, parse_tree__prog_io_type_defn__MaybeDirectArgIs_20, parse_tree__prog_io_type_defn__MaybeWhereEnd_21, parse_tree__prog_io_type_defn__Term0_9);
    }
#line 809 "prog_io_type_defn.m"
  }
#line 803 "prog_io_type_defn.m"
}

#line 738 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 738 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 738 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 738 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 738 "prog_io_type_defn.m"
{
#line 742 "prog_io_type_defn.m"
  {
#line 742 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 742 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15;
#line 742 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__IsSolverType_16;
#line 742 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Attributes_17;
#line 1392 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_35;
#line 1390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_34_34;

#line 743 "prog_io_type_defn.m"
    {
#line 743 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15);
    }
#line 1390 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_11)) == (MR_mktag((MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1390 "prog_io_type_defn.m"
      {
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 0)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_36_36, (MR_Integer) 0)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_36_36, (MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1390 "prog_io_type_defn.m"
      }
#line 1392 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1391 "prog_io_type_defn.m"
      {
#line 1391 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_35;
#line 1391 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 1;
#line 1391 "prog_io_type_defn.m"
      }
#line 1392 "prog_io_type_defn.m"
    else
#line 1393 "prog_io_type_defn.m"
      {
#line 1393 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 0;
#line 1393 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__Attributes0_11;
#line 1393 "prog_io_type_defn.m"
      }
#line 748 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15)) == (MR_mktag((MR_Integer) 0))))
#line 746 "prog_io_type_defn.m"
      {
#line 746 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));

#line 747 "prog_io_type_defn.m"
        {
#line 747 "prog_io_type_defn.m"
          MR_Word base;
#line 747 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 747 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 747 "prog_io_type_defn.m"
        }
#line 746 "prog_io_type_defn.m"
      }
#line 748 "prog_io_type_defn.m"
    else
#line 749 "prog_io_type_defn.m"
      {
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 1)));
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_21;
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__AbstractTypeDetails_22;
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefn_23;
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_24;
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_25;
#line 749 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_26;

#line 750 "prog_io_type_defn.m"
        {
#line 750 "prog_io_type_defn.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_21);
        }
#line 754 "prog_io_type_defn.m"
#line 754 "prog_io_type_defn.m"
        switch (parse_tree__prog_io_type_defn__IsSolverType_16) {
#line 754 "prog_io_type_defn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 754 "prog_io_type_defn.m"
          case (MR_Integer) 0:
#line 753 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__AbstractTypeDetails_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 754 "prog_io_type_defn.m"
            break;
#line 754 "prog_io_type_defn.m"
          case (MR_Integer) 1:
#line 756 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__AbstractTypeDetails_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 754 "prog_io_type_defn.m"
            break;
#line 754 "prog_io_type_defn.m"
        }
#line 758 "prog_io_type_defn.m"
        {
#line 758 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TypeDefn_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 758 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__AbstractTypeDetails_22));
#line 758 "prog_io_type_defn.m"
        }
#line 759 "prog_io_type_defn.m"
        {
#line 759 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 759 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 759 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_20));
#line 759 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_23));
#line 759 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_24, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_21));
#line 759 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_24, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 759 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_24, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 759 "prog_io_type_defn.m"
        }
#line 761 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Item_25 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_24);
#line 762 "prog_io_type_defn.m"
        {
#line 762 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItem0_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 762 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_25));
#line 762 "prog_io_type_defn.m"
        }
#line 763 "prog_io_type_defn.m"
        {
#line 763 "prog_io_type_defn.m"
          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_26, parse_tree__prog_io_type_defn__Attributes_17, parse_tree__prog_io_type_defn__MaybeItem_14);
        }
#line 749 "prog_io_type_defn.m"
      }
#line 742 "prog_io_type_defn.m"
  }
#line 738 "prog_io_type_defn.m"
}

#line 688 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 688 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 688 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 688 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18)
#line 688 "prog_io_type_defn.m"
{
#line 694 "prog_io_type_defn.m"
  {
#line 694 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 694 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_59_59 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 694 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TVarSet_19;
#line 694 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_20;
#line 694 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverSpecs_22;
#line 694 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FreeSpecs_29;
#line 714 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVars0_26;
#line 714 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails0_27;
#line 708 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn___SymName_25;
#line 728 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SymName_30;
#line 728 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVars_31;
#line 728 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_32;

#line 695 "prog_io_type_defn.m"
    {
#line 695 "prog_io_type_defn.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_59_59, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_11, &parse_tree__prog_io_type_defn__TVarSet_19);
    }
#line 696 "prog_io_type_defn.m"
    {
#line 696 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12, &parse_tree__prog_io_type_defn__MaybeNameParams_20);
    }
#line 700 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "prog_io_type_defn.m"
      {
#line 701 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__SolverSpec_24;
#line 701 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 701 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 701 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 704 "prog_io_type_defn.m"
        {
#line 704 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_59_59, parse_tree__prog_io_type_defn__HeadTerm_12);
        }
#line 704 "prog_io_type_defn.m"
        {
#line 704 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 704 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[150])));
#line 704 "prog_io_type_defn.m"
        }
#line 704 "prog_io_type_defn.m"
        {
#line 704 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 704 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "prog_io_type_defn.m"
        }
#line 703 "prog_io_type_defn.m"
        {
#line 703 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__SolverSpec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 703 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 703 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 703 "prog_io_type_defn.m"
        }
#line 705 "prog_io_type_defn.m"
        {
#line 705 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__SolverSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_22, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverSpec_24));
#line 705 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "prog_io_type_defn.m"
        }
#line 701 "prog_io_type_defn.m"
      }
#line 700 "prog_io_type_defn.m"
    else
#line 699 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__SolverSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_20)) == (MR_mktag((MR_Integer) 1)));
#line 708 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 708 "prog_io_type_defn.m"
      {
#line 708 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn___SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));
#line 708 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__ParamTVars0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 1)));
#line 709 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13)) == (MR_mktag((MR_Integer) 1)));
#line 709 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 709 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__SolverTypeDetails0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13, (MR_Integer) 0)));
#line 708 "prog_io_type_defn.m"
      }
#line 714 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 711 "prog_io_type_defn.m"
      {
#line 711 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__RepType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_27, (MR_Integer) 0)));
#line 711 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_27, (MR_Integer) 1)));
#line 711 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_27, (MR_Integer) 2)));
#line 711 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_27, (MR_Integer) 3)));
#line 711 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails0_27, (MR_Integer) 4)));

#line 712 "prog_io_type_defn.m"
        {
#line 712 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__check_no_free_body_vars_5_p_0(parse_tree__prog_io_type_defn__TVarSet_19, parse_tree__prog_io_type_defn__ParamTVars0_26, parse_tree__prog_io_type_defn__RepType_28, parse_tree__prog_io_type_defn__Context_16, &parse_tree__prog_io_type_defn__FreeSpecs_29);
        }
#line 711 "prog_io_type_defn.m"
      }
#line 714 "prog_io_type_defn.m"
    else
#line 715 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__FreeSpecs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 720 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__FreeSpecs_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 718 "prog_io_type_defn.m"
      {
#line 718 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_20)) == (MR_mktag((MR_Integer) 1)));
#line 718 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 718 "prog_io_type_defn.m"
          {
#line 718 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));
#line 718 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__ParamTVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 1)));
#line 719 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13)) == (MR_mktag((MR_Integer) 1)));
#line 719 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 719 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__SolverTypeDetails_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13, (MR_Integer) 0)));
#line 718 "prog_io_type_defn.m"
          }
#line 718 "prog_io_type_defn.m"
      }
#line 728 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 722 "prog_io_type_defn.m"
      {
#line 722 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefn_33;
#line 722 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_34;
#line 722 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_35;
#line 722 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_36;

#line 722 "prog_io_type_defn.m"
        {
#line 722 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TypeDefn_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 722 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 722 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_33, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_32));
#line 722 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_33, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_14));
#line 722 "prog_io_type_defn.m"
        }
#line 723 "prog_io_type_defn.m"
        {
#line 723 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 723 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_30));
#line 723 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ParamTVars_31));
#line 723 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_34, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_33));
#line 723 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_34, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TVarSet_19));
#line 723 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_34, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 723 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_34, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_17));
#line 723 "prog_io_type_defn.m"
        }
#line 725 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Item_35 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_34);
#line 726 "prog_io_type_defn.m"
        {
#line 726 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItem0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 726 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_35));
#line 726 "prog_io_type_defn.m"
        }
#line 727 "prog_io_type_defn.m"
        {
#line 727 "prog_io_type_defn.m"
          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_36, parse_tree__prog_io_type_defn__Attributes_15, parse_tree__prog_io_type_defn__MaybeItem_18);
        }
#line 722 "prog_io_type_defn.m"
      }
#line 728 "prog_io_type_defn.m"
    else
#line 729 "prog_io_type_defn.m"
      {
#line 729 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 729 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_37;
#line 729 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 729 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;

#line 729 "prog_io_type_defn.m"
        {
#line 729 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeNameParams_20);
        }
#line 729 "prog_io_type_defn.m"
        {
#line 729 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_62_62, parse_tree__prog_io_type_defn__V_54_54, parse_tree__prog_io_type_defn__FreeSpecs_29);
        }
#line 729 "prog_io_type_defn.m"
        {
#line 729 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_62_62, parse_tree__prog_io_type_defn__SolverSpecs_22, parse_tree__prog_io_type_defn__V_53_53);
        }
#line 730 "prog_io_type_defn.m"
        {
#line 730 "prog_io_type_defn.m"
          MR_Word base;
#line 730 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 730 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 730 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_37));
#line 730 "prog_io_type_defn.m"
        }
#line 729 "prog_io_type_defn.m"
      }
#line 694 "prog_io_type_defn.m"
  }
#line 688 "prog_io_type_defn.m"
}

#line 644 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 644 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 644 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 644 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 644 "prog_io_type_defn.m"
{
#line 648 "prog_io_type_defn.m"
  {
#line 648 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 648 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeVarSet_15;
#line 648 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_16;
#line 648 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeDefn_23;
#line 667 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_17;
#line 652 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 652 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_33_33;
#line 652 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 682 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_26;
#line 682 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Params_27;
#line 682 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeDefn_28;

#line 649 "prog_io_type_defn.m"
    {
#line 649 "prog_io_type_defn.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_15);
    }
#line 650 "prog_io_type_defn.m"
    {
#line 650 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeNameParams_16);
    }
#line 652 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 652 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 652 "prog_io_type_defn.m"
      {
#line 652 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 0)));
#line 652 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 1)));
#line 652 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 2)));
#line 652 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 652 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 652 "prog_io_type_defn.m"
          {
#line 652 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_32_32, (MR_Integer) 0)));
#line 652 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_33_33, (MR_String) "type_is_abstract_enum") == 0);
#line 652 "prog_io_type_defn.m"
          }
#line 652 "prog_io_type_defn.m"
      }
#line 667 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 660 "prog_io_type_defn.m"
      {
#line 660 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__NumBits_20;
#line 655 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Arg_19;
#line 655 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 655 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 655 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 656 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 655 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 655 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 655 "prog_io_type_defn.m"
          {
#line 655 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Arg_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_17, (MR_Integer) 0)));
#line 655 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_17, (MR_Integer) 1)));
#line 655 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 655 "prog_io_type_defn.m"
              {
#line 656 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Arg_19)) == (MR_mktag((MR_Integer) 0)));
#line 656 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 656 "prog_io_type_defn.m"
                  {
#line 656 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_19, (MR_Integer) 0)));
#line 656 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_19, (MR_Integer) 1)));
#line 656 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_19, (MR_Integer) 2)));
#line 656 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 655 "prog_io_type_defn.m"
                      {
#line 656 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 656 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 656 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__NumBits_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_35_35, (MR_Integer) 0)));
#line 655 "prog_io_type_defn.m"
                      }
#line 656 "prog_io_type_defn.m"
                  }
#line 655 "prog_io_type_defn.m"
              }
#line 655 "prog_io_type_defn.m"
          }
#line 660 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 658 "prog_io_type_defn.m"
          {
#line 658 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeDefn0_22;
#line 658 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 658 "prog_io_type_defn.m"
            {
#line 658 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NumBits_20));
#line 658 "prog_io_type_defn.m"
            }
#line 658 "prog_io_type_defn.m"
            {
#line 658 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn0_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn0_22, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 658 "prog_io_type_defn.m"
            }
#line 659 "prog_io_type_defn.m"
            {
#line 659 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn0_22));
#line 659 "prog_io_type_defn.m"
            }
#line 658 "prog_io_type_defn.m"
          }
#line 660 "prog_io_type_defn.m"
        else
#line 662 "prog_io_type_defn.m"
          {
#line 662 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_25;
#line 662 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 662 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 662 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_54_54;

#line 664 "prog_io_type_defn.m"
            {
#line 664 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 664 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 664 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[148])));
#line 664 "prog_io_type_defn.m"
            }
#line 664 "prog_io_type_defn.m"
            {
#line 664 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 664 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "prog_io_type_defn.m"
            }
#line 663 "prog_io_type_defn.m"
            {
#line 663 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 663 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 663 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 663 "prog_io_type_defn.m"
            }
#line 665 "prog_io_type_defn.m"
            {
#line 665 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_25));
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "prog_io_type_defn.m"
            }
#line 665 "prog_io_type_defn.m"
            {
#line 665 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 665 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 665 "prog_io_type_defn.m"
            }
#line 662 "prog_io_type_defn.m"
          }
#line 660 "prog_io_type_defn.m"
      }
#line 667 "prog_io_type_defn.m"
    else
#line 669 "prog_io_type_defn.m"
      {
#line 669 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 669 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 669 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 669 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_80;

#line 671 "prog_io_type_defn.m"
        {
#line 671 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 671 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 671 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[149])));
#line 671 "prog_io_type_defn.m"
        }
#line 671 "prog_io_type_defn.m"
        {
#line 671 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 671 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "prog_io_type_defn.m"
        }
#line 670 "prog_io_type_defn.m"
        {
#line 670 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 670 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_80, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 670 "prog_io_type_defn.m"
        }
#line 672 "prog_io_type_defn.m"
        {
#line 672 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_80));
#line 672 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "prog_io_type_defn.m"
        }
#line 672 "prog_io_type_defn.m"
        {
#line 672 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 672 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 672 "prog_io_type_defn.m"
        }
#line 669 "prog_io_type_defn.m"
      }
#line 675 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_16)) == (MR_mktag((MR_Integer) 1)));
#line 675 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 675 "prog_io_type_defn.m"
      {
#line 675 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_16, (MR_Integer) 0)));
#line 675 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_16, (MR_Integer) 1)));
#line 676 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeDefn_23)) == (MR_mktag((MR_Integer) 1)));
#line 676 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 676 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TypeDefn_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeDefn_23, (MR_Integer) 0)));
#line 675 "prog_io_type_defn.m"
      }
#line 682 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 679 "prog_io_type_defn.m"
      {
#line 679 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_29;
#line 679 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_30;

#line 678 "prog_io_type_defn.m"
        {
#line 678 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 678 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_26));
#line 678 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_27));
#line 678 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_28));
#line 678 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_15));
#line 678 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 678 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_29, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 678 "prog_io_type_defn.m"
        }
#line 680 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Item_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_29);
#line 681 "prog_io_type_defn.m"
        {
#line 681 "prog_io_type_defn.m"
          MR_Word base;
#line 681 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 681 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 681 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_30));
#line 681 "prog_io_type_defn.m"
        }
#line 679 "prog_io_type_defn.m"
      }
#line 682 "prog_io_type_defn.m"
    else
#line 684 "prog_io_type_defn.m"
      {
#line 684 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_31;
#line 684 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 684 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;

#line 683 "prog_io_type_defn.m"
        {
#line 683 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeNameParams_16);
        }
#line 684 "prog_io_type_defn.m"
        {
#line 684 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0, parse_tree__prog_io_type_defn__MaybeTypeDefn_23);
        }
#line 683 "prog_io_type_defn.m"
        {
#line 683 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_77_77, parse_tree__prog_io_type_defn__V_78_78);
        }
#line 685 "prog_io_type_defn.m"
        {
#line 685 "prog_io_type_defn.m"
          MR_Word base;
#line 685 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 685 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 685 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_31));
#line 685 "prog_io_type_defn.m"
        }
#line 684 "prog_io_type_defn.m"
      }
#line 648 "prog_io_type_defn.m"
  }
#line 644 "prog_io_type_defn.m"
}

#line 1370 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0_1(
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1370 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 1370 "prog_io_type_defn.m"
{
#line 1370 "prog_io_type_defn.m"
  {
#line 1370 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1370 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1370 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv0_HeadVar__3_56;

#line 1370 "prog_io_type_defn.m"
    {
#line 1370 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_HeadVar__3_56 = parse_tree__prog_io_type_defn__IntroducedFrom__func__check_no_free_body_vars__1370__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 1370 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__3_56));
#line 1370 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1370 "prog_io_type_defn.m"
  }
#line 1370 "prog_io_type_defn.m"
}

#line 566 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0(
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_13,
#line 566 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 566 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 566 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 566 "prog_io_type_defn.m"
{
#line 570 "prog_io_type_defn.m"
  {
#line 570 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 570 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameAndParams_17;
#line 570 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeType_19;
#line 594 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_20;
#line 594 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ParamTVars_21;
#line 594 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Type_22;

#line 571 "prog_io_type_defn.m"
    {
#line 571 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeNameAndParams_17);
    }
#line 574 "prog_io_type_defn.m"
    {
#line 574 "prog_io_type_defn.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__VarSet_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__MaybeType_19);
    }
#line 576 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameAndParams_17)) == (MR_mktag((MR_Integer) 1)));
#line 576 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 576 "prog_io_type_defn.m"
      {
#line 576 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_17, (MR_Integer) 0)));
#line 576 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__ParamTVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_17, (MR_Integer) 1)));
#line 577 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
#line 577 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 577 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_19, (MR_Integer) 0)));
#line 576 "prog_io_type_defn.m"
      }
#line 594 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 579 "prog_io_type_defn.m"
      {
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_53_89;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TVarSet_23;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__BodyTVars_47;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ParamTVarSet_48;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__BodyTVarSet_49;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVarSet_50;
#line 579 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVars_51;

#line 579 "prog_io_type_defn.m"
        {
#line 579 "prog_io_type_defn.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_35_35, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TVarSet_23);
        }
#line 581 "prog_io_type_defn.m"
        {
#line 581 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_35_35, parse_tree__prog_io_type_defn__BodyTerm_12);
        }
#line 1360 "prog_io_type_defn.m"
        {
#line 1360 "prog_io_type_defn.m"
          parse_tree__prog_type__type_vars_2_p_0(parse_tree__prog_io_type_defn__Type_22, &parse_tree__prog_io_type_defn__BodyTVars_47);
        }
#line 9859 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_53_89 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 1361 "prog_io_type_defn.m"
        {
#line 1361 "prog_io_type_defn.m"
          mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_89, parse_tree__prog_io_type_defn__ParamTVars_21, &parse_tree__prog_io_type_defn__ParamTVarSet_48);
        }
#line 1362 "prog_io_type_defn.m"
        {
#line 1362 "prog_io_type_defn.m"
          mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_89, parse_tree__prog_io_type_defn__BodyTVars_47, &parse_tree__prog_io_type_defn__BodyTVarSet_49);
        }
#line 1363 "prog_io_type_defn.m"
        {
#line 1363 "prog_io_type_defn.m"
          mercury__set__difference_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_89, parse_tree__prog_io_type_defn__BodyTVarSet_49, parse_tree__prog_io_type_defn__ParamTVarSet_48, &parse_tree__prog_io_type_defn__OnlyBodyTVarSet_50);
        }
#line 1364 "prog_io_type_defn.m"
        {
#line 1364 "prog_io_type_defn.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_53_89, parse_tree__prog_io_type_defn__OnlyBodyTVarSet_50, &parse_tree__prog_io_type_defn__OnlyBodyTVars_51);
        }
#line 9881 "parse_tree.prog_io_type_defn.c"
        if ((parse_tree__prog_io_type_defn__OnlyBodyTVars_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9883 "parse_tree.prog_io_type_defn.c"
          {
#line 9885 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__TypeDefn_25;
#line 9887 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_26;
#line 9889 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__Item_27;
#line 9891 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__MaybeItem0_28;

#line 584 "prog_io_type_defn.m"
            {
#line 584 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_22));
#line 584 "prog_io_type_defn.m"
            }
#line 585 "prog_io_type_defn.m"
            {
#line 585 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ItemTypeDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 585 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_20));
#line 585 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__ParamTVars_21));
#line 585 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_25));
#line 585 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TVarSet_23));
#line 585 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 585 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_15));
#line 585 "prog_io_type_defn.m"
            }
#line 587 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Item_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_26);
#line 588 "prog_io_type_defn.m"
            {
#line 588 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItem0_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_28, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_27));
#line 588 "prog_io_type_defn.m"
            }
#line 589 "prog_io_type_defn.m"
            {
#line 589 "prog_io_type_defn.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_28, parse_tree__prog_io_type_defn__Attributes_13, parse_tree__prog_io_type_defn__MaybeItem_16);
            }
#line 9935 "parse_tree.prog_io_type_defn.c"
          }
#line 9937 "parse_tree.prog_io_type_defn.c"
        else
#line 9939 "parse_tree.prog_io_type_defn.c"
          {
#line 9941 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_90 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9943 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_58_94;
#line 9945 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__OnlyBodyTVarNames_54;
#line 9947 "parse_tree.prog_io_type_defn.c"
            MR_String parse_tree__prog_io_type_defn__VarWord_55;
#line 9949 "parse_tree.prog_io_type_defn.c"
            MR_String parse_tree__prog_io_type_defn__OccurWord_56;
#line 9951 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__Pieces_57;
#line 9953 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__Spec_58;
#line 9955 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 9957 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 9959 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 9961 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 9963 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 9965 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_71_71;
#line 9967 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_72_72;
#line 9969 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 9971 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 9973 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 9975 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_84_84;
#line 9977 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 9979 "parse_tree.prog_io_type_defn.c"
            MR_Word parse_tree__prog_io_type_defn__FreeSpecs_95;
#line 1372 "prog_io_type_defn.m"
            MR_Box parse_tree__prog_io_type_defn__conv1_VarWord_55;
#line 1374 "prog_io_type_defn.m"
            MR_Box parse_tree__prog_io_type_defn__conv2_OccurWord_56;

#line 1370 "prog_io_type_defn.m"
            {
#line 1370 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 1370 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0_1));
#line 1370 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1370 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TVarSet_23));
#line 1370 "prog_io_type_defn.m"
            }
#line 1370 "prog_io_type_defn.m"
            {
#line 1370 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__OnlyBodyTVarNames_54 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_89, parse_tree__prog_io_type_defn__TypeCtorInfo_54_90, parse_tree__prog_io_type_defn__V_59_59, parse_tree__prog_io_type_defn__OnlyBodyTVars_51);
            }
#line 1372 "prog_io_type_defn.m"
            {
#line 1372 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__conv1_VarWord_55 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_89, parse_tree__prog_io_type_defn__TypeCtorInfo_54_90, parse_tree__prog_io_type_defn__OnlyBodyTVars_51, ((MR_Box) ((MR_String) "the type variable")), ((MR_Box) ((MR_String) "the type variables")));
            }
#line 1372 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__VarWord_55 = ((MR_String) parse_tree__prog_io_type_defn__conv1_VarWord_55);
#line 1374 "prog_io_type_defn.m"
            {
#line 1374 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__conv2_OccurWord_56 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_53_89, parse_tree__prog_io_type_defn__TypeCtorInfo_54_90, parse_tree__prog_io_type_defn__OnlyBodyTVars_51, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
            }
#line 1374 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__OccurWord_56 = ((MR_String) parse_tree__prog_io_type_defn__conv2_OccurWord_56);
#line 10019 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeCtorInfo_58_94 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1376 "prog_io_type_defn.m"
            {
#line 1376 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__VarWord_55));
#line 1376 "prog_io_type_defn.m"
            }
#line 1376 "prog_io_type_defn.m"
            {
#line 1376 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 1376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1376 "prog_io_type_defn.m"
            }
#line 1376 "prog_io_type_defn.m"
            {
#line 1376 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 1376 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 1376 "prog_io_type_defn.m"
            }
#line 1377 "prog_io_type_defn.m"
            {
#line 1377 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_71_71 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_type_defn__OnlyBodyTVarNames_54);
            }
#line 1377 "prog_io_type_defn.m"
            {
#line 1377 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1377 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__OccurWord_56));
#line 1377 "prog_io_type_defn.m"
            }
#line 1377 "prog_io_type_defn.m"
            {
#line 1377 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 1377 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124])));
#line 1377 "prog_io_type_defn.m"
            }
#line 1377 "prog_io_type_defn.m"
            {
#line 1377 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_70_70 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_58_94, parse_tree__prog_io_type_defn__V_71_71, parse_tree__prog_io_type_defn__V_72_72);
            }
#line 1376 "prog_io_type_defn.m"
            {
#line 1376 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Pieces_57 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_58_94, parse_tree__prog_io_type_defn__V_64_64, parse_tree__prog_io_type_defn__V_70_70);
            }
#line 1380 "prog_io_type_defn.m"
            {
#line 1380 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_57));
#line 1380 "prog_io_type_defn.m"
            }
#line 1380 "prog_io_type_defn.m"
            {
#line 1380 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 1380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1380 "prog_io_type_defn.m"
            }
#line 1380 "prog_io_type_defn.m"
            {
#line 1380 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_84_84));
#line 1380 "prog_io_type_defn.m"
            }
#line 1380 "prog_io_type_defn.m"
            {
#line 1380 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 1380 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1380 "prog_io_type_defn.m"
            }
#line 1379 "prog_io_type_defn.m"
            {
#line 1379 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1379 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1379 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 1379 "prog_io_type_defn.m"
            }
#line 1381 "prog_io_type_defn.m"
            {
#line 1381 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__FreeSpecs_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__FreeSpecs_95, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_58));
#line 1381 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__FreeSpecs_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "prog_io_type_defn.m"
            }
#line 592 "prog_io_type_defn.m"
            {
#line 592 "prog_io_type_defn.m"
              MR_Word base;
#line 592 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 592 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 592 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__FreeSpecs_95));
#line 592 "prog_io_type_defn.m"
            }
#line 10158 "parse_tree.prog_io_type_defn.c"
          }
#line 579 "prog_io_type_defn.m"
      }
#line 594 "prog_io_type_defn.m"
    else
#line 596 "prog_io_type_defn.m"
      {
#line 596 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_31;
#line 596 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 596 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_34_34;

#line 595 "prog_io_type_defn.m"
        {
#line 595 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_33_33 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeNameAndParams_17);
        }
#line 596 "prog_io_type_defn.m"
        {
#line 596 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_34_34 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__MaybeType_19);
        }
#line 595 "prog_io_type_defn.m"
        {
#line 595 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_33_33, parse_tree__prog_io_type_defn__V_34_34);
        }
#line 597 "prog_io_type_defn.m"
        {
#line 597 "prog_io_type_defn.m"
          MR_Word base;
#line 597 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 597 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 597 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_31));
#line 597 "prog_io_type_defn.m"
        }
#line 596 "prog_io_type_defn.m"
      }
#line 570 "prog_io_type_defn.m"
  }
#line 566 "prog_io_type_defn.m"
}

#line 552 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 552 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 552 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 552 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 552 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NamedCtor_9)
#line 552 "prog_io_type_defn.m"
{
#line 555 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 555 "prog_io_type_defn.m"
    {
#line 555 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 555 "prog_io_type_defn.m"
      {
#line 555 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 555 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctor_5;
#line 555 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctors_6;
#line 556 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 556 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__V_15_15;
#line 556 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_10_10;
#line 556 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 556 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Args_12;
#line 556 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;

#line 555 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 555 "prog_io_type_defn.m"
          {
#line 555 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Ctor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 555 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Ctors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 556 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 0)));
#line 556 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 1)));
#line 556 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 2)));
#line 556 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 3)));
#line 556 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 4)));
#line 556 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 5)));
#line 556 "prog_io_type_defn.m"
            {
#line 556 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_type_defn__SymName_7, parse_tree__prog_io_type_defn__V_14_14);
            }
#line 556 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 556 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_8 == parse_tree__prog_io_type_defn__V_15_15);
#line 558 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 557 "prog_io_type_defn.m"
              {
#line 557 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__NamedCtor_9 = parse_tree__prog_io_type_defn__Ctor_5;
#line 557 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 557 "prog_io_type_defn.m"
              }
#line 558 "prog_io_type_defn.m"
            else
#line 559 "prog_io_type_defn.m"
              {
#line 559 "prog_io_type_defn.m"
                /* direct tailcall eliminated */
#line 559 "prog_io_type_defn.m"
                {
#line 559 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_type_defn__Ctors_6;

#line 559 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__1_1 = parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1;
#line 559 "prog_io_type_defn.m"
                }
#line 559 "prog_io_type_defn.m"
                continue;
#line 559 "prog_io_type_defn.m"
              }
#line 555 "prog_io_type_defn.m"
          }
#line 555 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__succeeded;
#line 555 "prog_io_type_defn.m"
      }
#line 555 "prog_io_type_defn.m"
      break;
#line 555 "prog_io_type_defn.m"
    }
#line 552 "prog_io_type_defn.m"
}

#line 507 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 507 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 507 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5)
#line 507 "prog_io_type_defn.m"
{
#line 511 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 511 "prog_io_type_defn.m"
    {
#line 511 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 511 "prog_io_type_defn.m"
      {
#line 511 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 511 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 511 "prog_io_type_defn.m"
        else
#line 513 "prog_io_type_defn.m"
          {
#line 513 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 513 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 513 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
#line 513 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
#line 513 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;
#line 541 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_18;

#line 515 "prog_io_type_defn.m"
            {
#line 515 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__find_constructor_4_p_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__SymName_16, parse_tree__prog_io_type_defn__Arity_17, &parse_tree__prog_io_type_defn__Ctor_18);
            }
#line 541 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 517 "prog_io_type_defn.m"
              {
#line 517 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 0)));
#line 516 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 1)));
#line 516 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 2)));
#line 516 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 3)));
#line 516 "prog_io_type_defn.m"
                MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 4)));
#line 516 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 5)));

#line 518 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_17 == (MR_Integer) 1);
#line 518 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 525 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 521 "prog_io_type_defn.m"
                  {
#line 521 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 521 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 521 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 521 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 523 "prog_io_type_defn.m"
                    {
#line 523 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 523 "prog_io_type_defn.m"
                    {
#line 523 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 523 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[143])));
#line 523 "prog_io_type_defn.m"
                    }
#line 523 "prog_io_type_defn.m"
                    {
#line 523 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 523 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "prog_io_type_defn.m"
                    }
#line 522 "prog_io_type_defn.m"
                    {
#line 522 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 522 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 522 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 522 "prog_io_type_defn.m"
                    }
#line 524 "prog_io_type_defn.m"
                    {
#line 524 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 524 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 524 "prog_io_type_defn.m"
                    }
#line 521 "prog_io_type_defn.m"
                  }
#line 525 "prog_io_type_defn.m"
                else
#line 528 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__ExistQVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 528 "prog_io_type_defn.m"
                else
#line 529 "prog_io_type_defn.m"
                  {
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_108;
#line 529 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_109;

#line 532 "prog_io_type_defn.m"
                    {
#line 532 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 532 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 532 "prog_io_type_defn.m"
                    }
#line 532 "prog_io_type_defn.m"
                    {
#line 532 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 532 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[57])));
#line 532 "prog_io_type_defn.m"
                    }
#line 531 "prog_io_type_defn.m"
                    {
#line 531 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[146])));
#line 531 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 531 "prog_io_type_defn.m"
                    }
#line 530 "prog_io_type_defn.m"
                    {
#line 530 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[145])));
#line 530 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 530 "prog_io_type_defn.m"
                    }
#line 530 "prog_io_type_defn.m"
                    {
#line 530 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[144])));
#line 530 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 530 "prog_io_type_defn.m"
                    }
#line 536 "prog_io_type_defn.m"
                    {
#line 536 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_75_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 537 "prog_io_type_defn.m"
                    {
#line 537 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 537 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_108));
#line 537 "prog_io_type_defn.m"
                    }
#line 537 "prog_io_type_defn.m"
                    {
#line 537 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 537 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "prog_io_type_defn.m"
                    }
#line 536 "prog_io_type_defn.m"
                    {
#line 536 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 536 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 536 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_76_76));
#line 536 "prog_io_type_defn.m"
                    }
#line 537 "prog_io_type_defn.m"
                    {
#line 537 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 537 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "prog_io_type_defn.m"
                    }
#line 535 "prog_io_type_defn.m"
                    {
#line 535 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 535 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 535 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 535 "prog_io_type_defn.m"
                    }
#line 538 "prog_io_type_defn.m"
                    {
#line 538 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_109));
#line 538 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 538 "prog_io_type_defn.m"
                    }
#line 529 "prog_io_type_defn.m"
                  }
#line 517 "prog_io_type_defn.m"
              }
#line 541 "prog_io_type_defn.m"
            else
#line 545 "prog_io_type_defn.m"
              {
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_102_102;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_103_103;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_112;
#line 545 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_113;

#line 544 "prog_io_type_defn.m"
                {
#line 544 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 544 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 544 "prog_io_type_defn.m"
                }
#line 544 "prog_io_type_defn.m"
                {
#line 544 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_90_90));
#line 544 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[59])));
#line 544 "prog_io_type_defn.m"
                }
#line 543 "prog_io_type_defn.m"
                {
#line 543 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[147])));
#line 543 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_89_89));
#line 543 "prog_io_type_defn.m"
                }
#line 542 "prog_io_type_defn.m"
                {
#line 542 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[145])));
#line 542 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 542 "prog_io_type_defn.m"
                }
#line 542 "prog_io_type_defn.m"
                {
#line 542 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[144])));
#line 542 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 542 "prog_io_type_defn.m"
                }
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_101_101 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                }
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 547 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_112));
#line 547 "prog_io_type_defn.m"
                }
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_103_103));
#line 547 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "prog_io_type_defn.m"
                }
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 547 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 547 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 547 "prog_io_type_defn.m"
                }
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 547 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "prog_io_type_defn.m"
                }
#line 546 "prog_io_type_defn.m"
                {
#line 546 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 546 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 546 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_99_99));
#line 546 "prog_io_type_defn.m"
                }
#line 548 "prog_io_type_defn.m"
                {
#line 548 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_113));
#line 548 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 548 "prog_io_type_defn.m"
                }
#line 545 "prog_io_type_defn.m"
              }
#line 550 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 550 "prog_io_type_defn.m"
            {
#line 550 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2 = parse_tree__prog_io_type_defn__DirectArgCtors_13;
#line 550 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;

#line 550 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 550 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__2_2 = parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2;
#line 550 "prog_io_type_defn.m"
            }
#line 550 "prog_io_type_defn.m"
            continue;
#line 513 "prog_io_type_defn.m"
          }
#line 511 "prog_io_type_defn.m"
      }
#line 511 "prog_io_type_defn.m"
      break;
#line 511 "prog_io_type_defn.m"
    }
#line 507 "prog_io_type_defn.m"
}

#line 488 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_9(
#line 488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 488 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 488 "prog_io_type_defn.m"
{
#line 488 "prog_io_type_defn.m"
  {
#line 488 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 488 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 488 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv10_HeadVar__3_301;

#line 488 "prog_io_type_defn.m"
    {
#line 488 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv10_HeadVar__3_301 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__488__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 488 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv10_HeadVar__3_301));
#line 488 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 488 "prog_io_type_defn.m"
  }
#line 488 "prog_io_type_defn.m"
}

#line 482 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_8(
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 482 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 482 "prog_io_type_defn.m"
{
#line 482 "prog_io_type_defn.m"
  {
#line 482 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 482 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 482 "prog_io_type_defn.m"
    {
#line 482 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__482__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 482 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 482 "prog_io_type_defn.m"
  }
#line 482 "prog_io_type_defn.m"
}

#line 478 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 478 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 478 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 478 "prog_io_type_defn.m"
{
#line 478 "prog_io_type_defn.m"
  {
#line 478 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 478 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 478 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv9_HeadVar__2_2;

#line 478 "prog_io_type_defn.m"
    {
#line 478 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv9_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 478 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv9_HeadVar__2_2));
#line 478 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 478 "prog_io_type_defn.m"
  }
#line 478 "prog_io_type_defn.m"
}

#line 460 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 460 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 460 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 460 "prog_io_type_defn.m"
{
#line 460 "prog_io_type_defn.m"
  {
#line 460 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 460 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 460 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv6_HeadVar__3_285;

#line 460 "prog_io_type_defn.m"
    {
#line 460 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv6_HeadVar__3_285 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__460__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 460 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv6_HeadVar__3_285));
#line 460 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 460 "prog_io_type_defn.m"
  }
#line 460 "prog_io_type_defn.m"
}

#line 453 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 453 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 453 "prog_io_type_defn.m"
{
#line 453 "prog_io_type_defn.m"
  {
#line 453 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 453 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 453 "prog_io_type_defn.m"
    {
#line 453 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__453__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 453 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 453 "prog_io_type_defn.m"
  }
#line 453 "prog_io_type_defn.m"
}

#line 449 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
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
    MR_Word parse_tree__prog_io_type_defn__conv5_LambdaHeadVar__2_125;

#line 449 "prog_io_type_defn.m"
    {
#line 449 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv5_LambdaHeadVar__2_125 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__449__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 449 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv5_LambdaHeadVar__2_125));
#line 449 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 449 "prog_io_type_defn.m"
  }
#line 449 "prog_io_type_defn.m"
}

#line 434 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 434 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 434 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 434 "prog_io_type_defn.m"
{
#line 434 "prog_io_type_defn.m"
  {
#line 434 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 434 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 434 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv2_HeadVar__3_272;

#line 434 "prog_io_type_defn.m"
    {
#line 434 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv2_HeadVar__3_272 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__434__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 434 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv2_HeadVar__3_272));
#line 434 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 434 "prog_io_type_defn.m"
  }
#line 434 "prog_io_type_defn.m"
}

#line 404 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 404 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 404 "prog_io_type_defn.m"
{
#line 404 "prog_io_type_defn.m"
  {
#line 404 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 404 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 404 "prog_io_type_defn.m"
    {
#line 404 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__404__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 404 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 404 "prog_io_type_defn.m"
  }
#line 404 "prog_io_type_defn.m"
}

#line 401 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 401 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 401 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 401 "prog_io_type_defn.m"
{
#line 401 "prog_io_type_defn.m"
  {
#line 401 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 401 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 401 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_LambdaHeadVar__2_59;

#line 401 "prog_io_type_defn.m"
    {
#line 401 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_LambdaHeadVar__2_59 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__401__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 401 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_LambdaHeadVar__2_59));
#line 401 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 401 "prog_io_type_defn.m"
  }
#line 401 "prog_io_type_defn.m"
}

#line 390 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 390 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6)
#line 390 "prog_io_type_defn.m"
{
#line 393 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 393 "prog_io_type_defn.m"
    {
#line 393 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 393 "prog_io_type_defn.m"
      {
#line 393 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 393 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 393 "prog_io_type_defn.m"
        else
#line 394 "prog_io_type_defn.m"
          {
#line 394 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 0)));
#line 394 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 1)));
#line 394 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 0)));
#line 394 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 1)));
#line 394 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 3)));
#line 394 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;
#line 395 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 2)));
#line 395 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 4)));
#line 395 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 5)));
#line 420 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NotExistQOrParamVars_30;
#line 401 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeInfo_259_259;
#line 401 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_25;
#line 401 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27;
#line 401 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28;
#line 401 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 401 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 404 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___ExistQOrParamVars_29;
#line 406 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 406 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;

#line 401 "prog_io_type_defn.m"
            {
#line 401 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__CtorArgTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[3], parse_tree__prog_io_type_defn__CtorArgs_22);
            }
#line 402 "prog_io_type_defn.m"
            {
#line 402 "prog_io_type_defn.m"
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_25, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27);
            }
#line 11138 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeInfo_259_259 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 403 "prog_io_type_defn.m"
            {
#line 403 "prog_io_type_defn.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_259_259, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28);
            }
#line 404 "prog_io_type_defn.m"
            {
#line 404 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_61_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_259_259, parse_tree__prog_io_type_defn__ExistQVars_19, parse_tree__prog_io_type_defn__HeadVar__1_1);
            }
#line 404 "prog_io_type_defn.m"
            {
#line 404 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 404 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3]));
#line 404 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2));
#line 404 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 404 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 404 "prog_io_type_defn.m"
            }
#line 404 "prog_io_type_defn.m"
            {
#line 404 "prog_io_type_defn.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_259_259, parse_tree__prog_io_type_defn__V_60_60, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28, &parse_tree__prog_io_type_defn___ExistQOrParamVars_29, &parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
            }
#line 406 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQOrParamVars_30)) == (MR_mktag((MR_Integer) 1)));
#line 406 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 406 "prog_io_type_defn.m"
              {
#line 406 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 0)));
#line 406 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 1)));
#line 409 "prog_io_type_defn.m"
                {
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_263_263 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_33;
#line 409 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Pieces_35;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_36;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 409 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__V_66_66;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_79_79;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_80_80;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_81_81;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 409 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 413 "prog_io_type_defn.m"
                  MR_Box parse_tree__prog_io_type_defn__conv1_V_66_66;

#line 409 "prog_io_type_defn.m"
                  {
#line 409 "prog_io_type_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, parse_tree__prog_io_type_defn__TypeCtorInfo_263_263, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_33);
                  }
#line 410 "prog_io_type_defn.m"
                  {
#line 410 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_263_263, parse_tree__prog_io_type_defn__GenericVarSet_33, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
                  }
#line 413 "prog_io_type_defn.m"
                  {
#line 413 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__conv1_V_66_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
                  }
#line 413 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = ((MR_String) parse_tree__prog_io_type_defn__conv1_V_66_66);
#line 413 "prog_io_type_defn.m"
                  {
#line 413 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 413 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 413 "prog_io_type_defn.m"
                  }
#line 415 "prog_io_type_defn.m"
                  {
#line 415 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 415 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34));
#line 415 "prog_io_type_defn.m"
                  }
#line 415 "prog_io_type_defn.m"
                  {
#line 415 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 415 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[31])));
#line 415 "prog_io_type_defn.m"
                  }
#line 414 "prog_io_type_defn.m"
                  {
#line 414 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 414 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 414 "prog_io_type_defn.m"
                  }
#line 412 "prog_io_type_defn.m"
                  {
#line 412 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[139])));
#line 412 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 412 "prog_io_type_defn.m"
                  }
#line 418 "prog_io_type_defn.m"
                  {
#line 418 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, parse_tree__prog_io_type_defn__BodyTerm_3);
                  }
#line 418 "prog_io_type_defn.m"
                  {
#line 418 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_35));
#line 418 "prog_io_type_defn.m"
                  }
#line 418 "prog_io_type_defn.m"
                  {
#line 418 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 418 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_type_defn.m"
                  }
#line 418 "prog_io_type_defn.m"
                  {
#line 418 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_81_81));
#line 418 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 418 "prog_io_type_defn.m"
                  }
#line 418 "prog_io_type_defn.m"
                  {
#line 418 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_80_80));
#line 418 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_type_defn.m"
                  }
#line 417 "prog_io_type_defn.m"
                  {
#line 417 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 417 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 417 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_79_79));
#line 417 "prog_io_type_defn.m"
                  }
#line 419 "prog_io_type_defn.m"
                  {
#line 419 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_36));
#line 419 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 419 "prog_io_type_defn.m"
                  }
#line 409 "prog_io_type_defn.m"
                }
#line 406 "prog_io_type_defn.m"
              }
#line 406 "prog_io_type_defn.m"
            else
#line 445 "prog_io_type_defn.m"
              {
#line 445 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQParamsSet_39;
#line 425 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_266_266 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 425 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVarsSet_37;
#line 425 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsSet_38;

#line 425 "prog_io_type_defn.m"
                {
#line 425 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn__ExistQVarsSet_37);
                }
#line 426 "prog_io_type_defn.m"
                {
#line 426 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__HeadVar__1_1, &parse_tree__prog_io_type_defn__ParamsSet_38);
                }
#line 427 "prog_io_type_defn.m"
                {
#line 427 "prog_io_type_defn.m"
                  mercury__set__intersect_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__ExistQVarsSet_37, parse_tree__prog_io_type_defn__ParamsSet_38, &parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 428 "prog_io_type_defn.m"
                {
#line 428 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__prog_io_type_defn__TypeInfo_266_266, parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 445 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 431 "prog_io_type_defn.m"
                  {
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_267_267 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_268_268;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_270_270;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_274_274;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParams_40;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_91_91;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 431 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_93_93;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_97_97;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_98_98;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 431 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_101_101;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_115_115;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_117_117;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_118_118;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_119_119;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GenericVarSet_219;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_220;
#line 431 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_221;
#line 436 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv3_V_93_93;
#line 439 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv4_V_101_101;

#line 431 "prog_io_type_defn.m"
                    {
#line 431 "prog_io_type_defn.m"
                      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__ExistQParamsSet_39, &parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 11447 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_268_268 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 432 "prog_io_type_defn.m"
                    {
#line 432 "prog_io_type_defn.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_219);
                    }
#line 11454 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_270_270 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 434 "prog_io_type_defn.m"
                    {
#line 434 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 434 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3));
#line 434 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 434 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_219));
#line 434 "prog_io_type_defn.m"
                    }
#line 434 "prog_io_type_defn.m"
                    {
#line 434 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__V_87_87, parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 11475 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_274_274 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 436 "prog_io_type_defn.m"
                    {
#line 436 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv3_V_93_93 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                    }
#line 436 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_93_93 = ((MR_String) parse_tree__prog_io_type_defn__conv3_V_93_93);
#line 436 "prog_io_type_defn.m"
                    {
#line 436 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 436 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_93_93));
#line 436 "prog_io_type_defn.m"
                    }
#line 437 "prog_io_type_defn.m"
                    {
#line 437 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 437 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_type_defn.m"
                    }
#line 435 "prog_io_type_defn.m"
                    {
#line 435 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 435 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_91_91));
#line 435 "prog_io_type_defn.m"
                    }
#line 438 "prog_io_type_defn.m"
                    {
#line 438 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_98_98 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41);
                    }
#line 439 "prog_io_type_defn.m"
                    {
#line 439 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv4_V_101_101 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_267_267, parse_tree__prog_io_type_defn__TypeCtorInfo_270_270, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
                    }
#line 439 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_101_101 = ((MR_String) parse_tree__prog_io_type_defn__conv4_V_101_101);
#line 439 "prog_io_type_defn.m"
                    {
#line 439 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 439 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 439 "prog_io_type_defn.m"
                    }
#line 439 "prog_io_type_defn.m"
                    {
#line 439 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 439 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[35])));
#line 439 "prog_io_type_defn.m"
                    }
#line 438 "prog_io_type_defn.m"
                    {
#line 438 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_274_274, parse_tree__prog_io_type_defn__V_98_98, parse_tree__prog_io_type_defn__V_99_99);
                    }
#line 437 "prog_io_type_defn.m"
                    {
#line 437 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_220 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_274_274, parse_tree__prog_io_type_defn__V_88_88, parse_tree__prog_io_type_defn__V_97_97);
                    }
#line 443 "prog_io_type_defn.m"
                    {
#line 443 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, parse_tree__prog_io_type_defn__BodyTerm_3);
                    }
#line 443 "prog_io_type_defn.m"
                    {
#line 443 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_220));
#line 443 "prog_io_type_defn.m"
                    }
#line 443 "prog_io_type_defn.m"
                    {
#line 443 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_119_119));
#line 443 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "prog_io_type_defn.m"
                    }
#line 443 "prog_io_type_defn.m"
                    {
#line 443 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_117_117));
#line 443 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_118_118));
#line 443 "prog_io_type_defn.m"
                    }
#line 443 "prog_io_type_defn.m"
                    {
#line 443 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 443 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "prog_io_type_defn.m"
                    }
#line 442 "prog_io_type_defn.m"
                    {
#line 442 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 442 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 442 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_221, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_115_115));
#line 442 "prog_io_type_defn.m"
                    }
#line 444 "prog_io_type_defn.m"
                    {
#line 444 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_221));
#line 444 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 444 "prog_io_type_defn.m"
                    }
#line 431 "prog_io_type_defn.m"
                  }
#line 445 "prog_io_type_defn.m"
                else
#line 473 "prog_io_type_defn.m"
                  {
#line 473 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVars_44;
#line 449 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_277_277;
#line 449 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ConstraintTVars_42;
#line 449 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_126_126;
#line 449 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_127_127;
#line 449 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_223;
#line 449 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_224;
#line 449 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_225;
#line 453 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn___OccursExistQVars_43;
#line 455 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 455 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 449 "prog_io_type_defn.m"
                    {
#line 449 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__CtorArgTypes_223 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[4], parse_tree__prog_io_type_defn__CtorArgs_22);
                    }
#line 450 "prog_io_type_defn.m"
                    {
#line 450 "prog_io_type_defn.m"
                      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_223, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_224);
                    }
#line 11660 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeInfo_277_277 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 451 "prog_io_type_defn.m"
                    {
#line 451 "prog_io_type_defn.m"
                      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_277_277, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_224, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_225);
                    }
#line 452 "prog_io_type_defn.m"
                    {
#line 452 "prog_io_type_defn.m"
                      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_type_defn__Constraints_20, &parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 453 "prog_io_type_defn.m"
                    {
#line 453 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_127_127 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_277_277, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_225, parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 453 "prog_io_type_defn.m"
                    {
#line 453 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3]));
#line 453 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5));
#line 453 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_127_127));
#line 453 "prog_io_type_defn.m"
                    }
#line 453 "prog_io_type_defn.m"
                    {
#line 453 "prog_io_type_defn.m"
                      mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_277_277, parse_tree__prog_io_type_defn__V_126_126, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn___OccursExistQVars_43, &parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                    }
#line 455 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotOccursExistQVars_44)) == (MR_mktag((MR_Integer) 1)));
#line 455 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 455 "prog_io_type_defn.m"
                      {
#line 455 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 0)));
#line 455 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 1)));
#line 458 "prog_io_type_defn.m"
                        {
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_280_280 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeInfo_282_282;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_283_283;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_287_287;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVarStrs_47;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_128_128;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_129_129;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_132_132;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_133_133;
#line 458 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_134_134;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_138_138;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_139_139;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_140_140;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_143_143;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_144_144;
#line 458 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_145_145;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_156_156;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_157_157;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_158_158;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_159_159;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_160_160;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__GenericVarSet_226;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_227;
#line 458 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_228;
#line 463 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv7_V_134_134;
#line 467 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv8_V_145_145;

#line 458 "prog_io_type_defn.m"
                          {
#line 458 "prog_io_type_defn.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_280_280, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_226);
                          }
#line 11766 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeInfo_282_282 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 11768 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_283_283 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 460 "prog_io_type_defn.m"
                          {
#line 460 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 460 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 460 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6));
#line 460 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 460 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_128_128, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_226));
#line 460 "prog_io_type_defn.m"
                          }
#line 460 "prog_io_type_defn.m"
                          {
#line 460 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NotOccursExistQVarStrs_47 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_282_282, parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__V_128_128, parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                          }
#line 11789 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_287_287 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 463 "prog_io_type_defn.m"
                          {
#line 463 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv7_V_134_134 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_282_282, parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                          }
#line 463 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_134_134 = ((MR_String) parse_tree__prog_io_type_defn__conv7_V_134_134);
#line 463 "prog_io_type_defn.m"
                          {
#line 463 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 463 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_133_133, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_134_134));
#line 463 "prog_io_type_defn.m"
                          }
#line 464 "prog_io_type_defn.m"
                          {
#line 464 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_133_133));
#line 464 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "prog_io_type_defn.m"
                          }
#line 462 "prog_io_type_defn.m"
                          {
#line 462 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 462 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_129_129, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_132_132));
#line 462 "prog_io_type_defn.m"
                          }
#line 465 "prog_io_type_defn.m"
                          {
#line 465 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_139_139 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__NotOccursExistQVarStrs_47);
                          }
#line 467 "prog_io_type_defn.m"
                          {
#line 467 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv8_V_145_145 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_282_282, parse_tree__prog_io_type_defn__TypeCtorInfo_283_283, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                          }
#line 467 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_145_145 = ((MR_String) parse_tree__prog_io_type_defn__conv8_V_145_145);
#line 467 "prog_io_type_defn.m"
                          {
#line 467 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 467 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_144_144, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_145_145));
#line 467 "prog_io_type_defn.m"
                          }
#line 468 "prog_io_type_defn.m"
                          {
#line 468 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_144_144));
#line 468 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[37])));
#line 468 "prog_io_type_defn.m"
                          }
#line 466 "prog_io_type_defn.m"
                          {
#line 466 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[141])));
#line 466 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_143_143));
#line 466 "prog_io_type_defn.m"
                          }
#line 465 "prog_io_type_defn.m"
                          {
#line 465 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_138_138 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_287_287, parse_tree__prog_io_type_defn__V_139_139, parse_tree__prog_io_type_defn__V_140_140);
                          }
#line 464 "prog_io_type_defn.m"
                          {
#line 464 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_227 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_287_287, parse_tree__prog_io_type_defn__V_129_129, parse_tree__prog_io_type_defn__V_138_138);
                          }
#line 471 "prog_io_type_defn.m"
                          {
#line 471 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_158_158 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_280_280, parse_tree__prog_io_type_defn__BodyTerm_3);
                          }
#line 471 "prog_io_type_defn.m"
                          {
#line 471 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_227));
#line 471 "prog_io_type_defn.m"
                          }
#line 471 "prog_io_type_defn.m"
                          {
#line 471 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_159_159, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_160_160));
#line 471 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "prog_io_type_defn.m"
                          }
#line 471 "prog_io_type_defn.m"
                          {
#line 471 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_157_157, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_158_158));
#line 471 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_159_159));
#line 471 "prog_io_type_defn.m"
                          }
#line 471 "prog_io_type_defn.m"
                          {
#line 471 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_157_157));
#line 471 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "prog_io_type_defn.m"
                          }
#line 470 "prog_io_type_defn.m"
                          {
#line 470 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_228, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 470 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_228, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_156_156));
#line 470 "prog_io_type_defn.m"
                          }
#line 472 "prog_io_type_defn.m"
                          {
#line 472 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_228));
#line 472 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 472 "prog_io_type_defn.m"
                          }
#line 458 "prog_io_type_defn.m"
                        }
#line 455 "prog_io_type_defn.m"
                      }
#line 455 "prog_io_type_defn.m"
                    else
#line 502 "prog_io_type_defn.m"
                      {
#line 502 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypes_51;
#line 478 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeInfo_293_293;
#line 478 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48;
#line 478 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypes_49;
#line 478 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_165_165;
#line 478 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_229;
#line 478 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_230;
#line 482 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn___ExistQArgTypes_50;
#line 484 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 484 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_53_53;

#line 478 "prog_io_type_defn.m"
                        {
#line 478 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[8], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[5], parse_tree__prog_io_type_defn__Constraints_20);
                        }
#line 479 "prog_io_type_defn.m"
                        {
#line 479 "prog_io_type_defn.m"
                          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48, &parse_tree__prog_io_type_defn__ConstraintArgTypes_49);
                        }
#line 480 "prog_io_type_defn.m"
                        {
#line 480 "prog_io_type_defn.m"
                          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__ConstraintArgTypes_49, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_229);
                        }
#line 11989 "parse_tree.prog_io_type_defn.c"
                        parse_tree__prog_io_type_defn__TypeInfo_293_293 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 481 "prog_io_type_defn.m"
                        {
#line 481 "prog_io_type_defn.m"
                          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_293_293, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_229, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_230);
                        }
#line 482 "prog_io_type_defn.m"
                        {
#line 482 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3]));
#line 482 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_8));
#line 482 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 482 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_165_165, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_19));
#line 482 "prog_io_type_defn.m"
                        }
#line 482 "prog_io_type_defn.m"
                        {
#line 482 "prog_io_type_defn.m"
                          mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_293_293, parse_tree__prog_io_type_defn__V_165_165, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_230, &parse_tree__prog_io_type_defn___ExistQArgTypes_50, &parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                        }
#line 484 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQArgTypes_51)) == (MR_mktag((MR_Integer) 1)));
#line 484 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 484 "prog_io_type_defn.m"
                          {
#line 484 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 0)));
#line 484 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 1)));
#line 486 "prog_io_type_defn.m"
                            {
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_296_296 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeInfo_298_298;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_299_299;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_303_303;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypeStrs_54;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_166_166;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_167_167;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_170_170;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_171_171;
#line 486 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_172_172;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_176_176;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_177_177;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_178_178;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_181_181;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_182_182;
#line 486 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_183_183;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_209_209;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_210_210;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_211_211;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_212_212;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_213_213;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__GenericVarSet_231;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Pieces_232;
#line 486 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Spec_233;
#line 490 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv11_V_172_172;
#line 494 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv12_V_183_183;

#line 486 "prog_io_type_defn.m"
                              {
#line 486 "prog_io_type_defn.m"
                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_296_296, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_231);
                              }
#line 12085 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeInfo_298_298 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 12087 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_299_299 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 488 "prog_io_type_defn.m"
                              {
#line 488 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_9));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_166_166, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_231));
#line 488 "prog_io_type_defn.m"
                              }
#line 487 "prog_io_type_defn.m"
                              {
#line 487 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__NotExistQArgTypeStrs_54 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_298_298, parse_tree__prog_io_type_defn__TypeCtorInfo_299_299, parse_tree__prog_io_type_defn__V_166_166, parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                              }
#line 12108 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_303_303 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 490 "prog_io_type_defn.m"
                              {
#line 490 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv11_V_172_172 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_298_298, parse_tree__prog_io_type_defn__TypeCtorInfo_299_299, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                              }
#line 490 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_172_172 = ((MR_String) parse_tree__prog_io_type_defn__conv11_V_172_172);
#line 490 "prog_io_type_defn.m"
                              {
#line 490 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 490 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_172_172));
#line 490 "prog_io_type_defn.m"
                              }
#line 491 "prog_io_type_defn.m"
                              {
#line 491 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_171_171));
#line 491 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "prog_io_type_defn.m"
                              }
#line 489 "prog_io_type_defn.m"
                              {
#line 489 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_167_167, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 489 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_167_167, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_170_170));
#line 489 "prog_io_type_defn.m"
                              }
#line 492 "prog_io_type_defn.m"
                              {
#line 492 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_177_177 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__NotExistQArgTypeStrs_54);
                              }
#line 494 "prog_io_type_defn.m"
                              {
#line 494 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv12_V_183_183 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_298_298, parse_tree__prog_io_type_defn__TypeCtorInfo_299_299, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                              }
#line 494 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_183_183 = ((MR_String) parse_tree__prog_io_type_defn__conv12_V_183_183);
#line 494 "prog_io_type_defn.m"
                              {
#line 494 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_182_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_182_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 494 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_183_183));
#line 494 "prog_io_type_defn.m"
                              }
#line 495 "prog_io_type_defn.m"
                              {
#line 495 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_181_181, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_182_182));
#line 495 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[47])));
#line 495 "prog_io_type_defn.m"
                              }
#line 493 "prog_io_type_defn.m"
                              {
#line 493 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[142])));
#line 493 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_178_178, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_181_181));
#line 493 "prog_io_type_defn.m"
                              }
#line 492 "prog_io_type_defn.m"
                              {
#line 492 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_176_176 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_303_303, parse_tree__prog_io_type_defn__V_177_177, parse_tree__prog_io_type_defn__V_178_178);
                              }
#line 492 "prog_io_type_defn.m"
                              {
#line 492 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Pieces_232 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_303_303, parse_tree__prog_io_type_defn__V_167_167, parse_tree__prog_io_type_defn__V_176_176);
                              }
#line 500 "prog_io_type_defn.m"
                              {
#line 500 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_211_211 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_296_296, parse_tree__prog_io_type_defn__BodyTerm_3);
                              }
#line 500 "prog_io_type_defn.m"
                              {
#line 500 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_213_213 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 500 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_213_213, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_232));
#line 500 "prog_io_type_defn.m"
                              }
#line 500 "prog_io_type_defn.m"
                              {
#line 500 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_212_212, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_213_213));
#line 500 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "prog_io_type_defn.m"
                              }
#line 500 "prog_io_type_defn.m"
                              {
#line 500 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_210_210 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_210_210, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_211_211));
#line 500 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_210_210, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_212_212));
#line 500 "prog_io_type_defn.m"
                              }
#line 500 "prog_io_type_defn.m"
                              {
#line 500 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_209_209, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_210_210));
#line 500 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_209_209, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "prog_io_type_defn.m"
                              }
#line 499 "prog_io_type_defn.m"
                              {
#line 499 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Spec_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_233, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 499 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 499 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_233, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_209_209));
#line 499 "prog_io_type_defn.m"
                              }
#line 501 "prog_io_type_defn.m"
                              {
#line 501 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_233));
#line 501 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 501 "prog_io_type_defn.m"
                              }
#line 486 "prog_io_type_defn.m"
                            }
#line 484 "prog_io_type_defn.m"
                          }
#line 484 "prog_io_type_defn.m"
                        else
#line 502 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 502 "prog_io_type_defn.m"
                      }
#line 473 "prog_io_type_defn.m"
                  }
#line 445 "prog_io_type_defn.m"
              }
#line 505 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 505 "prog_io_type_defn.m"
            {
#line 505 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4 = parse_tree__prog_io_type_defn__Ctors_17;
#line 505 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;

#line 505 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 505 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4;
#line 505 "prog_io_type_defn.m"
            }
#line 505 "prog_io_type_defn.m"
            continue;
#line 394 "prog_io_type_defn.m"
          }
#line 393 "prog_io_type_defn.m"
      }
#line 393 "prog_io_type_defn.m"
      break;
#line 393 "prog_io_type_defn.m"
    }
#line 390 "prog_io_type_defn.m"
}

#line 364 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 364 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11)
#line 364 "prog_io_type_defn.m"
{
#line 368 "prog_io_type_defn.m"
  {
#line 368 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 368 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 368 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeType_14;

#line 370 "prog_io_type_defn.m"
    {
#line 370 "prog_io_type_defn.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__TypeTerm_10, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[127]), &parse_tree__prog_io_type_defn__MaybeType_14);
    }
#line 385 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 387 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_14;
#line 385 "prog_io_type_defn.m"
    else
#line 372 "prog_io_type_defn.m"
      {
#line 372 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_14, (MR_Integer) 0)));
#line 372 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_16;
#line 372 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Arg_17;
#line 372 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailArgs_18;

#line 373 "prog_io_type_defn.m"
        {
#line 373 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__TypeTerm_10);
        }
#line 375 "prog_io_type_defn.m"
        {
#line 375 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCtorFieldName_9));
#line 375 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_15));
#line 375 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 375 "prog_io_type_defn.m"
        }
#line 328 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__Terms_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "prog_io_type_defn.m"
          {
#line 328 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[4]);
#line 328 "prog_io_type_defn.m"
          }
#line 328 "prog_io_type_defn.m"
        else
#line 330 "prog_io_type_defn.m"
          {
#line 330 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 0)));
#line 330 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Terms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 1)));
#line 357 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NameTerm_36;
#line 357 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeTerm_37;
#line 331 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 331 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 331 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 331 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 331 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 331 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_38_38;

#line 331 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_33)) == (MR_mktag((MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
              {
#line 331 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 2)));
#line 331 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
                  {
#line 331 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "::") == 0);
#line 331 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
                      {
#line 331 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
                          {
#line 331 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NameTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
                              {
#line 331 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__TypeTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io_type_defn.m"
                              }
#line 331 "prog_io_type_defn.m"
                          }
#line 331 "prog_io_type_defn.m"
                      }
#line 331 "prog_io_type_defn.m"
                  }
#line 331 "prog_io_type_defn.m"
              }
#line 357 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 332 "prog_io_type_defn.m"
              {
#line 332 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 332 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40;

#line 333 "prog_io_type_defn.m"
                {
#line 333 "prog_io_type_defn.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__NameTerm_36, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[137]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40);
                }
#line 338 "prog_io_type_defn.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40)) == (MR_mktag((MR_Integer) 0))))
#line 336 "prog_io_type_defn.m"
                  {
#line 336 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));

#line 337 "prog_io_type_defn.m"
                    {
#line 337 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_41));
#line 337 "prog_io_type_defn.m"
                    }
#line 336 "prog_io_type_defn.m"
                  }
#line 338 "prog_io_type_defn.m"
                else
#line 339 "prog_io_type_defn.m"
                  {
#line 339 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));
#line 339 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymNameArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 1)));

#line 348 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__SymNameArgs_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "prog_io_type_defn.m"
                      {
#line 349 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NameCtxt_48;
#line 349 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_49;
#line 349 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_58_58;

#line 350 "prog_io_type_defn.m"
                        {
#line 350 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__NameCtxt_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__NameTerm_36);
                        }
#line 351 "prog_io_type_defn.m"
                        {
#line 351 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_42));
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_48));
#line 351 "prog_io_type_defn.m"
                        }
#line 351 "prog_io_type_defn.m"
                        {
#line 351 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeCtorFieldName_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 351 "prog_io_type_defn.m"
                        }
#line 352 "prog_io_type_defn.m"
                        {
#line 352 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, parse_tree__prog_io_type_defn__TypeTerm_37, parse_tree__prog_io_type_defn__Terms_34);
                        }
#line 349 "prog_io_type_defn.m"
                      }
#line 348 "prog_io_type_defn.m"
                    else
#line 341 "prog_io_type_defn.m"
                      {
#line 341 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_47;
#line 341 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 341 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 341 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 341 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_73_73;

#line 346 "prog_io_type_defn.m"
                        {
#line 346 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__Term_33);
                        }
#line 346 "prog_io_type_defn.m"
                        {
#line 346 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 346 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[138])));
#line 346 "prog_io_type_defn.m"
                        }
#line 346 "prog_io_type_defn.m"
                        {
#line 346 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 346 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "prog_io_type_defn.m"
                        }
#line 345 "prog_io_type_defn.m"
                        {
#line 345 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 345 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 345 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 345 "prog_io_type_defn.m"
                        }
#line 347 "prog_io_type_defn.m"
                        {
#line 347 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_47));
#line 347 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "prog_io_type_defn.m"
                        }
#line 347 "prog_io_type_defn.m"
                        {
#line 347 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 347 "prog_io_type_defn.m"
                        }
#line 341 "prog_io_type_defn.m"
                      }
#line 339 "prog_io_type_defn.m"
                  }
#line 332 "prog_io_type_defn.m"
              }
#line 357 "prog_io_type_defn.m"
            else
#line 358 "prog_io_type_defn.m"
              {
#line 360 "prog_io_type_defn.m"
                {
#line 360 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_33, parse_tree__prog_io_type_defn__Terms_34);
                }
#line 358 "prog_io_type_defn.m"
              }
#line 330 "prog_io_type_defn.m"
          }
#line 381 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
#line 380 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeArgs_12 = parse_tree__prog_io_type_defn__MaybeTailArgs_18;
#line 381 "prog_io_type_defn.m"
        else
#line 382 "prog_io_type_defn.m"
          {
#line 382 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailArgs_18, (MR_Integer) 0)));
#line 382 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 383 "prog_io_type_defn.m"
            {
#line 383 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Arg_17));
#line 383 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Args_20));
#line 383 "prog_io_type_defn.m"
            }
#line 383 "prog_io_type_defn.m"
            {
#line 383 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 383 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeArgs_12, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 383 "prog_io_type_defn.m"
            }
#line 382 "prog_io_type_defn.m"
          }
#line 372 "prog_io_type_defn.m"
      }
#line 368 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 368 "prog_io_type_defn.m"
  }
#line 364 "prog_io_type_defn.m"
}

#line 325 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 325 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 325 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 325 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3)
#line 325 "prog_io_type_defn.m"
{
#line 328 "prog_io_type_defn.m"
  {
#line 328 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 328 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4;

#line 328 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "prog_io_type_defn.m"
      {
#line 328 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[4]);
#line 328 "prog_io_type_defn.m"
      }
#line 328 "prog_io_type_defn.m"
    else
#line 330 "prog_io_type_defn.m"
      {
#line 330 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 330 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 357 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NameTerm_13;
#line 357 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeTerm_14;
#line 331 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 331 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_28_28;
#line 331 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_29_29;
#line 331 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 331 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 331 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 331 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
          {
#line 331 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 331 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
              {
#line 331 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_28_28, (MR_String) "::") == 0);
#line 331 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
                  {
#line 331 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
                      {
#line 331 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 331 "prog_io_type_defn.m"
                          {
#line 331 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 0)));
#line 331 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 1)));
#line 331 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "prog_io_type_defn.m"
                          }
#line 331 "prog_io_type_defn.m"
                      }
#line 331 "prog_io_type_defn.m"
                  }
#line 331 "prog_io_type_defn.m"
              }
#line 331 "prog_io_type_defn.m"
          }
#line 357 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 332 "prog_io_type_defn.m"
          {
#line 332 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 332 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17;

#line 333 "prog_io_type_defn.m"
            {
#line 333 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__NameTerm_13, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[137]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17);
            }
#line 338 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
#line 336 "prog_io_type_defn.m"
              {
#line 336 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));

#line 337 "prog_io_type_defn.m"
                {
#line 337 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 337 "prog_io_type_defn.m"
                }
#line 336 "prog_io_type_defn.m"
              }
#line 338 "prog_io_type_defn.m"
            else
#line 339 "prog_io_type_defn.m"
              {
#line 339 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));
#line 339 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 1)));

#line 348 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 349 "prog_io_type_defn.m"
                  {
#line 349 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NameCtxt_25;
#line 349 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_26;
#line 349 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 350 "prog_io_type_defn.m"
                    {
#line 350 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__NameCtxt_25 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__NameTerm_13);
                    }
#line 351 "prog_io_type_defn.m"
                    {
#line 351 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_19));
#line 351 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_25));
#line 351 "prog_io_type_defn.m"
                    }
#line 351 "prog_io_type_defn.m"
                    {
#line 351 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 351 "prog_io_type_defn.m"
                    }
#line 352 "prog_io_type_defn.m"
                    {
#line 352 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, parse_tree__prog_io_type_defn__TypeTerm_14, parse_tree__prog_io_type_defn__Terms_11);
                    }
#line 349 "prog_io_type_defn.m"
                  }
#line 348 "prog_io_type_defn.m"
                else
#line 341 "prog_io_type_defn.m"
                  {
#line 341 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_24;
#line 341 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 341 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 341 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 341 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 346 "prog_io_type_defn.m"
                    {
#line 346 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_45_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__Term_10);
                    }
#line 346 "prog_io_type_defn.m"
                    {
#line 346 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 346 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[138])));
#line 346 "prog_io_type_defn.m"
                    }
#line 346 "prog_io_type_defn.m"
                    {
#line 346 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 346 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "prog_io_type_defn.m"
                    }
#line 345 "prog_io_type_defn.m"
                    {
#line 345 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 345 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 345 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 345 "prog_io_type_defn.m"
                    }
#line 347 "prog_io_type_defn.m"
                    {
#line 347 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_24));
#line 347 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "prog_io_type_defn.m"
                    }
#line 347 "prog_io_type_defn.m"
                    {
#line 347 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 347 "prog_io_type_defn.m"
                    }
#line 341 "prog_io_type_defn.m"
                  }
#line 339 "prog_io_type_defn.m"
              }
#line 332 "prog_io_type_defn.m"
          }
#line 357 "prog_io_type_defn.m"
        else
#line 358 "prog_io_type_defn.m"
          {
#line 360 "prog_io_type_defn.m"
            {
#line 360 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_10, parse_tree__prog_io_type_defn__Terms_11);
            }
#line 358 "prog_io_type_defn.m"
          }
#line 330 "prog_io_type_defn.m"
      }
#line 328 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_4;
#line 328 "prog_io_type_defn.m"
  }
#line 325 "prog_io_type_defn.m"
}

#line 266 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 266 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9)
#line 266 "prog_io_type_defn.m"
{
#line 269 "prog_io_type_defn.m"
  {
#line 269 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 269 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 269 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 269 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 321 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ExistentialConstraints_48;
#line 321 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 316 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 316 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 316 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 316 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 316 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 316 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 316 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 316 "prog_io_type_defn.m"
      {
#line 316 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 316 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 316 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 316 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 316 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 316 "prog_io_type_defn.m"
          {
#line 316 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 316 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "=>") == 0);
#line 316 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 316 "prog_io_type_defn.m"
              {
#line 317 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 317 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 317 "prog_io_type_defn.m"
                  {
#line 317 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 317 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 317 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 317 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 317 "prog_io_type_defn.m"
                      {
#line 317 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__ExistentialConstraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 0)));
#line 317 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 1)));
#line 317 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_type_defn.m"
                      }
#line 317 "prog_io_type_defn.m"
                  }
#line 316 "prog_io_type_defn.m"
              }
#line 316 "prog_io_type_defn.m"
          }
#line 316 "prog_io_type_defn.m"
      }
#line 321 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 319 "prog_io_type_defn.m"
      {
#line 319 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 319 "prog_io_type_defn.m"
        {
#line 319 "prog_io_type_defn.m"
          parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistentialConstraints_48, &parse_tree__prog_io_type_defn__MaybeConstraints_12);
        }
#line 319 "prog_io_type_defn.m"
      }
#line 321 "prog_io_type_defn.m"
    else
#line 322 "prog_io_type_defn.m"
      {
#line 322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[3]);
#line 322 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__Term_9;
#line 322 "prog_io_type_defn.m"
      }
#line 275 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
#line 274 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 275 "prog_io_type_defn.m"
    else
#line 276 "prog_io_type_defn.m"
      {
#line 276 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_40_40;
#line 276 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstraints_12, (MR_Integer) 0)));
#line 276 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MainTerm_17;
#line 276 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19;
#line 285 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 281 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 281 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_26_26;
#line 281 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 281 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 281 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Context_16;

#line 281 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 281 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 281 "prog_io_type_defn.m"
          {
#line 281 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 0)));
#line 281 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 1)));
#line 281 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 2)));
#line 281 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 281 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 281 "prog_io_type_defn.m"
              {
#line 281 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_25_25, (MR_Integer) 0)));
#line 281 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_26_26, (MR_String) "{}") == 0);
#line 281 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 281 "prog_io_type_defn.m"
                  {
#line 282 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 282 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 282 "prog_io_type_defn.m"
                      {
#line 282 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 282 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 1)));
#line 282 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "prog_io_type_defn.m"
                      }
#line 281 "prog_io_type_defn.m"
                  }
#line 281 "prog_io_type_defn.m"
              }
#line 281 "prog_io_type_defn.m"
          }
#line 285 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 284 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 285 "prog_io_type_defn.m"
        else
#line 286 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 13162 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 289 "prog_io_type_defn.m"
        {
#line 289 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__MainTerm_17, parse_tree__prog_io_type_defn__VarSet_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[135]), &parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19);
        }
#line 294 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
#line 292 "prog_io_type_defn.m"
          {
#line 292 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

#line 293 "prog_io_type_defn.m"
            {
#line 293 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 293 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_34));
#line 293 "prog_io_type_defn.m"
            }
#line 292 "prog_io_type_defn.m"
          }
#line 294 "prog_io_type_defn.m"
        else
#line 295 "prog_io_type_defn.m"
          {
#line 295 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
#line 295 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
#line 295 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;

#line 296 "prog_io_type_defn.m"
            {
#line 296 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructorArgs_22 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ArgTerms_21);
            }
#line 301 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
#line 300 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;
#line 301 "prog_io_type_defn.m"
            else
#line 302 "prog_io_type_defn.m"
              {
#line 302 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructorArgs_22, (MR_Integer) 0)));
#line 302 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Ctor_24;
#line 302 "prog_io_type_defn.m"
                MR_Integer parse_tree__prog_io_type_defn__V_32_32;
#line 302 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 304 "prog_io_type_defn.m"
                {
#line 304 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_32_32 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__prog_io_type_defn__ConstructorArgs_23);
                }
#line 304 "prog_io_type_defn.m"
                {
#line 304 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_33_33 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__MainTerm_17);
                }
#line 303 "prog_io_type_defn.m"
                {
#line 303 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 303 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_8));
#line 303 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Constraints_14));
#line 303 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Functor_20));
#line 303 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ConstructorArgs_23));
#line 303 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 303 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 303 "prog_io_type_defn.m"
                }
#line 305 "prog_io_type_defn.m"
                {
#line 305 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctor_24));
#line 305 "prog_io_type_defn.m"
                }
#line 302 "prog_io_type_defn.m"
              }
#line 295 "prog_io_type_defn.m"
          }
#line 276 "prog_io_type_defn.m"
      }
#line 269 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 269 "prog_io_type_defn.m"
  }
#line 266 "prog_io_type_defn.m"
}

#line 249 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0_1(
#line 249 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 249 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 249 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 249 "prog_io_type_defn.m"
{
#line 249 "prog_io_type_defn.m"
  {
#line 249 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 249 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_47;

#line 249 "prog_io_type_defn.m"
    {
#line 249 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__249__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_HeadVar__2_47);
    }
#line 249 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_47));
#line 249 "prog_io_type_defn.m"
  }
#line 249 "prog_io_type_defn.m"
}

#line 213 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Head_8,
#line 213 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Tail_9,
#line 213 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_10)
#line 213 "prog_io_type_defn.m"
{
#line 216 "prog_io_type_defn.m"
  {
#line 216 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Head_8)) == (MR_mktag((MR_Integer) 0)));
#line 216 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeHeadConstructor_11;
#line 260 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarsTerm_36;
#line 260 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SubTerm_37;
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 247 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_45_45;
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 247 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_38_38;

#line 247 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 247 "prog_io_type_defn.m"
      {
#line 247 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_8, (MR_Integer) 0)));
#line 247 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_8, (MR_Integer) 1)));
#line 247 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_8, (MR_Integer) 2)));
#line 247 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 247 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 247 "prog_io_type_defn.m"
          {
#line 247 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, (MR_Integer) 0)));
#line 247 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_45_45, (MR_String) "some") == 0);
#line 247 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 247 "prog_io_type_defn.m"
              {
#line 247 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 247 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 247 "prog_io_type_defn.m"
                  {
#line 247 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__VarsTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, (MR_Integer) 0)));
#line 247 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, (MR_Integer) 1)));
#line 247 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 247 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 247 "prog_io_type_defn.m"
                      {
#line 247 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__SubTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, (MR_Integer) 0)));
#line 247 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, (MR_Integer) 1)));
#line 247 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "prog_io_type_defn.m"
                      }
#line 247 "prog_io_type_defn.m"
                  }
#line 247 "prog_io_type_defn.m"
              }
#line 247 "prog_io_type_defn.m"
          }
#line 247 "prog_io_type_defn.m"
      }
#line 260 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 252 "prog_io_type_defn.m"
      {
#line 252 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ExistQVars_39;

#line 248 "prog_io_type_defn.m"
        {
#line 248 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__VarsTerm_36, &parse_tree__prog_io_type_defn__ExistQVars_39);
        }
#line 252 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 249 "prog_io_type_defn.m"
          {
#line 249 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQTVars_40;

#line 249 "prog_io_type_defn.m"
            {
#line 249 "prog_io_type_defn.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[2], parse_tree__prog_io_type_defn__ExistQVars_39, &parse_tree__prog_io_type_defn__ExistQTVars_40);
            }
#line 250 "prog_io_type_defn.m"
            {
#line 250 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeHeadConstructor_11 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistQTVars_40, parse_tree__prog_io_type_defn__SubTerm_37);
            }
#line 249 "prog_io_type_defn.m"
          }
#line 252 "prog_io_type_defn.m"
        else
#line 253 "prog_io_type_defn.m"
          {
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_52_79 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 253 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__TermStr_41;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Pieces_42;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_43;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 253 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_69_69;

#line 253 "prog_io_type_defn.m"
            {
#line 253 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TermStr_41 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_79, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__Head_8);
            }
#line 255 "prog_io_type_defn.m"
            {
#line 255 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 255 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_41));
#line 255 "prog_io_type_defn.m"
            }
#line 255 "prog_io_type_defn.m"
            {
#line 255 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 255 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 255 "prog_io_type_defn.m"
            }
#line 254 "prog_io_type_defn.m"
            {
#line 254 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[133])));
#line 254 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_42, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 254 "prog_io_type_defn.m"
            }
#line 257 "prog_io_type_defn.m"
            {
#line 257 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_79, parse_tree__prog_io_type_defn__VarsTerm_36);
            }
#line 257 "prog_io_type_defn.m"
            {
#line 257 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_42));
#line 257 "prog_io_type_defn.m"
            }
#line 257 "prog_io_type_defn.m"
            {
#line 257 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 257 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io_type_defn.m"
            }
#line 257 "prog_io_type_defn.m"
            {
#line 257 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 257 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 257 "prog_io_type_defn.m"
            }
#line 257 "prog_io_type_defn.m"
            {
#line 257 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 257 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io_type_defn.m"
            }
#line 256 "prog_io_type_defn.m"
            {
#line 256 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 256 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 256 "prog_io_type_defn.m"
            }
#line 258 "prog_io_type_defn.m"
            {
#line 258 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_43));
#line 258 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_io_type_defn.m"
            }
#line 258 "prog_io_type_defn.m"
            {
#line 258 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeHeadConstructor_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 258 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 258 "prog_io_type_defn.m"
            }
#line 253 "prog_io_type_defn.m"
          }
#line 252 "prog_io_type_defn.m"
      }
#line 260 "prog_io_type_defn.m"
    else
#line 261 "prog_io_type_defn.m"
      {
#line 262 "prog_io_type_defn.m"
        {
#line 262 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeHeadConstructor_11 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Head_8);
        }
#line 261 "prog_io_type_defn.m"
      }
#line 227 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__Tail_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 223 "prog_io_type_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 0))))
#line 225 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeConstructors_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11;
#line 223 "prog_io_type_defn.m"
      else
#line 221 "prog_io_type_defn.m"
        {
#line 221 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__HeadConstructor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
#line 221 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 222 "prog_io_type_defn.m"
          {
#line 222 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_12));
#line 222 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "prog_io_type_defn.m"
          }
#line 222 "prog_io_type_defn.m"
          {
#line 222 "prog_io_type_defn.m"
            MR_Word base;
#line 222 "prog_io_type_defn.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_io_type_defn.m"
            *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 222 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 222 "prog_io_type_defn.m"
          }
#line 221 "prog_io_type_defn.m"
        }
#line 227 "prog_io_type_defn.m"
    else
#line 228 "prog_io_type_defn.m"
      {
#line 228 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Tail_9, (MR_Integer) 0)));
#line 228 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Tail_9, (MR_Integer) 1)));
#line 228 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailConstructors_16;
#line 237 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailConstructors_17;
#line 237 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadConstructor_24;

#line 229 "prog_io_type_defn.m"
        {
#line 229 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__HeadTail_14, parse_tree__prog_io_type_defn__TailTail_15, &parse_tree__prog_io_type_defn__MaybeTailConstructors_16);
        }
#line 232 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 1)));
#line 232 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 232 "prog_io_type_defn.m"
          {
#line 232 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__HeadConstructor_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
#line 233 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailConstructors_16)) == (MR_mktag((MR_Integer) 1)));
#line 233 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 233 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TailConstructors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailConstructors_16, (MR_Integer) 0)));
#line 232 "prog_io_type_defn.m"
          }
#line 237 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 235 "prog_io_type_defn.m"
          {
#line 235 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 236 "prog_io_type_defn.m"
            {
#line 236 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_18_18 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_24)), parse_tree__prog_io_type_defn__TailConstructors_17);
            }
#line 236 "prog_io_type_defn.m"
            {
#line 236 "prog_io_type_defn.m"
              MR_Word base;
#line 236 "prog_io_type_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 236 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 236 "prog_io_type_defn.m"
            }
#line 235 "prog_io_type_defn.m"
          }
#line 237 "prog_io_type_defn.m"
        else
#line 239 "prog_io_type_defn.m"
          {
#line 239 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 239 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 239 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_23;

#line 238 "prog_io_type_defn.m"
            {
#line 238 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, parse_tree__prog_io_type_defn__MaybeHeadConstructor_11);
            }
#line 239 "prog_io_type_defn.m"
            {
#line 239 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_20_20 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], parse_tree__prog_io_type_defn__MaybeTailConstructors_16);
            }
#line 238 "prog_io_type_defn.m"
            {
#line 238 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__V_20_20);
            }
#line 240 "prog_io_type_defn.m"
            {
#line 240 "prog_io_type_defn.m"
              MR_Word base;
#line 240 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 240 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 240 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_23));
#line 240 "prog_io_type_defn.m"
            }
#line 239 "prog_io_type_defn.m"
          }
#line 228 "prog_io_type_defn.m"
      }
#line 216 "prog_io_type_defn.m"
  }
#line 213 "prog_io_type_defn.m"
}

#line 203 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_3_f_0(
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 203 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 203 "prog_io_type_defn.m"
{
#line 206 "prog_io_type_defn.m"
  {
#line 206 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 206 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstructors_8;
#line 206 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadBodyTerm_9;
#line 206 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TailBodyTerms_10;
#line 206 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 207 "prog_io_type_defn.m"
    {
#line 207 "prog_io_type_defn.m"
      parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__V_11_11);
    }
#line 207 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__HeadBodyTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 207 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__TailBodyTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 1)));
#line 208 "prog_io_type_defn.m"
    {
#line 208 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadBodyTerm_9, parse_tree__prog_io_type_defn__TailBodyTerms_10, &parse_tree__prog_io_type_defn__MaybeConstructors_8);
    }
#line 206 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeConstructors_8;
#line 206 "prog_io_type_defn.m"
  }
#line 203 "prog_io_type_defn.m"
}

#line 184 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 184 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 184 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 184 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6)
#line 184 "prog_io_type_defn.m"
{
#line 194 "prog_io_type_defn.m"
  {
#line 194 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 194 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CtorsTermPrime_9;
#line 194 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_10;
#line 189 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 189 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 189 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_12_12;
#line 189 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 189 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 189 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn___Context_8;

#line 189 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 189 "prog_io_type_defn.m"
      {
#line 189 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 0)));
#line 189 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 1)));
#line 189 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 2)));
#line 189 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 189 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 189 "prog_io_type_defn.m"
          {
#line 189 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 189 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_12_12, (MR_String) "where") == 0);
#line 189 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 189 "prog_io_type_defn.m"
              {
#line 190 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_7)) == (MR_mktag((MR_Integer) 1)));
#line 190 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 190 "prog_io_type_defn.m"
                  {
#line 190 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__CtorsTermPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 0)));
#line 190 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 1)));
#line 190 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 190 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 190 "prog_io_type_defn.m"
                      {
#line 190 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 190 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 1)));
#line 190 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "prog_io_type_defn.m"
                      }
#line 190 "prog_io_type_defn.m"
                  }
#line 189 "prog_io_type_defn.m"
              }
#line 189 "prog_io_type_defn.m"
          }
#line 189 "prog_io_type_defn.m"
      }
#line 194 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 192 "prog_io_type_defn.m"
      {
#line 192 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__CtorsTermPrime_9;
#line 193 "prog_io_type_defn.m"
        {
#line 193 "prog_io_type_defn.m"
          MR_Word base;
#line 193 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = base;
#line 193 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_10));
#line 193 "prog_io_type_defn.m"
        }
#line 192 "prog_io_type_defn.m"
      }
#line 194 "prog_io_type_defn.m"
    else
#line 195 "prog_io_type_defn.m"
      {
#line 195 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__Term_4;
#line 196 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 195 "prog_io_type_defn.m"
      }
#line 194 "prog_io_type_defn.m"
  }
#line 184 "prog_io_type_defn.m"
}

#line 149 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0_1(
#line 149 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg)
#line 149 "prog_io_type_defn.m"
{
#line 149 "prog_io_type_defn.m"
  {
#line 149 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 149 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 149 "prog_io_type_defn.m"
    {
#line 149 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_du_type_defn__149__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))));
    }
#line 149 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 149 "prog_io_type_defn.m"
  }
#line 149 "prog_io_type_defn.m"
}

#line 110 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 110 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 110 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 110 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 110 "prog_io_type_defn.m"
{
#line 114 "prog_io_type_defn.m"
  {
#line 114 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__IsSolverType_17;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Attributes_18;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverSpecs_21;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_22;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CtorsTerm_23;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereTerm_24;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_25;
#line 114 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhere_26;
#line 176 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_28;
#line 176 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Params_29;
#line 176 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__OneOrMoreCtors_30;
#line 176 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_31;
#line 176 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_32;
#line 176 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_33;

#line 115 "prog_io_type_defn.m"
    {
#line 115 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__get_is_solver_type_3_p_0(&parse_tree__prog_io_type_defn__IsSolverType_17, parse_tree__prog_io_type_defn__Attributes0_13, &parse_tree__prog_io_type_defn__Attributes_18);
    }
#line 123 "prog_io_type_defn.m"
#line 123 "prog_io_type_defn.m"
    switch (parse_tree__prog_io_type_defn__IsSolverType_17) {
#line 123 "prog_io_type_defn.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 123 "prog_io_type_defn.m"
      case (MR_Integer) 0:
#line 125 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__SolverSpecs_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 123 "prog_io_type_defn.m"
        break;
#line 123 "prog_io_type_defn.m"
      case (MR_Integer) 1:
#line 117 "prog_io_type_defn.m"
        {
#line 117 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__SolverSpec_20;
#line 117 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 117 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 117 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_60_60;

#line 121 "prog_io_type_defn.m"
          {
#line 121 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_60_60 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
          }
#line 121 "prog_io_type_defn.m"
          {
#line 121 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 121 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[132])));
#line 121 "prog_io_type_defn.m"
          }
#line 121 "prog_io_type_defn.m"
          {
#line 121 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_59_59));
#line 121 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "prog_io_type_defn.m"
          }
#line 120 "prog_io_type_defn.m"
          {
#line 120 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SolverSpec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 120 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverSpec_20, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 120 "prog_io_type_defn.m"
          }
#line 122 "prog_io_type_defn.m"
          {
#line 122 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__SolverSpecs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverSpec_20));
#line 122 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__SolverSpecs_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "prog_io_type_defn.m"
          }
#line 117 "prog_io_type_defn.m"
        }
#line 123 "prog_io_type_defn.m"
        break;
#line 123 "prog_io_type_defn.m"
    }
#line 128 "prog_io_type_defn.m"
    {
#line 128 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_22);
    }
#line 129 "prog_io_type_defn.m"
    {
#line 129 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(parse_tree__prog_io_type_defn__BodyTerm_12, &parse_tree__prog_io_type_defn__CtorsTerm_23, &parse_tree__prog_io_type_defn__MaybeWhereTerm_24);
    }
#line 130 "prog_io_type_defn.m"
    {
#line 130 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_25 = parse_tree__prog_io_type_defn__parse_constructors_3_f_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__CtorsTerm_23);
    }
#line 134 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeWhereTerm_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 132 "prog_io_type_defn.m"
      {
#line 133 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhere_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 132 "prog_io_type_defn.m"
      }
#line 134 "prog_io_type_defn.m"
    else
#line 135 "prog_io_type_defn.m"
      {
#line 135 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__WhereTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereTerm_24, (MR_Integer) 0)));

#line 136 "prog_io_type_defn.m"
        {
#line 136 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 0, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__WhereTerm_27, &parse_tree__prog_io_type_defn__MaybeWhere_26);
        }
#line 135 "prog_io_type_defn.m"
      }
#line 140 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__SolverSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 140 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 140 "prog_io_type_defn.m"
      {
#line 141 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_22)) == (MR_mktag((MR_Integer) 1)));
#line 141 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 141 "prog_io_type_defn.m"
          {
#line 141 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Name_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_22, (MR_Integer) 0)));
#line 141 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Params_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_22, (MR_Integer) 1)));
#line 142 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_25)) == (MR_mktag((MR_Integer) 1)));
#line 142 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 142 "prog_io_type_defn.m"
              {
#line 142 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__OneOrMoreCtors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_25, (MR_Integer) 0)));
#line 143 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_26)) == (MR_mktag((MR_Integer) 1)));
#line 143 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 143 "prog_io_type_defn.m"
                  {
#line 143 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__SolverTypeDetails_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_26, (MR_Integer) 0)));
#line 143 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeUserEqComp_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_26, (MR_Integer) 1)));
#line 143 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeDirectArgIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_26, (MR_Integer) 2)));
#line 143 "prog_io_type_defn.m"
                  }
#line 142 "prog_io_type_defn.m"
              }
#line 141 "prog_io_type_defn.m"
          }
#line 140 "prog_io_type_defn.m"
      }
#line 176 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 150 "prog_io_type_defn.m"
      {
#line 150 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadCtor_34;
#line 150 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailCtors_35;
#line 150 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctors_36;
#line 150 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__CtorsSpecs_37;
#line 150 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ErrorSpecs_39;
#line 150 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_70_70;

#line 149 "prog_io_type_defn.m"
        {
#line 149 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 149 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[1]));
#line 149 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0_1));
#line 149 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 149 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_31));
#line 149 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_70_70, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "prog_io_type_defn.m"
        }
#line 149 "prog_io_type_defn.m"
        {
#line 149 "prog_io_type_defn.m"
          mercury__require__expect_4_p_0(parse_tree__prog_io_type_defn__V_70_70, (MR_String) "parse_tree.prog_io_type_defn", (MR_String) "predicate \140parse_tree.prog_io_type_defn.parse_du_type_defn\'/8", (MR_String) "discriminated union type has solver type details");
        }
#line 151 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadCtor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__OneOrMoreCtors_30, (MR_Integer) 0)));
#line 151 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TailCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__OneOrMoreCtors_30, (MR_Integer) 1)));
#line 152 "prog_io_type_defn.m"
        {
#line 152 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Ctors_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Ctors_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadCtor_34));
#line 152 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Ctors_36, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TailCtors_35));
#line 152 "prog_io_type_defn.m"
        }
#line 153 "prog_io_type_defn.m"
        {
#line 153 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(parse_tree__prog_io_type_defn__Params_29, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Ctors_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__CtorsSpecs_37);
        }
#line 158 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__MaybeDirectArgIs_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 160 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ErrorSpecs_39 = parse_tree__prog_io_type_defn__CtorsSpecs_37;
#line 158 "prog_io_type_defn.m"
        else
#line 155 "prog_io_type_defn.m"
          {
#line 155 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_33, (MR_Integer) 0)));

#line 156 "prog_io_type_defn.m"
            {
#line 156 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(parse_tree__prog_io_type_defn__Ctors_36, parse_tree__prog_io_type_defn__DirectArgCtors_38, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__CtorsSpecs_37, &parse_tree__prog_io_type_defn__ErrorSpecs_39);
            }
#line 155 "prog_io_type_defn.m"
          }
#line 172 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__ErrorSpecs_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "prog_io_type_defn.m"
          {
#line 163 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeVarSet_40;
#line 163 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeDefn_41;
#line 163 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_42;
#line 163 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Item_43;
#line 163 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeItem0_44;

#line 164 "prog_io_type_defn.m"
            {
#line 164 "prog_io_type_defn.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TypeVarSet_40);
            }
#line 165 "prog_io_type_defn.m"
            {
#line 165 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 165 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctors_36));
#line 165 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_41, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_32));
#line 165 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_41, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeDirectArgIs_33));
#line 165 "prog_io_type_defn.m"
            }
#line 167 "prog_io_type_defn.m"
            {
#line 167 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ItemTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_28));
#line 167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_42, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_29));
#line 167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_42, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_41));
#line 167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_42, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_40));
#line 167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_42, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_42, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_15));
#line 167 "prog_io_type_defn.m"
            }
#line 169 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Item_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_42);
#line 170 "prog_io_type_defn.m"
            {
#line 170 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItem0_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 170 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_43));
#line 170 "prog_io_type_defn.m"
            }
#line 171 "prog_io_type_defn.m"
            {
#line 171 "prog_io_type_defn.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_44, parse_tree__prog_io_type_defn__Attributes_18, parse_tree__prog_io_type_defn__MaybeItem_16);
            }
#line 163 "prog_io_type_defn.m"
          }
#line 172 "prog_io_type_defn.m"
        else
#line 174 "prog_io_type_defn.m"
          {
#line 174 "prog_io_type_defn.m"
            MR_Word base;
#line 174 "prog_io_type_defn.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 174 "prog_io_type_defn.m"
            *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 174 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ErrorSpecs_39));
#line 174 "prog_io_type_defn.m"
          }
#line 150 "prog_io_type_defn.m"
      }
#line 176 "prog_io_type_defn.m"
    else
#line 180 "prog_io_type_defn.m"
      {
#line 180 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_86_86 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 180 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_47;
#line 180 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 180 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 180 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;
#line 180 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_79_79;
#line 180 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_80_80;

#line 178 "prog_io_type_defn.m"
        {
#line 178 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_22);
        }
#line 179 "prog_io_type_defn.m"
        {
#line 179 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_79_79 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_25);
        }
#line 180 "prog_io_type_defn.m"
        {
#line 180 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_80_80 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[5], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeWhere_26);
        }
#line 179 "prog_io_type_defn.m"
        {
#line 179 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_86_86, parse_tree__prog_io_type_defn__V_79_79, parse_tree__prog_io_type_defn__V_80_80);
        }
#line 178 "prog_io_type_defn.m"
        {
#line 178 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_76_76 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_86_86, parse_tree__prog_io_type_defn__V_77_77, parse_tree__prog_io_type_defn__V_78_78);
        }
#line 177 "prog_io_type_defn.m"
        {
#line 177 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_47 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_86_86, parse_tree__prog_io_type_defn__SolverSpecs_21, parse_tree__prog_io_type_defn__V_76_76);
        }
#line 181 "prog_io_type_defn.m"
        {
#line 181 "prog_io_type_defn.m"
          MR_Word base;
#line 181 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 181 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 181 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_47));
#line 181 "prog_io_type_defn.m"
        }
#line 180 "prog_io_type_defn.m"
      }
#line 114 "prog_io_type_defn.m"
  }
#line 110 "prog_io_type_defn.m"
}

#line 49 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_part_if_present_6_p_0(
#line 49 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_7,
#line 49 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 49 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 49 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_10,
#line 49 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__BeforeWhereTerm_11,
#line 49 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_12)
#line 49 "prog_io_type_defn.m"
{
#line 798 "prog_io_type_defn.m"
  {
#line 798 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 798 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 798 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_14;
#line 792 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 792 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 792 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 792 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 792 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 792 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 792 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 792 "prog_io_type_defn.m"
      {
#line 792 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 792 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 792 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 792 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 792 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 792 "prog_io_type_defn.m"
          {
#line 792 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 792 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) "where") == 0);
#line 792 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 792 "prog_io_type_defn.m"
              {
#line 793 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 793 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 793 "prog_io_type_defn.m"
                  {
#line 793 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 793 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 793 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 793 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 793 "prog_io_type_defn.m"
                      {
#line 793 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 793 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 793 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "prog_io_type_defn.m"
                      }
#line 793 "prog_io_type_defn.m"
                  }
#line 792 "prog_io_type_defn.m"
              }
#line 792 "prog_io_type_defn.m"
          }
#line 792 "prog_io_type_defn.m"
      }
#line 798 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 795 "prog_io_type_defn.m"
      {
#line 795 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 796 "prog_io_type_defn.m"
        {
#line 796 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0(parse_tree__prog_io_type_defn__IsSolverType_7, parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__WhereTerm_14, parse_tree__prog_io_type_defn__MaybeWhereDetails_12);
        }
#line 795 "prog_io_type_defn.m"
      }
#line 798 "prog_io_type_defn.m"
    else
#line 799 "prog_io_type_defn.m"
      {
#line 799 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__Term_10;
#line 800 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 799 "prog_io_type_defn.m"
      }
#line 798 "prog_io_type_defn.m"
  }
#line 49 "prog_io_type_defn.m"
}

#line 1314 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1314 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1314 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 1314 "prog_io_type_defn.m"
{
#line 1314 "prog_io_type_defn.m"
  {
#line 1314 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1314 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1314 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv1_HeadVar__3_120;

#line 1314 "prog_io_type_defn.m"
    {
#line 1314 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv1_HeadVar__3_120 = parse_tree__prog_io_type_defn__IntroducedFrom__func__parse_type_defn_head__1314__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 1314 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv1_HeadVar__3_120));
#line 1314 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 1314 "prog_io_type_defn.m"
  }
#line 1314 "prog_io_type_defn.m"
}

#line 1305 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1305 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1305 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1305 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1305 "prog_io_type_defn.m"
{
#line 1305 "prog_io_type_defn.m"
  {
#line 1305 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1305 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_114;

#line 1305 "prog_io_type_defn.m"
    {
#line 1305 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1305__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_HeadVar__2_114);
    }
#line 1305 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_114));
#line 1305 "prog_io_type_defn.m"
  }
#line 1305 "prog_io_type_defn.m"
}

#line 39 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(
#line 39 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 39 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 39 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_7,
#line 39 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8)
#line 39 "prog_io_type_defn.m"
{
#line 1280 "prog_io_type_defn.m"
  {
#line 1280 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1280 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1286 "prog_io_type_defn.m"
      {
#line 1286 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1286 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 2)));
#line 1286 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadResult_17;
#line 1286 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));
#line 1286 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));

#line 1288 "prog_io_type_defn.m"
        {
#line 1288 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_111_111, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__HeadTerm_7, parse_tree__prog_io_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[127]), &parse_tree__prog_io_type_defn__HeadResult_17);
        }
#line 1293 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadResult_17)) == (MR_mktag((MR_Integer) 0))))
#line 1292 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = (MR_Word) parse_tree__prog_io_type_defn__HeadResult_17;
#line 1293 "prog_io_type_defn.m"
        else
#line 1294 "prog_io_type_defn.m"
          {
#line 1294 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 0)));
#line 1294 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 1)));
#line 1294 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NameSpecs_21;
#line 1323 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ParamVars_22;

#line 1296 "prog_io_type_defn.m"
            {
#line 1296 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__check_user_type_name_3_p_0(parse_tree__prog_io_type_defn__SymName_19, parse_tree__prog_io_type_defn__HeadContext_15, &parse_tree__prog_io_type_defn__NameSpecs_21);
            }
#line 1297 "prog_io_type_defn.m"
            {
#line 1297 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_111_111, parse_tree__prog_io_type_defn__ArgTerms_20, &parse_tree__prog_io_type_defn__ParamVars_22);
            }
#line 1323 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1299 "prog_io_type_defn.m"
              {
#line 1299 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_112_112 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0];
#line 1299 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsBag_23;
#line 1299 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__DupParamVars_24;

#line 1299 "prog_io_type_defn.m"
                {
#line 1299 "prog_io_type_defn.m"
                  mercury__bag__from_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, parse_tree__prog_io_type_defn__ParamVars_22, &parse_tree__prog_io_type_defn__ParamsBag_23);
                }
#line 1300 "prog_io_type_defn.m"
                {
#line 1300 "prog_io_type_defn.m"
                  mercury__bag__to_list_only_duplicates_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, parse_tree__prog_io_type_defn__ParamsBag_23, &parse_tree__prog_io_type_defn__DupParamVars_24);
                }
#line 1311 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__DupParamVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1307 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__NameSpecs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1304 "prog_io_type_defn.m"
                    {
#line 1304 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__PrgParamVars_25;

#line 1305 "prog_io_type_defn.m"
                      {
#line 1305 "prog_io_type_defn.m"
                        mercury__list__map_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[0], parse_tree__prog_io_type_defn__ParamVars_22, &parse_tree__prog_io_type_defn__PrgParamVars_25);
                      }
#line 1306 "prog_io_type_defn.m"
                      {
#line 1306 "prog_io_type_defn.m"
                        MR_Word base;
#line 1306 "prog_io_type_defn.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "prog_io_type_defn.m"
                        *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1306 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_19));
#line 1306 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__PrgParamVars_25));
#line 1306 "prog_io_type_defn.m"
                      }
#line 1304 "prog_io_type_defn.m"
                    }
#line 1307 "prog_io_type_defn.m"
                  else
#line 1309 "prog_io_type_defn.m"
                    {
#line 1309 "prog_io_type_defn.m"
                      MR_Word base;
#line 1309 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1309 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpecs_21));
#line 1309 "prog_io_type_defn.m"
                    }
#line 1311 "prog_io_type_defn.m"
                else
#line 1312 "prog_io_type_defn.m"
                  {
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_122_122;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__DupParamVarNames_30;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_95;
#line 1312 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_96;

#line 1314 "prog_io_type_defn.m"
                    {
#line 1314 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[0]));
#line 1314 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2));
#line 1314 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1314 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1314 "prog_io_type_defn.m"
                    }
#line 1313 "prog_io_type_defn.m"
                    {
#line 1313 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__DupParamVarNames_30 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_112_112, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__V_35_35, parse_tree__prog_io_type_defn__DupParamVars_24);
                    }
#line 14722 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1316 "prog_io_type_defn.m"
                    {
#line 1316 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_41_41 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_type_defn__DupParamVarNames_30);
                    }
#line 1316 "prog_io_type_defn.m"
                    {
#line 1316 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_40_40 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_122_122, parse_tree__prog_io_type_defn__V_41_41, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[19]));
                    }
#line 1315 "prog_io_type_defn.m"
                    {
#line 1315 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_95 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_122_122, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[129]), parse_tree__prog_io_type_defn__V_40_40);
                    }
#line 1320 "prog_io_type_defn.m"
                    {
#line 1320 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_95));
#line 1320 "prog_io_type_defn.m"
                    }
#line 1320 "prog_io_type_defn.m"
                    {
#line 1320 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "prog_io_type_defn.m"
                    }
#line 1320 "prog_io_type_defn.m"
                    {
#line 1320 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 1320 "prog_io_type_defn.m"
                    }
#line 1320 "prog_io_type_defn.m"
                    {
#line 1320 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 1320 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "prog_io_type_defn.m"
                    }
#line 1319 "prog_io_type_defn.m"
                    {
#line 1319 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1319 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1319 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_96, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 1319 "prog_io_type_defn.m"
                    }
#line 1321 "prog_io_type_defn.m"
                    {
#line 1321 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_96));
#line 1321 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpecs_21));
#line 1321 "prog_io_type_defn.m"
                    }
#line 1321 "prog_io_type_defn.m"
                    {
#line 1321 "prog_io_type_defn.m"
                      MR_Word base;
#line 1321 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1321 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_59_59));
#line 1321 "prog_io_type_defn.m"
                    }
#line 1312 "prog_io_type_defn.m"
                  }
#line 1299 "prog_io_type_defn.m"
              }
#line 1323 "prog_io_type_defn.m"
            else
#line 1324 "prog_io_type_defn.m"
              {
#line 1324 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_31;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_79_79;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_101;
#line 1324 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_102;

#line 1324 "prog_io_type_defn.m"
                {
#line 1324 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_31 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_111_111, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadTerm_7);
                }
#line 1326 "prog_io_type_defn.m"
                {
#line 1326 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1326 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_31));
#line 1326 "prog_io_type_defn.m"
                }
#line 1326 "prog_io_type_defn.m"
                {
#line 1326 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1326 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1326 "prog_io_type_defn.m"
                }
#line 1325 "prog_io_type_defn.m"
                {
#line 1325 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[130])));
#line 1325 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_101, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1325 "prog_io_type_defn.m"
                }
#line 1328 "prog_io_type_defn.m"
                {
#line 1328 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_101));
#line 1328 "prog_io_type_defn.m"
                }
#line 1328 "prog_io_type_defn.m"
                {
#line 1328 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_76_76));
#line 1328 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "prog_io_type_defn.m"
                }
#line 1328 "prog_io_type_defn.m"
                {
#line 1328 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1328 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 1328 "prog_io_type_defn.m"
                }
#line 1328 "prog_io_type_defn.m"
                {
#line 1328 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 1328 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "prog_io_type_defn.m"
                }
#line 1327 "prog_io_type_defn.m"
                {
#line 1327 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1327 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1327 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_102, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 1327 "prog_io_type_defn.m"
                }
#line 1329 "prog_io_type_defn.m"
                {
#line 1329 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_102));
#line 1329 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameSpecs_21));
#line 1329 "prog_io_type_defn.m"
                }
#line 1329 "prog_io_type_defn.m"
                {
#line 1329 "prog_io_type_defn.m"
                  MR_Word base;
#line 1329 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1329 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_79_79));
#line 1329 "prog_io_type_defn.m"
                }
#line 1324 "prog_io_type_defn.m"
              }
#line 1294 "prog_io_type_defn.m"
          }
#line 1286 "prog_io_type_defn.m"
      }
#line 1280 "prog_io_type_defn.m"
    else
#line 1280 "prog_io_type_defn.m"
      {
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_93_93;
#line 1280 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));

#line 1283 "prog_io_type_defn.m"
        {
#line 1283 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_10));
#line 1283 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[131])));
#line 1283 "prog_io_type_defn.m"
        }
#line 1283 "prog_io_type_defn.m"
        {
#line 1283 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_88_88));
#line 1283 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1283 "prog_io_type_defn.m"
        }
#line 1282 "prog_io_type_defn.m"
        {
#line 1282 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1282 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1282 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_87_87));
#line 1282 "prog_io_type_defn.m"
        }
#line 1284 "prog_io_type_defn.m"
        {
#line 1284 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1284 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1284 "prog_io_type_defn.m"
        }
#line 1284 "prog_io_type_defn.m"
        {
#line 1284 "prog_io_type_defn.m"
          MR_Word base;
#line 1284 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1284 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1284 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_93_93));
#line 1284 "prog_io_type_defn.m"
        }
#line 1280 "prog_io_type_defn.m"
      }
#line 1280 "prog_io_type_defn.m"
  }
#line 39 "prog_io_type_defn.m"
}

#line 32 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(
#line 32 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 32 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 32 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeDefnTerm_10,
#line 32 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_11,
#line 32 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 32 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 32 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 32 "prog_io_type_defn.m"
{
#line 98 "prog_io_type_defn.m"
  {
#line 98 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__TypeDefnTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 98 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__Name_15;
#line 98 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadTerm_18;
#line 98 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BodyTerm_19;
#line 78 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ArgTerms_16;
#line 78 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 78 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 78 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 78 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 78 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 78 "prog_io_type_defn.m"
      {
#line 78 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 0)));
#line 78 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 1)));
#line 78 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 2)));
#line 78 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 78 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 78 "prog_io_type_defn.m"
          {
#line 78 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 81 "prog_io_type_defn.m"
            if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "==") == 0))
#line 81 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 81 "prog_io_type_defn.m"
            else
#line 81 "prog_io_type_defn.m"
            if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "--->") == 0))
#line 80 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 81 "prog_io_type_defn.m"
            else
#line 81 "prog_io_type_defn.m"
            if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "where") == 0))
#line 82 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 81 "prog_io_type_defn.m"
            else
#line 81 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = MR_FALSE;
#line 78 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 78 "prog_io_type_defn.m"
              {
#line 79 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ArgTerms_16)) == (MR_mktag((MR_Integer) 1)));
#line 79 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 79 "prog_io_type_defn.m"
                  {
#line 79 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__HeadTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_16, (MR_Integer) 0)));
#line 79 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_16, (MR_Integer) 1)));
#line 79 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 79 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 79 "prog_io_type_defn.m"
                      {
#line 79 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__BodyTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 79 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 79 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 79 "prog_io_type_defn.m"
                      }
#line 79 "prog_io_type_defn.m"
                  }
#line 78 "prog_io_type_defn.m"
              }
#line 78 "prog_io_type_defn.m"
          }
#line 78 "prog_io_type_defn.m"
      }
#line 98 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 89 "prog_io_type_defn.m"
      if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "==") == 0))
#line 91 "prog_io_type_defn.m"
        {
#line 91 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_eqv_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, parse_tree__prog_io_type_defn__BodyTerm_19, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
        }
#line 89 "prog_io_type_defn.m"
      else
#line 89 "prog_io_type_defn.m"
      if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "--->") == 0))
#line 87 "prog_io_type_defn.m"
        {
#line 87 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, parse_tree__prog_io_type_defn__BodyTerm_19, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
        }
#line 89 "prog_io_type_defn.m"
      else
#line 15165 "parse_tree.prog_io_type_defn.c"
        {
#line 15167 "parse_tree.prog_io_type_defn.c"
          MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_73;
#line 1390 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 1390 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 1390 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_72_72;

#line 1390 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes_11)) == (MR_mktag((MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 1390 "prog_io_type_defn.m"
            {
#line 1390 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes_11, (MR_Integer) 0)));
#line 1390 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes_11, (MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, (MR_Integer) 0)));
#line 1390 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, (MR_Integer) 1)));
#line 1390 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1390 "prog_io_type_defn.m"
            }
#line 15194 "parse_tree.prog_io_type_defn.c"
          if (parse_tree__prog_io_type_defn__succeeded)
#line 15196 "parse_tree.prog_io_type_defn.c"
            {
#line 15198 "parse_tree.prog_io_type_defn.c"
              MR_Word parse_tree__prog_io_type_defn__MaybeWhere_33;

#line 618 "prog_io_type_defn.m"
              {
#line 618 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_type_decl_where_term_5_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__BodyTerm_19, &parse_tree__prog_io_type_defn__MaybeWhere_33);
              }
#line 623 "prog_io_type_defn.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_33)) == (MR_mktag((MR_Integer) 0))))
#line 621 "prog_io_type_defn.m"
                {
#line 621 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Specs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhere_33, (MR_Integer) 0)));

#line 622 "prog_io_type_defn.m"
                  {
#line 622 "prog_io_type_defn.m"
                    MR_Word base;
#line 622 "prog_io_type_defn.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 622 "prog_io_type_defn.m"
                    *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 622 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_34));
#line 622 "prog_io_type_defn.m"
                  }
#line 621 "prog_io_type_defn.m"
                }
#line 623 "prog_io_type_defn.m"
              else
#line 625 "prog_io_type_defn.m"
                {
#line 625 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_33, (MR_Integer) 0)));
#line 625 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_33, (MR_Integer) 1)));
#line 625 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_33, (MR_Integer) 2)));

#line 635 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__MaybeDirectArgCtors_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "prog_io_type_defn.m"
                    {
#line 637 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_35, parse_tree__prog_io_type_defn__MaybeUserEqComp_36, parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_73, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
                    }
#line 635 "prog_io_type_defn.m"
                  else
#line 627 "prog_io_type_defn.m"
                    {
#line 627 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__Spec_40;
#line 627 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_58_58;
#line 627 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_59_59;
#line 627 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 627 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_65_65;

#line 632 "prog_io_type_defn.m"
                      {
#line 632 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_60_60 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_18);
                      }
#line 632 "prog_io_type_defn.m"
                      {
#line 632 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 632 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[125])));
#line 632 "prog_io_type_defn.m"
                      }
#line 633 "prog_io_type_defn.m"
                      {
#line 633 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_59_59));
#line 633 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "prog_io_type_defn.m"
                      }
#line 631 "prog_io_type_defn.m"
                      {
#line 631 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 631 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 631 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 631 "prog_io_type_defn.m"
                      }
#line 634 "prog_io_type_defn.m"
                      {
#line 634 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_40));
#line 634 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "prog_io_type_defn.m"
                      }
#line 634 "prog_io_type_defn.m"
                      {
#line 634 "prog_io_type_defn.m"
                        MR_Word base;
#line 634 "prog_io_type_defn.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 634 "prog_io_type_defn.m"
                        *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 634 "prog_io_type_defn.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 634 "prog_io_type_defn.m"
                      }
#line 627 "prog_io_type_defn.m"
                    }
#line 625 "prog_io_type_defn.m"
                }
#line 15323 "parse_tree.prog_io_type_defn.c"
            }
#line 15325 "parse_tree.prog_io_type_defn.c"
          else
#line 614 "prog_io_type_defn.m"
            {
#line 614 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, parse_tree__prog_io_type_defn__BodyTerm_19, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
            }
#line 15332 "parse_tree.prog_io_type_defn.c"
        }
#line 98 "prog_io_type_defn.m"
    else
#line 99 "prog_io_type_defn.m"
      {
#line 99 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__TypeDefnTerm_10, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
      }
#line 98 "prog_io_type_defn.m"
  }
#line 32 "prog_io_type_defn.m"
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
