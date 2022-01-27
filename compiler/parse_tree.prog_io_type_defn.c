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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_mutable.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_typeclass.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 685 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s {
#line 693 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded;
#line 693 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19;
#line 699 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23;
#line 701 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0;
#line 701 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25;
#line 685 "prog_io_type_defn.m"
};

#line 38 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s {
#line 1288 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded;
#line 1319 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21;
#line 1307 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0;
#line 1307 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100;
#line 1307 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23;
#line 1307 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24;
#line 1307 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30;
#line 1307 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22;
#line 1307 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22;
#line 38 "prog_io_type_defn.m"
};

#line 31 "prog_io_type_defn.m"
struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s {
#line 96 "prog_io_type_defn.m"
  MR_bool parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded;
#line 96 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19;
#line 565 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34;
#line 568 "prog_io_type_defn.m"
  jmp_buf parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0;
#line 568 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77;
#line 568 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78;
#line 568 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35;
#line 568 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36;
#line 31 "prog_io_type_defn.m"
};


#line 163 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 166 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 172 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 175 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 178 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 181 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 184 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 187 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 190 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 841 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_52_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 841 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 841 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 841 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 841 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98);

#line 832 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 832 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82);

#line 829 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 829 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77);

#line 826 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 826 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71);

#line 838 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 838 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 838 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 838 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 838 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93);

#line 835 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 835 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88);

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1134 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 984 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 984 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8);

#line 470 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__470__1_2_p_0(
#line 470 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 470 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_284);

#line 442 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__442__1_2_p_0(
#line 442 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_127,
#line 442 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_272);

#line 438 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__438__1_1_f_0(
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_124);

#line 423 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__423__1_2_f_0(
#line 423 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_213,
#line 423 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_265);

#line 393 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__393__1_2_p_0(
#line 393 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 393 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_254);

#line 390 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__390__1_1_f_0(
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_58);

#line 238 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__238__1_2_p_0(
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 238 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47);

#line 1316 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1316__1_2_p_0(
#line 1316 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1316 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102);

#line 1268 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1268 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1268 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5);

#line 1088 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25);

#line 1079 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1079 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1079 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2);

#line 1063 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1063 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1063 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1063 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1063 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8);

#line 1052 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1052 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1052 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1052 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1047 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1047 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1047 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1047 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 1029 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1029 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1029 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1029 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6);

#line 1020 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1020 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1020 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1020 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1006 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5);

#line 940 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 940 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 940 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 940 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 929 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 929 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3);

#line 805 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9);

#line 737 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 737 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 737 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 701 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(
#line 701 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 701 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2(
#line 701 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 701 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(
#line 701 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 685 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 685 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 685 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18);

#line 643 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 643 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 643 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14);

#line 604 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 604 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 604 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 540 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 540 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 540 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 540 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 540 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NamedCtor_9);

#line 495 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 495 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5);

#line 470 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 470 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 470 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 466 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 466 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 466 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 442 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 442 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 442 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 438 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 438 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 438 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 423 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 393 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 393 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 393 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 390 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 390 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 390 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1);

#line 379 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 379 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6);

#line 353 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11);

#line 314 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3);

#line 255 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9);

#line 238 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0_1(
#line 238 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 238 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 238 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 202 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Head_8,
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Tail_9,
#line 202 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_10);

#line 192 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_3_f_0(
#line 192 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 192 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 192 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7);

#line 173 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 173 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 173 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 173 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6);

#line 108 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 108 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 108 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16);

#line 1316 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1316 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1316 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1316 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2);

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 568 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 568 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 568 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 568 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);

#line 568 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 568 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg);


static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[164][2];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[32][1];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[4][5];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_4[6][3];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_1[164][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0))
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
    ((MR_Box) ((MR_String) "in LHS of type definition."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: repeated type parameters"))
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
    ((MR_Box) ((MR_String) "Error: free type parameter"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in RHS of type definition:"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type definition:"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 125 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type parameters must be variables:"))
  },
  /* row 127 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in variable list at"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In constructor definition:"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In field name:"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 134 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free type"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in existential quantifier"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in class constraints,"))
  },
  /* row 139 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "direct_arg"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute contains a function symbol"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute lists the function symbol"))
  },
  /* row 144 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 145 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 146 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 147 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: free type variable"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in representation type:"))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 151 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 152 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 153 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected functor"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "name/arity for"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "attribute, not"))
  },
  /* row 157 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 158 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 159 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 160 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 161 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 162 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 163 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_2[32][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[19])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[66])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[70])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[76])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[78])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[86])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[92])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[94])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[96])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[100])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[88])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[104])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[109])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[113])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[120])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[82])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_3[4][5] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
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
    ((MR_Box) (parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5)),
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
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[1])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[3])),
    ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_type_defn_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
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
    ((MR_Box) (&parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2098 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2106 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2114 "parse_tree.prog_io_type_defn.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2122 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_type_defn__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2130 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2138 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2146 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2154 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 2162 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2170 "parse_tree.prog_io_type_defn.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_type_defn__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
  }
};

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 905 "prog_io_type_defn.m"
{
#line 922 "prog_io_type_defn.m"
  {
#line 922 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 909 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 909 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
      {
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
          {
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 909 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
              {
#line 909 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                  {
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                      {
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io_type_defn.m"
                      }
#line 909 "prog_io_type_defn.m"
                  }
#line 909 "prog_io_type_defn.m"
              }
#line 909 "prog_io_type_defn.m"
          }
#line 909 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 919 "prog_io_type_defn.m"
      {
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 910 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
          {
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
              {
#line 910 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
                  {
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 910 "prog_io_type_defn.m"
                  }
#line 910 "prog_io_type_defn.m"
              }
#line 910 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
          {
#line 911 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 1004 "prog_io_type_defn.m"
            {
#line 1004 "prog_io_type_defn.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__RHS_10, parse_tree__prog_io_type_defn__V_53_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 915 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 917 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 915 "prog_io_type_defn.m"
            else
#line 913 "prog_io_type_defn.m"
              {
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 914 "prog_io_type_defn.m"
                }
#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 914 "prog_io_type_defn.m"
                }
#line 913 "prog_io_type_defn.m"
              }
#line 911 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        else
#line 920 "prog_io_type_defn.m"
          {
#line 920 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[31]);
#line 920 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    else
#line 923 "prog_io_type_defn.m"
      {
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[163])));
#line 925 "prog_io_type_defn.m"
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "prog_io_type_defn.m"
        }
#line 924 "prog_io_type_defn.m"
        {
#line 924 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 924 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 926 "prog_io_type_defn.m"
        }
#line 923 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
  }
#line 905 "prog_io_type_defn.m"
}

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 905 "prog_io_type_defn.m"
{
#line 922 "prog_io_type_defn.m"
  {
#line 922 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 909 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 909 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
      {
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
          {
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 909 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
              {
#line 909 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                  {
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                      {
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io_type_defn.m"
                      }
#line 909 "prog_io_type_defn.m"
                  }
#line 909 "prog_io_type_defn.m"
              }
#line 909 "prog_io_type_defn.m"
          }
#line 909 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 919 "prog_io_type_defn.m"
      {
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 910 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
          {
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
              {
#line 910 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
                  {
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 910 "prog_io_type_defn.m"
                  }
#line 910 "prog_io_type_defn.m"
              }
#line 910 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
          {
#line 911 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 911 "prog_io_type_defn.m"
            {
#line 911 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(parse_tree__prog_io_type_defn__RHS_10);
            }
#line 915 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 917 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 915 "prog_io_type_defn.m"
            else
#line 913 "prog_io_type_defn.m"
              {
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 914 "prog_io_type_defn.m"
                }
#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 914 "prog_io_type_defn.m"
                }
#line 913 "prog_io_type_defn.m"
              }
#line 911 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        else
#line 920 "prog_io_type_defn.m"
          {
#line 920 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 920 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    else
#line 923 "prog_io_type_defn.m"
      {
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[163])));
#line 925 "prog_io_type_defn.m"
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "prog_io_type_defn.m"
        }
#line 924 "prog_io_type_defn.m"
        {
#line 924 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 924 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 926 "prog_io_type_defn.m"
        }
#line 923 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
  }
#line 905 "prog_io_type_defn.m"
}

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 905 "prog_io_type_defn.m"
{
#line 922 "prog_io_type_defn.m"
  {
#line 922 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 909 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 909 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
      {
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
          {
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 909 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
              {
#line 909 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                  {
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                      {
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io_type_defn.m"
                      }
#line 909 "prog_io_type_defn.m"
                  }
#line 909 "prog_io_type_defn.m"
              }
#line 909 "prog_io_type_defn.m"
          }
#line 909 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 919 "prog_io_type_defn.m"
      {
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 910 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
          {
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
              {
#line 910 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
                  {
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 910 "prog_io_type_defn.m"
                  }
#line 910 "prog_io_type_defn.m"
              }
#line 910 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
          {
#line 911 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 911 "prog_io_type_defn.m"
            {
#line 911 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 915 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 917 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 915 "prog_io_type_defn.m"
            else
#line 913 "prog_io_type_defn.m"
              {
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 914 "prog_io_type_defn.m"
                }
#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 914 "prog_io_type_defn.m"
                }
#line 913 "prog_io_type_defn.m"
              }
#line 911 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        else
#line 920 "prog_io_type_defn.m"
          {
#line 920 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[29]);
#line 920 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    else
#line 923 "prog_io_type_defn.m"
      {
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[163])));
#line 925 "prog_io_type_defn.m"
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "prog_io_type_defn.m"
        }
#line 924 "prog_io_type_defn.m"
        {
#line 924 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 924 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 926 "prog_io_type_defn.m"
        }
#line 923 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
  }
#line 905 "prog_io_type_defn.m"
}

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 905 "prog_io_type_defn.m"
{
#line 922 "prog_io_type_defn.m"
  {
#line 922 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 909 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 909 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
      {
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
          {
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 909 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
              {
#line 909 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                  {
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                      {
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io_type_defn.m"
                      }
#line 909 "prog_io_type_defn.m"
                  }
#line 909 "prog_io_type_defn.m"
              }
#line 909 "prog_io_type_defn.m"
          }
#line 909 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 919 "prog_io_type_defn.m"
      {
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 910 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
          {
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
              {
#line 910 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
                  {
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 910 "prog_io_type_defn.m"
                  }
#line 910 "prog_io_type_defn.m"
              }
#line 910 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
          {
#line 911 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 911 "prog_io_type_defn.m"
            {
#line 911 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__RHSResult_13 = parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10);
            }
#line 915 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 917 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 915 "prog_io_type_defn.m"
            else
#line 913 "prog_io_type_defn.m"
              {
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 914 "prog_io_type_defn.m"
                }
#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 914 "prog_io_type_defn.m"
                }
#line 913 "prog_io_type_defn.m"
              }
#line 911 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        else
#line 920 "prog_io_type_defn.m"
          {
#line 920 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[28]);
#line 920 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    else
#line 923 "prog_io_type_defn.m"
      {
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[163])));
#line 925 "prog_io_type_defn.m"
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "prog_io_type_defn.m"
        }
#line 924 "prog_io_type_defn.m"
        {
#line 924 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 924 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 926 "prog_io_type_defn.m"
        }
#line 923 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
  }
#line 905 "prog_io_type_defn.m"
}

#line 841 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_52_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(
#line 841 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 841 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 841 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_54,
#line 841 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_98)
#line 841 "prog_io_type_defn.m"
{
#line 841 "prog_io_type_defn.m"
  {
#line 841 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 841 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_99;

#line 841 "prog_io_type_defn.m"
    {
#line 841 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_99 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_56_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_54, parse_tree__prog_io_type_defn__HeadVar__3_98);
    }
#line 841 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_99;
#line 841 "prog_io_type_defn.m"
  }
#line 841 "prog_io_type_defn.m"
}

#line 832 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 832 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_42,
#line 832 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_82)
#line 832 "prog_io_type_defn.m"
{
#line 832 "prog_io_type_defn.m"
  {
#line 832 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 832 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_83;

#line 832 "prog_io_type_defn.m"
    {
#line 832 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_83 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_57_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__HeadVar__1_42, parse_tree__prog_io_type_defn__HeadVar__3_82);
    }
#line 832 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_83;
#line 832 "prog_io_type_defn.m"
  }
#line 832 "prog_io_type_defn.m"
}

#line 829 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 829 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_38,
#line 829 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_77)
#line 829 "prog_io_type_defn.m"
{
#line 829 "prog_io_type_defn.m"
  {
#line 829 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 829 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_78;

#line 829 "prog_io_type_defn.m"
    {
#line 829 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_78 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_38, parse_tree__prog_io_type_defn__HeadVar__3_77);
    }
#line 829 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_78;
#line 829 "prog_io_type_defn.m"
  }
#line 829 "prog_io_type_defn.m"
}

#line 826 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(
#line 826 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_34,
#line 826 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_71)
#line 826 "prog_io_type_defn.m"
{
#line 826 "prog_io_type_defn.m"
  {
#line 826 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 826 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_72;

#line 826 "prog_io_type_defn.m"
    {
#line 826 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_72 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_48_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__HeadVar__1_34, parse_tree__prog_io_type_defn__HeadVar__3_71);
    }
#line 826 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_72;
#line 826 "prog_io_type_defn.m"
  }
#line 826 "prog_io_type_defn.m"
}

#line 838 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 838 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 838 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 838 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_50,
#line 838 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_93)
#line 838 "prog_io_type_defn.m"
{
#line 838 "prog_io_type_defn.m"
  {
#line 838 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 838 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_94;

#line 838 "prog_io_type_defn.m"
    {
#line 838 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_94 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_50, parse_tree__prog_io_type_defn__HeadVar__3_93);
    }
#line 838 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_94;
#line 838 "prog_io_type_defn.m"
  }
#line 838 "prog_io_type_defn.m"
}

#line 835 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_104_104,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 835 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 835 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_88)
#line 835 "prog_io_type_defn.m"
{
#line 835 "prog_io_type_defn.m"
  {
#line 835 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 835 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_89;

#line 835 "prog_io_type_defn.m"
    {
#line 835 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_89 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_104_104, parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__3_88);
    }
#line 835 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_89;
#line 835 "prog_io_type_defn.m"
  }
#line 835 "prog_io_type_defn.m"
}

#line 820 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_105_105,
#line 820 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__HeadVar__1_28,
#line 820 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_62)
#line 820 "prog_io_type_defn.m"
{
#line 820 "prog_io_type_defn.m"
  {
#line 820 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 820 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_63;

#line 820 "prog_io_type_defn.m"
    {
#line 820 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__4_63 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_50_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_105_105, parse_tree__prog_io_type_defn__HeadVar__1_28, parse_tree__prog_io_type_defn__HeadVar__3_62);
    }
#line 820 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_63;
#line 820 "prog_io_type_defn.m"
  }
#line 820 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[31]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_48_95_95_49_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_27_27,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[26]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__V_27_27, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[26]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_53_95_95_49_95_95_104_111_49_50_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[26]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_56_95_95_49_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_54_95_95_49_95_95_104_111_49_52_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[30]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_50_57_95_95_49_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[29]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_51_50_95_95_49_95_95_104_111_49_54_95_95_91_51_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__V_26_26,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_28_28,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_29_29,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[28]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_52_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_97_114_115_101_95_116_121_112_101_95_100_101_99_108_95_119_104_101_114_101_95_116_101_114_109_95_95_56_52_49_95_95_49_95_95_104_111_49_55_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__V_28_28, parse_tree__prog_io_type_defn__V_29_29, parse_tree__prog_io_type_defn__V_26_26, parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 905 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_52_52,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__V_53_53,
#line 905 "prog_io_type_defn.m"
  MR_String parse_tree__prog_io_type_defn__Name_5,
#line 905 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 905 "prog_io_type_defn.m"
{
#line 922 "prog_io_type_defn.m"
  {
#line 922 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__LHS_9;
#line 922 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RHS_10;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 909 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_19_19;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 909 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 909 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
      {
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_7, (MR_Integer) 2)));
#line 909 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
          {
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_19_19, (MR_String) "is") == 0);
#line 909 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
              {
#line 909 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                  {
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__LHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 909 "prog_io_type_defn.m"
                      {
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__RHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 909 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io_type_defn.m"
                      }
#line 909 "prog_io_type_defn.m"
                  }
#line 909 "prog_io_type_defn.m"
              }
#line 909 "prog_io_type_defn.m"
          }
#line 909 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 919 "prog_io_type_defn.m"
      {
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 910 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 910 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 910 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__LHS_9)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
          {
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 1)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__LHS_9, (MR_Integer) 2)));
#line 910 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
              {
#line 910 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 910 "prog_io_type_defn.m"
                  {
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_23_23, (MR_Integer) 0)));
#line 910 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__Name_5, parse_tree__prog_io_type_defn__V_51_51) == 0);
#line 910 "prog_io_type_defn.m"
                  }
#line 910 "prog_io_type_defn.m"
              }
#line 910 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 911 "prog_io_type_defn.m"
          {
#line 911 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__RHSResult_13;

#line 981 "prog_io_type_defn.m"
            {
#line 981 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53, parse_tree__prog_io_type_defn__RHS_10, &parse_tree__prog_io_type_defn__RHSResult_13);
            }
#line 915 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RHSResult_13)) == (MR_mktag((MR_Integer) 0))))
#line 917 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Result_8 = (MR_Word) parse_tree__prog_io_type_defn__RHSResult_13;
#line 915 "prog_io_type_defn.m"
            else
#line 913 "prog_io_type_defn.m"
              {
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParsedRHS_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RHSResult_13, (MR_Integer) 0)));
#line 913 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ParsedRHS_14));
#line 914 "prog_io_type_defn.m"
                }
#line 914 "prog_io_type_defn.m"
                {
#line 914 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 914 "prog_io_type_defn.m"
                }
#line 913 "prog_io_type_defn.m"
              }
#line 911 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
        else
#line 920 "prog_io_type_defn.m"
          {
#line 920 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[26]);
#line 920 "prog_io_type_defn.m"
          }
#line 919 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    else
#line 923 "prog_io_type_defn.m"
      {
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_17;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 923 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[163])));
#line 925 "prog_io_type_defn.m"
        }
#line 925 "prog_io_type_defn.m"
        {
#line 925 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 925 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "prog_io_type_defn.m"
        }
#line 924 "prog_io_type_defn.m"
        {
#line 924 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 924 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 924 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_17));
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "prog_io_type_defn.m"
        }
#line 926 "prog_io_type_defn.m"
        {
#line 926 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 926 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 926 "prog_io_type_defn.m"
        }
#line 923 "prog_io_type_defn.m"
      }
#line 922 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 922 "prog_io_type_defn.m"
  }
#line 905 "prog_io_type_defn.m"
}

#line 1134 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__RepresentationIs_16,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__InitialisationIs_17,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GroundIs_18,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__AnyIs_19,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__CStoreIs_20,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__EqualityIs_21,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ComparisonIs_22,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__DirectArgIs_23,
#line 1134 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1134 "prog_io_type_defn.m"
{
#line 1147 "prog_io_type_defn.m"
  {
#line 1147 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1147 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;

#line 1147 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "prog_io_type_defn.m"
#line 1245 "prog_io_type_defn.m"
      switch (parse_tree__prog_io_type_defn__IsSolverType_14) {
#line 1245 "prog_io_type_defn.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "prog_io_type_defn.m"
        case (MR_Integer) 0:
#line 1261 "prog_io_type_defn.m"
          {
#line 1248 "prog_io_type_defn.m"
            {
#line 1248 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 1248 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1248 "prog_io_type_defn.m"
              if (parse_tree__prog_io_type_defn__succeeded)
#line 1248 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1248 "prog_io_type_defn.m"
            }
#line 1249 "prog_io_type_defn.m"
            if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1249 "prog_io_type_defn.m"
              {
#line 1249 "prog_io_type_defn.m"
                {
#line 1249 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_47_47;

#line 1249 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__InitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1249 "prog_io_type_defn.m"
                  if (parse_tree__prog_io_type_defn__succeeded)
#line 1249 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__InitialisationIs_17, (MR_Integer) 0)));
#line 1249 "prog_io_type_defn.m"
                }
#line 1249 "prog_io_type_defn.m"
                if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1249 "prog_io_type_defn.m"
                  {
#line 1250 "prog_io_type_defn.m"
                    {
#line 1250 "prog_io_type_defn.m"
                      MR_Word parse_tree__prog_io_type_defn__V_48_48;

#line 1250 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__GroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1250 "prog_io_type_defn.m"
                      if (parse_tree__prog_io_type_defn__succeeded)
#line 1250 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__GroundIs_18, (MR_Integer) 0)));
#line 1250 "prog_io_type_defn.m"
                    }
#line 1249 "prog_io_type_defn.m"
                    if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1249 "prog_io_type_defn.m"
                      {
#line 1251 "prog_io_type_defn.m"
                        {
#line 1251 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 1251 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__AnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1251 "prog_io_type_defn.m"
                          if (parse_tree__prog_io_type_defn__succeeded)
#line 1251 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__AnyIs_19, (MR_Integer) 0)));
#line 1251 "prog_io_type_defn.m"
                        }
#line 1249 "prog_io_type_defn.m"
                        if (!(parse_tree__prog_io_type_defn__succeeded))
#line 1252 "prog_io_type_defn.m"
                          {
#line 1252 "prog_io_type_defn.m"
                            MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 1252 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__CStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1252 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1252 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__CStoreIs_20, (MR_Integer) 0)));
#line 1252 "prog_io_type_defn.m"
                          }
#line 1249 "prog_io_type_defn.m"
                      }
#line 1249 "prog_io_type_defn.m"
                  }
#line 1249 "prog_io_type_defn.m"
              }
#line 1261 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1256 "prog_io_type_defn.m"
              {
#line 1256 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1256 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1256 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1256 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 1256 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_168;

#line 1258 "prog_io_type_defn.m"
                {
#line 1258 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                }
#line 1258 "prog_io_type_defn.m"
                {
#line 1258 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1258 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[159])));
#line 1258 "prog_io_type_defn.m"
                }
#line 1259 "prog_io_type_defn.m"
                {
#line 1259 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1259 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1259 "prog_io_type_defn.m"
                }
#line 1257 "prog_io_type_defn.m"
                {
#line 1257 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1257 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1257 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_168, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1257 "prog_io_type_defn.m"
                }
#line 1260 "prog_io_type_defn.m"
                {
#line 1260 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_168));
#line 1260 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1260 "prog_io_type_defn.m"
                }
#line 1260 "prog_io_type_defn.m"
                {
#line 1260 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 1260 "prog_io_type_defn.m"
                }
#line 1256 "prog_io_type_defn.m"
              }
#line 1261 "prog_io_type_defn.m"
            else
#line 1262 "prog_io_type_defn.m"
              {
#line 1262 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeUC_51;

#line 1262 "prog_io_type_defn.m"
                {
#line 1262 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeUC_51 = parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(parse_tree__prog_io_type_defn__EqualityIs_21, parse_tree__prog_io_type_defn__ComparisonIs_22);
                }
#line 1263 "prog_io_type_defn.m"
                {
#line 1263 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUC_51));
#line 1263 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgIs_23));
#line 1263 "prog_io_type_defn.m"
                }
#line 1262 "prog_io_type_defn.m"
              }
#line 1261 "prog_io_type_defn.m"
          }
#line 1245 "prog_io_type_defn.m"
          break;
#line 1245 "prog_io_type_defn.m"
        case (MR_Integer) 1:
#line 1184 "prog_io_type_defn.m"
          {
#line 1176 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1176 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__DirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1176 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1176 "prog_io_type_defn.m"
              {
#line 1176 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__DirectArgIs_23, (MR_Integer) 0)));
#line 1179 "prog_io_type_defn.m"
                {
#line 1179 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_85_85;
#line 1179 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 1179 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 1179 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 1179 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_156;

#line 1181 "prog_io_type_defn.m"
                  {
#line 1181 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_87_87 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                  }
#line 1181 "prog_io_type_defn.m"
                  {
#line 1181 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_87_87));
#line 1181 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[160])));
#line 1181 "prog_io_type_defn.m"
                  }
#line 1182 "prog_io_type_defn.m"
                  {
#line 1182 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 1182 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1182 "prog_io_type_defn.m"
                  }
#line 1180 "prog_io_type_defn.m"
                  {
#line 1180 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1180 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1180 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_156, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_85_85));
#line 1180 "prog_io_type_defn.m"
                  }
#line 1183 "prog_io_type_defn.m"
                  {
#line 1183 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_156));
#line 1183 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1183 "prog_io_type_defn.m"
                  }
#line 1183 "prog_io_type_defn.m"
                  {
#line 1183 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 1183 "prog_io_type_defn.m"
                  }
#line 1179 "prog_io_type_defn.m"
                }
#line 1176 "prog_io_type_defn.m"
              }
#line 1176 "prog_io_type_defn.m"
            else
#line 1232 "prog_io_type_defn.m"
              {
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__RepnType_31;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeInitialisation_32;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeGroundInst_33;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeAnyInst_34;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_35;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_36;
#line 1232 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfos_37;

#line 1185 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__RepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1185 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1185 "prog_io_type_defn.m"
                  {
#line 1185 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__RepnType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__RepresentationIs_16, (MR_Integer) 0)));
#line 1186 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeInitialisation_32 = parse_tree__prog_io_type_defn__InitialisationIs_17;
#line 1187 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeGroundInst_33 = parse_tree__prog_io_type_defn__GroundIs_18;
#line 1188 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeAnyInst_34 = parse_tree__prog_io_type_defn__AnyIs_19;
#line 1189 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeEqPred_35 = parse_tree__prog_io_type_defn__EqualityIs_21;
#line 1190 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeCmpPred_36 = parse_tree__prog_io_type_defn__ComparisonIs_22;
#line 1191 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeMutableInfos_37 = parse_tree__prog_io_type_defn__CStoreIs_20;
#line 1191 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 1185 "prog_io_type_defn.m"
                  }
#line 1232 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1198 "prog_io_type_defn.m"
                  {
#line 1198 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GroundInst_38;
#line 1198 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__AnyInst_39;
#line 1198 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MutableInfos_40;
#line 1198 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__HowToInit_42;
#line 1198 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SolverTypeDetails_43;
#line 1198 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44;
#line 1198 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeUnifyCompare_45;

#line 1195 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeGroundInst_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "prog_io_type_defn.m"
                      {
#line 1197 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__GroundInst_38 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1195 "prog_io_type_defn.m"
                    else
#line 1194 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__GroundInst_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundInst_33, (MR_Integer) 0)));
#line 1201 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeAnyInst_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "prog_io_type_defn.m"
                      {
#line 1203 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyInst_39 = parse_tree__prog_mode__ground_inst_0_f_0();
                      }
#line 1201 "prog_io_type_defn.m"
                    else
#line 1200 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__AnyInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyInst_34, (MR_Integer) 0)));
#line 1207 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeMutableInfos_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "prog_io_type_defn.m"
                    else
#line 1206 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MutableInfos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeMutableInfos_37, (MR_Integer) 0)));
#line 1214 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__MaybeInitialisation_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1216 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1214 "prog_io_type_defn.m"
                    else
#line 1212 "prog_io_type_defn.m"
                      {
#line 1212 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__InitPred_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisation_32, (MR_Integer) 0)));

#line 1213 "prog_io_type_defn.m"
                        {
#line 1213 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__HowToInit_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HowToInit_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__InitPred_41));
#line 1213 "prog_io_type_defn.m"
                        }
#line 1212 "prog_io_type_defn.m"
                      }
#line 1218 "prog_io_type_defn.m"
                    {
#line 1218 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__SolverTypeDetails_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__RepnType_31));
#line 1218 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HowToInit_42));
#line 1218 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__GroundInst_38));
#line 1218 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__AnyInst_39));
#line 1218 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__SolverTypeDetails_43, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__MutableInfos_40));
#line 1218 "prog_io_type_defn.m"
                    }
#line 1220 "prog_io_type_defn.m"
                    {
#line 1220 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SolverTypeDetails_43));
#line 1220 "prog_io_type_defn.m"
                    }
#line 1222 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1223 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1226 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1225 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1226 "prog_io_type_defn.m"
                    else
#line 1227 "prog_io_type_defn.m"
                      {
#line 1227 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_94_94;

#line 1227 "prog_io_type_defn.m"
                        {
#line 1227 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_35));
#line 1227 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_94_94, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_36));
#line 1227 "prog_io_type_defn.m"
                        }
#line 1227 "prog_io_type_defn.m"
                        {
#line 1227 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeUnifyCompare_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeUnifyCompare_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_94_94));
#line 1227 "prog_io_type_defn.m"
                        }
#line 1227 "prog_io_type_defn.m"
                      }
#line 1230 "prog_io_type_defn.m"
                    {
#line 1230 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_44));
#line 1230 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUnifyCompare_45));
#line 1230 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1230 "prog_io_type_defn.m"
                    }
#line 1198 "prog_io_type_defn.m"
                  }
#line 1232 "prog_io_type_defn.m"
                else
#line 1241 "prog_io_type_defn.m"
                  {
#line 1233 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1236 "prog_io_type_defn.m"
                      {
#line 1236 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_109_109;
#line 1236 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_110_110;
#line 1236 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_111_111;
#line 1236 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 1236 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_158;

#line 1238 "prog_io_type_defn.m"
                        {
#line 1238 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_111_111 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
                        }
#line 1238 "prog_io_type_defn.m"
                        {
#line 1238 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_111_111));
#line 1238 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[161])));
#line 1238 "prog_io_type_defn.m"
                        }
#line 1239 "prog_io_type_defn.m"
                        {
#line 1239 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_110_110));
#line 1239 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "prog_io_type_defn.m"
                        }
#line 1237 "prog_io_type_defn.m"
                        {
#line 1237 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1237 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_158, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_109_109));
#line 1237 "prog_io_type_defn.m"
                        }
#line 1240 "prog_io_type_defn.m"
                        {
#line 1240 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_158));
#line 1240 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "prog_io_type_defn.m"
                        }
#line 1240 "prog_io_type_defn.m"
                        {
#line 1240 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 1240 "prog_io_type_defn.m"
                        }
#line 1236 "prog_io_type_defn.m"
                      }
#line 1241 "prog_io_type_defn.m"
                    else
#line 1242 "prog_io_type_defn.m"
                      {
#line 1242 "prog_io_type_defn.m"
                        {
#line 1242 "prog_io_type_defn.m"
                          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_type_defn", (MR_String) "function \140parse_tree.prog_io_type_defn.make_maybe_where_details_2\'/12", (MR_String) "make_maybe_where_details_2: shouldn\'t have reached this point! (1)");
                        }
#line 1242 "prog_io_type_defn.m"
                      }
#line 1241 "prog_io_type_defn.m"
                  }
#line 1232 "prog_io_type_defn.m"
              }
#line 1184 "prog_io_type_defn.m"
          }
#line 1245 "prog_io_type_defn.m"
          break;
#line 1245 "prog_io_type_defn.m"
      }
#line 1147 "prog_io_type_defn.m"
    else
#line 1162 "prog_io_type_defn.m"
      {
#line 1151 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__RepresentationIs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1151 "prog_io_type_defn.m"
          {
#line 1152 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__InitialisationIs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1151 "prog_io_type_defn.m"
              {
#line 1153 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__GroundIs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1151 "prog_io_type_defn.m"
                  {
#line 1154 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__AnyIs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1151 "prog_io_type_defn.m"
                      {
#line 1155 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__EqualityIs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1151 "prog_io_type_defn.m"
                          {
#line 1156 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__ComparisonIs_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1151 "prog_io_type_defn.m"
                              {
#line 1157 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__CStoreIs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1158 "prog_io_type_defn.m"
                                  parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__DirectArgIs_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "prog_io_type_defn.m"
                              }
#line 1151 "prog_io_type_defn.m"
                          }
#line 1151 "prog_io_type_defn.m"
                      }
#line 1151 "prog_io_type_defn.m"
                  }
#line 1151 "prog_io_type_defn.m"
              }
#line 1151 "prog_io_type_defn.m"
          }
#line 1162 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1160 "prog_io_type_defn.m"
          {
#line 1160 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_124_124;
#line 1160 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_125_125;

#line 1161 "prog_io_type_defn.m"
            {
#line 1161 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__IsSolverType_14));
#line 1161 "prog_io_type_defn.m"
            }
#line 1161 "prog_io_type_defn.m"
            {
#line 1161 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_125_125));
#line 1161 "prog_io_type_defn.m"
            }
#line 1161 "prog_io_type_defn.m"
            {
#line 1161 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_124_124));
#line 1161 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1161 "prog_io_type_defn.m"
            }
#line 1160 "prog_io_type_defn.m"
          }
#line 1162 "prog_io_type_defn.m"
        else
#line 1166 "prog_io_type_defn.m"
          {
#line 1166 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 1166 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_146_146;
#line 1166 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_147_147;
#line 1166 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_148_148;
#line 1166 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_153_153;

#line 1168 "prog_io_type_defn.m"
            {
#line 1168 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_148_148 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__WhereTerm_25);
            }
#line 1168 "prog_io_type_defn.m"
            {
#line 1168 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_148_148));
#line 1168 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[162])));
#line 1168 "prog_io_type_defn.m"
            }
#line 1168 "prog_io_type_defn.m"
            {
#line 1168 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_147_147));
#line 1168 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "prog_io_type_defn.m"
            }
#line 1167 "prog_io_type_defn.m"
            {
#line 1167 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1167 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_146_146));
#line 1167 "prog_io_type_defn.m"
            }
#line 1169 "prog_io_type_defn.m"
            {
#line 1169 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 1169 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "prog_io_type_defn.m"
            }
#line 1169 "prog_io_type_defn.m"
            {
#line 1169 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_153_153));
#line 1169 "prog_io_type_defn.m"
            }
#line 1166 "prog_io_type_defn.m"
          }
#line 1162 "prog_io_type_defn.m"
      }
#line 1147 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1147 "prog_io_type_defn.m"
  }
#line 1134 "prog_io_type_defn.m"
}

#line 984 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_110_115_116_95_105_115_95_95_91_49_93_95_48_2_f_0(
#line 984 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 984 "prog_io_type_defn.m"
{
#line 992 "prog_io_type_defn.m"
  {
#line 992 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 992 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeInst_6;
#line 992 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Inst_7;

#line 988 "prog_io_type_defn.m"
    {
#line 988 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 1, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Inst_7);
    }
#line 988 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 988 "prog_io_type_defn.m"
      {
#line 989 "prog_io_type_defn.m"
        {
#line 989 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_mode__inst_contains_unconstrained_var_1_p_0(parse_tree__prog_io_type_defn__Inst_7);
        }
#line 989 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 988 "prog_io_type_defn.m"
      }
#line 992 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 991 "prog_io_type_defn.m"
      {
#line 991 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_type_defn.m"
        MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Inst_7));
#line 991 "prog_io_type_defn.m"
      }
#line 992 "prog_io_type_defn.m"
    else
#line 993 "prog_io_type_defn.m"
      {
#line 993 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_9;
#line 993 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 993 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 993 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 993 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 995 "prog_io_type_defn.m"
        {
#line 995 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 995 "prog_io_type_defn.m"
        {
#line 995 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 995 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 995 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[158])));
#line 995 "prog_io_type_defn.m"
        }
#line 995 "prog_io_type_defn.m"
        {
#line 995 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_19_19));
#line 995 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "prog_io_type_defn.m"
        }
#line 994 "prog_io_type_defn.m"
        {
#line 994 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 994 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 994 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 994 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_9, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 994 "prog_io_type_defn.m"
        }
#line 996 "prog_io_type_defn.m"
        {
#line 996 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_9));
#line 996 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_type_defn.m"
        }
#line 996 "prog_io_type_defn.m"
        {
#line 996 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeInst_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 996 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeInst_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 996 "prog_io_type_defn.m"
        }
#line 993 "prog_io_type_defn.m"
      }
#line 992 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeInst_6;
#line 992 "prog_io_type_defn.m"
  }
#line 984 "prog_io_type_defn.m"
}

#line 871 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__Result_6,
#line 871 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm_7,
#line 871 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTailTerm_8)
#line 871 "prog_io_type_defn.m"
{
#line 879 "prog_io_type_defn.m"
  {
#line 879 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 879 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_type_defn.m"
      {
#line 877 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__Result_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[15]);
#line 876 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
    else
#line 880 "prog_io_type_defn.m"
      {
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm_7, (MR_Integer) 0)));
#line 880 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTerm_10;
#line 886 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTerm_11;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 882 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 882 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 882 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
          {
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 882 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
              {
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) ",") == 0);
#line 882 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                  {
#line 882 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                      {
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 882 "prog_io_type_defn.m"
                          {
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 882 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "prog_io_type_defn.m"
                          }
#line 882 "prog_io_type_defn.m"
                      }
#line 882 "prog_io_type_defn.m"
                  }
#line 882 "prog_io_type_defn.m"
              }
#line 882 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 884 "prog_io_type_defn.m"
          {
#line 884 "prog_io_type_defn.m"
            {
#line 884 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__HeadTerm_10);
            }
#line 885 "prog_io_type_defn.m"
            {
#line 885 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 885 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__TailTerm_11));
#line 885 "prog_io_type_defn.m"
            }
#line 884 "prog_io_type_defn.m"
          }
#line 886 "prog_io_type_defn.m"
        else
#line 887 "prog_io_type_defn.m"
          {
#line 887 "prog_io_type_defn.m"
            {
#line 887 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__Result_6 = parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(parse_tree__prog_io_type_defn__Term_9);
            }
#line 888 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "prog_io_type_defn.m"
          }
#line 893 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) *parse_tree__prog_io_type_defn__Result_6)) == (MR_mktag((MR_Integer) 0))))
#line 892 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "prog_io_type_defn.m"
        else
#line 893 "prog_io_type_defn.m"
          {
#line 893 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io_type_defn__Result_6, (MR_Integer) 0)));

#line 893 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTerm_7;
#line 893 "prog_io_type_defn.m"
            else
#line 898 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeTailTerm_8 = parse_tree__prog_io_type_defn__MaybeTailTermIfYes_13;
#line 893 "prog_io_type_defn.m"
          }
#line 880 "prog_io_type_defn.m"
      }
#line 879 "prog_io_type_defn.m"
  }
#line 871 "prog_io_type_defn.m"
}

#line 470 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__470__1_2_p_0(
#line 470 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_19,
#line 470 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_284)
#line 470 "prog_io_type_defn.m"
{
#line 470 "prog_io_type_defn.m"
  {
#line 470 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 470 "prog_io_type_defn.m"
    {
#line 470 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__ExistQVars_19, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_284)));
    }
#line 470 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 470 "prog_io_type_defn.m"
  }
#line 470 "prog_io_type_defn.m"
}

#line 442 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__442__1_2_p_0(
#line 442 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_127,
#line 442 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_272)
#line 442 "prog_io_type_defn.m"
{
#line 442 "prog_io_type_defn.m"
  {
#line 442 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 442 "prog_io_type_defn.m"
    {
#line 442 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_127, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_272)));
    }
#line 442 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 442 "prog_io_type_defn.m"
  }
#line 442 "prog_io_type_defn.m"
}

#line 438 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__438__1_1_f_0(
#line 438 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_124)
#line 438 "prog_io_type_defn.m"
{
#line 438 "prog_io_type_defn.m"
  {
#line 438 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 438 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_124, (MR_Integer) 1)));
#line 438 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_124, (MR_Integer) 0)));
#line 438 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_124, (MR_Integer) 2)));
#line 438 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_124, (MR_Integer) 3)));

#line 438 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_125;
#line 438 "prog_io_type_defn.m"
  }
#line 438 "prog_io_type_defn.m"
}

#line 423 "prog_io_type_defn.m"
static MR_String MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__423__1_2_f_0(
#line 423 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_213,
#line 423 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_265)
#line 423 "prog_io_type_defn.m"
{
#line 423 "prog_io_type_defn.m"
  {
#line 423 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 423 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__HeadVar__3_266;

#line 423 "prog_io_type_defn.m"
    {
#line 423 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__HeadVar__3_266 = parse_tree__mercury_to_mercury__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__GenericVarSet_213, parse_tree__prog_io_type_defn__HeadVar__2_265);
    }
#line 423 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_266;
#line 423 "prog_io_type_defn.m"
  }
#line 423 "prog_io_type_defn.m"
}

#line 393 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__393__1_2_p_0(
#line 393 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_61,
#line 393 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_254)
#line 393 "prog_io_type_defn.m"
{
#line 393 "prog_io_type_defn.m"
  {
#line 393 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 393 "prog_io_type_defn.m"
    {
#line 393 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = mercury__list__contains_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], parse_tree__prog_io_type_defn__HeadVar__1_61, ((MR_Box) (parse_tree__prog_io_type_defn__HeadVar__2_254)));
    }
#line 393 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 393 "prog_io_type_defn.m"
  }
#line 393 "prog_io_type_defn.m"
}

#line 390 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__390__1_1_f_0(
#line 390 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_58)
#line 390 "prog_io_type_defn.m"
{
#line 390 "prog_io_type_defn.m"
  {
#line 390 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 1)));
#line 390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 0)));
#line 390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 2)));
#line 390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__1_58, (MR_Integer) 3)));

#line 390 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_59;
#line 390 "prog_io_type_defn.m"
  }
#line 390 "prog_io_type_defn.m"
}

#line 238 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__238__1_2_p_0(
#line 238 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_46,
#line 238 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_47)
#line 238 "prog_io_type_defn.m"
{
#line 238 "prog_io_type_defn.m"
  {
#line 238 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 238 "prog_io_type_defn.m"
    {
#line 238 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_46, parse_tree__prog_io_type_defn__HeadVar__2_47);
#line 238 "prog_io_type_defn.m"
      return;
    }
#line 238 "prog_io_type_defn.m"
  }
#line 238 "prog_io_type_defn.m"
}

#line 1316 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1316__1_2_p_0(
#line 1316 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_101,
#line 1316 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_102)
#line 1316 "prog_io_type_defn.m"
{
#line 1316 "prog_io_type_defn.m"
  {
#line 1316 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1316 "prog_io_type_defn.m"
    {
#line 1316 "prog_io_type_defn.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__HeadVar__1_101, parse_tree__prog_io_type_defn__HeadVar__2_102);
#line 1316 "prog_io_type_defn.m"
      return;
    }
#line 1316 "prog_io_type_defn.m"
  }
#line 1316 "prog_io_type_defn.m"
}

#line 1268 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__maybe_unify_compare_2_f_0(
#line 1268 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqPred_4,
#line 1268 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCmpPred_5)
#line 1268 "prog_io_type_defn.m"
{
#line 1271 "prog_io_type_defn.m"
  {
#line 1271 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeEqPred_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1271 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3;

#line 1273 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1274 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__MaybeCmpPred_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1271 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1276 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1271 "prog_io_type_defn.m"
    else
#line 1278 "prog_io_type_defn.m"
      {
#line 1278 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_6_6;

#line 1278 "prog_io_type_defn.m"
        {
#line 1278 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1278 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeEqPred_4));
#line 1278 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_6_6, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCmpPred_5));
#line 1278 "prog_io_type_defn.m"
        }
#line 1278 "prog_io_type_defn.m"
        {
#line 1278 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_6_6));
#line 1278 "prog_io_type_defn.m"
        }
#line 1278 "prog_io_type_defn.m"
      }
#line 1271 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__3_3;
#line 1271 "prog_io_type_defn.m"
  }
#line 1268 "prog_io_type_defn.m"
}

#line 1088 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_14,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_16,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_17,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_18,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_19,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_20,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_21,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_22,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_23,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_24,
#line 1088 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__WhereTerm_25)
#line 1088 "prog_io_type_defn.m"
{
#line 1119 "prog_io_type_defn.m"
  {
#line 1119 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15)) == (MR_mktag((MR_Integer) 1)));
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__RepresentationIs_28;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__InitialisationIs_29;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__GroundIs_30;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__AnyIs_31;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CStoreIs_32;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__EqualityIs_33;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ComparisonIs_34;
#line 1119 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__DirectArgIs_35;
#line 1113 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereEnd_36;

#line 1104 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1104 "prog_io_type_defn.m"
      {
#line 1104 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15, (MR_Integer) 0)));
#line 1105 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeRepresentationIs_16)) == (MR_mktag((MR_Integer) 1)));
#line 1105 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1105 "prog_io_type_defn.m"
          {
#line 1105 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__RepresentationIs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeRepresentationIs_16, (MR_Integer) 0)));
#line 1106 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeInitialisationIs_17)) == (MR_mktag((MR_Integer) 1)));
#line 1106 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1106 "prog_io_type_defn.m"
              {
#line 1106 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__InitialisationIs_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeInitialisationIs_17, (MR_Integer) 0)));
#line 1107 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeGroundIs_18)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 1107 "prog_io_type_defn.m"
                  {
#line 1107 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__GroundIs_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeGroundIs_18, (MR_Integer) 0)));
#line 1108 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeAnyIs_19)) == (MR_mktag((MR_Integer) 1)));
#line 1108 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1108 "prog_io_type_defn.m"
                      {
#line 1108 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__AnyIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeAnyIs_19, (MR_Integer) 0)));
#line 1109 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeCStoreIs_20)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1109 "prog_io_type_defn.m"
                          {
#line 1109 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__CStoreIs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCStoreIs_20, (MR_Integer) 0)));
#line 1110 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeEqualityIs_21)) == (MR_mktag((MR_Integer) 1)));
#line 1110 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 1110 "prog_io_type_defn.m"
                              {
#line 1110 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__EqualityIs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeEqualityIs_21, (MR_Integer) 0)));
#line 1111 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeComparisonIs_22)) == (MR_mktag((MR_Integer) 1)));
#line 1111 "prog_io_type_defn.m"
                                if (parse_tree__prog_io_type_defn__succeeded)
#line 1111 "prog_io_type_defn.m"
                                  {
#line 1111 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__ComparisonIs_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeComparisonIs_22, (MR_Integer) 0)));
#line 1112 "prog_io_type_defn.m"
                                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeDirectArgIs_23)) == (MR_mktag((MR_Integer) 1)));
#line 1112 "prog_io_type_defn.m"
                                    if (parse_tree__prog_io_type_defn__succeeded)
#line 1112 "prog_io_type_defn.m"
                                      {
#line 1112 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__DirectArgIs_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_23, (MR_Integer) 0)));
#line 1113 "prog_io_type_defn.m"
                                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhereEnd_24)) == (MR_mktag((MR_Integer) 1)));
#line 1113 "prog_io_type_defn.m"
                                        if (parse_tree__prog_io_type_defn__succeeded)
#line 1113 "prog_io_type_defn.m"
                                          parse_tree__prog_io_type_defn__WhereEnd_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhereEnd_24, (MR_Integer) 0)));
#line 1112 "prog_io_type_defn.m"
                                      }
#line 1111 "prog_io_type_defn.m"
                                  }
#line 1110 "prog_io_type_defn.m"
                              }
#line 1109 "prog_io_type_defn.m"
                          }
#line 1108 "prog_io_type_defn.m"
                      }
#line 1107 "prog_io_type_defn.m"
                  }
#line 1106 "prog_io_type_defn.m"
              }
#line 1105 "prog_io_type_defn.m"
          }
#line 1104 "prog_io_type_defn.m"
      }
#line 1119 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1115 "prog_io_type_defn.m"
      {
#line 1115 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_107_101_95_109_97_121_98_101_95_119_104_101_114_101_95_100_101_116_97_105_108_115_95_50_95_95_91_49_49_93_95_48_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_14, parse_tree__prog_io_type_defn__TypeIsAbstractNoncanonical_27, parse_tree__prog_io_type_defn__RepresentationIs_28, parse_tree__prog_io_type_defn__InitialisationIs_29, parse_tree__prog_io_type_defn__GroundIs_30, parse_tree__prog_io_type_defn__AnyIs_31, parse_tree__prog_io_type_defn__CStoreIs_32, parse_tree__prog_io_type_defn__EqualityIs_33, parse_tree__prog_io_type_defn__ComparisonIs_34, parse_tree__prog_io_type_defn__DirectArgIs_35, parse_tree__prog_io_type_defn__WhereTerm_25);
      }
#line 1119 "prog_io_type_defn.m"
    else
#line 1130 "prog_io_type_defn.m"
      {
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_57_57 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[10];
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_59_59;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeInfo_60_60;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_37;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_51_51;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 1130 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_55_55;

#line 1121 "prog_io_type_defn.m"
        {
#line 1121 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_15);
        }
#line 1122 "prog_io_type_defn.m"
        {
#line 1122 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[11], parse_tree__prog_io_type_defn__MaybeRepresentationIs_16);
        }
#line 6697 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[12];
#line 1123 "prog_io_type_defn.m"
        {
#line 1123 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeInitialisationIs_17);
        }
#line 6704 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[13];
#line 1124 "prog_io_type_defn.m"
        {
#line 1124 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_44_44 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeGroundIs_18);
        }
#line 1125 "prog_io_type_defn.m"
        {
#line 1125 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_46_46 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_60_60, parse_tree__prog_io_type_defn__MaybeAnyIs_19);
        }
#line 1126 "prog_io_type_defn.m"
        {
#line 1126 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[14], parse_tree__prog_io_type_defn__MaybeCStoreIs_20);
        }
#line 1127 "prog_io_type_defn.m"
        {
#line 1127 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeEqualityIs_21);
        }
#line 1128 "prog_io_type_defn.m"
        {
#line 1128 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_52_52 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_59_59, parse_tree__prog_io_type_defn__MaybeComparisonIs_22);
        }
#line 1129 "prog_io_type_defn.m"
        {
#line 1129 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_54_54 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeDirectArgIs_23);
        }
#line 1130 "prog_io_type_defn.m"
        {
#line 1130 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_55_55 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_type_defn__TypeInfo_57_57, parse_tree__prog_io_type_defn__MaybeWhereEnd_24);
        }
#line 1129 "prog_io_type_defn.m"
        {
#line 1129 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_53_53 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_54_54, parse_tree__prog_io_type_defn__V_55_55);
        }
#line 1128 "prog_io_type_defn.m"
        {
#line 1128 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_51_51 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_52_52, parse_tree__prog_io_type_defn__V_53_53);
        }
#line 1127 "prog_io_type_defn.m"
        {
#line 1127 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_49_49 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_50_50, parse_tree__prog_io_type_defn__V_51_51);
        }
#line 1126 "prog_io_type_defn.m"
        {
#line 1126 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_47_47 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_48_48, parse_tree__prog_io_type_defn__V_49_49);
        }
#line 1125 "prog_io_type_defn.m"
        {
#line 1125 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_45_45 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_46_46, parse_tree__prog_io_type_defn__V_47_47);
        }
#line 1124 "prog_io_type_defn.m"
        {
#line 1124 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_44_44, parse_tree__prog_io_type_defn__V_45_45);
        }
#line 1123 "prog_io_type_defn.m"
        {
#line 1123 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_42_42, parse_tree__prog_io_type_defn__V_43_43);
        }
#line 1122 "prog_io_type_defn.m"
        {
#line 1122 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_40_40, parse_tree__prog_io_type_defn__V_41_41);
        }
#line 1121 "prog_io_type_defn.m"
        {
#line 1121 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_56_56, parse_tree__prog_io_type_defn__V_38_38, parse_tree__prog_io_type_defn__V_39_39);
        }
#line 1131 "prog_io_type_defn.m"
        {
#line 1131 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhereDetails_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhereDetails_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_37));
#line 1131 "prog_io_type_defn.m"
        }
#line 1130 "prog_io_type_defn.m"
      }
#line 1119 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_26;
#line 1119 "prog_io_type_defn.m"
  }
#line 1088 "prog_io_type_defn.m"
}

#line 1079 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_end_2_p_0(
#line 1079 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 1079 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__HeadVar__2_2)
#line 1079 "prog_io_type_defn.m"
{
#line 1081 "prog_io_type_defn.m"
  {
#line 1081 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 1081 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1081 "prog_io_type_defn.m"
      {
#line 1081 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1081 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[14]);
#line 1081 "prog_io_type_defn.m"
      }
#line 1081 "prog_io_type_defn.m"
    else
#line 1082 "prog_io_type_defn.m"
      {
#line 1082 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 1082 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_6;
#line 1082 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_8_8;
#line 1082 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1082 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 1082 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_22_22;

#line 1086 "prog_io_type_defn.m"
        {
#line 1086 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_22_22 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1086 "prog_io_type_defn.m"
        {
#line 1086 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_22_22));
#line 1086 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[157])));
#line 1086 "prog_io_type_defn.m"
        }
#line 1086 "prog_io_type_defn.m"
        {
#line 1086 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 1086 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "prog_io_type_defn.m"
        }
#line 1085 "prog_io_type_defn.m"
        {
#line 1085 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1085 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1085 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_6, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1085 "prog_io_type_defn.m"
        }
#line 1082 "prog_io_type_defn.m"
        {
#line 1082 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_6));
#line 1082 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "prog_io_type_defn.m"
        }
#line 1082 "prog_io_type_defn.m"
        {
#line 1082 "prog_io_type_defn.m"
          MR_Word base;
#line 1082 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__HeadVar__2_2 = base;
#line 1082 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_8_8));
#line 1082 "prog_io_type_defn.m"
        }
#line 1082 "prog_io_type_defn.m"
      }
#line 1081 "prog_io_type_defn.m"
  }
#line 1079 "prog_io_type_defn.m"
}

#line 1063 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(
#line 1063 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1063 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1063 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7,
#line 1063 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeFunctor_8)
#line 1063 "prog_io_type_defn.m"
{
#line 1069 "prog_io_type_defn.m"
  {
#line 1069 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1069 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Name_9;
#line 1069 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__Arity_10;

#line 1067 "prog_io_type_defn.m"
    {
#line 1067 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__Name_9, &parse_tree__prog_io_type_defn__Arity_10);
    }
#line 1069 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1068 "prog_io_type_defn.m"
      {
#line 1068 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;

#line 1068 "prog_io_type_defn.m"
        {
#line 1068 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_9));
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Arity_10));
#line 1068 "prog_io_type_defn.m"
        }
#line 1068 "prog_io_type_defn.m"
        {
#line 1068 "prog_io_type_defn.m"
          MR_Word base;
#line 1068 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1068 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_14_14));
#line 1068 "prog_io_type_defn.m"
        }
#line 1068 "prog_io_type_defn.m"
      }
#line 1069 "prog_io_type_defn.m"
    else
#line 1070 "prog_io_type_defn.m"
      {
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_46_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1070 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__TermStr_11;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Pieces_12;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_13;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_17_17;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_36_36;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_39_39;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_40_40;
#line 1070 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;

#line 1070 "prog_io_type_defn.m"
        {
#line 1070 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1073 "prog_io_type_defn.m"
        {
#line 1073 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1073 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_11));
#line 1073 "prog_io_type_defn.m"
        }
#line 1073 "prog_io_type_defn.m"
        {
#line 1073 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1073 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1073 "prog_io_type_defn.m"
        }
#line 1073 "prog_io_type_defn.m"
        {
#line 1073 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[156])));
#line 1073 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1073 "prog_io_type_defn.m"
        }
#line 1072 "prog_io_type_defn.m"
        {
#line 1072 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[141])));
#line 1072 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1072 "prog_io_type_defn.m"
        }
#line 1072 "prog_io_type_defn.m"
        {
#line 1072 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[155])));
#line 1072 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_20_20));
#line 1072 "prog_io_type_defn.m"
        }
#line 1071 "prog_io_type_defn.m"
        {
#line 1071 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[154])));
#line 1071 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1071 "prog_io_type_defn.m"
        }
#line 1075 "prog_io_type_defn.m"
        {
#line 1075 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_46_46, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1075 "prog_io_type_defn.m"
        {
#line 1075 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_12));
#line 1075 "prog_io_type_defn.m"
        }
#line 1075 "prog_io_type_defn.m"
        {
#line 1075 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 1075 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1075 "prog_io_type_defn.m"
        }
#line 1075 "prog_io_type_defn.m"
        {
#line 1075 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_38_38));
#line 1075 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_39_39));
#line 1075 "prog_io_type_defn.m"
        }
#line 1075 "prog_io_type_defn.m"
        {
#line 1075 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1075 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1075 "prog_io_type_defn.m"
        }
#line 1074 "prog_io_type_defn.m"
        {
#line 1074 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1074 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1074 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_36_36));
#line 1074 "prog_io_type_defn.m"
        }
#line 1076 "prog_io_type_defn.m"
        {
#line 1076 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_13));
#line 1076 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "prog_io_type_defn.m"
        }
#line 1076 "prog_io_type_defn.m"
        {
#line 1076 "prog_io_type_defn.m"
          MR_Word base;
#line 1076 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeFunctor_8 = base;
#line 1076 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 1076 "prog_io_type_defn.m"
        }
#line 1070 "prog_io_type_defn.m"
      }
#line 1069 "prog_io_type_defn.m"
  }
#line 1063 "prog_io_type_defn.m"
}

#line 1052 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1(
#line 1052 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1052 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1052 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1052 "prog_io_type_defn.m"
{
#line 1052 "prog_io_type_defn.m"
  {
#line 1052 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1052 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8;

#line 1052 "prog_io_type_defn.m"
    {
#line 1052 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_direct_arg_functor_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8);
    }
#line 1052 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeFunctor_8));
#line 1052 "prog_io_type_defn.m"
  }
#line 1052 "prog_io_type_defn.m"
}

#line 1047 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0(
#line 1047 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 1047 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 1047 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 1047 "prog_io_type_defn.m"
{
#line 1054 "prog_io_type_defn.m"
  {
#line 1054 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 1054 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1054 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__FunctorsTerms_9;

#line 1051 "prog_io_type_defn.m"
    {
#line 1051 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__FunctorsTerms_9);
    }
#line 1054 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1052 "prog_io_type_defn.m"
      {
#line 1052 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_12_12;

#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_6[0]));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_direct_arg_is_3_f_0_1));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_5));
#line 1052 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_12_12, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__VarSet_6));
#line 1052 "prog_io_type_defn.m"
        }
#line 1052 "prog_io_type_defn.m"
        {
#line 1052 "prog_io_type_defn.m"
          parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0, parse_tree__prog_io_type_defn__V_12_12, parse_tree__prog_io_type_defn__FunctorsTerms_9, &parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8);
        }
#line 1052 "prog_io_type_defn.m"
      }
#line 1054 "prog_io_type_defn.m"
    else
#line 1056 "prog_io_type_defn.m"
      {
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_11;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_26_26;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 1056 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 1058 "prog_io_type_defn.m"
        {
#line 1058 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
        }
#line 1058 "prog_io_type_defn.m"
        {
#line 1058 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_28_28));
#line 1058 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[153])));
#line 1058 "prog_io_type_defn.m"
        }
#line 1059 "prog_io_type_defn.m"
        {
#line 1059 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_27_27));
#line 1059 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1059 "prog_io_type_defn.m"
        }
#line 1057 "prog_io_type_defn.m"
        {
#line 1057 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1057 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_26_26));
#line 1057 "prog_io_type_defn.m"
        }
#line 1060 "prog_io_type_defn.m"
        {
#line 1060 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_11));
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "prog_io_type_defn.m"
        }
#line 1060 "prog_io_type_defn.m"
        {
#line 1060 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 1060 "prog_io_type_defn.m"
        }
#line 1056 "prog_io_type_defn.m"
      }
#line 1054 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeDirectArgCtors_8;
#line 1054 "prog_io_type_defn.m"
  }
#line 1047 "prog_io_type_defn.m"
}

#line 1029 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(
#line 1029 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1029 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5,
#line 1029 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeMutableInfo_6)
#line 1029 "prog_io_type_defn.m"
{
#line 1040 "prog_io_type_defn.m"
  {
#line 1040 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1040 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1034 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_32_32;
#line 1034 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 1034 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Context_8;
#line 1034 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarSet_9;
#line 1034 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 1034 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_14_14;
#line 1034 "prog_io_type_defn.m"
    MR_Integer parse_tree__prog_io_type_defn__V_15_15;

#line 1034 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1034 "prog_io_type_defn.m"
      {
#line 1034 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1034 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1034 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1034 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1034 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1034 "prog_io_type_defn.m"
          {
#line 1034 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 1034 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_14_14, (MR_String) "mutable") == 0);
#line 1034 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 1034 "prog_io_type_defn.m"
              {
#line 7372 "parse_tree.prog_io_type_defn.c"
                parse_tree__prog_io_type_defn__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1035 "prog_io_type_defn.m"
                {
#line 1035 "prog_io_type_defn.m"
                  mercury__varset__init_1_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_32_32, &parse_tree__prog_io_type_defn__VarSet_9);
                }
#line 1036 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_15_15 = (MR_Integer) -1;
#line 1036 "prog_io_type_defn.m"
                {
#line 1036 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_info_6_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__Args_7, parse_tree__prog_io_type_defn__Context_8, parse_tree__prog_io_type_defn__V_15_15, &parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10);
                }
#line 1034 "prog_io_type_defn.m"
              }
#line 1034 "prog_io_type_defn.m"
          }
#line 1034 "prog_io_type_defn.m"
      }
#line 1040 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1039 "prog_io_type_defn.m"
      *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = parse_tree__prog_io_type_defn__MaybeMutableInfoPrime_10;
#line 1040 "prog_io_type_defn.m"
    else
#line 1041 "prog_io_type_defn.m"
      {
#line 1041 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1041 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_23_23;
#line 1041 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_24_24;
#line 1041 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 1041 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;

#line 1043 "prog_io_type_defn.m"
        {
#line 1043 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
        }
#line 1043 "prog_io_type_defn.m"
        {
#line 1043 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[152])));
#line 1043 "prog_io_type_defn.m"
        }
#line 1043 "prog_io_type_defn.m"
        {
#line 1043 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_24_24));
#line 1043 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "prog_io_type_defn.m"
        }
#line 1042 "prog_io_type_defn.m"
        {
#line 1042 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1042 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_23_23));
#line 1042 "prog_io_type_defn.m"
        }
#line 1044 "prog_io_type_defn.m"
        {
#line 1044 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "prog_io_type_defn.m"
        }
#line 1044 "prog_io_type_defn.m"
        {
#line 1044 "prog_io_type_defn.m"
          MR_Word base;
#line 1044 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeMutableInfo_6 = base;
#line 1044 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1044 "prog_io_type_defn.m"
        }
#line 1041 "prog_io_type_defn.m"
      }
#line 1040 "prog_io_type_defn.m"
  }
#line 1029 "prog_io_type_defn.m"
}

#line 1020 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1(
#line 1020 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1020 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1020 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1020 "prog_io_type_defn.m"
{
#line 1020 "prog_io_type_defn.m"
  {
#line 1020 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1020 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6;

#line 1020 "prog_io_type_defn.m"
    {
#line 1020 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6);
    }
#line 1020 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_MaybeMutableInfo_6));
#line 1020 "prog_io_type_defn.m"
  }
#line 1020 "prog_io_type_defn.m"
}

#line 1006 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0(
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_4,
#line 1006 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_5)
#line 1006 "prog_io_type_defn.m"
{
#line 1019 "prog_io_type_defn.m"
  {
#line 1019 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1019 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeItems_6;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;
#line 1010 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_16_16;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 1010 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_8_8;

#line 1010 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1010 "prog_io_type_defn.m"
      {
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 0)));
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 1)));
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_5, (MR_Integer) 2)));
#line 1010 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 1010 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1010 "prog_io_type_defn.m"
          {
#line 1010 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_15_15, (MR_Integer) 0)));
#line 1010 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_16_16, (MR_String) "mutable") == 0);
#line 1010 "prog_io_type_defn.m"
          }
#line 1010 "prog_io_type_defn.m"
      }
#line 1019 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1011 "prog_io_type_defn.m"
      {
#line 1011 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem_9;

#line 1011 "prog_io_type_defn.m"
        {
#line 1011 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_mutable_decl_term_3_p_0(parse_tree__prog_io_type_defn__ModuleName_4, parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__MaybeItem_9);
        }
#line 1015 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9)) == (MR_mktag((MR_Integer) 0))))
#line 1017 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) parse_tree__prog_io_type_defn__MaybeItem_9;
#line 1015 "prog_io_type_defn.m"
        else
#line 1013 "prog_io_type_defn.m"
          {
#line 1013 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Mutable_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem_9, (MR_Integer) 0)));
#line 1013 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 1014 "prog_io_type_defn.m"
            {
#line 1014 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Mutable_10));
#line 1014 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "prog_io_type_defn.m"
            }
#line 1014 "prog_io_type_defn.m"
            {
#line 1014 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_17_17));
#line 1014 "prog_io_type_defn.m"
            }
#line 1013 "prog_io_type_defn.m"
          }
#line 1011 "prog_io_type_defn.m"
      }
#line 1019 "prog_io_type_defn.m"
    else
#line 1021 "prog_io_type_defn.m"
      {
#line 1021 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_12;

#line 1019 "prog_io_type_defn.m"
        {
#line 1019 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_type_defn__Term_5, &parse_tree__prog_io_type_defn__Terms_12);
        }
#line 1021 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 1020 "prog_io_type_defn.m"
          {
#line 1020 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;

#line 1020 "prog_io_type_defn.m"
            {
#line 1020 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[1]));
#line 1020 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__parse_where_mutable_is_2_f_0_1));
#line 1020 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1020 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_19_19, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ModuleName_4));
#line 1020 "prog_io_type_defn.m"
            }
#line 1020 "prog_io_type_defn.m"
            {
#line 1020 "prog_io_type_defn.m"
              parse_tree__prog_io_util__map_parser_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__Terms_12, &parse_tree__prog_io_type_defn__MaybeItems_6);
            }
#line 1020 "prog_io_type_defn.m"
          }
#line 1021 "prog_io_type_defn.m"
        else
#line 1023 "prog_io_type_defn.m"
          {
#line 1023 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 1023 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 1023 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 1023 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 1023 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_37_37;

#line 1025 "prog_io_type_defn.m"
            {
#line 1025 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_32_32 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_5);
            }
#line 1025 "prog_io_type_defn.m"
            {
#line 1025 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 1025 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[151])));
#line 1025 "prog_io_type_defn.m"
            }
#line 1025 "prog_io_type_defn.m"
            {
#line 1025 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_31_31));
#line 1025 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1025 "prog_io_type_defn.m"
            }
#line 1024 "prog_io_type_defn.m"
            {
#line 1024 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1024 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_30_30));
#line 1024 "prog_io_type_defn.m"
            }
#line 1026 "prog_io_type_defn.m"
            {
#line 1026 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 1026 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "prog_io_type_defn.m"
            }
#line 1026 "prog_io_type_defn.m"
            {
#line 1026 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeItems_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeItems_6, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_37_37));
#line 1026 "prog_io_type_defn.m"
            }
#line 1023 "prog_io_type_defn.m"
          }
#line 1021 "prog_io_type_defn.m"
      }
#line 1019 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeItems_6;
#line 1019 "prog_io_type_defn.m"
  }
#line 1006 "prog_io_type_defn.m"
}

#line 940 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_initialisation_is_3_f_0(
#line 940 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 940 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 940 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 940 "prog_io_type_defn.m"
{
#line 943 "prog_io_type_defn.m"
  {
#line 943 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 943 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result_8;
#line 943 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result0_9;
#line 943 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Result1_10;
#line 947 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 944 "prog_io_type_defn.m"
    {
#line 944 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result0_9 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialisation", parse_tree__prog_io_type_defn__Term_7);
    }
#line 947 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result0_9)) == (MR_mktag((MR_Integer) 1)));
#line 947 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 947 "prog_io_type_defn.m"
      {
#line 947 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result0_9, (MR_Integer) 0)));
#line 947 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "prog_io_type_defn.m"
      }
#line 951 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 949 "prog_io_type_defn.m"
      {
#line 949 "prog_io_type_defn.m"
        {
#line 949 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_114_115_101_95_119_104_101_114_101_95_105_115_95_95_104_111_49_95_95_91_52_93_95_48_3_f_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, (MR_String) "initialization", parse_tree__prog_io_type_defn__Term_7);
        }
#line 949 "prog_io_type_defn.m"
      }
#line 951 "prog_io_type_defn.m"
    else
#line 952 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result1_10 = parse_tree__prog_io_type_defn__Result0_9;
#line 970 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Result1_10)) == (MR_mktag((MR_Integer) 0))))
#line 974 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 970 "prog_io_type_defn.m"
    else
#line 970 "prog_io_type_defn.m"
      {
#line 970 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Result1_10, (MR_Integer) 0)));

#line 970 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 970 "prog_io_type_defn.m"
        else
#line 956 "prog_io_type_defn.m"
          {
#line 956 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__AutoInitSupported_12;

#line 958 "prog_io_type_defn.m"
            {
#line 958 "prog_io_type_defn.m"
              libs__globals__semipure_get_solver_auto_init_supported_1_p_0(&parse_tree__prog_io_type_defn__AutoInitSupported_12);
            }
#line 962 "prog_io_type_defn.m"
#line 962 "prog_io_type_defn.m"
            switch (parse_tree__prog_io_type_defn__AutoInitSupported_12) {
#line 962 "prog_io_type_defn.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 962 "prog_io_type_defn.m"
              case (MR_Integer) 0:
#line 963 "prog_io_type_defn.m"
                {
#line 963 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_14;
#line 963 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 963 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 963 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_35_35;
#line 963 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_40_40;

#line 967 "prog_io_type_defn.m"
                  {
#line 967 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7);
                  }
#line 967 "prog_io_type_defn.m"
                  {
#line 967 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 967 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 967 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[150])));
#line 967 "prog_io_type_defn.m"
                  }
#line 967 "prog_io_type_defn.m"
                  {
#line 967 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_34_34));
#line 967 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 967 "prog_io_type_defn.m"
                  }
#line 966 "prog_io_type_defn.m"
                  {
#line 966 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 966 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 966 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 966 "prog_io_type_defn.m"
                  }
#line 968 "prog_io_type_defn.m"
                  {
#line 968 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_14));
#line 968 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 968 "prog_io_type_defn.m"
                  }
#line 968 "prog_io_type_defn.m"
                  {
#line 968 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 968 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_40_40));
#line 968 "prog_io_type_defn.m"
                  }
#line 963 "prog_io_type_defn.m"
                }
#line 962 "prog_io_type_defn.m"
                break;
#line 962 "prog_io_type_defn.m"
              case (MR_Integer) 1:
#line 960 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Result_8 = parse_tree__prog_io_type_defn__Result1_10;
#line 962 "prog_io_type_defn.m"
                break;
#line 962 "prog_io_type_defn.m"
            }
#line 956 "prog_io_type_defn.m"
          }
#line 970 "prog_io_type_defn.m"
      }
#line 943 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__Result_8;
#line 943 "prog_io_type_defn.m"
  }
#line 940 "prog_io_type_defn.m"
}

#line 929 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_noncanonical_1_f_0(
#line 929 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_3)
#line 929 "prog_io_type_defn.m"
{
#line 931 "prog_io_type_defn.m"
  {
#line 931 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 931 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 933 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_5_5;
#line 933 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_6_6;
#line 933 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_7_7;
#line 933 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_4_4;

#line 933 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 933 "prog_io_type_defn.m"
      {
#line 933 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 0)));
#line 933 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 1)));
#line 933 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_3, (MR_Integer) 2)));
#line 933 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 933 "prog_io_type_defn.m"
          {
#line 933 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 933 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 933 "prog_io_type_defn.m"
              {
#line 933 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_5_5, (MR_Integer) 0)));
#line 933 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_6_6, (MR_String) "type_is_abstract_noncanonical") == 0);
#line 933 "prog_io_type_defn.m"
              }
#line 933 "prog_io_type_defn.m"
          }
#line 933 "prog_io_type_defn.m"
      }
#line 931 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 935 "prog_io_type_defn.m"
      {
#line 935 "prog_io_type_defn.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 935 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[14]);
#line 935 "prog_io_type_defn.m"
      }
#line 931 "prog_io_type_defn.m"
    else
#line 937 "prog_io_type_defn.m"
      {
#line 937 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[15]);
#line 937 "prog_io_type_defn.m"
      }
#line 931 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__2_2;
#line 931 "prog_io_type_defn.m"
  }
#line 929 "prog_io_type_defn.m"
}

#line 805 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_6,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 805 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeTerm0_9)
#line 805 "prog_io_type_defn.m"
{
#line 812 "prog_io_type_defn.m"
  {
#line 812 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 812 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeWhereDetails_10;

#line 812 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeTerm0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "prog_io_type_defn.m"
      {
#line 813 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 812 "prog_io_type_defn.m"
      }
#line 812 "prog_io_type_defn.m"
    else
#line 815 "prog_io_type_defn.m"
      {
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTerm0_9, (MR_Integer) 0)));
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeRepresentationIs_14;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeInitialisationIs_15;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeGroundIs_16;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeAnyIs_17;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeCStoreIs_18;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeEqualityIs_19;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeComparisonIs_20;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_21;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereEnd_22;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49;
#line 815 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53;

#line 818 "prog_io_type_defn.m"
        {
#line 818 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_attribute__ho10_4_p_0(&parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeTerm0_9, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25);
        }
#line 820 "prog_io_type_defn.m"
        {
#line 820 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_57_95_95_91_50_44_32_51_44_32_53_93_95_48_4_p_0((MR_String) "representation", parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_25_25, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27);
        }
#line 823 "prog_io_type_defn.m"
        {
#line 823 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_56_95_95_91_51_93_95_48_4_p_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_27_27, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31);
        }
#line 826 "prog_io_type_defn.m"
        {
#line 826 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_53_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "ground", &parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_31_31, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33);
        }
#line 829 "prog_io_type_defn.m"
        {
#line 829 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_52_95_95_91_50_44_32_51_44_32_52_93_95_48_4_p_0((MR_String) "any", &parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_33_33, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37);
        }
#line 832 "prog_io_type_defn.m"
        {
#line 832 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_51_95_95_91_50_44_32_52_93_95_48_4_p_0((MR_String) "constraint_store", parse_tree__prog_io_type_defn__ModuleName_7, &parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_37_37, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41);
        }
#line 835 "prog_io_type_defn.m"
        {
#line 835 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_55_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "equality", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_41_41, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45);
        }
#line 838 "prog_io_type_defn.m"
        {
#line 838 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_54_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "comparison", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_45_45, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49);
        }
#line 841 "prog_io_type_defn.m"
        {
#line 841 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_119_104_101_114_101_95_97_116_116_114_105_98_117_116_101_95_95_104_111_50_95_95_91_50_44_32_53_93_95_48_4_p_0((MR_String) "direct_arg", parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, &parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_49_49, &parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53);
        }
#line 844 "prog_io_type_defn.m"
        {
#line 844 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_where_end_2_p_0(parse_tree__prog_io_type_defn__STATE_VARIABLE_MaybeTerm_53_53, &parse_tree__prog_io_type_defn__MaybeWhereEnd_22);
        }
#line 846 "prog_io_type_defn.m"
        {
#line 846 "prog_io_type_defn.m"
          return parse_tree__prog_io_type_defn__MaybeWhereDetails_10 = parse_tree__prog_io_type_defn__make_maybe_where_details_12_f_0(parse_tree__prog_io_type_defn__IsSolverType_6, parse_tree__prog_io_type_defn__MaybeTypeIsAbstractNoncanonical_13, parse_tree__prog_io_type_defn__MaybeRepresentationIs_14, parse_tree__prog_io_type_defn__MaybeInitialisationIs_15, parse_tree__prog_io_type_defn__MaybeGroundIs_16, parse_tree__prog_io_type_defn__MaybeAnyIs_17, parse_tree__prog_io_type_defn__MaybeCStoreIs_18, parse_tree__prog_io_type_defn__MaybeEqualityIs_19, parse_tree__prog_io_type_defn__MaybeComparisonIs_20, parse_tree__prog_io_type_defn__MaybeDirectArgIs_21, parse_tree__prog_io_type_defn__MaybeWhereEnd_22, parse_tree__prog_io_type_defn__Term0_11);
        }
#line 815 "prog_io_type_defn.m"
      }
#line 812 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeWhereDetails_10;
#line 812 "prog_io_type_defn.m"
  }
#line 805 "prog_io_type_defn.m"
}

#line 737 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_11,
#line 737 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 737 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 737 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 737 "prog_io_type_defn.m"
{
#line 741 "prog_io_type_defn.m"
  {
#line 741 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 741 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15;
#line 741 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__IsSolverType_16;
#line 741 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Attributes_17;
#line 1338 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_37_37;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_38_38;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 742 "prog_io_type_defn.m"
    {
#line 742 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15);
    }
#line 1336 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_11)) == (MR_mktag((MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1336 "prog_io_type_defn.m"
      {
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 0)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_11, (MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, (MR_Integer) 0)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_37_37, (MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "prog_io_type_defn.m"
      }
#line 1338 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1337 "prog_io_type_defn.m"
      {
#line 1337 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_36;
#line 1337 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 1;
#line 1337 "prog_io_type_defn.m"
      }
#line 1338 "prog_io_type_defn.m"
    else
#line 1339 "prog_io_type_defn.m"
      {
#line 1339 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__IsSolverType_16 = (MR_Integer) 0;
#line 1339 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Attributes_17 = parse_tree__prog_io_type_defn__Attributes0_11;
#line 1339 "prog_io_type_defn.m"
      }
#line 747 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15)) == (MR_mktag((MR_Integer) 0))))
#line 745 "prog_io_type_defn.m"
      {
#line 745 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));

#line 746 "prog_io_type_defn.m"
        {
#line 746 "prog_io_type_defn.m"
          MR_Word base;
#line 746 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 746 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 746 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 746 "prog_io_type_defn.m"
        }
#line 745 "prog_io_type_defn.m"
      }
#line 747 "prog_io_type_defn.m"
    else
#line 748 "prog_io_type_defn.m"
      {
#line 748 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 0)));
#line 748 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_15, (MR_Integer) 1)));
#line 748 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_21;
#line 748 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeDefn_22;
#line 748 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_23;
#line 748 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Item_24;
#line 748 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_25;

#line 749 "prog_io_type_defn.m"
        {
#line 749 "prog_io_type_defn.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_21);
        }
#line 753 "prog_io_type_defn.m"
#line 753 "prog_io_type_defn.m"
        switch (parse_tree__prog_io_type_defn__IsSolverType_16) {
#line 753 "prog_io_type_defn.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 753 "prog_io_type_defn.m"
          case (MR_Integer) 0:
#line 751 "prog_io_type_defn.m"
            {
#line 752 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[11]);
#line 751 "prog_io_type_defn.m"
            }
#line 753 "prog_io_type_defn.m"
            break;
#line 753 "prog_io_type_defn.m"
          case (MR_Integer) 1:
#line 754 "prog_io_type_defn.m"
            {
#line 755 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TypeDefn_22 = (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_type_defn_scalar_common_2[12]);
#line 754 "prog_io_type_defn.m"
            }
#line 753 "prog_io_type_defn.m"
            break;
#line 753 "prog_io_type_defn.m"
        }
#line 757 "prog_io_type_defn.m"
        {
#line 757 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ItemTypeDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 757 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 757 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_20));
#line 757 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_22));
#line 757 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_21));
#line 757 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 757 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_23, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 757 "prog_io_type_defn.m"
        }
#line 759 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Item_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_23);
#line 760 "prog_io_type_defn.m"
        {
#line 760 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeItem0_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 760 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_24));
#line 760 "prog_io_type_defn.m"
        }
#line 761 "prog_io_type_defn.m"
        {
#line 761 "prog_io_type_defn.m"
          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_25, parse_tree__prog_io_type_defn__Attributes_17, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 761 "prog_io_type_defn.m"
          return;
        }
#line 748 "prog_io_type_defn.m"
      }
#line 741 "prog_io_type_defn.m"
  }
#line 737 "prog_io_type_defn.m"
}

#line 701 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(
#line 701 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 701 "prog_io_type_defn.m"
{
#line 701 "prog_io_type_defn.m"
  {
#line 701 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 701 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0, 1);
#line 701 "prog_io_type_defn.m"
  }
#line 701 "prog_io_type_defn.m"
}

#line 701 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2(
#line 701 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 701 "prog_io_type_defn.m"
{
#line 701 "prog_io_type_defn.m"
  {
#line 701 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 701 "prog_io_type_defn.m"
    {
#line 703 "prog_io_type_defn.m"
      {
#line 703 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23);
      }
#line 703 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded);
#line 703 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded)
#line 703 "prog_io_type_defn.m"
        {
#line 703 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 703 "prog_io_type_defn.m"
          return;
        }
#line 701 "prog_io_type_defn.m"
    }
#line 701 "prog_io_type_defn.m"
  }
#line 701 "prog_io_type_defn.m"
}

#line 701 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(
#line 701 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 701 "prog_io_type_defn.m"
{
#line 701 "prog_io_type_defn.m"
  {
#line 701 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 701 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__commit_0) == 0)
#line 701 "prog_io_type_defn.m"
      {
#line 701 "prog_io_type_defn.m"
        {
#line 701 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__RepnType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 0)));
#line 701 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 1)));
#line 701 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 2)));
#line 701 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 3)));
#line 701 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19, (MR_Integer) 4)));

#line 702 "prog_io_type_defn.m"
          {
#line 702 "prog_io_type_defn.m"
            parse_tree__prog_type__type_contains_var_2_p_0(parse_tree__prog_io_type_defn__RepnType_24, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Var_25, parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
          }
#line 701 "prog_io_type_defn.m"
        }
#line 701 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = MR_FALSE;
#line 701 "prog_io_type_defn.m"
      }
#line 701 "prog_io_type_defn.m"
    else
#line 701 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded = MR_TRUE;
#line 701 "prog_io_type_defn.m"
  }
#line 701 "prog_io_type_defn.m"
}

#line 685 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_10,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_11,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_12,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_14,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_15,
#line 685 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_16,
#line 685 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_17,
#line 685 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_18)
#line 685 "prog_io_type_defn.m"
{
#line 685 "prog_io_type_defn.m"
  {
#line 685 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 693 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "prog_io_type_defn.m"
      {
#line 725 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 725 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 725 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 725 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 725 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_75;

#line 728 "prog_io_type_defn.m"
        {
#line 728 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_43_43 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_12);
        }
#line 728 "prog_io_type_defn.m"
        {
#line 728 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 728 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 728 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[147])));
#line 728 "prog_io_type_defn.m"
        }
#line 728 "prog_io_type_defn.m"
        {
#line 728 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 728 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "prog_io_type_defn.m"
        }
#line 727 "prog_io_type_defn.m"
        {
#line 727 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 727 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 727 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 727 "prog_io_type_defn.m"
        }
#line 729 "prog_io_type_defn.m"
        {
#line 729 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_75));
#line 729 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "prog_io_type_defn.m"
        }
#line 729 "prog_io_type_defn.m"
        {
#line 729 "prog_io_type_defn.m"
          MR_Word base;
#line 729 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 729 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 729 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 729 "prog_io_type_defn.m"
        }
#line 725 "prog_io_type_defn.m"
      }
#line 693 "prog_io_type_defn.m"
    else
#line 693 "prog_io_type_defn.m"
      {
#line 693 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_20;

#line 693 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_13, (MR_Integer) 0)));
#line 694 "prog_io_type_defn.m"
        {
#line 694 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_10, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12, &parse_tree__prog_io_type_defn__MaybeNameParams_20);
        }
#line 698 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_20)) == (MR_mktag((MR_Integer) 0))))
#line 696 "prog_io_type_defn.m"
          {
#line 696 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));

#line 697 "prog_io_type_defn.m"
            {
#line 697 "prog_io_type_defn.m"
              MR_Word base;
#line 697 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 697 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 697 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_21));
#line 697 "prog_io_type_defn.m"
            }
#line 696 "prog_io_type_defn.m"
          }
#line 698 "prog_io_type_defn.m"
        else
#line 699 "prog_io_type_defn.m"
          {
#line 699 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 0)));

#line 699 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_20, (MR_Integer) 1)));
#line 701 "prog_io_type_defn.m"
            {
#line 701 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_3(&parse_tree__prog_io_type_defn__env);
            }
#line 713 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__succeeded)
#line 705 "prog_io_type_defn.m"
              {
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 705 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_26;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_27;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_28;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_56_56;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 705 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_72_72;

#line 705 "prog_io_type_defn.m"
                {
#line 705 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_26 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_81_81, parse_tree__prog_io_type_defn__VarSet_11, parse_tree__prog_io_type_defn__HeadTerm_12);
                }
#line 708 "prog_io_type_defn.m"
                {
#line 708 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 708 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_26));
#line 708 "prog_io_type_defn.m"
                }
#line 708 "prog_io_type_defn.m"
                {
#line 708 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_56_56));
#line 708 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 708 "prog_io_type_defn.m"
                }
#line 707 "prog_io_type_defn.m"
                {
#line 707 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[149])));
#line 707 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_55_55));
#line 707 "prog_io_type_defn.m"
                }
#line 706 "prog_io_type_defn.m"
                {
#line 706 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[148])));
#line 706 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_27, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 706 "prog_io_type_defn.m"
                }
#line 710 "prog_io_type_defn.m"
                {
#line 710 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_67_67 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_81_81, parse_tree__prog_io_type_defn__HeadTerm_12);
                }
#line 711 "prog_io_type_defn.m"
                {
#line 711 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 711 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_27));
#line 711 "prog_io_type_defn.m"
                }
#line 711 "prog_io_type_defn.m"
                {
#line 711 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 711 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "prog_io_type_defn.m"
                }
#line 710 "prog_io_type_defn.m"
                {
#line 710 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 710 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 710 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 710 "prog_io_type_defn.m"
                }
#line 711 "prog_io_type_defn.m"
                {
#line 711 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 711 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "prog_io_type_defn.m"
                }
#line 709 "prog_io_type_defn.m"
                {
#line 709 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 709 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 709 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 709 "prog_io_type_defn.m"
                }
#line 712 "prog_io_type_defn.m"
                {
#line 712 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_28));
#line 712 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "prog_io_type_defn.m"
                }
#line 712 "prog_io_type_defn.m"
                {
#line 712 "prog_io_type_defn.m"
                  MR_Word base;
#line 712 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 712 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_18 = base;
#line 712 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_72_72));
#line 712 "prog_io_type_defn.m"
                }
#line 705 "prog_io_type_defn.m"
              }
#line 713 "prog_io_type_defn.m"
            else
#line 714 "prog_io_type_defn.m"
              {
#line 714 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_29;
#line 714 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_30;
#line 714 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_31;
#line 714 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_32;
#line 714 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeItem0_33;

#line 714 "prog_io_type_defn.m"
                {
#line 714 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_11, &parse_tree__prog_io_type_defn__TypeVarSet_29);
                }
#line 715 "prog_io_type_defn.m"
                {
#line 715 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 715 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 715 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__SolverTypeDetails_19));
#line 715 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__TypeDefn_30, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_14));
#line 715 "prog_io_type_defn.m"
                }
#line 717 "prog_io_type_defn.m"
                {
#line 717 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 717 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_22));
#line 717 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0_env_0__Params_23));
#line 717 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_30));
#line 717 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_29));
#line 717 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 717 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_31, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_17));
#line 717 "prog_io_type_defn.m"
                }
#line 719 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Item_32 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_31);
#line 720 "prog_io_type_defn.m"
                {
#line 720 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeItem0_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_33, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_32));
#line 720 "prog_io_type_defn.m"
                }
#line 721 "prog_io_type_defn.m"
                {
#line 721 "prog_io_type_defn.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_33, parse_tree__prog_io_type_defn__Attributes_15, parse_tree__prog_io_type_defn__MaybeItem_18);
#line 721 "prog_io_type_defn.m"
                  return;
                }
#line 714 "prog_io_type_defn.m"
              }
#line 699 "prog_io_type_defn.m"
          }
#line 693 "prog_io_type_defn.m"
      }
#line 685 "prog_io_type_defn.m"
  }
#line 685 "prog_io_type_defn.m"
}

#line 643 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_10,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_11,
#line 643 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 643 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 643 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 643 "prog_io_type_defn.m"
{
#line 647 "prog_io_type_defn.m"
  {
#line 647 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 647 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeNameParams_15;

#line 648 "prog_io_type_defn.m"
    {
#line 648 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_10, &parse_tree__prog_io_type_defn__MaybeNameParams_15);
    }
#line 652 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameParams_15)) == (MR_mktag((MR_Integer) 0))))
#line 650 "prog_io_type_defn.m"
      {
#line 650 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Specs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 0)));

#line 651 "prog_io_type_defn.m"
        {
#line 651 "prog_io_type_defn.m"
          MR_Word base;
#line 651 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 651 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_16));
#line 651 "prog_io_type_defn.m"
        }
#line 650 "prog_io_type_defn.m"
      }
#line 652 "prog_io_type_defn.m"
    else
#line 653 "prog_io_type_defn.m"
      {
#line 653 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 0)));
#line 653 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameParams_15, (MR_Integer) 1)));
#line 676 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Args_19;
#line 655 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 655 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_31_31;
#line 655 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_20_20;

#line 655 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BodyTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 655 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 655 "prog_io_type_defn.m"
          {
#line 655 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 0)));
#line 655 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 1)));
#line 655 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BodyTerm_11, (MR_Integer) 2)));
#line 655 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 655 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 655 "prog_io_type_defn.m"
              {
#line 655 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 0)));
#line 655 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_31_31, (MR_String) "type_is_abstract_enum") == 0);
#line 655 "prog_io_type_defn.m"
              }
#line 655 "prog_io_type_defn.m"
          }
#line 676 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 669 "prog_io_type_defn.m"
          {
#line 669 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__NumBits_22;
#line 659 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Arg_21;
#line 659 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;
#line 659 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_33_33;
#line 659 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_34_34;
#line 660 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_23_23;

#line 659 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_19)) == (MR_mktag((MR_Integer) 1)));
#line 659 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 659 "prog_io_type_defn.m"
              {
#line 659 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Arg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_19, (MR_Integer) 0)));
#line 659 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_19, (MR_Integer) 1)));
#line 659 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 659 "prog_io_type_defn.m"
                  {
#line 660 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Arg_21)) == (MR_mktag((MR_Integer) 0)));
#line 660 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 660 "prog_io_type_defn.m"
                      {
#line 660 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 0)));
#line 660 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 1)));
#line 660 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_21, (MR_Integer) 2)));
#line 660 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 659 "prog_io_type_defn.m"
                          {
#line 660 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 660 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 660 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__NumBits_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_33_33, (MR_Integer) 0)));
#line 659 "prog_io_type_defn.m"
                          }
#line 660 "prog_io_type_defn.m"
                      }
#line 659 "prog_io_type_defn.m"
                  }
#line 659 "prog_io_type_defn.m"
              }
#line 669 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 662 "prog_io_type_defn.m"
              {
#line 662 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_24;
#line 662 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_25;
#line 662 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_26;
#line 662 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_27;
#line 662 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 662 "prog_io_type_defn.m"
                {
#line 662 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_24);
                }
#line 664 "prog_io_type_defn.m"
                {
#line 664 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__NumBits_22));
#line 664 "prog_io_type_defn.m"
                }
#line 663 "prog_io_type_defn.m"
                {
#line 663 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_type_defn__TypeDefn_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 663 "prog_io_type_defn.m"
                }
#line 665 "prog_io_type_defn.m"
                {
#line 665 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 665 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_17));
#line 665 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_18));
#line 665 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_25));
#line 665 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_24));
#line 665 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 665 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_26, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 665 "prog_io_type_defn.m"
                }
#line 667 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Item_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_26);
#line 668 "prog_io_type_defn.m"
                {
#line 668 "prog_io_type_defn.m"
                  MR_Word base;
#line 668 "prog_io_type_defn.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 668 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_27));
#line 668 "prog_io_type_defn.m"
                }
#line 662 "prog_io_type_defn.m"
              }
#line 669 "prog_io_type_defn.m"
            else
#line 671 "prog_io_type_defn.m"
              {
#line 671 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_29;
#line 671 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 671 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 671 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 673 "prog_io_type_defn.m"
                {
#line 673 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 673 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[145])));
#line 673 "prog_io_type_defn.m"
                }
#line 673 "prog_io_type_defn.m"
                {
#line 673 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 673 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "prog_io_type_defn.m"
                }
#line 672 "prog_io_type_defn.m"
                {
#line 672 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 672 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 672 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 672 "prog_io_type_defn.m"
                }
#line 674 "prog_io_type_defn.m"
                {
#line 674 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_29));
#line 674 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "prog_io_type_defn.m"
                }
#line 674 "prog_io_type_defn.m"
                {
#line 674 "prog_io_type_defn.m"
                  MR_Word base;
#line 674 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 674 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 674 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 674 "prog_io_type_defn.m"
                }
#line 671 "prog_io_type_defn.m"
              }
#line 669 "prog_io_type_defn.m"
          }
#line 676 "prog_io_type_defn.m"
        else
#line 678 "prog_io_type_defn.m"
          {
#line 678 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 678 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 678 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 678 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_76;

#line 680 "prog_io_type_defn.m"
            {
#line 680 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 680 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[146])));
#line 680 "prog_io_type_defn.m"
            }
#line 680 "prog_io_type_defn.m"
            {
#line 680 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 680 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "prog_io_type_defn.m"
            }
#line 679 "prog_io_type_defn.m"
            {
#line 679 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 679 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 679 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_76, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 679 "prog_io_type_defn.m"
            }
#line 681 "prog_io_type_defn.m"
            {
#line 681 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_76));
#line 681 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "prog_io_type_defn.m"
            }
#line 681 "prog_io_type_defn.m"
            {
#line 681 "prog_io_type_defn.m"
              MR_Word base;
#line 681 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 681 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 681 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 681 "prog_io_type_defn.m"
            }
#line 678 "prog_io_type_defn.m"
          }
#line 653 "prog_io_type_defn.m"
      }
#line 647 "prog_io_type_defn.m"
  }
#line 643 "prog_io_type_defn.m"
}

#line 604 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 604 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 604 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 604 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 604 "prog_io_type_defn.m"
{
#line 9204 "parse_tree.prog_io_type_defn.c"
  {
#line 9206 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_13)) == (MR_mktag((MR_Integer) 1)));
#line 9208 "parse_tree.prog_io_type_defn.c"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_59_59;

#line 1336 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1336 "prog_io_type_defn.m"
      {
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 0)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, (MR_Integer) 0)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_61_61, (MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "prog_io_type_defn.m"
      }
#line 9233 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 9235 "parse_tree.prog_io_type_defn.c"
      {
#line 9237 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_19;
#line 9239 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;

#line 618 "prog_io_type_defn.m"
        {
#line 618 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTerm_12));
#line 618 "prog_io_type_defn.m"
        }
#line 617 "prog_io_type_defn.m"
        {
#line 617 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhere_19 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0((MR_Integer) 1, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__V_28_28);
        }
#line 622 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_19)) == (MR_mktag((MR_Integer) 0))))
#line 620 "prog_io_type_defn.m"
          {
#line 620 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 0)));

#line 621 "prog_io_type_defn.m"
            {
#line 621 "prog_io_type_defn.m"
              MR_Word base;
#line 621 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 621 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 621 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_20));
#line 621 "prog_io_type_defn.m"
            }
#line 620 "prog_io_type_defn.m"
          }
#line 622 "prog_io_type_defn.m"
        else
#line 624 "prog_io_type_defn.m"
          {
#line 624 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 0)));
#line 624 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 1)));
#line 624 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgCtors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_19, (MR_Integer) 2)));

#line 634 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__MaybeDirectArgCtors_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "prog_io_type_defn.m"
              {
#line 636 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__parse_solver_type_base_9_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__MaybeSolverTypeDetails_21, parse_tree__prog_io_type_defn__MaybeUserEqComp_22, parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_60, parse_tree__prog_io_type_defn__Context_14, parse_tree__prog_io_type_defn__SeqNum_15, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 636 "prog_io_type_defn.m"
                return;
              }
#line 634 "prog_io_type_defn.m"
            else
#line 626 "prog_io_type_defn.m"
              {
#line 626 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 626 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 626 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 626 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 626 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;

#line 631 "prog_io_type_defn.m"
                {
#line 631 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_47_47 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
                }
#line 631 "prog_io_type_defn.m"
                {
#line 631 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 631 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[144])));
#line 631 "prog_io_type_defn.m"
                }
#line 632 "prog_io_type_defn.m"
                {
#line 632 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_46_46));
#line 632 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "prog_io_type_defn.m"
                }
#line 630 "prog_io_type_defn.m"
                {
#line 630 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 630 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 630 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 630 "prog_io_type_defn.m"
                }
#line 633 "prog_io_type_defn.m"
                {
#line 633 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 633 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "prog_io_type_defn.m"
                }
#line 633 "prog_io_type_defn.m"
                {
#line 633 "prog_io_type_defn.m"
                  MR_Word base;
#line 633 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 633 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 633 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 633 "prog_io_type_defn.m"
                }
#line 626 "prog_io_type_defn.m"
              }
#line 624 "prog_io_type_defn.m"
          }
#line 9374 "parse_tree.prog_io_type_defn.c"
      }
#line 9376 "parse_tree.prog_io_type_defn.c"
    else
#line 613 "prog_io_type_defn.m"
      {
#line 613 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__parse_where_type_is_abstract_enum_7_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Context_14, parse_tree__prog_io_type_defn__SeqNum_15, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 613 "prog_io_type_defn.m"
        return;
      }
#line 9385 "parse_tree.prog_io_type_defn.c"
  }
#line 604 "prog_io_type_defn.m"
}

#line 540 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__find_constructor_4_p_0(
#line 540 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 540 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__SymName_7,
#line 540 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__Arity_8,
#line 540 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__NamedCtor_9)
#line 540 "prog_io_type_defn.m"
{
#line 543 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 543 "prog_io_type_defn.m"
    {
#line 543 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 543 "prog_io_type_defn.m"
      {
#line 543 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 543 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctor_5;
#line 543 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Ctors_6;
#line 544 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 544 "prog_io_type_defn.m"
        MR_Integer parse_tree__prog_io_type_defn__V_15_15;
#line 544 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_10_10;
#line 544 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 544 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Args_12;
#line 544 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13;

#line 543 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 543 "prog_io_type_defn.m"
          {
#line 543 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Ctor_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 0)));
#line 543 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Ctors_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__1_1, (MR_Integer) 1)));
#line 544 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 0)));
#line 544 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 1)));
#line 544 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 2)));
#line 544 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 3)));
#line 544 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 4)));
#line 544 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_5, (MR_Integer) 5)));
#line 544 "prog_io_type_defn.m"
            {
#line 544 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_type_defn__SymName_7, parse_tree__prog_io_type_defn__V_14_14);
            }
#line 544 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 544 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_8 == parse_tree__prog_io_type_defn__V_15_15);
#line 546 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 545 "prog_io_type_defn.m"
              {
#line 545 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__NamedCtor_9 = parse_tree__prog_io_type_defn__Ctor_5;
#line 545 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = MR_TRUE;
#line 545 "prog_io_type_defn.m"
              }
#line 546 "prog_io_type_defn.m"
            else
#line 547 "prog_io_type_defn.m"
              {
#line 547 "prog_io_type_defn.m"
                /* direct tailcall eliminated */
#line 547 "prog_io_type_defn.m"
                {
#line 547 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_type_defn__Ctors_6;

#line 547 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__1_1 = parse_tree__prog_io_type_defn__HeadVar__1__tmp_copy_1;
#line 547 "prog_io_type_defn.m"
                }
#line 547 "prog_io_type_defn.m"
                continue;
#line 547 "prog_io_type_defn.m"
              }
#line 543 "prog_io_type_defn.m"
          }
#line 543 "prog_io_type_defn.m"
        return parse_tree__prog_io_type_defn__succeeded;
#line 543 "prog_io_type_defn.m"
      }
#line 543 "prog_io_type_defn.m"
      break;
#line 543 "prog_io_type_defn.m"
    }
#line 540 "prog_io_type_defn.m"
}

#line 495 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__2_2,
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3,
#line 495 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4,
#line 495 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5)
#line 495 "prog_io_type_defn.m"
{
#line 499 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 499 "prog_io_type_defn.m"
    {
#line 499 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 499 "prog_io_type_defn.m"
      {
#line 499 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 499 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 499 "prog_io_type_defn.m"
        else
#line 501 "prog_io_type_defn.m"
          {
#line 501 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 0)));
#line 501 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__2_2, (MR_Integer) 1)));
#line 501 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 0)));
#line 501 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__DirectArgCtor_12, (MR_Integer) 1)));
#line 501 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;
#line 529 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_18;

#line 503 "prog_io_type_defn.m"
            {
#line 503 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__find_constructor_4_p_0(parse_tree__prog_io_type_defn__HeadVar__1_1, parse_tree__prog_io_type_defn__SymName_16, parse_tree__prog_io_type_defn__Arity_17, &parse_tree__prog_io_type_defn__Ctor_18);
            }
#line 529 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 505 "prog_io_type_defn.m"
              {
#line 505 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 0)));
#line 504 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 1)));
#line 504 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 2)));
#line 504 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 3)));
#line 504 "prog_io_type_defn.m"
                MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 4)));
#line 504 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_18, (MR_Integer) 5)));

#line 506 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__Arity_17 == (MR_Integer) 1);
#line 506 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = !(parse_tree__prog_io_type_defn__succeeded);
#line 513 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 509 "prog_io_type_defn.m"
                  {
#line 509 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_26;
#line 509 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 509 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 509 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 511 "prog_io_type_defn.m"
                    {
#line 511 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 511 "prog_io_type_defn.m"
                    {
#line 511 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_49_49));
#line 511 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[139])));
#line 511 "prog_io_type_defn.m"
                    }
#line 511 "prog_io_type_defn.m"
                    {
#line 511 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_48_48));
#line 511 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "prog_io_type_defn.m"
                    }
#line 510 "prog_io_type_defn.m"
                    {
#line 510 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 510 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 510 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 510 "prog_io_type_defn.m"
                    }
#line 512 "prog_io_type_defn.m"
                    {
#line 512 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_26));
#line 512 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 512 "prog_io_type_defn.m"
                    }
#line 509 "prog_io_type_defn.m"
                  }
#line 513 "prog_io_type_defn.m"
                else
#line 516 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__ExistQVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4;
#line 516 "prog_io_type_defn.m"
                else
#line 517 "prog_io_type_defn.m"
                  {
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_57_57;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_73_73;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_74_74;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_75_75;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_76_76;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_108;
#line 517 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_109;

#line 520 "prog_io_type_defn.m"
                    {
#line 520 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 520 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 520 "prog_io_type_defn.m"
                    }
#line 520 "prog_io_type_defn.m"
                    {
#line 520 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 520 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[57])));
#line 520 "prog_io_type_defn.m"
                    }
#line 519 "prog_io_type_defn.m"
                    {
#line 519 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[142])));
#line 519 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 519 "prog_io_type_defn.m"
                    }
#line 518 "prog_io_type_defn.m"
                    {
#line 518 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[141])));
#line 518 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_60_60));
#line 518 "prog_io_type_defn.m"
                    }
#line 518 "prog_io_type_defn.m"
                    {
#line 518 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 518 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_108, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_57_57));
#line 518 "prog_io_type_defn.m"
                    }
#line 524 "prog_io_type_defn.m"
                    {
#line 524 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_75_75 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                    }
#line 525 "prog_io_type_defn.m"
                    {
#line 525 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 525 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_108));
#line 525 "prog_io_type_defn.m"
                    }
#line 525 "prog_io_type_defn.m"
                    {
#line 525 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 525 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "prog_io_type_defn.m"
                    }
#line 524 "prog_io_type_defn.m"
                    {
#line 524 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_75_75));
#line 524 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_76_76));
#line 524 "prog_io_type_defn.m"
                    }
#line 525 "prog_io_type_defn.m"
                    {
#line 525 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_74_74));
#line 525 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "prog_io_type_defn.m"
                    }
#line 523 "prog_io_type_defn.m"
                    {
#line 523 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 523 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_109, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 523 "prog_io_type_defn.m"
                    }
#line 526 "prog_io_type_defn.m"
                    {
#line 526 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_109));
#line 526 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 526 "prog_io_type_defn.m"
                    }
#line 517 "prog_io_type_defn.m"
                  }
#line 505 "prog_io_type_defn.m"
              }
#line 529 "prog_io_type_defn.m"
            else
#line 533 "prog_io_type_defn.m"
              {
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_86_86;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_90_90;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_101_101;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_102_102;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_103_103;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_112;
#line 533 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_113;

#line 532 "prog_io_type_defn.m"
                {
#line 532 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 532 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_90_90, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__DirectArgCtor_12));
#line 532 "prog_io_type_defn.m"
                }
#line 532 "prog_io_type_defn.m"
                {
#line 532 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_90_90));
#line 532 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[59])));
#line 532 "prog_io_type_defn.m"
                }
#line 531 "prog_io_type_defn.m"
                {
#line 531 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[143])));
#line 531 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_89_89));
#line 531 "prog_io_type_defn.m"
                }
#line 530 "prog_io_type_defn.m"
                {
#line 530 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[141])));
#line 530 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_86_86));
#line 530 "prog_io_type_defn.m"
                }
#line 530 "prog_io_type_defn.m"
                {
#line 530 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[140])));
#line 530 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_112, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 530 "prog_io_type_defn.m"
                }
#line 535 "prog_io_type_defn.m"
                {
#line 535 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_101_101 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadVar__3_3);
                }
#line 535 "prog_io_type_defn.m"
                {
#line 535 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 535 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_112));
#line 535 "prog_io_type_defn.m"
                }
#line 535 "prog_io_type_defn.m"
                {
#line 535 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_103_103));
#line 535 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "prog_io_type_defn.m"
                }
#line 535 "prog_io_type_defn.m"
                {
#line 535 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 535 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_102_102));
#line 535 "prog_io_type_defn.m"
                }
#line 535 "prog_io_type_defn.m"
                {
#line 535 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 535 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "prog_io_type_defn.m"
                }
#line 534 "prog_io_type_defn.m"
                {
#line 534 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 534 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 534 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 534 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_113, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_99_99));
#line 534 "prog_io_type_defn.m"
                }
#line 536 "prog_io_type_defn.m"
                {
#line 536 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_113));
#line 536 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4));
#line 536 "prog_io_type_defn.m"
                }
#line 533 "prog_io_type_defn.m"
              }
#line 538 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 538 "prog_io_type_defn.m"
            {
#line 538 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2 = parse_tree__prog_io_type_defn__DirectArgCtors_13;
#line 538 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_54_54;

#line 538 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_4 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 538 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__2_2 = parse_tree__prog_io_type_defn__HeadVar__2__tmp_copy_2;
#line 538 "prog_io_type_defn.m"
            }
#line 538 "prog_io_type_defn.m"
            continue;
#line 501 "prog_io_type_defn.m"
          }
#line 499 "prog_io_type_defn.m"
      }
#line 499 "prog_io_type_defn.m"
      break;
#line 499 "prog_io_type_defn.m"
    }
#line 495 "prog_io_type_defn.m"
}

#line 470 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7(
#line 470 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 470 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 470 "prog_io_type_defn.m"
{
#line 470 "prog_io_type_defn.m"
  {
#line 470 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 470 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 470 "prog_io_type_defn.m"
    {
#line 470 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__470__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 470 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 470 "prog_io_type_defn.m"
  }
#line 470 "prog_io_type_defn.m"
}

#line 466 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_6(
#line 466 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 466 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 466 "prog_io_type_defn.m"
{
#line 466 "prog_io_type_defn.m"
  {
#line 466 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 466 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 466 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv8_HeadVar__2_2;

#line 466 "prog_io_type_defn.m"
    {
#line 466 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv8_HeadVar__2_2 = parse_tree__prog_data__prog_constraint_get_arg_types_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 466 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv8_HeadVar__2_2));
#line 466 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 466 "prog_io_type_defn.m"
  }
#line 466 "prog_io_type_defn.m"
}

#line 442 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5(
#line 442 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 442 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 442 "prog_io_type_defn.m"
{
#line 442 "prog_io_type_defn.m"
  {
#line 442 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 442 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 442 "prog_io_type_defn.m"
    {
#line 442 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__442__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 442 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 442 "prog_io_type_defn.m"
  }
#line 442 "prog_io_type_defn.m"
}

#line 438 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_4(
#line 438 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 438 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 438 "prog_io_type_defn.m"
{
#line 438 "prog_io_type_defn.m"
  {
#line 438 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 438 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 438 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv5_HeadVar__2_125;

#line 438 "prog_io_type_defn.m"
    {
#line 438 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv5_HeadVar__2_125 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__438__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 438 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv5_HeadVar__2_125));
#line 438 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 438 "prog_io_type_defn.m"
  }
#line 438 "prog_io_type_defn.m"
}

#line 423 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3(
#line 423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 423 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 423 "prog_io_type_defn.m"
{
#line 423 "prog_io_type_defn.m"
  {
#line 423 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 423 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 423 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__conv2_HeadVar__3_266;

#line 423 "prog_io_type_defn.m"
    {
#line 423 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv2_HeadVar__3_266 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__423__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 423 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv2_HeadVar__3_266));
#line 423 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 423 "prog_io_type_defn.m"
  }
#line 423 "prog_io_type_defn.m"
}

#line 393 "prog_io_type_defn.m"
static MR_bool MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2(
#line 393 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 393 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 393 "prog_io_type_defn.m"
{
#line 393 "prog_io_type_defn.m"
  {
#line 393 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 393 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;

#line 393 "prog_io_type_defn.m"
    {
#line 393 "prog_io_type_defn.m"
      return parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_type_defn__IntroducedFrom__pred__process_du_ctors__393__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 393 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__succeeded;
#line 393 "prog_io_type_defn.m"
  }
#line 393 "prog_io_type_defn.m"
}

#line 390 "prog_io_type_defn.m"
static MR_Box MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_1(
#line 390 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 390 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1)
#line 390 "prog_io_type_defn.m"
{
#line 390 "prog_io_type_defn.m"
  {
#line 390 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 390 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 390 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_59;

#line 390 "prog_io_type_defn.m"
    {
#line 390 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__conv0_HeadVar__2_59 = parse_tree__prog_io_type_defn__IntroducedFrom__func__process_du_ctors__390__1_1_f_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1));
    }
#line 390 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_59));
#line 390 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__wrapper_arg_2;
#line 390 "prog_io_type_defn.m"
  }
#line 390 "prog_io_type_defn.m"
}

#line 379 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__1_1,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_3,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4,
#line 379 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5,
#line 379 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6)
#line 379 "prog_io_type_defn.m"
{
#line 382 "prog_io_type_defn.m"
  while (MR_TRUE)
#line 382 "prog_io_type_defn.m"
    {
#line 382 "prog_io_type_defn.m"
      /* tailcall optimized into a loop */
#line 382 "prog_io_type_defn.m"
      {
#line 382 "prog_io_type_defn.m"
        MR_bool parse_tree__prog_io_type_defn__succeeded;

#line 382 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_6 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 382 "prog_io_type_defn.m"
        else
#line 383 "prog_io_type_defn.m"
          {
#line 383 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 0)));
#line 383 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__4_4, (MR_Integer) 1)));
#line 383 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 0)));
#line 383 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 1)));
#line 383 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 3)));
#line 383 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;
#line 384 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___CtorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 2)));
#line 384 "prog_io_type_defn.m"
            MR_Integer parse_tree__prog_io_type_defn___Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 4)));
#line 384 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_16, (MR_Integer) 5)));
#line 409 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NotExistQOrParamVars_30;
#line 390 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeInfo_253_253;
#line 390 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_25;
#line 390 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27;
#line 390 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28;
#line 390 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_60_60;
#line 390 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_61_61;
#line 393 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn___ExistQOrParamVars_29;
#line 395 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 395 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_32_32;

#line 390 "prog_io_type_defn.m"
            {
#line 390 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__CtorArgTypes_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[3], parse_tree__prog_io_type_defn__CtorArgs_22);
            }
#line 391 "prog_io_type_defn.m"
            {
#line 391 "prog_io_type_defn.m"
              parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_25, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27);
            }
#line 10257 "parse_tree.prog_io_type_defn.c"
            parse_tree__prog_io_type_defn__TypeInfo_253_253 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 392 "prog_io_type_defn.m"
            {
#line 392 "prog_io_type_defn.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_253_253, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_27, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28);
            }
#line 393 "prog_io_type_defn.m"
            {
#line 393 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_61_61 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_253_253, parse_tree__prog_io_type_defn__ExistQVars_19, parse_tree__prog_io_type_defn__HeadVar__1_1);
            }
#line 393 "prog_io_type_defn.m"
            {
#line 393 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 393 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 393 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_2));
#line 393 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 393 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_61_61));
#line 393 "prog_io_type_defn.m"
            }
#line 393 "prog_io_type_defn.m"
            {
#line 393 "prog_io_type_defn.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_253_253, parse_tree__prog_io_type_defn__V_60_60, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_28, &parse_tree__prog_io_type_defn___ExistQOrParamVars_29, &parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
            }
#line 395 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQOrParamVars_30)) == (MR_mktag((MR_Integer) 1)));
#line 395 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 395 "prog_io_type_defn.m"
              {
#line 395 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 0)));
#line 395 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, (MR_Integer) 1)));
#line 398 "prog_io_type_defn.m"
                {
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_256_256 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_257_257 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__GenericVarSet_33;
#line 398 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Pieces_35;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__Spec_36;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 398 "prog_io_type_defn.m"
                  MR_String parse_tree__prog_io_type_defn__V_66_66;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_69_69;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_70_70;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_79_79;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_80_80;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_81_81;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_82_82;
#line 398 "prog_io_type_defn.m"
                  MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 402 "prog_io_type_defn.m"
                  MR_Box parse_tree__prog_io_type_defn__conv1_V_66_66;

#line 398 "prog_io_type_defn.m"
                  {
#line 398 "prog_io_type_defn.m"
                    mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_256_256, parse_tree__prog_io_type_defn__TypeCtorInfo_257_257, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_33);
                  }
#line 399 "prog_io_type_defn.m"
                  {
#line 399 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34 = parse_tree__mercury_to_mercury__mercury_vars_to_name_only_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_257_257, parse_tree__prog_io_type_defn__GenericVarSet_33, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30);
                  }
#line 402 "prog_io_type_defn.m"
                  {
#line 402 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__conv1_V_66_66 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_type_defn__NotExistQOrParamVars_30, ((MR_Box) ((MR_String) "parameter")), ((MR_Box) ((MR_String) "parameters")));
                  }
#line 402 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_66_66 = ((MR_String) parse_tree__prog_io_type_defn__conv1_V_66_66);
#line 402 "prog_io_type_defn.m"
                  {
#line 402 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 402 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 402 "prog_io_type_defn.m"
                  }
#line 404 "prog_io_type_defn.m"
                  {
#line 404 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 404 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQOrParamVarsStr_34));
#line 404 "prog_io_type_defn.m"
                  }
#line 404 "prog_io_type_defn.m"
                  {
#line 404 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 404 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[31])));
#line 404 "prog_io_type_defn.m"
                  }
#line 403 "prog_io_type_defn.m"
                  {
#line 403 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 403 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 403 "prog_io_type_defn.m"
                  }
#line 401 "prog_io_type_defn.m"
                  {
#line 401 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[135])));
#line 401 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 401 "prog_io_type_defn.m"
                  }
#line 407 "prog_io_type_defn.m"
                  {
#line 407 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_256_256, parse_tree__prog_io_type_defn__BodyTerm_3);
                  }
#line 407 "prog_io_type_defn.m"
                  {
#line 407 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 407 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_35));
#line 407 "prog_io_type_defn.m"
                  }
#line 407 "prog_io_type_defn.m"
                  {
#line 407 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 407 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_io_type_defn.m"
                  }
#line 407 "prog_io_type_defn.m"
                  {
#line 407 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_81_81));
#line 407 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_82_82));
#line 407 "prog_io_type_defn.m"
                  }
#line 407 "prog_io_type_defn.m"
                  {
#line 407 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_80_80));
#line 407 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_io_type_defn.m"
                  }
#line 406 "prog_io_type_defn.m"
                  {
#line 406 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 406 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 406 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_36, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_79_79));
#line 406 "prog_io_type_defn.m"
                  }
#line 408 "prog_io_type_defn.m"
                  {
#line 408 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_36));
#line 408 "prog_io_type_defn.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 408 "prog_io_type_defn.m"
                  }
#line 398 "prog_io_type_defn.m"
                }
#line 395 "prog_io_type_defn.m"
              }
#line 395 "prog_io_type_defn.m"
            else
#line 434 "prog_io_type_defn.m"
              {
#line 434 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQParamsSet_39;
#line 414 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeInfo_260_260 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 414 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ExistQVarsSet_37;
#line 414 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ParamsSet_38;

#line 414 "prog_io_type_defn.m"
                {
#line 414 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn__ExistQVarsSet_37);
                }
#line 415 "prog_io_type_defn.m"
                {
#line 415 "prog_io_type_defn.m"
                  mercury__set__list_to_set_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__HeadVar__1_1, &parse_tree__prog_io_type_defn__ParamsSet_38);
                }
#line 416 "prog_io_type_defn.m"
                {
#line 416 "prog_io_type_defn.m"
                  mercury__set__intersect_3_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__ExistQVarsSet_37, parse_tree__prog_io_type_defn__ParamsSet_38, &parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 417 "prog_io_type_defn.m"
                {
#line 417 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__prog_io_type_defn__TypeInfo_260_260, parse_tree__prog_io_type_defn__ExistQParamsSet_39);
                }
#line 434 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 420 "prog_io_type_defn.m"
                  {
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_261_261 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_262_262;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_264_264;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_268_268;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParams_40;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_87_87;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_91_91;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_92_92;
#line 420 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_93_93;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_97_97;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_98_98;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_99_99;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_100_100;
#line 420 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__V_101_101;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_115_115;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_116_116;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_117_117;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_118_118;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_119_119;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__GenericVarSet_213;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_214;
#line 420 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_215;
#line 425 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv3_V_93_93;
#line 428 "prog_io_type_defn.m"
                    MR_Box parse_tree__prog_io_type_defn__conv4_V_101_101;

#line 420 "prog_io_type_defn.m"
                    {
#line 420 "prog_io_type_defn.m"
                      mercury__set__to_sorted_list_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_261_261, parse_tree__prog_io_type_defn__ExistQParamsSet_39, &parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 10566 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 421 "prog_io_type_defn.m"
                    {
#line 421 "prog_io_type_defn.m"
                      mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_213);
                    }
#line 10573 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_264_264 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 423 "prog_io_type_defn.m"
                    {
#line 423 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 423 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_5[0]));
#line 423 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_3));
#line 423 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 423 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_87_87, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__GenericVarSet_213));
#line 423 "prog_io_type_defn.m"
                    }
#line 423 "prog_io_type_defn.m"
                    {
#line 423 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41 = mercury__list__map_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_261_261, parse_tree__prog_io_type_defn__TypeCtorInfo_264_264, parse_tree__prog_io_type_defn__V_87_87, parse_tree__prog_io_type_defn__ExistQParams_40);
                    }
#line 10594 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeCtorInfo_268_268 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 425 "prog_io_type_defn.m"
                    {
#line 425 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv3_V_93_93 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_261_261, parse_tree__prog_io_type_defn__TypeCtorInfo_264_264, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                    }
#line 425 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_93_93 = ((MR_String) parse_tree__prog_io_type_defn__conv3_V_93_93);
#line 425 "prog_io_type_defn.m"
                    {
#line 425 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 425 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_92_92, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_93_93));
#line 425 "prog_io_type_defn.m"
                    }
#line 426 "prog_io_type_defn.m"
                    {
#line 426 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_92_92));
#line 426 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "prog_io_type_defn.m"
                    }
#line 424 "prog_io_type_defn.m"
                    {
#line 424 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[136])));
#line 424 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_88_88, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_91_91));
#line 424 "prog_io_type_defn.m"
                    }
#line 427 "prog_io_type_defn.m"
                    {
#line 427 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_98_98 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__prog_io_type_defn__ExistQParamVarsStrs_41);
                    }
#line 428 "prog_io_type_defn.m"
                    {
#line 428 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__conv4_V_101_101 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_261_261, parse_tree__prog_io_type_defn__TypeCtorInfo_264_264, parse_tree__prog_io_type_defn__ExistQParams_40, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
                    }
#line 428 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_101_101 = ((MR_String) parse_tree__prog_io_type_defn__conv4_V_101_101);
#line 428 "prog_io_type_defn.m"
                    {
#line 428 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 428 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_101_101));
#line 428 "prog_io_type_defn.m"
                    }
#line 428 "prog_io_type_defn.m"
                    {
#line 428 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_100_100));
#line 428 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[35])));
#line 428 "prog_io_type_defn.m"
                    }
#line 427 "prog_io_type_defn.m"
                    {
#line 427 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, parse_tree__prog_io_type_defn__V_98_98, parse_tree__prog_io_type_defn__V_99_99);
                    }
#line 426 "prog_io_type_defn.m"
                    {
#line 426 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_214 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_268_268, parse_tree__prog_io_type_defn__V_88_88, parse_tree__prog_io_type_defn__V_97_97);
                    }
#line 432 "prog_io_type_defn.m"
                    {
#line 432 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_262_262, parse_tree__prog_io_type_defn__BodyTerm_3);
                    }
#line 432 "prog_io_type_defn.m"
                    {
#line 432 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_214));
#line 432 "prog_io_type_defn.m"
                    }
#line 432 "prog_io_type_defn.m"
                    {
#line 432 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_119_119));
#line 432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "prog_io_type_defn.m"
                    }
#line 432 "prog_io_type_defn.m"
                    {
#line 432 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_117_117));
#line 432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_118_118));
#line 432 "prog_io_type_defn.m"
                    }
#line 432 "prog_io_type_defn.m"
                    {
#line 432 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_116_116));
#line 432 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "prog_io_type_defn.m"
                    }
#line 431 "prog_io_type_defn.m"
                    {
#line 431 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 431 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_215, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 431 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_215, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_115_115));
#line 431 "prog_io_type_defn.m"
                    }
#line 433 "prog_io_type_defn.m"
                    {
#line 433 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_215));
#line 433 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 433 "prog_io_type_defn.m"
                    }
#line 420 "prog_io_type_defn.m"
                  }
#line 434 "prog_io_type_defn.m"
                else
#line 461 "prog_io_type_defn.m"
                  {
#line 461 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NotOccursExistQVars_44;
#line 438 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeInfo_271_271;
#line 438 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__ConstraintTVars_42;
#line 438 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_126_126;
#line 438 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_127_127;
#line 438 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__CtorArgTypes_217;
#line 438 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_218;
#line 438 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_219;
#line 442 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn___OccursExistQVars_43;
#line 444 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 444 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_46_46;

#line 438 "prog_io_type_defn.m"
                    {
#line 438 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__CtorArgTypes_217 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[4], parse_tree__prog_io_type_defn__CtorArgs_22);
                    }
#line 439 "prog_io_type_defn.m"
                    {
#line 439 "prog_io_type_defn.m"
                      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__CtorArgTypes_217, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_218);
                    }
#line 10779 "parse_tree.prog_io_type_defn.c"
                    parse_tree__prog_io_type_defn__TypeInfo_271_271 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 440 "prog_io_type_defn.m"
                    {
#line 440 "prog_io_type_defn.m"
                      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_271_271, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_218, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_219);
                    }
#line 441 "prog_io_type_defn.m"
                    {
#line 441 "prog_io_type_defn.m"
                      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_type_defn__Constraints_20, &parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 442 "prog_io_type_defn.m"
                    {
#line 442 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_127_127 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeInfo_271_271, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_219, parse_tree__prog_io_type_defn__ConstraintTVars_42);
                    }
#line 442 "prog_io_type_defn.m"
                    {
#line 442 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 442 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_5));
#line 442 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 442 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_126_126, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__V_127_127));
#line 442 "prog_io_type_defn.m"
                    }
#line 442 "prog_io_type_defn.m"
                    {
#line 442 "prog_io_type_defn.m"
                      mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_271_271, parse_tree__prog_io_type_defn__V_126_126, parse_tree__prog_io_type_defn__ExistQVars_19, &parse_tree__prog_io_type_defn___OccursExistQVars_43, &parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                    }
#line 444 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotOccursExistQVars_44)) == (MR_mktag((MR_Integer) 1)));
#line 444 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 444 "prog_io_type_defn.m"
                      {
#line 444 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 0)));
#line 444 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotOccursExistQVars_44, (MR_Integer) 1)));
#line 447 "prog_io_type_defn.m"
                        {
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_274_274 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_275_275 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeInfo_276_276;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_277_277;
#line 447 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_47;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_130_130;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_131_131;
#line 447 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_132_132;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_135_135;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_136_136;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_137_137;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_140_140;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_141_141;
#line 447 "prog_io_type_defn.m"
                          MR_String parse_tree__prog_io_type_defn__V_142_142;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_153_153;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_154_154;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_155_155;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_156_156;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__V_157_157;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__GenericVarSet_220;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Pieces_221;
#line 447 "prog_io_type_defn.m"
                          MR_Word parse_tree__prog_io_type_defn__Spec_222;
#line 451 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv6_V_132_132;
#line 455 "prog_io_type_defn.m"
                          MR_Box parse_tree__prog_io_type_defn__conv7_V_142_142;

#line 447 "prog_io_type_defn.m"
                          {
#line 447 "prog_io_type_defn.m"
                            mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_274_274, parse_tree__prog_io_type_defn__TypeCtorInfo_275_275, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_220);
                          }
#line 448 "prog_io_type_defn.m"
                          {
#line 448 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_47 = parse_tree__mercury_to_mercury__mercury_vars_to_name_only_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_275_275, parse_tree__prog_io_type_defn__GenericVarSet_220, parse_tree__prog_io_type_defn__NotOccursExistQVars_44);
                          }
#line 10886 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeInfo_276_276 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 10888 "parse_tree.prog_io_type_defn.c"
                          parse_tree__prog_io_type_defn__TypeCtorInfo_277_277 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 451 "prog_io_type_defn.m"
                          {
#line 451 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv6_V_132_132 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_276_276, parse_tree__prog_io_type_defn__TypeCtorInfo_277_277, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                          }
#line 451 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_132_132 = ((MR_String) parse_tree__prog_io_type_defn__conv6_V_132_132);
#line 451 "prog_io_type_defn.m"
                          {
#line 451 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 451 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_131_131, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_132_132));
#line 451 "prog_io_type_defn.m"
                          }
#line 453 "prog_io_type_defn.m"
                          {
#line 453 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 453 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_136_136, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotOccursExistQVarsStr_47));
#line 453 "prog_io_type_defn.m"
                          }
#line 455 "prog_io_type_defn.m"
                          {
#line 455 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__conv7_V_142_142 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_276_276, parse_tree__prog_io_type_defn__TypeCtorInfo_277_277, parse_tree__prog_io_type_defn__NotOccursExistQVars_44, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
                          }
#line 455 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_142_142 = ((MR_String) parse_tree__prog_io_type_defn__conv7_V_142_142);
#line 455 "prog_io_type_defn.m"
                          {
#line 455 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 455 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_141_141, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_142_142));
#line 455 "prog_io_type_defn.m"
                          }
#line 456 "prog_io_type_defn.m"
                          {
#line 456 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_141_141));
#line 456 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[37])));
#line 456 "prog_io_type_defn.m"
                          }
#line 454 "prog_io_type_defn.m"
                          {
#line 454 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[137])));
#line 454 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_137_137, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_140_140));
#line 454 "prog_io_type_defn.m"
                          }
#line 453 "prog_io_type_defn.m"
                          {
#line 453 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_136_136));
#line 453 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_137_137));
#line 453 "prog_io_type_defn.m"
                          }
#line 452 "prog_io_type_defn.m"
                          {
#line 452 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_130_130, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_131_131));
#line 452 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_130_130, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_135_135));
#line 452 "prog_io_type_defn.m"
                          }
#line 450 "prog_io_type_defn.m"
                          {
#line 450 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Pieces_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_221, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[136])));
#line 450 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_221, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_130_130));
#line 450 "prog_io_type_defn.m"
                          }
#line 459 "prog_io_type_defn.m"
                          {
#line 459 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_155_155 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_274_274, parse_tree__prog_io_type_defn__BodyTerm_3);
                          }
#line 459 "prog_io_type_defn.m"
                          {
#line 459 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_157_157, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_221));
#line 459 "prog_io_type_defn.m"
                          }
#line 459 "prog_io_type_defn.m"
                          {
#line 459 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_157_157));
#line 459 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "prog_io_type_defn.m"
                          }
#line 459 "prog_io_type_defn.m"
                          {
#line 459 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_155_155));
#line 459 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_154_154, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_156_156));
#line 459 "prog_io_type_defn.m"
                          }
#line 459 "prog_io_type_defn.m"
                          {
#line 459 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_154_154));
#line 459 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "prog_io_type_defn.m"
                          }
#line 458 "prog_io_type_defn.m"
                          {
#line 458 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__Spec_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 458 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 458 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_222, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_153_153));
#line 458 "prog_io_type_defn.m"
                          }
#line 460 "prog_io_type_defn.m"
                          {
#line 460 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_222));
#line 460 "prog_io_type_defn.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 460 "prog_io_type_defn.m"
                          }
#line 447 "prog_io_type_defn.m"
                        }
#line 444 "prog_io_type_defn.m"
                      }
#line 444 "prog_io_type_defn.m"
                    else
#line 490 "prog_io_type_defn.m"
                      {
#line 490 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NotExistQArgTypes_51;
#line 466 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeInfo_283_283;
#line 466 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48;
#line 466 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ConstraintArgTypes_49;
#line 466 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_162_162;
#line 466 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_223;
#line 466 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__VarsInCtorArgTypes_224;
#line 470 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn___ExistQArgTypes_50;
#line 472 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 472 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_53_53;

#line 466 "prog_io_type_defn.m"
                        {
#line 466 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[8], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[5], parse_tree__prog_io_type_defn__Constraints_20);
                        }
#line 467 "prog_io_type_defn.m"
                        {
#line 467 "prog_io_type_defn.m"
                          mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_type_defn__ConstraintArgTypeLists_48, &parse_tree__prog_io_type_defn__ConstraintArgTypes_49);
                        }
#line 468 "prog_io_type_defn.m"
                        {
#line 468 "prog_io_type_defn.m"
                          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_type_defn__ConstraintArgTypes_49, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_223);
                        }
#line 11093 "parse_tree.prog_io_type_defn.c"
                        parse_tree__prog_io_type_defn__TypeInfo_283_283 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 469 "prog_io_type_defn.m"
                        {
#line 469 "prog_io_type_defn.m"
                          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_type_defn__TypeInfo_283_283, parse_tree__prog_io_type_defn__VarsInCtorArgTypes0_223, &parse_tree__prog_io_type_defn__VarsInCtorArgTypes_224);
                        }
#line 470 "prog_io_type_defn.m"
                        {
#line 470 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 470 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_162_162, 0) = ((MR_Box) (&parse_tree__prog_io_type_defn_scalar_common_3[2]));
#line 470 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_162_162, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__process_du_ctors_6_p_0_7));
#line 470 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_162_162, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 470 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_162_162, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_19));
#line 470 "prog_io_type_defn.m"
                        }
#line 470 "prog_io_type_defn.m"
                        {
#line 470 "prog_io_type_defn.m"
                          mercury__list__filter_4_p_0(parse_tree__prog_io_type_defn__TypeInfo_283_283, parse_tree__prog_io_type_defn__V_162_162, parse_tree__prog_io_type_defn__VarsInCtorArgTypes_224, &parse_tree__prog_io_type_defn___ExistQArgTypes_50, &parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                        }
#line 472 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__NotExistQArgTypes_51)) == (MR_mktag((MR_Integer) 1)));
#line 472 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 472 "prog_io_type_defn.m"
                          {
#line 472 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 0)));
#line 472 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__NotExistQArgTypes_51, (MR_Integer) 1)));
#line 474 "prog_io_type_defn.m"
                            {
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_286_286 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_287_287 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeInfo_288_288;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_289_289;
#line 474 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__NotExistQArgTypesStr_54;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_165_165;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_166_166;
#line 474 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_167_167;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_170_170;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_171_171;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_172_172;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_175_175;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_176_176;
#line 474 "prog_io_type_defn.m"
                              MR_String parse_tree__prog_io_type_defn__V_177_177;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_203_203;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_204_204;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_205_205;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_206_206;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__V_207_207;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__GenericVarSet_225;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Pieces_226;
#line 474 "prog_io_type_defn.m"
                              MR_Word parse_tree__prog_io_type_defn__Spec_227;
#line 478 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv9_V_167_167;
#line 482 "prog_io_type_defn.m"
                              MR_Box parse_tree__prog_io_type_defn__conv10_V_177_177;

#line 474 "prog_io_type_defn.m"
                              {
#line 474 "prog_io_type_defn.m"
                                mercury__varset__coerce_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_286_286, parse_tree__prog_io_type_defn__TypeCtorInfo_287_287, parse_tree__prog_io_type_defn__VarSet_2, &parse_tree__prog_io_type_defn__GenericVarSet_225);
                              }
#line 475 "prog_io_type_defn.m"
                              {
#line 475 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__NotExistQArgTypesStr_54 = parse_tree__mercury_to_mercury__mercury_vars_to_name_only_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_287_287, parse_tree__prog_io_type_defn__GenericVarSet_225, parse_tree__prog_io_type_defn__NotExistQArgTypes_51);
                              }
#line 11190 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeInfo_288_288 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1];
#line 11192 "parse_tree.prog_io_type_defn.c"
                              parse_tree__prog_io_type_defn__TypeCtorInfo_289_289 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 478 "prog_io_type_defn.m"
                              {
#line 478 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv9_V_167_167 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_288_288, parse_tree__prog_io_type_defn__TypeCtorInfo_289_289, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "type variable")), ((MR_Box) ((MR_String) "type variables")));
                              }
#line 478 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_167_167 = ((MR_String) parse_tree__prog_io_type_defn__conv9_V_167_167);
#line 478 "prog_io_type_defn.m"
                              {
#line 478 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 478 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_166_166, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_167_167));
#line 478 "prog_io_type_defn.m"
                              }
#line 480 "prog_io_type_defn.m"
                              {
#line 480 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 480 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_171_171, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NotExistQArgTypesStr_54));
#line 480 "prog_io_type_defn.m"
                              }
#line 482 "prog_io_type_defn.m"
                              {
#line 482 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__conv10_V_177_177 = parse_tree__error_util__choose_number_3_f_0(parse_tree__prog_io_type_defn__TypeInfo_288_288, parse_tree__prog_io_type_defn__TypeCtorInfo_289_289, parse_tree__prog_io_type_defn__NotExistQArgTypes_51, ((MR_Box) ((MR_String) "which was")), ((MR_Box) ((MR_String) "which were")));
                              }
#line 482 "prog_io_type_defn.m"
                              parse_tree__prog_io_type_defn__V_177_177 = ((MR_String) parse_tree__prog_io_type_defn__conv10_V_177_177);
#line 482 "prog_io_type_defn.m"
                              {
#line 482 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_176_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_176_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 482 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_176_176, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_177_177));
#line 482 "prog_io_type_defn.m"
                              }
#line 483 "prog_io_type_defn.m"
                              {
#line 483 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_175_175, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_176_176));
#line 483 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[47])));
#line 483 "prog_io_type_defn.m"
                              }
#line 481 "prog_io_type_defn.m"
                              {
#line 481 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[138])));
#line 481 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_172_172, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_175_175));
#line 481 "prog_io_type_defn.m"
                              }
#line 480 "prog_io_type_defn.m"
                              {
#line 480 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_171_171));
#line 480 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_170_170, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_172_172));
#line 480 "prog_io_type_defn.m"
                              }
#line 479 "prog_io_type_defn.m"
                              {
#line 479 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_166_166));
#line 479 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_170_170));
#line 479 "prog_io_type_defn.m"
                              }
#line 477 "prog_io_type_defn.m"
                              {
#line 477 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Pieces_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_226, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[136])));
#line 477 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_226, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_165_165));
#line 477 "prog_io_type_defn.m"
                              }
#line 488 "prog_io_type_defn.m"
                              {
#line 488 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_205_205 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_286_286, parse_tree__prog_io_type_defn__BodyTerm_3);
                              }
#line 488 "prog_io_type_defn.m"
                              {
#line 488 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_207_207 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_226));
#line 488 "prog_io_type_defn.m"
                              }
#line 488 "prog_io_type_defn.m"
                              {
#line 488 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_206_206, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_207_207));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_206_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "prog_io_type_defn.m"
                              }
#line 488 "prog_io_type_defn.m"
                              {
#line 488 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_205_205));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_204_204, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_206_206));
#line 488 "prog_io_type_defn.m"
                              }
#line 488 "prog_io_type_defn.m"
                              {
#line 488 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_203_203, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_204_204));
#line 488 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "prog_io_type_defn.m"
                              }
#line 487 "prog_io_type_defn.m"
                              {
#line 487 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__Spec_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 487 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_227, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 487 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_227, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_203_203));
#line 487 "prog_io_type_defn.m"
                              }
#line 489 "prog_io_type_defn.m"
                              {
#line 489 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_227));
#line 489 "prog_io_type_defn.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5));
#line 489 "prog_io_type_defn.m"
                              }
#line 474 "prog_io_type_defn.m"
                            }
#line 472 "prog_io_type_defn.m"
                          }
#line 472 "prog_io_type_defn.m"
                        else
#line 490 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5;
#line 490 "prog_io_type_defn.m"
                      }
#line 461 "prog_io_type_defn.m"
                  }
#line 434 "prog_io_type_defn.m"
              }
#line 493 "prog_io_type_defn.m"
            /* direct tailcall eliminated */
#line 493 "prog_io_type_defn.m"
            {
#line 493 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4 = parse_tree__prog_io_type_defn__Ctors_17;
#line 493 "prog_io_type_defn.m"
              MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_86_86;

#line 493 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0_5 = parse_tree__prog_io_type_defn__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 493 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__HeadVar__4__tmp_copy_4;
#line 493 "prog_io_type_defn.m"
            }
#line 493 "prog_io_type_defn.m"
            continue;
#line 383 "prog_io_type_defn.m"
          }
#line 382 "prog_io_type_defn.m"
      }
#line 382 "prog_io_type_defn.m"
      break;
#line 382 "prog_io_type_defn.m"
    }
#line 379 "prog_io_type_defn.m"
}

#line 353 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_7,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_8,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_9,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeTerm_10,
#line 353 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Terms_11)
#line 353 "prog_io_type_defn.m"
{
#line 357 "prog_io_type_defn.m"
  {
#line 357 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 357 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 357 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeType_14;

#line 359 "prog_io_type_defn.m"
    {
#line 359 "prog_io_type_defn.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_type_defn__TypeTerm_10, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124]), &parse_tree__prog_io_type_defn__MaybeType_14);
    }
#line 374 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 376 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_14;
#line 374 "prog_io_type_defn.m"
    else
#line 361 "prog_io_type_defn.m"
      {
#line 361 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_14, (MR_Integer) 0)));
#line 361 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_16;
#line 361 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Arg_17;
#line 361 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailArgs_18;

#line 362 "prog_io_type_defn.m"
        {
#line 362 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Context_16 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__TypeTerm_10);
        }
#line 364 "prog_io_type_defn.m"
        {
#line 364 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Arg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 364 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeCtorFieldName_9));
#line 364 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_15));
#line 364 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Arg_17, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_16));
#line 364 "prog_io_type_defn.m"
        }
#line 317 "prog_io_type_defn.m"
        if ((parse_tree__prog_io_type_defn__Terms_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "prog_io_type_defn.m"
          {
#line 317 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[4]);
#line 317 "prog_io_type_defn.m"
          }
#line 317 "prog_io_type_defn.m"
        else
#line 319 "prog_io_type_defn.m"
          {
#line 319 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 0)));
#line 319 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Terms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Terms_11, (MR_Integer) 1)));
#line 346 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__NameTerm_36;
#line 346 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeTerm_37;
#line 320 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 320 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 320 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 320 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 320 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 320 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_38_38;

#line 320 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_33)) == (MR_mktag((MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
              {
#line 320 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_33, (MR_Integer) 2)));
#line 320 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
                  {
#line 320 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "::") == 0);
#line 320 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
                      {
#line 320 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
                          {
#line 320 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__NameTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                            if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
                              {
#line 320 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__TypeTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, (MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                                parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "prog_io_type_defn.m"
                              }
#line 320 "prog_io_type_defn.m"
                          }
#line 320 "prog_io_type_defn.m"
                      }
#line 320 "prog_io_type_defn.m"
                  }
#line 320 "prog_io_type_defn.m"
              }
#line 346 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 321 "prog_io_type_defn.m"
              {
#line 321 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 321 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40;

#line 322 "prog_io_type_defn.m"
                {
#line 322 "prog_io_type_defn.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__NameTerm_36, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[133]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40);
                }
#line 327 "prog_io_type_defn.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40)) == (MR_mktag((MR_Integer) 0))))
#line 325 "prog_io_type_defn.m"
                  {
#line 325 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));

#line 326 "prog_io_type_defn.m"
                    {
#line 326 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_41));
#line 326 "prog_io_type_defn.m"
                    }
#line 325 "prog_io_type_defn.m"
                  }
#line 327 "prog_io_type_defn.m"
                else
#line 328 "prog_io_type_defn.m"
                  {
#line 328 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 0)));
#line 328 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__SymNameArgs_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_40, (MR_Integer) 1)));

#line 337 "prog_io_type_defn.m"
                    if ((parse_tree__prog_io_type_defn__SymNameArgs_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "prog_io_type_defn.m"
                      {
#line 338 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__NameCtxt_48;
#line 338 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_49;
#line 338 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_58_58;

#line 339 "prog_io_type_defn.m"
                        {
#line 339 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__NameCtxt_48 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__NameTerm_36);
                        }
#line 340 "prog_io_type_defn.m"
                        {
#line 340 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_42));
#line 340 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_48));
#line 340 "prog_io_type_defn.m"
                        }
#line 340 "prog_io_type_defn.m"
                        {
#line 340 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeCtorFieldName_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_58_58));
#line 340 "prog_io_type_defn.m"
                        }
#line 341 "prog_io_type_defn.m"
                        {
#line 341 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, parse_tree__prog_io_type_defn__MaybeCtorFieldName_49, parse_tree__prog_io_type_defn__TypeTerm_37, parse_tree__prog_io_type_defn__Terms_34);
                        }
#line 338 "prog_io_type_defn.m"
                      }
#line 337 "prog_io_type_defn.m"
                    else
#line 330 "prog_io_type_defn.m"
                      {
#line 330 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Spec_47;
#line 330 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 330 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 330 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 330 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__V_73_73;

#line 335 "prog_io_type_defn.m"
                        {
#line 335 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_77, parse_tree__prog_io_type_defn__Term_33);
                        }
#line 335 "prog_io_type_defn.m"
                        {
#line 335 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 335 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[134])));
#line 335 "prog_io_type_defn.m"
                        }
#line 335 "prog_io_type_defn.m"
                        {
#line 335 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 335 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "prog_io_type_defn.m"
                        }
#line 334 "prog_io_type_defn.m"
                        {
#line 334 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 334 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 334 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_47, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 334 "prog_io_type_defn.m"
                        }
#line 336 "prog_io_type_defn.m"
                        {
#line 336 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_47));
#line 336 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "prog_io_type_defn.m"
                        }
#line 336 "prog_io_type_defn.m"
                        {
#line 336 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeTailArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeTailArgs_18, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_73_73));
#line 336 "prog_io_type_defn.m"
                        }
#line 330 "prog_io_type_defn.m"
                      }
#line 328 "prog_io_type_defn.m"
                  }
#line 321 "prog_io_type_defn.m"
              }
#line 346 "prog_io_type_defn.m"
            else
#line 347 "prog_io_type_defn.m"
              {
#line 349 "prog_io_type_defn.m"
                {
#line 349 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeTailArgs_18 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_7, parse_tree__prog_io_type_defn__VarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_33, parse_tree__prog_io_type_defn__Terms_34);
                }
#line 347 "prog_io_type_defn.m"
              }
#line 319 "prog_io_type_defn.m"
          }
#line 370 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailArgs_18)) == (MR_mktag((MR_Integer) 0))))
#line 369 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeArgs_12 = parse_tree__prog_io_type_defn__MaybeTailArgs_18;
#line 370 "prog_io_type_defn.m"
        else
#line 371 "prog_io_type_defn.m"
          {
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailArgs_18, (MR_Integer) 0)));
#line 371 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_25_25;

#line 372 "prog_io_type_defn.m"
            {
#line 372 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Arg_17));
#line 372 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Args_20));
#line 372 "prog_io_type_defn.m"
            }
#line 372 "prog_io_type_defn.m"
            {
#line 372 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeArgs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeArgs_12, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_25_25));
#line 372 "prog_io_type_defn.m"
            }
#line 371 "prog_io_type_defn.m"
          }
#line 361 "prog_io_type_defn.m"
      }
#line 357 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeArgs_12;
#line 357 "prog_io_type_defn.m"
  }
#line 353 "prog_io_type_defn.m"
}

#line 314 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_1,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_2,
#line 314 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadVar__3_3)
#line 314 "prog_io_type_defn.m"
{
#line 317 "prog_io_type_defn.m"
  {
#line 317 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 317 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadVar__4_4;

#line 317 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "prog_io_type_defn.m"
      {
#line 317 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[4]);
#line 317 "prog_io_type_defn.m"
      }
#line 317 "prog_io_type_defn.m"
    else
#line 319 "prog_io_type_defn.m"
      {
#line 319 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 0)));
#line 319 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadVar__3_3, (MR_Integer) 1)));
#line 346 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__NameTerm_13;
#line 346 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeTerm_14;
#line 320 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 320 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_28_28;
#line 320 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_29_29;
#line 320 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_30_30;
#line 320 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_31_31;
#line 320 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 320 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
          {
#line 320 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 320 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
              {
#line 320 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_28_28, (MR_String) "::") == 0);
#line 320 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
                  {
#line 320 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
                      {
#line 320 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_29_29, (MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                        if (parse_tree__prog_io_type_defn__succeeded)
#line 320 "prog_io_type_defn.m"
                          {
#line 320 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__TypeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 0)));
#line 320 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_30_30, (MR_Integer) 1)));
#line 320 "prog_io_type_defn.m"
                            parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "prog_io_type_defn.m"
                          }
#line 320 "prog_io_type_defn.m"
                      }
#line 320 "prog_io_type_defn.m"
                  }
#line 320 "prog_io_type_defn.m"
              }
#line 320 "prog_io_type_defn.m"
          }
#line 346 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 321 "prog_io_type_defn.m"
          {
#line 321 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 321 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17;

#line 322 "prog_io_type_defn.m"
            {
#line 322 "prog_io_type_defn.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__NameTerm_13, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[133]), &parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17);
            }
#line 327 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17)) == (MR_mktag((MR_Integer) 0))))
#line 325 "prog_io_type_defn.m"
              {
#line 325 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));

#line 326 "prog_io_type_defn.m"
                {
#line 326 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_18));
#line 326 "prog_io_type_defn.m"
                }
#line 325 "prog_io_type_defn.m"
              }
#line 327 "prog_io_type_defn.m"
            else
#line 328 "prog_io_type_defn.m"
              {
#line 328 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 0)));
#line 328 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__SymNameArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeSymNameAndArgs_17, (MR_Integer) 1)));

#line 337 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__SymNameArgs_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "prog_io_type_defn.m"
                  {
#line 338 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__NameCtxt_25;
#line 338 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeCtorFieldName_26;
#line 338 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_35_35;

#line 339 "prog_io_type_defn.m"
                    {
#line 339 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__NameCtxt_25 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__NameTerm_13);
                    }
#line 340 "prog_io_type_defn.m"
                    {
#line 340 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__SymName_19));
#line 340 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__NameCtxt_25));
#line 340 "prog_io_type_defn.m"
                    }
#line 340 "prog_io_type_defn.m"
                    {
#line 340 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__MaybeCtorFieldName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_35_35));
#line 340 "prog_io_type_defn.m"
                    }
#line 341 "prog_io_type_defn.m"
                    {
#line 341 "prog_io_type_defn.m"
                      return parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, parse_tree__prog_io_type_defn__MaybeCtorFieldName_26, parse_tree__prog_io_type_defn__TypeTerm_14, parse_tree__prog_io_type_defn__Terms_11);
                    }
#line 338 "prog_io_type_defn.m"
                  }
#line 337 "prog_io_type_defn.m"
                else
#line 330 "prog_io_type_defn.m"
                  {
#line 330 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_24;
#line 330 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_43_43;
#line 330 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 330 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_45_45;
#line 330 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_50_50;

#line 335 "prog_io_type_defn.m"
                    {
#line 335 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_45_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_54_54, parse_tree__prog_io_type_defn__Term_10);
                    }
#line 335 "prog_io_type_defn.m"
                    {
#line 335 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_45_45));
#line 335 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[134])));
#line 335 "prog_io_type_defn.m"
                    }
#line 335 "prog_io_type_defn.m"
                    {
#line 335 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_44_44));
#line 335 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "prog_io_type_defn.m"
                    }
#line 334 "prog_io_type_defn.m"
                    {
#line 334 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 334 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 334 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_43_43));
#line 334 "prog_io_type_defn.m"
                    }
#line 336 "prog_io_type_defn.m"
                    {
#line 336 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_24));
#line 336 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "prog_io_type_defn.m"
                    }
#line 336 "prog_io_type_defn.m"
                    {
#line 336 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadVar__4_4, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 336 "prog_io_type_defn.m"
                    }
#line 330 "prog_io_type_defn.m"
                  }
#line 328 "prog_io_type_defn.m"
              }
#line 321 "prog_io_type_defn.m"
          }
#line 346 "prog_io_type_defn.m"
        else
#line 347 "prog_io_type_defn.m"
          {
#line 349 "prog_io_type_defn.m"
            {
#line 349 "prog_io_type_defn.m"
              return parse_tree__prog_io_type_defn__HeadVar__4_4 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_2_5_f_0(parse_tree__prog_io_type_defn__ModuleName_1, parse_tree__prog_io_type_defn__VarSet_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Term_10, parse_tree__prog_io_type_defn__Terms_11);
            }
#line 347 "prog_io_type_defn.m"
          }
#line 319 "prog_io_type_defn.m"
      }
#line 317 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__HeadVar__4_4;
#line 317 "prog_io_type_defn.m"
  }
#line 314 "prog_io_type_defn.m"
}

#line 255 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ExistQVars_8,
#line 255 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_9)
#line 255 "prog_io_type_defn.m"
{
#line 258 "prog_io_type_defn.m"
  {
#line 258 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 258 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 258 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 258 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 310 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__ExistentialConstraints_48;
#line 310 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 305 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 305 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_51_51;
#line 305 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 305 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 305 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_55_55;
#line 305 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_49_49;

#line 305 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 305 "prog_io_type_defn.m"
      {
#line 305 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 0)));
#line 305 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 1)));
#line 305 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_9, (MR_Integer) 2)));
#line 305 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_50_50)) == (MR_mktag((MR_Integer) 0)));
#line 305 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 305 "prog_io_type_defn.m"
          {
#line 305 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_50_50, (MR_Integer) 0)));
#line 305 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_51_51, (MR_String) "=>") == 0);
#line 305 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 305 "prog_io_type_defn.m"
              {
#line 306 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 306 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 306 "prog_io_type_defn.m"
                  {
#line 306 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 0)));
#line 306 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, (MR_Integer) 1)));
#line 306 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 306 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 306 "prog_io_type_defn.m"
                      {
#line 306 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__ExistentialConstraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 0)));
#line 306 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_54_54, (MR_Integer) 1)));
#line 306 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "prog_io_type_defn.m"
                      }
#line 306 "prog_io_type_defn.m"
                  }
#line 305 "prog_io_type_defn.m"
              }
#line 305 "prog_io_type_defn.m"
          }
#line 305 "prog_io_type_defn.m"
      }
#line 310 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 308 "prog_io_type_defn.m"
      {
#line 308 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__STATE_VARIABLE_PredTypeTerm_17_53;
#line 308 "prog_io_type_defn.m"
        {
#line 308 "prog_io_type_defn.m"
          parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistentialConstraints_48, &parse_tree__prog_io_type_defn__MaybeConstraints_12);
        }
#line 308 "prog_io_type_defn.m"
      }
#line 310 "prog_io_type_defn.m"
    else
#line 311 "prog_io_type_defn.m"
      {
#line 311 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__MaybeConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_2[3]);
#line 311 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11 = parse_tree__prog_io_type_defn__Term_9;
#line 311 "prog_io_type_defn.m"
      }
#line 264 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12)) == (MR_mktag((MR_Integer) 0))))
#line 263 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstraints_12;
#line 264 "prog_io_type_defn.m"
    else
#line 265 "prog_io_type_defn.m"
      {
#line 265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_40_40;
#line 265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstraints_12, (MR_Integer) 0)));
#line 265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MainTerm_17;
#line 265 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19;
#line 274 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_25_25;
#line 270 "prog_io_type_defn.m"
        MR_String parse_tree__prog_io_type_defn__V_26_26;
#line 270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_27_27;
#line 270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_28_28;
#line 270 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___Context_16;

#line 270 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 270 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 270 "prog_io_type_defn.m"
          {
#line 270 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 0)));
#line 270 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 1)));
#line 270 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11, (MR_Integer) 2)));
#line 270 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 270 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 270 "prog_io_type_defn.m"
              {
#line 270 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_25_25, (MR_Integer) 0)));
#line 270 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_26_26, (MR_String) "{}") == 0);
#line 270 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 270 "prog_io_type_defn.m"
                  {
#line 271 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 271 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 271 "prog_io_type_defn.m"
                      {
#line 271 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__InsideBracesTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 0)));
#line 271 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_27_27, (MR_Integer) 1)));
#line 271 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io_type_defn.m"
                      }
#line 270 "prog_io_type_defn.m"
                  }
#line 270 "prog_io_type_defn.m"
              }
#line 270 "prog_io_type_defn.m"
          }
#line 274 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 273 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__InsideBracesTerm_15;
#line 274 "prog_io_type_defn.m"
        else
#line 275 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MainTerm_17 = parse_tree__prog_io_type_defn__BeforeConstraintsTerm_11;
#line 12251 "parse_tree.prog_io_type_defn.c"
        parse_tree__prog_io_type_defn__TypeCtorInfo_40_40 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 278 "prog_io_type_defn.m"
        {
#line 278 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__MainTerm_17, parse_tree__prog_io_type_defn__VarSet_7, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[131]), &parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19);
        }
#line 283 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19)) == (MR_mktag((MR_Integer) 0))))
#line 281 "prog_io_type_defn.m"
          {
#line 281 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));

#line 282 "prog_io_type_defn.m"
            {
#line 282 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_34));
#line 282 "prog_io_type_defn.m"
            }
#line 281 "prog_io_type_defn.m"
          }
#line 283 "prog_io_type_defn.m"
        else
#line 284 "prog_io_type_defn.m"
          {
#line 284 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 0)));
#line 284 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeFunctorAndArgTerms_19, (MR_Integer) 1)));
#line 284 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;

#line 285 "prog_io_type_defn.m"
            {
#line 285 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructorArgs_22 = parse_tree__prog_io_type_defn__convert_constructor_arg_list_3_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ArgTerms_21);
            }
#line 290 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22)) == (MR_mktag((MR_Integer) 0))))
#line 289 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeConstructorArgs_22;
#line 290 "prog_io_type_defn.m"
            else
#line 291 "prog_io_type_defn.m"
              {
#line 291 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ConstructorArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructorArgs_22, (MR_Integer) 0)));
#line 291 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Ctor_24;
#line 291 "prog_io_type_defn.m"
                MR_Integer parse_tree__prog_io_type_defn__V_32_32;
#line 291 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_33_33;

#line 293 "prog_io_type_defn.m"
                {
#line 293 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_32_32 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, parse_tree__prog_io_type_defn__ConstructorArgs_23);
                }
#line 293 "prog_io_type_defn.m"
                {
#line 293 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_33_33 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_40_40, parse_tree__prog_io_type_defn__MainTerm_17);
                }
#line 292 "prog_io_type_defn.m"
                {
#line 292 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Ctor_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 292 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ExistQVars_8));
#line 292 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Constraints_14));
#line 292 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__Functor_20));
#line 292 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__ConstructorArgs_23));
#line 292 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__V_32_32));
#line 292 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Ctor_24, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__V_33_33));
#line 292 "prog_io_type_defn.m"
                }
#line 294 "prog_io_type_defn.m"
                {
#line 294 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeConstructor_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 294 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeConstructor_10, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctor_24));
#line 294 "prog_io_type_defn.m"
                }
#line 291 "prog_io_type_defn.m"
              }
#line 284 "prog_io_type_defn.m"
          }
#line 265 "prog_io_type_defn.m"
      }
#line 258 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeConstructor_10;
#line 258 "prog_io_type_defn.m"
  }
#line 255 "prog_io_type_defn.m"
}

#line 238 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0_1(
#line 238 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 238 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 238 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 238 "prog_io_type_defn.m"
{
#line 238 "prog_io_type_defn.m"
  {
#line 238 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 238 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv0_HeadVar__2_47;

#line 238 "prog_io_type_defn.m"
    {
#line 238 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_constructor__238__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv0_HeadVar__2_47);
    }
#line 238 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv0_HeadVar__2_47));
#line 238 "prog_io_type_defn.m"
  }
#line 238 "prog_io_type_defn.m"
}

#line 202 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_6,
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_7,
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Head_8,
#line 202 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Tail_9,
#line 202 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeConstructors_10)
#line 202 "prog_io_type_defn.m"
{
#line 205 "prog_io_type_defn.m"
  {
#line 205 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Head_8)) == (MR_mktag((MR_Integer) 0)));
#line 205 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeHeadConstructor_11;
#line 249 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__VarsTerm_36;
#line 249 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__SubTerm_37;
#line 236 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_44_44;
#line 236 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_45_45;
#line 236 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_46_46;
#line 236 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 236 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 236 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_38_38;

#line 236 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 236 "prog_io_type_defn.m"
      {
#line 236 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_8, (MR_Integer) 0)));
#line 236 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_8, (MR_Integer) 1)));
#line 236 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Head_8, (MR_Integer) 2)));
#line 236 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 236 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 236 "prog_io_type_defn.m"
          {
#line 236 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_44_44, (MR_Integer) 0)));
#line 236 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_45_45, (MR_String) "some") == 0);
#line 236 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 236 "prog_io_type_defn.m"
              {
#line 236 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 236 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 236 "prog_io_type_defn.m"
                  {
#line 236 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__VarsTerm_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, (MR_Integer) 0)));
#line 236 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_46_46, (MR_Integer) 1)));
#line 236 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 236 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 236 "prog_io_type_defn.m"
                      {
#line 236 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__SubTerm_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, (MR_Integer) 0)));
#line 236 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, (MR_Integer) 1)));
#line 236 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_type_defn.m"
                      }
#line 236 "prog_io_type_defn.m"
                  }
#line 236 "prog_io_type_defn.m"
              }
#line 236 "prog_io_type_defn.m"
          }
#line 236 "prog_io_type_defn.m"
      }
#line 249 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 241 "prog_io_type_defn.m"
      {
#line 241 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__ExistQVars_39;

#line 237 "prog_io_type_defn.m"
        {
#line 237 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__VarsTerm_36, &parse_tree__prog_io_type_defn__ExistQVars_39);
        }
#line 241 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 238 "prog_io_type_defn.m"
          {
#line 238 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ExistQTVars_40;

#line 238 "prog_io_type_defn.m"
            {
#line 238 "prog_io_type_defn.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[2], parse_tree__prog_io_type_defn__ExistQVars_39, &parse_tree__prog_io_type_defn__ExistQTVars_40);
            }
#line 239 "prog_io_type_defn.m"
            {
#line 239 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeHeadConstructor_11 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__ExistQTVars_40, parse_tree__prog_io_type_defn__SubTerm_37);
            }
#line 238 "prog_io_type_defn.m"
          }
#line 241 "prog_io_type_defn.m"
        else
#line 242 "prog_io_type_defn.m"
          {
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_52_79 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 242 "prog_io_type_defn.m"
            MR_String parse_tree__prog_io_type_defn__TermStr_41;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Pieces_42;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Spec_43;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 242 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_69_69;

#line 242 "prog_io_type_defn.m"
            {
#line 242 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TermStr_41 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_79, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__Head_8);
            }
#line 244 "prog_io_type_defn.m"
            {
#line 244 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 244 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TermStr_41));
#line 244 "prog_io_type_defn.m"
            }
#line 244 "prog_io_type_defn.m"
            {
#line 244 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 244 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 244 "prog_io_type_defn.m"
            }
#line 243 "prog_io_type_defn.m"
            {
#line 243 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[129])));
#line 243 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_42, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 243 "prog_io_type_defn.m"
            }
#line 246 "prog_io_type_defn.m"
            {
#line 246 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_52_79, parse_tree__prog_io_type_defn__VarsTerm_36);
            }
#line 246 "prog_io_type_defn.m"
            {
#line 246 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 246 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_42));
#line 246 "prog_io_type_defn.m"
            }
#line 246 "prog_io_type_defn.m"
            {
#line 246 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 246 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_type_defn.m"
            }
#line 246 "prog_io_type_defn.m"
            {
#line 246 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 246 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 246 "prog_io_type_defn.m"
            }
#line 246 "prog_io_type_defn.m"
            {
#line 246 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 246 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "prog_io_type_defn.m"
            }
#line 245 "prog_io_type_defn.m"
            {
#line 245 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 245 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 245 "prog_io_type_defn.m"
            }
#line 247 "prog_io_type_defn.m"
            {
#line 247 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_43));
#line 247 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "prog_io_type_defn.m"
            }
#line 247 "prog_io_type_defn.m"
            {
#line 247 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__MaybeHeadConstructor_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 247 "prog_io_type_defn.m"
            }
#line 242 "prog_io_type_defn.m"
          }
#line 241 "prog_io_type_defn.m"
      }
#line 249 "prog_io_type_defn.m"
    else
#line 250 "prog_io_type_defn.m"
      {
#line 251 "prog_io_type_defn.m"
        {
#line 251 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeHeadConstructor_11 = parse_tree__prog_io_type_defn__parse_constructor_2_4_f_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_type_defn__Head_8);
        }
#line 250 "prog_io_type_defn.m"
      }
#line 216 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__Tail_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "prog_io_type_defn.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 0))))
#line 214 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeConstructors_10 = (MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11;
#line 212 "prog_io_type_defn.m"
      else
#line 210 "prog_io_type_defn.m"
        {
#line 210 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__HeadConstructor_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
#line 210 "prog_io_type_defn.m"
          MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 211 "prog_io_type_defn.m"
          {
#line 211 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_12));
#line 211 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 211 "prog_io_type_defn.m"
          }
#line 211 "prog_io_type_defn.m"
          {
#line 211 "prog_io_type_defn.m"
            MR_Word base;
#line 211 "prog_io_type_defn.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "prog_io_type_defn.m"
            *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 211 "prog_io_type_defn.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_21_21));
#line 211 "prog_io_type_defn.m"
          }
#line 210 "prog_io_type_defn.m"
        }
#line 216 "prog_io_type_defn.m"
    else
#line 217 "prog_io_type_defn.m"
      {
#line 217 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Tail_9, (MR_Integer) 0)));
#line 217 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailTail_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Tail_9, (MR_Integer) 1)));
#line 217 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeTailConstructors_16;
#line 226 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TailConstructors_17;
#line 226 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadConstructor_24;

#line 218 "prog_io_type_defn.m"
        {
#line 218 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(parse_tree__prog_io_type_defn__ModuleName_6, parse_tree__prog_io_type_defn__VarSet_7, parse_tree__prog_io_type_defn__HeadTail_14, parse_tree__prog_io_type_defn__TailTail_15, &parse_tree__prog_io_type_defn__MaybeTailConstructors_16);
        }
#line 221 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeHeadConstructor_11)) == (MR_mktag((MR_Integer) 1)));
#line 221 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 221 "prog_io_type_defn.m"
          {
#line 221 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__HeadConstructor_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeHeadConstructor_11, (MR_Integer) 0)));
#line 222 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTailConstructors_16)) == (MR_mktag((MR_Integer) 1)));
#line 222 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 222 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__TailConstructors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTailConstructors_16, (MR_Integer) 0)));
#line 221 "prog_io_type_defn.m"
          }
#line 226 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 224 "prog_io_type_defn.m"
          {
#line 224 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_18_18;

#line 225 "prog_io_type_defn.m"
            {
#line 225 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_18_18 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ((MR_Box) (parse_tree__prog_io_type_defn__HeadConstructor_24)), parse_tree__prog_io_type_defn__TailConstructors_17);
            }
#line 225 "prog_io_type_defn.m"
            {
#line 225 "prog_io_type_defn.m"
              MR_Word base;
#line 225 "prog_io_type_defn.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 225 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 225 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_18_18));
#line 225 "prog_io_type_defn.m"
            }
#line 224 "prog_io_type_defn.m"
          }
#line 226 "prog_io_type_defn.m"
        else
#line 228 "prog_io_type_defn.m"
          {
#line 228 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 228 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 228 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_23;

#line 227 "prog_io_type_defn.m"
            {
#line 227 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_19_19 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, parse_tree__prog_io_type_defn__MaybeHeadConstructor_11);
            }
#line 228 "prog_io_type_defn.m"
            {
#line 228 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_20_20 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeTailConstructors_16);
            }
#line 227 "prog_io_type_defn.m"
            {
#line 227 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_type_defn__V_19_19, parse_tree__prog_io_type_defn__V_20_20);
            }
#line 229 "prog_io_type_defn.m"
            {
#line 229 "prog_io_type_defn.m"
              MR_Word base;
#line 229 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 229 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeConstructors_10 = base;
#line 229 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_23));
#line 229 "prog_io_type_defn.m"
            }
#line 228 "prog_io_type_defn.m"
          }
#line 217 "prog_io_type_defn.m"
      }
#line 205 "prog_io_type_defn.m"
  }
#line 202 "prog_io_type_defn.m"
}

#line 192 "prog_io_type_defn.m"
static MR_Word MR_CALL 
parse_tree__prog_io_type_defn__parse_constructors_3_f_0(
#line 192 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 192 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 192 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_7)
#line 192 "prog_io_type_defn.m"
{
#line 195 "prog_io_type_defn.m"
  {
#line 195 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded;
#line 195 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__MaybeConstructors_8;
#line 195 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__HeadBodyTerm_9;
#line 195 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__TailBodyTerms_10;
#line 195 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;

#line 196 "prog_io_type_defn.m"
    {
#line 196 "prog_io_type_defn.m"
      parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__Term_7, &parse_tree__prog_io_type_defn__V_11_11);
    }
#line 196 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__HeadBodyTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 196 "prog_io_type_defn.m"
    parse_tree__prog_io_type_defn__TailBodyTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 1)));
#line 197 "prog_io_type_defn.m"
    {
#line 197 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_constructors_loop_5_p_0(parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadBodyTerm_9, parse_tree__prog_io_type_defn__TailBodyTerms_10, &parse_tree__prog_io_type_defn__MaybeConstructors_8);
    }
#line 195 "prog_io_type_defn.m"
    return parse_tree__prog_io_type_defn__MaybeConstructors_8;
#line 195 "prog_io_type_defn.m"
  }
#line 192 "prog_io_type_defn.m"
}

#line 173 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(
#line 173 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_4,
#line 173 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__CtorsTerm_5,
#line 173 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereTerm_6)
#line 173 "prog_io_type_defn.m"
{
#line 183 "prog_io_type_defn.m"
  {
#line 183 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__CtorsTerm0_9;
#line 183 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_10;
#line 178 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__Args_7;
#line 178 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_11_11;
#line 178 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_12_12;
#line 178 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_13_13;
#line 178 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_14_14;
#line 178 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn___Context_8;

#line 178 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 178 "prog_io_type_defn.m"
      {
#line 178 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 0)));
#line 178 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 1)));
#line 178 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_4, (MR_Integer) 2)));
#line 178 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 178 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 178 "prog_io_type_defn.m"
          {
#line 178 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_11_11, (MR_Integer) 0)));
#line 178 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_12_12, (MR_String) "where") == 0);
#line 178 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 178 "prog_io_type_defn.m"
              {
#line 179 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Args_7)) == (MR_mktag((MR_Integer) 1)));
#line 179 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 179 "prog_io_type_defn.m"
                  {
#line 179 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__CtorsTerm0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 0)));
#line 179 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Args_7, (MR_Integer) 1)));
#line 179 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 179 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 179 "prog_io_type_defn.m"
                      {
#line 179 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 0)));
#line 179 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_13_13, (MR_Integer) 1)));
#line 179 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 179 "prog_io_type_defn.m"
                      }
#line 179 "prog_io_type_defn.m"
                  }
#line 178 "prog_io_type_defn.m"
              }
#line 178 "prog_io_type_defn.m"
          }
#line 178 "prog_io_type_defn.m"
      }
#line 183 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 181 "prog_io_type_defn.m"
      {
#line 181 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__CtorsTerm0_9;
#line 182 "prog_io_type_defn.m"
        {
#line 182 "prog_io_type_defn.m"
          MR_Word base;
#line 182 "prog_io_type_defn.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = base;
#line 182 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_10));
#line 182 "prog_io_type_defn.m"
        }
#line 181 "prog_io_type_defn.m"
      }
#line 183 "prog_io_type_defn.m"
    else
#line 184 "prog_io_type_defn.m"
      {
#line 184 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__CtorsTerm_5 = parse_tree__prog_io_type_defn__Term_4;
#line 185 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereTerm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 184 "prog_io_type_defn.m"
      }
#line 183 "prog_io_type_defn.m"
  }
#line 173 "prog_io_type_defn.m"
}

#line 108 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_9,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_10,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_11,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__BodyTerm_12,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes0_13,
#line 108 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_14,
#line 108 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_15,
#line 108 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_16)
#line 108 "prog_io_type_defn.m"
{
#line 13001 "parse_tree.prog_io_type_defn.c"
  {
#line 13003 "parse_tree.prog_io_type_defn.c"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Attributes0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_88_88;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_89_89;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_87;
#line 1336 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_86_86;

#line 1336 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 1336 "prog_io_type_defn.m"
      {
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 0)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__STATE_VARIABLE_Attributes_9_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Attributes0_13, (MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, (MR_Integer) 0)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_88_88, (MR_Integer) 1)));
#line 1336 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "prog_io_type_defn.m"
      }
#line 13030 "parse_tree.prog_io_type_defn.c"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 13032 "parse_tree.prog_io_type_defn.c"
      {
#line 13034 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__Spec_20;
#line 13036 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 13038 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 13040 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 13042 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__V_69_69;

#line 119 "prog_io_type_defn.m"
        {
#line 119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_64_64 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_type_defn__HeadTerm_11);
        }
#line 119 "prog_io_type_defn.m"
        {
#line 119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[128])));
#line 119 "prog_io_type_defn.m"
        }
#line 119 "prog_io_type_defn.m"
        {
#line 119 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 119 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "prog_io_type_defn.m"
        }
#line 118 "prog_io_type_defn.m"
        {
#line 118 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 118 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 118 "prog_io_type_defn.m"
        }
#line 120 "prog_io_type_defn.m"
        {
#line 120 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_20));
#line 120 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "prog_io_type_defn.m"
        }
#line 120 "prog_io_type_defn.m"
        {
#line 120 "prog_io_type_defn.m"
          MR_Word base;
#line 120 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 120 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 120 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_69_69));
#line 120 "prog_io_type_defn.m"
        }
#line 13104 "parse_tree.prog_io_type_defn.c"
      }
#line 13106 "parse_tree.prog_io_type_defn.c"
    else
#line 13108 "parse_tree.prog_io_type_defn.c"
      {
#line 13110 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21;
#line 13112 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__CtorsTerm_22;
#line 13114 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhereTerm_23;
#line 13116 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_24;
#line 13118 "parse_tree.prog_io_type_defn.c"
        MR_Word parse_tree__prog_io_type_defn__MaybeWhere_25;
#line 165 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Name_26;
#line 165 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Params_27;
#line 165 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__OneOrMoreCtors_28;
#line 165 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeUserEqComp_30;
#line 165 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__MaybeDirectArgIs_31;
#line 137 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn___NoSolverTypeDetails_29;

#line 123 "prog_io_type_defn.m"
        {
#line 123 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__HeadTerm_11, &parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21);
        }
#line 125 "prog_io_type_defn.m"
        {
#line 125 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__du_type_rhs_ctors_and_where_terms_3_p_0(parse_tree__prog_io_type_defn__BodyTerm_12, &parse_tree__prog_io_type_defn__CtorsTerm_22, &parse_tree__prog_io_type_defn__MaybeWhereTerm_23);
        }
#line 126 "prog_io_type_defn.m"
        {
#line 126 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_24 = parse_tree__prog_io_type_defn__parse_constructors_3_f_0(parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__CtorsTerm_22);
        }
#line 128 "prog_io_type_defn.m"
        {
#line 128 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__MaybeWhere_25 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0((MR_Integer) 0, parse_tree__prog_io_type_defn__ModuleName_9, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__MaybeWhereTerm_23);
        }
#line 135 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 135 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 135 "prog_io_type_defn.m"
          {
#line 135 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21, (MR_Integer) 0)));
#line 135 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__Params_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21, (MR_Integer) 1)));
#line 136 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_24)) == (MR_mktag((MR_Integer) 1)));
#line 136 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 136 "prog_io_type_defn.m"
              {
#line 136 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__OneOrMoreCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_24, (MR_Integer) 0)));
#line 137 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeWhere_25)) == (MR_mktag((MR_Integer) 1)));
#line 137 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 137 "prog_io_type_defn.m"
                  {
#line 137 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn___NoSolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_25, (MR_Integer) 0)));
#line 137 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_25, (MR_Integer) 1)));
#line 137 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__MaybeDirectArgIs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeWhere_25, (MR_Integer) 2)));
#line 137 "prog_io_type_defn.m"
                  }
#line 136 "prog_io_type_defn.m"
              }
#line 135 "prog_io_type_defn.m"
          }
#line 165 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 140 "prog_io_type_defn.m"
          {
#line 140 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__HeadCtor_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__OneOrMoreCtors_28, (MR_Integer) 0)));
#line 140 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TailCtors_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__OneOrMoreCtors_28, (MR_Integer) 1)));
#line 140 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Ctors_34;
#line 140 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__CtorsSpecs_35;
#line 140 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ErrorSpecs_37;

#line 141 "prog_io_type_defn.m"
            {
#line 141 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Ctors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 141 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Ctors_34, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadCtor_32));
#line 141 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Ctors_34, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__TailCtors_33));
#line 141 "prog_io_type_defn.m"
            }
#line 142 "prog_io_type_defn.m"
            {
#line 142 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__process_du_ctors_6_p_0(parse_tree__prog_io_type_defn__Params_27, parse_tree__prog_io_type_defn__VarSet_10, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__Ctors_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__CtorsSpecs_35);
            }
#line 147 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__MaybeDirectArgIs_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__ErrorSpecs_37 = parse_tree__prog_io_type_defn__CtorsSpecs_35;
#line 147 "prog_io_type_defn.m"
            else
#line 144 "prog_io_type_defn.m"
              {
#line 144 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__DirectArgCtors_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeDirectArgIs_31, (MR_Integer) 0)));

#line 145 "prog_io_type_defn.m"
                {
#line 145 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__check_direct_arg_ctors_5_p_0(parse_tree__prog_io_type_defn__Ctors_34, parse_tree__prog_io_type_defn__DirectArgCtors_36, parse_tree__prog_io_type_defn__BodyTerm_12, parse_tree__prog_io_type_defn__CtorsSpecs_35, &parse_tree__prog_io_type_defn__ErrorSpecs_37);
                }
#line 144 "prog_io_type_defn.m"
              }
#line 161 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__ErrorSpecs_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "prog_io_type_defn.m"
              {
#line 152 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeVarSet_38;
#line 152 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__TypeDefn_39;
#line 152 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_40;
#line 152 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Item_41;
#line 152 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__MaybeItem0_42;

#line 153 "prog_io_type_defn.m"
                {
#line 153 "prog_io_type_defn.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_10, &parse_tree__prog_io_type_defn__TypeVarSet_38);
                }
#line 154 "prog_io_type_defn.m"
                {
#line 154 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__TypeDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Ctors_34));
#line 154 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeUserEqComp_30));
#line 154 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__MaybeDirectArgIs_31));
#line 154 "prog_io_type_defn.m"
                }
#line 156 "prog_io_type_defn.m"
                {
#line 156 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__ItemTypeDefn_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_26));
#line 156 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_27));
#line 156 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_39));
#line 156 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_38));
#line 156 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_14));
#line 156 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_40, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_15));
#line 156 "prog_io_type_defn.m"
                }
#line 158 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__Item_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_40);
#line 159 "prog_io_type_defn.m"
                {
#line 159 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__MaybeItem0_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 159 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_41));
#line 159 "prog_io_type_defn.m"
                }
#line 160 "prog_io_type_defn.m"
                {
#line 160 "prog_io_type_defn.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_42, parse_tree__prog_io_type_defn__Attributes0_13, parse_tree__prog_io_type_defn__MaybeItem_16);
#line 160 "prog_io_type_defn.m"
                  return;
                }
#line 152 "prog_io_type_defn.m"
              }
#line 161 "prog_io_type_defn.m"
            else
#line 163 "prog_io_type_defn.m"
              {
#line 163 "prog_io_type_defn.m"
                MR_Word base;
#line 163 "prog_io_type_defn.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 163 "prog_io_type_defn.m"
                *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 163 "prog_io_type_defn.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__ErrorSpecs_37));
#line 163 "prog_io_type_defn.m"
              }
#line 140 "prog_io_type_defn.m"
          }
#line 165 "prog_io_type_defn.m"
        else
#line 168 "prog_io_type_defn.m"
          {
#line 168 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 168 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Specs_45;
#line 168 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_48_48;
#line 168 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_49_49;
#line 168 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 168 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__V_51_51;

#line 166 "prog_io_type_defn.m"
            {
#line 166 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_48_48 = parse_tree__prog_io_util__get_any_errors2_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[2], parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_21);
            }
#line 167 "prog_io_type_defn.m"
            {
#line 167 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[3], parse_tree__prog_io_type_defn__MaybeOneOrMoreCtors_24);
            }
#line 168 "prog_io_type_defn.m"
            {
#line 168 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_51_51 = parse_tree__prog_io_util__get_any_errors3_1_f_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[4], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[5], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[7], parse_tree__prog_io_type_defn__MaybeWhere_25);
            }
#line 167 "prog_io_type_defn.m"
            {
#line 167 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__V_49_49 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_75_75, parse_tree__prog_io_type_defn__V_50_50, parse_tree__prog_io_type_defn__V_51_51);
            }
#line 166 "prog_io_type_defn.m"
            {
#line 166 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Specs_45 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_75_75, parse_tree__prog_io_type_defn__V_48_48, parse_tree__prog_io_type_defn__V_49_49);
            }
#line 169 "prog_io_type_defn.m"
            {
#line 169 "prog_io_type_defn.m"
              MR_Word base;
#line 169 "prog_io_type_defn.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 169 "prog_io_type_defn.m"
              *parse_tree__prog_io_type_defn__MaybeItem_16 = base;
#line 169 "prog_io_type_defn.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_45));
#line 169 "prog_io_type_defn.m"
            }
#line 168 "prog_io_type_defn.m"
          }
#line 13378 "parse_tree.prog_io_type_defn.c"
      }
#line 13380 "parse_tree.prog_io_type_defn.c"
  }
#line 108 "prog_io_type_defn.m"
}

#line 48 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_decl_where_part_if_present_6_p_0(
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__IsSolverType_7,
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 48 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Term_10,
#line 48 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__BeforeWhereTerm_11,
#line 48 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeWhereDetails_12)
#line 48 "prog_io_type_defn.m"
{
#line 796 "prog_io_type_defn.m"
  {
#line 796 "prog_io_type_defn.m"
    MR_bool parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__Term_10)) == (MR_mktag((MR_Integer) 0)));
#line 796 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 796 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__WhereTerm_14;
#line 790 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_16_16;
#line 790 "prog_io_type_defn.m"
    MR_String parse_tree__prog_io_type_defn__V_17_17;
#line 790 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_18_18;
#line 790 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_19_19;
#line 790 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 790 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__V_15_15;

#line 790 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 790 "prog_io_type_defn.m"
      {
#line 790 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 0)));
#line 790 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 1)));
#line 790 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Term_10, (MR_Integer) 2)));
#line 790 "prog_io_type_defn.m"
        parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 790 "prog_io_type_defn.m"
        if (parse_tree__prog_io_type_defn__succeeded)
#line 790 "prog_io_type_defn.m"
          {
#line 790 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_16_16, (MR_Integer) 0)));
#line 790 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__succeeded = (strcmp(parse_tree__prog_io_type_defn__V_17_17, (MR_String) "where") == 0);
#line 790 "prog_io_type_defn.m"
            if (parse_tree__prog_io_type_defn__succeeded)
#line 790 "prog_io_type_defn.m"
              {
#line 791 "prog_io_type_defn.m"
                parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 791 "prog_io_type_defn.m"
                if (parse_tree__prog_io_type_defn__succeeded)
#line 791 "prog_io_type_defn.m"
                  {
#line 791 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 0)));
#line 791 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_18_18, (MR_Integer) 1)));
#line 791 "prog_io_type_defn.m"
                    parse_tree__prog_io_type_defn__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 791 "prog_io_type_defn.m"
                    if (parse_tree__prog_io_type_defn__succeeded)
#line 791 "prog_io_type_defn.m"
                      {
#line 791 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__WhereTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 0)));
#line 791 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_19_19, (MR_Integer) 1)));
#line 791 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__succeeded = (parse_tree__prog_io_type_defn__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "prog_io_type_defn.m"
                      }
#line 791 "prog_io_type_defn.m"
                  }
#line 790 "prog_io_type_defn.m"
              }
#line 790 "prog_io_type_defn.m"
          }
#line 790 "prog_io_type_defn.m"
      }
#line 796 "prog_io_type_defn.m"
    if (parse_tree__prog_io_type_defn__succeeded)
#line 793 "prog_io_type_defn.m"
      {
#line 793 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_21_21;

#line 793 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__BeforeWhereTermPrime_13;
#line 795 "prog_io_type_defn.m"
        {
#line 795 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 795 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__WhereTerm_14));
#line 795 "prog_io_type_defn.m"
        }
#line 794 "prog_io_type_defn.m"
        {
#line 794 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = parse_tree__prog_io_type_defn__parse_type_decl_where_term_4_f_0(parse_tree__prog_io_type_defn__IsSolverType_7, parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__V_21_21);
        }
#line 793 "prog_io_type_defn.m"
      }
#line 796 "prog_io_type_defn.m"
    else
#line 797 "prog_io_type_defn.m"
      {
#line 797 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__BeforeWhereTerm_11 = parse_tree__prog_io_type_defn__Term_10;
#line 798 "prog_io_type_defn.m"
        *parse_tree__prog_io_type_defn__MaybeWhereDetails_12 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_4[1]);
#line 797 "prog_io_type_defn.m"
      }
#line 796 "prog_io_type_defn.m"
  }
#line 48 "prog_io_type_defn.m"
}

#line 1316 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_5(
#line 1316 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__closure_arg,
#line 1316 "prog_io_type_defn.m"
  MR_Box parse_tree__prog_io_type_defn__wrapper_arg_1,
#line 1316 "prog_io_type_defn.m"
  MR_Box * parse_tree__prog_io_type_defn__wrapper_arg_2)
#line 1316 "prog_io_type_defn.m"
{
#line 1316 "prog_io_type_defn.m"
  {
#line 1316 "prog_io_type_defn.m"
    MR_Box parse_tree__prog_io_type_defn__closure = parse_tree__prog_io_type_defn__closure_arg;
#line 1316 "prog_io_type_defn.m"
    MR_Word parse_tree__prog_io_type_defn__conv1_HeadVar__2_102;

#line 1316 "prog_io_type_defn.m"
    {
#line 1316 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__IntroducedFrom__pred__parse_type_defn_head__1316__1_2_p_0(((MR_Word) parse_tree__prog_io_type_defn__wrapper_arg_1), &parse_tree__prog_io_type_defn__conv1_HeadVar__2_102);
    }
#line 1316 "prog_io_type_defn.m"
    *parse_tree__prog_io_type_defn__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_type_defn__conv1_HeadVar__2_102));
#line 1316 "prog_io_type_defn.m"
  }
#line 1316 "prog_io_type_defn.m"
}

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1307 "prog_io_type_defn.m"
{
#line 1307 "prog_io_type_defn.m"
  {
#line 1307 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1307 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0, 1);
#line 1307 "prog_io_type_defn.m"
  }
#line 1307 "prog_io_type_defn.m"
}

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1307 "prog_io_type_defn.m"
{
#line 1307 "prog_io_type_defn.m"
  {
#line 1307 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1307 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_22_22 = ((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22);
#line 1307 "prog_io_type_defn.m"
    {
#line 1307 "prog_io_type_defn.m"
      parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(parse_tree__prog_io_type_defn__env_ptr);
#line 1307 "prog_io_type_defn.m"
      return;
    }
#line 1307 "prog_io_type_defn.m"
  }
#line 1307 "prog_io_type_defn.m"
}

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_2(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1307 "prog_io_type_defn.m"
{
#line 1307 "prog_io_type_defn.m"
  {
#line 1307 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1307 "prog_io_type_defn.m"
    (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1307 "prog_io_type_defn.m"
    if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1307 "prog_io_type_defn.m"
      {
#line 1307 "prog_io_type_defn.m"
        {
#line 1307 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 0)));
#line 1307 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, (MR_Integer) 1)));
#line 1307 "prog_io_type_defn.m"
        }
#line 1307 "prog_io_type_defn.m"
        {
#line 1308 "prog_io_type_defn.m"
          {
#line 1308 "prog_io_type_defn.m"
            (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Param_23)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__OtherParams_24);
          }
#line 1308 "prog_io_type_defn.m"
          if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1308 "prog_io_type_defn.m"
            {
#line 1308 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 1308 "prog_io_type_defn.m"
              return;
            }
#line 1307 "prog_io_type_defn.m"
        }
#line 1307 "prog_io_type_defn.m"
      }
#line 1307 "prog_io_type_defn.m"
  }
#line 1307 "prog_io_type_defn.m"
}

#line 1307 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(
#line 1307 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 1307 "prog_io_type_defn.m"
{
#line 1307 "prog_io_type_defn.m"
  {
#line 1307 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 1307 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__commit_0) == 0)
#line 1307 "prog_io_type_defn.m"
      {
#line 13660 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100 = (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0];
#line 1307 "prog_io_type_defn.m"
        {
#line 1307 "prog_io_type_defn.m"
          mercury__list__member_3_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__TypeInfo_100_100, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__conv0_V_22_22, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__V_30_30, parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_3, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 1307 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_FALSE;
#line 1307 "prog_io_type_defn.m"
      }
#line 1307 "prog_io_type_defn.m"
    else
#line 1307 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = MR_TRUE;
#line 1307 "prog_io_type_defn.m"
  }
#line 1307 "prog_io_type_defn.m"
}

#line 38 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(
#line 38 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_5,
#line 38 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_6,
#line 38 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__HeadTerm_7,
#line 38 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8)
#line 38 "prog_io_type_defn.m"
{
#line 38 "prog_io_type_defn.m"
  {
#line 38 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 1288 "prog_io_type_defn.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1294 "prog_io_type_defn.m"
      {
#line 1294 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_99_99 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1294 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 2)));
#line 1294 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__HeadResult_17;
#line 1294 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));
#line 1294 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));

#line 1296 "prog_io_type_defn.m"
        {
#line 1296 "prog_io_type_defn.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ModuleName_5, parse_tree__prog_io_type_defn__HeadTerm_7, parse_tree__prog_io_type_defn__VarSet_6, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[124]), &parse_tree__prog_io_type_defn__HeadResult_17);
        }
#line 1301 "prog_io_type_defn.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__HeadResult_17)) == (MR_mktag((MR_Integer) 0))))
#line 1300 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = (MR_Word) parse_tree__prog_io_type_defn__HeadResult_17;
#line 1301 "prog_io_type_defn.m"
        else
#line 1302 "prog_io_type_defn.m"
          {
#line 1302 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 0)));
#line 1302 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__ArgTerms_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadResult_17, (MR_Integer) 1)));

#line 1304 "prog_io_type_defn.m"
            {
#line 1304 "prog_io_type_defn.m"
              (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__ArgTerms_20, &(parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21);
            }
#line 1319 "prog_io_type_defn.m"
            if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1315 "prog_io_type_defn.m"
              {
#line 1307 "prog_io_type_defn.m"
                {
#line 1307 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_4(&parse_tree__prog_io_type_defn__env);
                }
#line 1315 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__succeeded)
#line 1311 "prog_io_type_defn.m"
                  {
#line 1311 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_41_41;
#line 1311 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_42_42;
#line 1311 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_47_47;
#line 1311 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_86;

#line 1313 "prog_io_type_defn.m"
                    {
#line 1313 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1313 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1313 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[125])));
#line 1313 "prog_io_type_defn.m"
                    }
#line 1313 "prog_io_type_defn.m"
                    {
#line 1313 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_42_42));
#line 1313 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "prog_io_type_defn.m"
                    }
#line 1312 "prog_io_type_defn.m"
                    {
#line 1312 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1312 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_86, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_41_41));
#line 1312 "prog_io_type_defn.m"
                    }
#line 1314 "prog_io_type_defn.m"
                    {
#line 1314 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_86));
#line 1314 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1314 "prog_io_type_defn.m"
                    }
#line 1314 "prog_io_type_defn.m"
                    {
#line 1314 "prog_io_type_defn.m"
                      MR_Word base;
#line 1314 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1314 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_47_47));
#line 1314 "prog_io_type_defn.m"
                    }
#line 1311 "prog_io_type_defn.m"
                  }
#line 1315 "prog_io_type_defn.m"
                else
#line 1316 "prog_io_type_defn.m"
                  {
#line 1316 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Params_25;

#line 1316 "prog_io_type_defn.m"
                    {
#line 1316 "prog_io_type_defn.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_type_defn_scalar_common_4[0], (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0_env_0__Params0_21, &parse_tree__prog_io_type_defn__Params_25);
                    }
#line 1317 "prog_io_type_defn.m"
                    {
#line 1317 "prog_io_type_defn.m"
                      MR_Word base;
#line 1317 "prog_io_type_defn.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1317 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_19));
#line 1317 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__Params_25));
#line 1317 "prog_io_type_defn.m"
                    }
#line 1316 "prog_io_type_defn.m"
                  }
#line 1315 "prog_io_type_defn.m"
              }
#line 1319 "prog_io_type_defn.m"
            else
#line 1320 "prog_io_type_defn.m"
              {
#line 1320 "prog_io_type_defn.m"
                MR_String parse_tree__prog_io_type_defn__HeadTermStr_26;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_52_52;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_62_62;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__V_68_68;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Pieces_89;
#line 1320 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Spec_90;

#line 1320 "prog_io_type_defn.m"
                {
#line 1320 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__HeadTermStr_26 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_99_99, parse_tree__prog_io_type_defn__VarSet_6, parse_tree__prog_io_type_defn__HeadTerm_7);
                }
#line 1322 "prog_io_type_defn.m"
                {
#line 1322 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1322 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadTermStr_26));
#line 1322 "prog_io_type_defn.m"
                }
#line 1322 "prog_io_type_defn.m"
                {
#line 1322 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 1322 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 1322 "prog_io_type_defn.m"
                }
#line 1321 "prog_io_type_defn.m"
                {
#line 1321 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Pieces_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[126])));
#line 1321 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_89, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_52_52));
#line 1321 "prog_io_type_defn.m"
                }
#line 1324 "prog_io_type_defn.m"
                {
#line 1324 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_89));
#line 1324 "prog_io_type_defn.m"
                }
#line 1324 "prog_io_type_defn.m"
                {
#line 1324 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 1324 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "prog_io_type_defn.m"
                }
#line 1324 "prog_io_type_defn.m"
                {
#line 1324 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__HeadContext_15));
#line 1324 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 1324 "prog_io_type_defn.m"
                }
#line 1324 "prog_io_type_defn.m"
                {
#line 1324 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 1324 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "prog_io_type_defn.m"
                }
#line 1323 "prog_io_type_defn.m"
                {
#line 1323 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__Spec_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1323 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1323 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_90, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_62_62));
#line 1323 "prog_io_type_defn.m"
                }
#line 1325 "prog_io_type_defn.m"
                {
#line 1325 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_90));
#line 1325 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1325 "prog_io_type_defn.m"
                }
#line 1325 "prog_io_type_defn.m"
                {
#line 1325 "prog_io_type_defn.m"
                  MR_Word base;
#line 1325 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1325 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1325 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_68_68));
#line 1325 "prog_io_type_defn.m"
                }
#line 1320 "prog_io_type_defn.m"
              }
#line 1302 "prog_io_type_defn.m"
          }
#line 1294 "prog_io_type_defn.m"
      }
#line 1288 "prog_io_type_defn.m"
    else
#line 1288 "prog_io_type_defn.m"
      {
#line 1288 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 1)));
#line 1288 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__Spec_12;
#line 1288 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_77_77;
#line 1288 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_78_78;
#line 1288 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_83_83;
#line 1288 "prog_io_type_defn.m"
        MR_Word parse_tree__prog_io_type_defn__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__HeadTerm_7, (MR_Integer) 0)));

#line 1291 "prog_io_type_defn.m"
        {
#line 1291 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_10));
#line 1291 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[127])));
#line 1291 "prog_io_type_defn.m"
        }
#line 1291 "prog_io_type_defn.m"
        {
#line 1291 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_78_78));
#line 1291 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1291 "prog_io_type_defn.m"
        }
#line 1290 "prog_io_type_defn.m"
        {
#line 1290 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1290 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1290 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_77_77));
#line 1290 "prog_io_type_defn.m"
        }
#line 1292 "prog_io_type_defn.m"
        {
#line 1292 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_12));
#line 1292 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "prog_io_type_defn.m"
        }
#line 1292 "prog_io_type_defn.m"
        {
#line 1292 "prog_io_type_defn.m"
          MR_Word base;
#line 1292 "prog_io_type_defn.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "prog_io_type_defn.m"
          *parse_tree__prog_io_type_defn__MaybeTypeCtorAndArgs_8 = base;
#line 1292 "prog_io_type_defn.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_83_83));
#line 1292 "prog_io_type_defn.m"
        }
#line 1288 "prog_io_type_defn.m"
      }
#line 38 "prog_io_type_defn.m"
  }
#line 38 "prog_io_type_defn.m"
}

#line 568 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(
#line 568 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 568 "prog_io_type_defn.m"
{
#line 568 "prog_io_type_defn.m"
  {
#line 568 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 568 "prog_io_type_defn.m"
    MR_builtin_longjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0, 1);
#line 568 "prog_io_type_defn.m"
  }
#line 568 "prog_io_type_defn.m"
}

#line 568 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2(
#line 568 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 568 "prog_io_type_defn.m"
{
#line 568 "prog_io_type_defn.m"
  {
#line 568 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 568 "prog_io_type_defn.m"
    {
#line 14093 "parse_tree.prog_io_type_defn.c"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 569 "prog_io_type_defn.m"
      {
#line 569 "prog_io_type_defn.m"
        mercury__term__coerce_var_2_p_0((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_64_78, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36);
      }
#line 570 "prog_io_type_defn.m"
      {
#line 570 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_type_defn_scalar_common_1[1], ((MR_Box) ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TVar_36)), (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34);
      }
#line 570 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = !((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded);
#line 570 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 570 "prog_io_type_defn.m"
        {
#line 570 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_1(parse_tree__prog_io_type_defn__env_ptr);
#line 570 "prog_io_type_defn.m"
          return;
        }
#line 568 "prog_io_type_defn.m"
    }
#line 568 "prog_io_type_defn.m"
  }
#line 568 "prog_io_type_defn.m"
}

#line 568 "prog_io_type_defn.m"
static void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(
#line 568 "prog_io_type_defn.m"
  void * parse_tree__prog_io_type_defn__env_ptr_arg)
#line 568 "prog_io_type_defn.m"
{
#line 568 "prog_io_type_defn.m"
  {
#line 568 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s * parse_tree__prog_io_type_defn__env_ptr = (struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s *) parse_tree__prog_io_type_defn__env_ptr_arg;

#line 568 "prog_io_type_defn.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__commit_0) == 0)
#line 568 "prog_io_type_defn.m"
      {
#line 14139 "parse_tree.prog_io_type_defn.c"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 568 "prog_io_type_defn.m"
        {
#line 568 "prog_io_type_defn.m"
          mercury__term__contains_var_2_p_1((parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__TypeCtorInfo_63_77, (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, &(parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Var_35, parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_2, parse_tree__prog_io_type_defn__env_ptr);
        }
#line 568 "prog_io_type_defn.m"
        (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 568 "prog_io_type_defn.m"
      }
#line 568 "prog_io_type_defn.m"
    else
#line 568 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env_ptr)->parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 568 "prog_io_type_defn.m"
  }
#line 568 "prog_io_type_defn.m"
}

#line 31 "prog_io_type_defn.m"
void MR_CALL 
parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__ModuleName_8,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__VarSet_9,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__TypeDefnTerm_10,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Attributes_11,
#line 31 "prog_io_type_defn.m"
  MR_Word parse_tree__prog_io_type_defn__Context_12,
#line 31 "prog_io_type_defn.m"
  MR_Integer parse_tree__prog_io_type_defn__SeqNum_13,
#line 31 "prog_io_type_defn.m"
  MR_Word * parse_tree__prog_io_type_defn__MaybeItem_14)
#line 31 "prog_io_type_defn.m"
{
#line 31 "prog_io_type_defn.m"
  {
#line 31 "prog_io_type_defn.m"
    struct parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0_s parse_tree__prog_io_type_defn__env;

#line 96 "prog_io_type_defn.m"
    {
#line 96 "prog_io_type_defn.m"
      MR_String parse_tree__prog_io_type_defn__Name_15;
#line 96 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__HeadTerm_18;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__ArgTerms_16;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_20_20;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_21_21;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_22_22;
#line 76 "prog_io_type_defn.m"
      MR_Word parse_tree__prog_io_type_defn__V_17_17;

#line 76 "prog_io_type_defn.m"
      (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__TypeDefnTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
        {
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 1)));
#line 76 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__TypeDefnTerm_10, (MR_Integer) 2)));
#line 76 "prog_io_type_defn.m"
          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 76 "prog_io_type_defn.m"
          if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
            {
#line 76 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_20_20, (MR_Integer) 0)));
#line 79 "prog_io_type_defn.m"
              if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "==") == 0))
#line 79 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 79 "prog_io_type_defn.m"
              else
#line 79 "prog_io_type_defn.m"
              if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "--->") == 0))
#line 78 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 79 "prog_io_type_defn.m"
              else
#line 79 "prog_io_type_defn.m"
              if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "where") == 0))
#line 80 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_TRUE;
#line 79 "prog_io_type_defn.m"
              else
#line 79 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = MR_FALSE;
#line 76 "prog_io_type_defn.m"
              if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 76 "prog_io_type_defn.m"
                {
#line 77 "prog_io_type_defn.m"
                  (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__ArgTerms_16)) == (MR_mktag((MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                  if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 77 "prog_io_type_defn.m"
                    {
#line 77 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__HeadTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_16, (MR_Integer) 0)));
#line 77 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__ArgTerms_16, (MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                      (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_type_defn__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 77 "prog_io_type_defn.m"
                        {
#line 77 "prog_io_type_defn.m"
                          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 0)));
#line 77 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_21_21, (MR_Integer) 1)));
#line 77 "prog_io_type_defn.m"
                          (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded = (parse_tree__prog_io_type_defn__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 77 "prog_io_type_defn.m"
                        }
#line 77 "prog_io_type_defn.m"
                    }
#line 76 "prog_io_type_defn.m"
                }
#line 76 "prog_io_type_defn.m"
            }
#line 76 "prog_io_type_defn.m"
        }
#line 96 "prog_io_type_defn.m"
      if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 87 "prog_io_type_defn.m"
        if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "==") == 0))
#line 558 "prog_io_type_defn.m"
          {
#line 558 "prog_io_type_defn.m"
            MR_Word parse_tree__prog_io_type_defn__MaybeNameAndParams_31;

#line 559 "prog_io_type_defn.m"
            {
#line 559 "prog_io_type_defn.m"
              parse_tree__prog_io_type_defn__parse_type_defn_head_4_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, &parse_tree__prog_io_type_defn__MaybeNameAndParams_31);
            }
#line 564 "prog_io_type_defn.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeNameAndParams_31)) == (MR_mktag((MR_Integer) 0))))
#line 562 "prog_io_type_defn.m"
              {
#line 562 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Specs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 0)));

#line 563 "prog_io_type_defn.m"
                {
#line 563 "prog_io_type_defn.m"
                  MR_Word base;
#line 563 "prog_io_type_defn.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 563 "prog_io_type_defn.m"
                  *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 563 "prog_io_type_defn.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Specs_32));
#line 563 "prog_io_type_defn.m"
                }
#line 562 "prog_io_type_defn.m"
              }
#line 564 "prog_io_type_defn.m"
            else
#line 565 "prog_io_type_defn.m"
              {
#line 565 "prog_io_type_defn.m"
                MR_Word parse_tree__prog_io_type_defn__Name_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 0)));

#line 565 "prog_io_type_defn.m"
                (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeNameAndParams_31, (MR_Integer) 1)));
#line 568 "prog_io_type_defn.m"
                {
#line 568 "prog_io_type_defn.m"
                  parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_3(&parse_tree__prog_io_type_defn__env);
                }
#line 579 "prog_io_type_defn.m"
                if ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__succeeded)
#line 572 "prog_io_type_defn.m"
                  {
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__TypeCtorInfo_66_80 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 572 "prog_io_type_defn.m"
                    MR_String parse_tree__prog_io_type_defn__BodyTermStr_37;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Pieces_38;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__Spec_39;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_50_50;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_53_53;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_54_54;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_63_63;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_64_64;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_65_65;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_66_66;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_67_67;
#line 572 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__V_70_70;

#line 572 "prog_io_type_defn.m"
                    {
#line 572 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__BodyTermStr_37 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_66_80, parse_tree__prog_io_type_defn__VarSet_9, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19);
                    }
#line 575 "prog_io_type_defn.m"
                    {
#line 575 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 575 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_type_defn__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__BodyTermStr_37));
#line 575 "prog_io_type_defn.m"
                    }
#line 575 "prog_io_type_defn.m"
                    {
#line 575 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_54_54));
#line 575 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_type_defn_scalar_common_1[21])));
#line 575 "prog_io_type_defn.m"
                    }
#line 574 "prog_io_type_defn.m"
                    {
#line 574 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[122])));
#line 574 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_53_53));
#line 574 "prog_io_type_defn.m"
                    }
#line 573 "prog_io_type_defn.m"
                    {
#line 573 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Pieces_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_type_defn_scalar_common_1[121])));
#line 573 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__Pieces_38, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_50_50));
#line 573 "prog_io_type_defn.m"
                    }
#line 577 "prog_io_type_defn.m"
                    {
#line 577 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_type_defn__TypeCtorInfo_66_80, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19);
                    }
#line 577 "prog_io_type_defn.m"
                    {
#line 577 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 577 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Pieces_38));
#line 577 "prog_io_type_defn.m"
                    }
#line 577 "prog_io_type_defn.m"
                    {
#line 577 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_67_67));
#line 577 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "prog_io_type_defn.m"
                    }
#line 577 "prog_io_type_defn.m"
                    {
#line 577 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_65_65));
#line 577 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_type_defn__V_66_66));
#line 577 "prog_io_type_defn.m"
                    }
#line 577 "prog_io_type_defn.m"
                    {
#line 577 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_64_64));
#line 577 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "prog_io_type_defn.m"
                    }
#line 576 "prog_io_type_defn.m"
                    {
#line 576 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__Spec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 576 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 576 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__Spec_39, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__V_63_63));
#line 576 "prog_io_type_defn.m"
                    }
#line 578 "prog_io_type_defn.m"
                    {
#line 578 "prog_io_type_defn.m"
                      parse_tree__prog_io_type_defn__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Spec_39));
#line 578 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "prog_io_type_defn.m"
                    }
#line 578 "prog_io_type_defn.m"
                    {
#line 578 "prog_io_type_defn.m"
                      MR_Word base;
#line 578 "prog_io_type_defn.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 578 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeItem_14 = base;
#line 578 "prog_io_type_defn.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__V_70_70));
#line 578 "prog_io_type_defn.m"
                    }
#line 572 "prog_io_type_defn.m"
                  }
#line 579 "prog_io_type_defn.m"
                else
#line 581 "prog_io_type_defn.m"
                  {
#line 581 "prog_io_type_defn.m"
                    MR_Word parse_tree__prog_io_type_defn__MaybeType_41;

#line 582 "prog_io_type_defn.m"
                    {
#line 582 "prog_io_type_defn.m"
                      parse_tree__prog_io_util__parse_type_4_p_0((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, parse_tree__prog_io_type_defn__VarSet_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_type_defn__MaybeType_41);
                    }
#line 592 "prog_io_type_defn.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_type_defn__MaybeType_41)) == (MR_mktag((MR_Integer) 0))))
#line 594 "prog_io_type_defn.m"
                      *parse_tree__prog_io_type_defn__MaybeItem_14 = (MR_Word) parse_tree__prog_io_type_defn__MaybeType_41;
#line 592 "prog_io_type_defn.m"
                    else
#line 584 "prog_io_type_defn.m"
                      {
#line 584 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Type_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeType_41, (MR_Integer) 0)));
#line 584 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeVarSet_43;
#line 584 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__TypeDefn_44;
#line 584 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__ItemTypeDefn_45;
#line 584 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__Item_46;
#line 584 "prog_io_type_defn.m"
                        MR_Word parse_tree__prog_io_type_defn__MaybeItem0_47;

#line 585 "prog_io_type_defn.m"
                        {
#line 585 "prog_io_type_defn.m"
                          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_type_defn__VarSet_9, &parse_tree__prog_io_type_defn__TypeVarSet_43);
                        }
#line 586 "prog_io_type_defn.m"
                        {
#line 586 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__TypeDefn_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__TypeDefn_44, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Type_42));
#line 586 "prog_io_type_defn.m"
                        }
#line 587 "prog_io_type_defn.m"
                        {
#line 587 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__ItemTypeDefn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 587 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Name_33));
#line 587 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 1) = ((MR_Box) ((parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__Params_34));
#line 587 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 2) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeDefn_44));
#line 587 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 3) = ((MR_Box) (parse_tree__prog_io_type_defn__TypeVarSet_43));
#line 587 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 4) = ((MR_Box) (parse_tree__prog_io_type_defn__Context_12));
#line 587 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_type_defn__ItemTypeDefn_45, 5) = ((MR_Box) (parse_tree__prog_io_type_defn__SeqNum_13));
#line 587 "prog_io_type_defn.m"
                        }
#line 589 "prog_io_type_defn.m"
                        parse_tree__prog_io_type_defn__Item_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_type_defn__ItemTypeDefn_45);
#line 590 "prog_io_type_defn.m"
                        {
#line 590 "prog_io_type_defn.m"
                          parse_tree__prog_io_type_defn__MaybeItem0_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 590 "prog_io_type_defn.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_type_defn__MaybeItem0_47, 0) = ((MR_Box) (parse_tree__prog_io_type_defn__Item_46));
#line 590 "prog_io_type_defn.m"
                        }
#line 591 "prog_io_type_defn.m"
                        {
#line 591 "prog_io_type_defn.m"
                          parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_type_defn__MaybeItem0_47, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 591 "prog_io_type_defn.m"
                          return;
                        }
#line 584 "prog_io_type_defn.m"
                      }
#line 581 "prog_io_type_defn.m"
                  }
#line 565 "prog_io_type_defn.m"
              }
#line 558 "prog_io_type_defn.m"
          }
#line 87 "prog_io_type_defn.m"
        else
#line 87 "prog_io_type_defn.m"
        if ((strcmp(parse_tree__prog_io_type_defn__Name_15, (MR_String) "--->") == 0))
#line 85 "prog_io_type_defn.m"
          {
#line 85 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__parse_du_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 85 "prog_io_type_defn.m"
            return;
          }
#line 87 "prog_io_type_defn.m"
        else
#line 93 "prog_io_type_defn.m"
          {
#line 93 "prog_io_type_defn.m"
            parse_tree__prog_io_type_defn__parse_where_block_type_defn_8_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__HeadTerm_18, (parse_tree__prog_io_type_defn__env).parse_tree__prog_io_type_defn__parse_type_defn_7_p_0_env_0__BodyTerm_19, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 93 "prog_io_type_defn.m"
            return;
          }
#line 96 "prog_io_type_defn.m"
      else
#line 97 "prog_io_type_defn.m"
        {
#line 97 "prog_io_type_defn.m"
          parse_tree__prog_io_type_defn__parse_abstract_type_defn_7_p_0(parse_tree__prog_io_type_defn__ModuleName_8, parse_tree__prog_io_type_defn__VarSet_9, parse_tree__prog_io_type_defn__TypeDefnTerm_10, parse_tree__prog_io_type_defn__Attributes_11, parse_tree__prog_io_type_defn__Context_12, parse_tree__prog_io_type_defn__SeqNum_13, parse_tree__prog_io_type_defn__MaybeItem_14);
#line 97 "prog_io_type_defn.m"
          return;
        }
#line 96 "prog_io_type_defn.m"
    }
#line 31 "prog_io_type_defn.m"
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
