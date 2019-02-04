/*
** Automatically generated from `autopar_find_best_par.m'
** by the Mercury compiler,
** version rotd-2018-05-15
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


// :- module mdprof_fb.automatic_parallelism.autopar_find_best_par.
// :- implementation.

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_find_best_par__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_find_best_par.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lazy.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_calc_overlap.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s {
  MR_bool mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CanFail_15;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CommittedChoice_16;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__FinalDetism_17;
  jmp_buf mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Var_26;
};


static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__pair__pti_pair_2__plain_list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0__plain_mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_alg_for_finding_best_par_simple_0_0[1];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_0;

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_1;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_1[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_alg_for_finding_best_par_simple_0[2];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_alg_for_finding_best_par_simple_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_alg_for_finding_best_par_simple_0[2];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_best_solutions_1_1[2];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_best_solutions_1_1[2];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_1;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_1[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_best_solutions_1[2];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_best_solutions_1[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_best_solutions_1[2];

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_bnb_profile_0_0[6];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_bnb_profile_0_0[6];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_bnb_profile_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_bnb_profile_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_bnb_profile_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_bnb_profile_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_bnb_profile_0[1];

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_full_parallelisation_0_0[5];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_full_parallelisation_0_0[5];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_full_parallelisation_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_full_parallelisation_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_full_parallelisation_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_full_parallelisation_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_full_parallelisation_0[1];

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_1;

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_value_ordered_goal_classification_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_goal_classification_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_classification_0[2];

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_0[2];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_0[2];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_1[3];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_1[3];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_1;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_1[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goal_group_1[2];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goal_group_1[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_group_1[2];

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goals_for_parallelisation_0_0[7];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goals_for_parallelisation_0_0[7];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goals_for_parallelisation_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goals_for_parallelisation_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goals_for_parallelisation_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goals_for_parallelisation_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goals_for_parallelisation_0[1];

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_1;

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_value_ordered_is_good_enough_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_is_good_enough_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_is_good_enough_0[2];

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph__296__1_4_p_0(
  MR_Integer HeadVar__2_2,
  MR_Integer LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__2_45,
  MR_Word * LambdaHeadVar__3_46);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph__282__1_5_p_0(
  MR_Word STATE_VARIABLE_VarDepMap_0_3,
  MR_Word ThisConjKey_21,
  MR_Integer LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40,
  MR_Word * LambdaHeadVar__3_41);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_4_p_0(
  MR_Word Info_5,
  MR_Word Algorithm_6,
  MR_Word GoalsForParallelisation_7,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__start_building_parallelisation_2_p_0(
  MR_Word PreprocessedGoals_3,
  MR_Word * Parallelisation_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_loop_8_p_0(
  MR_Word Info_1,
  MR_Word Algorithm_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IncompleteParallelisation_0_4,
  MR_Word STATE_VARIABLE_MaybeBestSolns_0_5,
  MR_Word * STATE_VARIABLE_MaybeBestSolns_6,
  MR_Word STATE_VARIABLE_Profile_0_7,
  MR_Word * STATE_VARIABLE_Profile_8);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_103_95_103_101_116_95_100_101_116_97_105_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Index_2,
  MR_Integer * HeadVar__3_3,
  MR_Box * P_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__update_incomplete_parallelisation_cost_4_p_0(
  MR_Word Info_5,
  MR_Word STATE_VARIABLE_IncompleteParallelisation_0_10,
  MR_Word * STATE_VARIABLE_IncompleteParallelisation_11,
  MR_Word * MaybeCost_7);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_is_good_enough_7_p_0(
  MR_Word Info_8,
  MR_Word MaybeBestSolns_9,
  MR_Word STATE_VARIABLE_IncompleteParallelisation_0_17,
  MR_Word * STATE_VARIABLE_IncompleteParallelisation_18,
  MR_Word STATE_VARIABLE_Profile_0_19,
  MR_Word * STATE_VARIABLE_Profile_20,
  MR_Word * GoodEnough_12);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__test_dependence_2_p_0(
  MR_Word Info_3,
  MR_Word CostData_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe_update_best_complete_parallelisation_5_p_0(
  MR_Word CurSoln_6,
  MR_Word MaybeBestSolns0_7,
  MR_Word * MaybeBestSolns_8,
  MR_Word STATE_VARIABLE_Profile_0_14,
  MR_Word * STATE_VARIABLE_Profile_15);

static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_cost_1_f_0(
  MR_Word IncompleteParallelisation_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__should_expand_search_2_p_0(
  MR_Word Algorithm_3,
  MR_Word Profile_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0(
  MR_Word Info_6,
  MR_Word Algorithm_8,
  MR_Word PreprocessedGoals_9,
  MR_Word * MaybeBestParallelisation_10);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__finalise_parallelisation_2_p_0(
  MR_Word Incomplete_3,
  MR_Word * Best_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__preprocess_conjunction_5_p_0(
  MR_Word Goals_6,
  MR_Word * MaybeGoalsForParallelisation_7,
  MR_Word Location_8,
  MR_Word STATE_VARIABLE_Messages_0_25,
  MR_Word * STATE_VARIABLE_Messages_26);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho2_6_p_0(
  MR_ArrayPtr Array_8,
  MR_Integer Index_9,
  MR_Integer Last_10,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Detism_0_18,
  MR_Word * STATE_VARIABLE_Detism_19);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho1_6_p_0(
  MR_ArrayPtr Array_8,
  MR_Integer Index_9,
  MR_Integer Last_10,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarDepMap_0_3,
  MR_Word * STATE_VARIABLE_VarDepMap_4,
  MR_Word STATE_VARIABLE_Graph_0_5,
  MR_Word * STATE_VARIABLE_Graph_6);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[11][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[2][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[1][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_4[1][8];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_5[2][7];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[2][1];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_group_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[4])),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[1][6] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_alg_for_finding_best_par_simple_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goals_for_parallelisation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__pair__pti_pair_2__plain_list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0__plain_mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__pair__pti_pair_2__plain_list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0__plain_mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0,
    (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_alg_for_finding_best_par_simple_0_0[1] = {
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_0 = {
  (MR_String) "affbps_complete",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_alg_for_finding_best_par_simple_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_1 = {
  (MR_String) "affbps_greedy",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_1
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_1[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_0
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_alg_for_finding_best_par_simple_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_1
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_alg_for_finding_best_par_simple_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_0,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_1
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_alg_for_finding_best_par_simple_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_alg_for_finding_best_par_simple_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "alg_for_finding_best_par_simple",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_alg_for_finding_best_par_simple_0 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_alg_for_finding_best_par_simple_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_alg_for_finding_best_par_simple_0
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_0 = {
  (MR_String) "no_best_solutions",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_best_solutions_1_1[2] = {
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_best_solutions_1_1[2] = {
  (MR_String) "bs_solutions",
  (MR_String) "bs_objective_value"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_1 = {
  (MR_String) "best_solutions",
  (MR_Integer) 2,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_best_solutions_1_1,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_best_solutions_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_0
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_1[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_1
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_best_solutions_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_1
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_best_solutions_1[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_1,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_best_solutions_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_best_solutions_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "best_solutions",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_best_solutions_1 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_best_solutions_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_best_solutions_1
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_bnb_profile_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_bnb_profile_0_0[6] = {
  (MR_String) "bnbp_incomplete_good_enough",
  (MR_String) "bnbp_incomplete_not_good_enough",
  (MR_String) "bnbp_complete_best_solution",
  (MR_String) "bnbp_complete_equal_solution",
  (MR_String) "bnbp_complete_worse_solution",
  (MR_String) "bnbp_complete_non_solution"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_bnb_profile_0_0 = {
  (MR_String) "bnb_profile",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_bnb_profile_0_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_bnb_profile_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_bnb_profile_0_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_bnb_profile_0_0
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_bnb_profile_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_bnb_profile_0_0
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_bnb_profile_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_bnb_profile_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_bnb_profile_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "bnb_profile",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_bnb_profile_0 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_bnb_profile_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_bnb_profile_0
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_full_parallelisation_0_0[5] = {
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0,
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0,
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_full_parallelisation_0_0[5] = {
  (MR_String) "fp_goals_before",
  (MR_String) "fp_par_conjs",
  (MR_String) "fp_goals_after",
  (MR_String) "fp_is_dependent",
  (MR_String) "fp_par_exec_metrics"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_full_parallelisation_0_0 = {
  (MR_String) "fp_parallel_execution",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_full_parallelisation_0_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_full_parallelisation_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_full_parallelisation_0_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_full_parallelisation_0_0
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_full_parallelisation_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_full_parallelisation_0_0
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_full_parallelisation_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_full_parallelisation_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_full_parallelisation_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_full_parallelisation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "full_parallelisation",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_full_parallelisation_0 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_full_parallelisation_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_full_parallelisation_0
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_0 = {
  (MR_String) "gc_cheap_goals",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_1 = {
  (MR_String) "gc_costly_goals",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_value_ordered_goal_classification_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_0,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_goal_classification_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_0,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_1
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_classification_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "goal_classification",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_goal_classification_0 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_value_ordered_goal_classification_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_classification_0
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_0[2] = {
  (MR_String) "ggs_index",
  (MR_String) "ggs_abstract"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_0 = {
  (MR_String) "gg_single",
  (MR_Integer) 2,
  (MR_Integer) 2,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_1[3] = {
  (MR_String) "ggm_index",
  (MR_String) "ggm_count",
  (MR_String) "ggm_abstract"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_1 = {
  (MR_String) "gg_multiple",
  (MR_Integer) 3,
  (MR_Integer) 4,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_1,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_0
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_1[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_1
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goal_group_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_1
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goal_group_1[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_1,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_group_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_group_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "goal_group",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goal_group_1 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goal_group_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_group_1
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0 = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_group_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goals_for_parallelisation_0_0[7] = {
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0,
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependency_graphs_0,
  (MR_PseudoTypeInfo) &mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goals_for_parallelisation_0_0[7] = {
  (MR_String) "gfp_goals",
  (MR_String) "gfp_first_costly_goal",
  (MR_String) "gfp_last_costly_goal",
  (MR_String) "gfp_groups",
  (MR_String) "gfp_dependency_graphs",
  (MR_String) "gfp_costly_goal_indexes",
  (MR_String) "gfp_num_calls"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goals_for_parallelisation_0_0 = {
  (MR_String) "goals_for_parallelisation",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goals_for_parallelisation_0_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goals_for_parallelisation_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goals_for_parallelisation_0_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goals_for_parallelisation_0_0
};

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goals_for_parallelisation_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goals_for_parallelisation_0_0
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goals_for_parallelisation_0[1] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goals_for_parallelisation_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goals_for_parallelisation_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goals_for_parallelisation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "goals_for_parallelisation",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goals_for_parallelisation_0 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goals_for_parallelisation_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goals_for_parallelisation_0
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_0 = {
  (MR_String) "is_not_good_enough",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_1 = {
  (MR_String) "is_good_enough",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_value_ordered_is_good_enough_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_0,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_is_good_enough_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_1,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_is_good_enough_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_is_good_enough_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "is_good_enough",
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_is_good_enough_0 },
  {     mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_value_ordered_is_good_enough_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_is_good_enough_0
};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph__296__1_4_p_0(
  MR_Integer HeadVar__2_2,
  MR_Integer LambdaHeadVar__1_44,
  MR_Word LambdaHeadVar__2_45,
  MR_Word * LambdaHeadVar__3_46)
{
  {
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, LambdaHeadVar__1_44, ((MR_Box) (HeadVar__2_2)), LambdaHeadVar__2_45, LambdaHeadVar__3_46);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph__282__1_5_p_0(
  MR_Word STATE_VARIABLE_VarDepMap_0_3,
  MR_Word ThisConjKey_21,
  MR_Integer LambdaHeadVar__1_39,
  MR_Word LambdaHeadVar__2_40,
  MR_Word * LambdaHeadVar__3_41)
{
  {
    MR_bool succeeded;
    MR_Integer DepConj_26;
    MR_Box conv0_DepConj_26;

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, STATE_VARIABLE_VarDepMap_0_3, LambdaHeadVar__1_39, &conv0_DepConj_26);
    if (succeeded)
    {
      DepConj_26 = ((MR_Integer) conv0_DepConj_26);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word DepConjKey_27;

      mercury__digraph__lookup_key_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, LambdaHeadVar__2_40, ((MR_Box) (DepConj_26)), &DepConjKey_27);
      mercury__digraph__add_edge_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, DepConjKey_27, ThisConjKey_21, LambdaHeadVar__2_40, LambdaHeadVar__3_41);
    }
    else
      *LambdaHeadVar__3_41 = LambdaHeadVar__2_40;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_ArrayPtr ArgX1_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_ArrayPtr ArgY1_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Integer ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      mercury__builtin__compare_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[9], &Var_18, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_19, ArgX2_6, ArgY2_7);
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, ArgX3_8, ArgY3_9);
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            mercury__builtin__compare_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[2], &Var_21, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0(&Var_22, ArgX5_12, ArgY5_13);
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                mercury__builtin__compare_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[10], &Var_23, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX7_16, ArgY7_17);
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_22_22;
      MR_ArrayPtr ArgX1_3 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_ArrayPtr ArgY1_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Integer ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = mercury__array____Unify____array_1_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0], (MR_ArrayPtr) ArgX1_3, (MR_ArrayPtr) ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[2];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[10];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Box Var_33 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
      MR_Integer Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Integer ArgY1_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer ArgY2_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Box ArgY3_24 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2));
        MR_Word Var_25;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_25, Var_35, ArgY1_20);
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, Var_34, ArgY2_22);
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
            mercury__builtin__compare_3_p_0(TypeInfo_for_T_29, HeadVar__1_1, Var_33, ArgY3_24);
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_36 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
      MR_Integer Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Box ArgY2_7 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1));
        MR_Word Var_8;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_37, ArgY1_5);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_T_29, HeadVar__1_1, Var_36, ArgY2_7);
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Integer ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_8;
      MR_Integer ArgX2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_10;
      MR_Box ArgX3_11 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
      MR_Box ArgY3_12;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_12 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2));
        succeeded = (ArgX1_7 == ArgY1_8);
        if (succeeded)
        {
          succeeded = (ArgX2_9 == ArgY2_10);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX3_11, ArgY3_12);
        }
      }
    }
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4;
      MR_Box ArgX2_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX2_5, ArgY2_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word Var_14;

      mercury__builtin__compare_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6], &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[8], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__builtin__compare_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6], &Var_16, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[8];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = mdbcomp__feedback__automatic_parallelism____Unify____conjuncts_are_dependent_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = mdbcomp__feedback__automatic_parallelism____Unify____parallel_exec_metrics_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_16;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, ArgX2_6, ArgY2_7);
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_19, ArgX4_10, ArgY4_11);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
                mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX6_14, ArgY6_15);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
                succeeded = (ArgX6_13 == ArgY6_14);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Float Var_19 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Float ArgY2_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_12;

        mercury__list____Compare____list_1_0(TypeInfo_for_T_15, &Var_12, Var_20, ArgY1_9);
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
          mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_19, ArgY2_11);
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;
      MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Float ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[5];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_4_p_0(
  MR_Word Info_5,
  MR_Word Algorithm_6,
  MR_Word GoalsForParallelisation_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_Word EqualBestSolns_8;
    MR_Word FinalProfile_9;
    MR_Word STATE_VARIABLE_IncompleteParallelisation_24_24;
    MR_Word STATE_VARIABLE_GoalGroups_25_25;
    MR_Word STATE_VARIABLE_GoalGroups_27_27;
    MR_Word STATE_VARIABLE_IncompleteParallelisation_30_30;
    MR_Word STATE_VARIABLE_MaybeBestSolns_46_46;
    MR_ArrayPtr Var_48;
    MR_Integer Var_49;
    MR_Integer Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Integer Var_53;

    mdprof_fb__automatic_parallelism__autopar_find_best_par__start_building_parallelisation_2_p_0(GoalsForParallelisation_7, &STATE_VARIABLE_IncompleteParallelisation_24_24);
    Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), GoalsForParallelisation_7, (MR_Integer) 0)));
    Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GoalsForParallelisation_7, (MR_Integer) 1)));
    Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GoalsForParallelisation_7, (MR_Integer) 2)));
    STATE_VARIABLE_GoalGroups_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalsForParallelisation_7, (MR_Integer) 3)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalsForParallelisation_7, (MR_Integer) 4)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), GoalsForParallelisation_7, (MR_Integer) 5)));
    Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), GoalsForParallelisation_7, (MR_Integer) 6)));
    if ((STATE_VARIABLE_GoalGroups_25_25 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.generate_parallelisations\'/4", (MR_String) "no goal groups");
        return;
      }
    }
    else
    {
      MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalGroups_25_25, (MR_Integer) 1)));
      MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_GoalGroups_25_25, (MR_Integer) 0)));

      if ((Var_65 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.generate_parallelisations\'/4", (MR_String) "only one goal group");
          return;
        }
      }
      else
      {
        MR_Integer Index_19;
        MR_Integer Num_20;
        MR_Integer LastScheduledGoal_22;
        MR_Integer Var_28;
        MR_ArrayPtr Var_54;
        MR_Integer Var_55;
        MR_Integer Var_56;
        MR_Word Var_58;
        MR_Integer Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Integer Var_57;

        STATE_VARIABLE_GoalGroups_27_27 = Var_65;
        if (((MR_tag((MR_Word) Var_66)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word Var_21;

          Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 0)));
          Num_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 1)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_66, (MR_Integer) 2)));
        }
        else
        {
          MR_Word Var_72;

          Index_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0)));
          Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 1)));
          Num_20 = (MR_Integer) 1;
        }
        Var_28 = (MR_Integer) ((MR_Unsigned) Index_19 + (MR_Unsigned) Num_20);
        LastScheduledGoal_22 = (MR_Integer) ((MR_Unsigned) Var_28 - (MR_Unsigned) (MR_Integer) 1);
        Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 0)));
        Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 1)));
        Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 2)));
        Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 3)));
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 4)));
        Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 5)));
        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 6)));
        Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 7)));
        Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 8)));
        Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_24_24, (MR_Integer) 9)));
        {
          STATE_VARIABLE_IncompleteParallelisation_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 1) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 2) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 3) = ((MR_Box) (LastScheduledGoal_22));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 4) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 5) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 6) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 7) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 8) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_30_30, 9) = ((MR_Box) (Var_63));
        }
      }
    }
    mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_loop_8_p_0(Info_5, Algorithm_6, STATE_VARIABLE_GoalGroups_27_27, STATE_VARIABLE_IncompleteParallelisation_30_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_MaybeBestSolns_46_46, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[0], &FinalProfile_9);
    if ((STATE_VARIABLE_MaybeBestSolns_46_46 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      EqualBestSolns_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Float Var_23;

      EqualBestSolns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeBestSolns_46_46, (MR_Integer) 0)));
      Var_23 = MR_unbox_float((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeBestSolns_46_46, (MR_Integer) 1)));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (EqualBestSolns_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FinalProfile_9));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__start_building_parallelisation_2_p_0(
  MR_Word PreprocessedGoals_3,
  MR_Word * Parallelisation_4)
{
  {
    MR_ArrayPtr GoalsArray_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), PreprocessedGoals_3, (MR_Integer) 0)));
    MR_Integer FirstParGoal_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PreprocessedGoals_3, (MR_Integer) 1)));
    MR_Integer LastParGoal_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PreprocessedGoals_3, (MR_Integer) 2)));
    MR_Integer NumCalls_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PreprocessedGoals_3, (MR_Integer) 6)));
    MR_Word DependencyGraphs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), PreprocessedGoals_3, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), PreprocessedGoals_3, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PreprocessedGoals_3, (MR_Integer) 5)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *Parallelisation_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalsArray_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FirstParGoal_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LastParGoal_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FirstParGoal_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (NumCalls_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (DependencyGraphs_9));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_loop_8_p_0(
  MR_Word Info_1,
  MR_Word Algorithm_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IncompleteParallelisation_0_4,
  MR_Word STATE_VARIABLE_MaybeBestSolns_0_5,
  MR_Word * STATE_VARIABLE_MaybeBestSolns_6,
  MR_Word STATE_VARIABLE_Profile_0_7,
  MR_Word * STATE_VARIABLE_Profile_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MR_Integer Var_19;

      Var_19 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_parallel_conjuncts_1_f_0(STATE_VARIABLE_IncompleteParallelisation_0_4);
      succeeded = (Var_19 >= (MR_Integer) 2);
      if (succeeded)
        mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe_update_best_complete_parallelisation_5_p_0(STATE_VARIABLE_IncompleteParallelisation_0_4, STATE_VARIABLE_MaybeBestSolns_0_5, STATE_VARIABLE_MaybeBestSolns_6, STATE_VARIABLE_Profile_0_7, STATE_VARIABLE_Profile_8);
      else
      {
        MR_Integer Var_24;
        MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_7, (MR_Integer) 5)));
        MR_Integer Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_7, (MR_Integer) 0)));
        MR_Integer Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_7, (MR_Integer) 1)));
        MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_7, (MR_Integer) 2)));
        MR_Integer Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_7, (MR_Integer) 3)));
        MR_Integer Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_7, (MR_Integer) 4)));

        Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
        }
        *STATE_VARIABLE_MaybeBestSolns_6 = STATE_VARIABLE_MaybeBestSolns_0_5;
      }
    }
    else
    {
      MR_Word GoalGroup_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word GoalGroups_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer LastScheduledGoal0_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 3)));
      MR_Integer Num_36;
      MR_Integer LastScheduledGoal_38;
      MR_Word MaybeAddToLastCost_41;
      MR_Word ParConjsRevLastGoal0_42;
      MR_Word ParConjsRevLastGoal_43;
      MR_Word MaybeAddToNewCost_44;
      MR_Word Best0_47;
      MR_Word MaybeNextBest0_48;
      MR_Word STATE_VARIABLE_AddToLastParallelisation_61_61;
      MR_Word STATE_VARIABLE_AddToLastParallelisation_62_62;
      MR_Word STATE_VARIABLE_AddToNewParallelisation_64_64;
      MR_Word STATE_VARIABLE_AddToNewParallelisation_65_65;
      MR_ArrayPtr Var_107;
      MR_Integer Var_108;
      MR_Integer Var_109;
      MR_Integer Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_ArrayPtr Var_116;
      MR_Integer Var_117;
      MR_Integer Var_118;
      MR_Integer Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_ArrayPtr Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 0)));
      MR_Integer Var_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 1)));
      MR_Integer Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 2)));
      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 4)));
      MR_Integer Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 5)));
      MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 6)));
      MR_Word Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 7)));
      MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 8)));
      MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 9)));
      MR_Integer _Index_35;
      MR_Word _Classification_37;
      MR_Box conv0__Classification_37;
      MR_ArrayPtr Var_97;
      MR_Integer Var_98;
      MR_Integer Var_99;
      MR_Word Var_101;
      MR_Integer Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Integer Var_100;
      MR_Integer Var_110;
      MR_Word NextBest0_49;

      mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_103_95_103_101_116_95_100_101_116_97_105_108_115_95_95_91_49_93_95_48_4_p_0(GoalGroup_29, &_Index_35, &Num_36, &conv0__Classification_37);
      _Classification_37 = ((MR_Word) conv0__Classification_37);
      LastScheduledGoal_38 = (MR_Integer) ((MR_Unsigned) LastScheduledGoal0_34 + (MR_Unsigned) Num_36);
      Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 0)));
      Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 1)));
      Var_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 2)));
      Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 3)));
      Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 4)));
      Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 5)));
      Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 6)));
      Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 7)));
      Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 8)));
      Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 9)));
      {
        STATE_VARIABLE_AddToLastParallelisation_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 0) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 1) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 2) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 3) = ((MR_Box) (LastScheduledGoal_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 4) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 5) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 6) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 7) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 8) = ((MR_Box) (Var_105));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToLastParallelisation_61_61, 9) = ((MR_Box) (Var_106));
      }
      mdprof_fb__automatic_parallelism__autopar_find_best_par__update_incomplete_parallelisation_cost_4_p_0(Info_1, STATE_VARIABLE_AddToLastParallelisation_61_61, &STATE_VARIABLE_AddToLastParallelisation_62_62, &MaybeAddToLastCost_41);
      Var_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 0)));
      Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 1)));
      Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 2)));
      Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 3)));
      ParConjsRevLastGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 4)));
      Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 5)));
      Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 6)));
      Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 7)));
      Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 8)));
      Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 9)));
      {
        ParConjsRevLastGoal_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ParConjsRevLastGoal_43, 0) = ((MR_Box) (LastScheduledGoal0_34));
        MR_hl_field(MR_mktag(1), ParConjsRevLastGoal_43, 1) = ((MR_Box) (ParConjsRevLastGoal0_42));
      }
      Var_116 = Var_107;
      Var_117 = Var_108;
      Var_118 = Var_109;
      Var_121 = Var_111;
      Var_122 = Var_112;
      Var_123 = Var_113;
      Var_124 = Var_114;
      Var_125 = Var_115;
      {
        STATE_VARIABLE_AddToNewParallelisation_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 0) = ((MR_Box) (Var_116));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 1) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 2) = ((MR_Box) (Var_118));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 3) = ((MR_Box) (LastScheduledGoal_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 4) = ((MR_Box) (ParConjsRevLastGoal_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 5) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 6) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 7) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 8) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_AddToNewParallelisation_64_64, 9) = ((MR_Box) (Var_125));
      }
      mdprof_fb__automatic_parallelism__autopar_find_best_par__update_incomplete_parallelisation_cost_4_p_0(Info_1, STATE_VARIABLE_AddToNewParallelisation_64_64, &STATE_VARIABLE_AddToNewParallelisation_65_65, &MaybeAddToNewCost_44);
      if ((MaybeAddToLastCost_41 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        Best0_47 = STATE_VARIABLE_AddToNewParallelisation_65_65;
        MaybeNextBest0_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Float AddToLastCost_45 = MR_unbox_float((MR_hl_field(MR_mktag(1), MaybeAddToLastCost_41, (MR_Integer) 0)));

        if ((MaybeAddToNewCost_44 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        {
          Best0_47 = STATE_VARIABLE_AddToLastParallelisation_62_62;
          MaybeNextBest0_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        else
        {
          MR_Float AddToNewCost_46 = MR_unbox_float((MR_hl_field(MR_mktag(1), MaybeAddToNewCost_44, (MR_Integer) 0)));

          succeeded = (AddToNewCost_46 > AddToLastCost_45);
          if (succeeded)
          {
            Best0_47 = STATE_VARIABLE_AddToLastParallelisation_62_62;
            {
              MaybeNextBest0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeNextBest0_48, 0) = ((MR_Box) (STATE_VARIABLE_AddToNewParallelisation_65_65));
            }
          }
          else
          {
            Best0_47 = STATE_VARIABLE_AddToNewParallelisation_65_65;
            {
              MaybeNextBest0_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeNextBest0_48, 0) = ((MR_Box) (STATE_VARIABLE_AddToLastParallelisation_62_62));
            }
          }
        }
      }
      succeeded = ((MR_tag((MR_Word) MaybeNextBest0_48)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        NextBest0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNextBest0_48, (MR_Integer) 0)));
        succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par__should_expand_search_2_p_0(Algorithm_2, STATE_VARIABLE_Profile_0_7);
      }
      if (succeeded)
      {
        MR_Word Best_50;
        MR_Word BestGoodEnough_51;
        MR_Word NextBest_52;
        MR_Word NextBestGoodEnough_53;
        MR_Word STATE_VARIABLE_Profile_66_66;
        MR_Word STATE_VARIABLE_MaybeBestSolns_67_67;
        MR_Word STATE_VARIABLE_Profile_68_68;
        MR_Word STATE_VARIABLE_Profile_69_69;

        mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_is_good_enough_7_p_0(Info_1, STATE_VARIABLE_MaybeBestSolns_0_5, Best0_47, &Best_50, STATE_VARIABLE_Profile_0_7, &STATE_VARIABLE_Profile_66_66, &BestGoodEnough_51);
        switch (BestGoodEnough_51) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_loop_8_p_0(Info_1, Algorithm_2, GoalGroups_30, Best_50, STATE_VARIABLE_MaybeBestSolns_0_5, &STATE_VARIABLE_MaybeBestSolns_67_67, STATE_VARIABLE_Profile_66_66, &STATE_VARIABLE_Profile_68_68);
            break;
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_MaybeBestSolns_67_67 = STATE_VARIABLE_MaybeBestSolns_0_5;
              STATE_VARIABLE_Profile_68_68 = STATE_VARIABLE_Profile_66_66;
            }
            break;
        }
        mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_is_good_enough_7_p_0(Info_1, STATE_VARIABLE_MaybeBestSolns_67_67, NextBest0_49, &NextBest_52, STATE_VARIABLE_Profile_68_68, &STATE_VARIABLE_Profile_69_69, &NextBestGoodEnough_53);
        switch (NextBestGoodEnough_53) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__3_3 = GoalGroups_30;
              MR_Word next_value_of_STATE_VARIABLE_IncompleteParallelisation_0_4 = NextBest_52;
              MR_Word next_value_of_STATE_VARIABLE_MaybeBestSolns_0_5 = STATE_VARIABLE_MaybeBestSolns_67_67;
              MR_Word next_value_of_STATE_VARIABLE_Profile_0_7 = STATE_VARIABLE_Profile_69_69;

              // direct tailcall eliminated
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_IncompleteParallelisation_0_4 = next_value_of_STATE_VARIABLE_IncompleteParallelisation_0_4;
              STATE_VARIABLE_MaybeBestSolns_0_5 = next_value_of_STATE_VARIABLE_MaybeBestSolns_0_5;
              STATE_VARIABLE_Profile_0_7 = next_value_of_STATE_VARIABLE_Profile_0_7;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_MaybeBestSolns_6 = STATE_VARIABLE_MaybeBestSolns_67_67;
              *STATE_VARIABLE_Profile_8 = STATE_VARIABLE_Profile_69_69;
            }
            break;
        }
      }
      else
      {
        MR_Word STATE_VARIABLE_Profile_72_72;
        MR_Word Best_75;
        MR_Word BestGoodEnough_76;

        mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_is_good_enough_7_p_0(Info_1, STATE_VARIABLE_MaybeBestSolns_0_5, Best0_47, &Best_75, STATE_VARIABLE_Profile_0_7, &STATE_VARIABLE_Profile_72_72, &BestGoodEnough_76);
        switch (BestGoodEnough_76) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__3_3 = GoalGroups_30;
              MR_Word next_value_of_STATE_VARIABLE_IncompleteParallelisation_0_4 = Best_75;
              MR_Word next_value_of_STATE_VARIABLE_Profile_0_7 = STATE_VARIABLE_Profile_72_72;

              // direct tailcall eliminated
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_IncompleteParallelisation_0_4 = next_value_of_STATE_VARIABLE_IncompleteParallelisation_0_4;
              STATE_VARIABLE_Profile_0_7 = next_value_of_STATE_VARIABLE_Profile_0_7;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_MaybeBestSolns_6 = STATE_VARIABLE_MaybeBestSolns_0_5;
              *STATE_VARIABLE_Profile_8 = STATE_VARIABLE_Profile_72_72;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_103_95_103_101_116_95_100_101_116_97_105_108_115_95_95_91_49_93_95_48_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Index_2,
  MR_Integer * HeadVar__3_3,
  MR_Box * P_4)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
  {
    *Index_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    *HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    *P_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2));
  }
  else
  {
    *Index_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    *P_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));
    *HeadVar__3_3 = (MR_Integer) 1;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__update_incomplete_parallelisation_cost_4_p_0(
  MR_Word Info_5,
  MR_Word STATE_VARIABLE_IncompleteParallelisation_0_10,
  MR_Word * STATE_VARIABLE_IncompleteParallelisation_11,
  MR_Word * MaybeCost_7)
{
  {
    MR_bool succeeded;
    MR_Word CostData_8;
    MR_Word Overlap_15;
    MR_Word ParalleliseDepConjs_16;
    MR_Word IsDependent_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Float Var_33;
    MR_Word Var_34;
    MR_Integer Var_35;
    MR_Integer Var_36;
    MR_Integer Var_37;
    MR_Integer Var_38;
    MR_Integer Var_39;
    MR_Integer Var_40;
    MR_Integer Var_41;
    MR_Integer Var_42;
    MR_Float Var_43;
    MR_Word Var_44;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0(Info_5, STATE_VARIABLE_IncompleteParallelisation_0_10, STATE_VARIABLE_IncompleteParallelisation_11, &CostData_8);
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 0)));
    Overlap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 1)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 2)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 3)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 9)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 10)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 11)));
    Var_33 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
    Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2)));
    Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 3)));
    Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 4)));
    Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 5)));
    Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 6)));
    Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 7)));
    Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 8)));
    Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 9)));
    Var_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 10)));
    ParalleliseDepConjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 11)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 12)));
    mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Overlap_15, &IsDependent_17);
    succeeded = (ParalleliseDepConjs_16 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    if (succeeded)
    {
      succeeded = (IsDependent_17 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      succeeded = !(succeeded);
    }
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_Float Cost_9;
      MR_Word MaybeCostData_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 9)));
      MR_Word CostData_48;
      MR_Word IncompleteMetrics_49;
      MR_Word FullMetrics_50;
      MR_Float Var_68;
      MR_Float Var_69;
      MR_Float Var_70;
      MR_ArrayPtr Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 0)));
      MR_Integer Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 1)));
      MR_Integer Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 2)));
      MR_Integer Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 3)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 4)));
      MR_Integer Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 5)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 6)));
      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 7)));
      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 8)));
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Integer Var_72;
      MR_Float Var_73;
      MR_Float Var_74;
      MR_Float Var_75;
      MR_Float Var_76;
      MR_Float Var_77;
      MR_Float Var_78;
      MR_Float Var_79;

      if ((MaybeCostData_47 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par", (MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_find_best_par.incomplete_parallelisation_cost\'/1", (MR_String) "incomplete parallelisation has no cost data");
          return;
        }
      }
      else
        CostData_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCostData_47, (MR_Integer) 0)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_48, (MR_Integer) 0)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_48, (MR_Integer) 1)));
      IncompleteMetrics_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_48, (MR_Integer) 2)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_48, (MR_Integer) 3)));
      FullMetrics_50 = measurements__finalise_parallel_exec_metrics_1_f_0(IncompleteMetrics_49);
      Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 0)));
      Var_73 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 1)));
      Var_68 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 2)));
      Var_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 3)));
      Var_75 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 4)));
      Var_76 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 5)));
      Var_77 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 6)));
      Var_78 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 7)));
      Var_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_50, (MR_Integer) 8)));
      Var_70 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(FullMetrics_50);
      Var_69 = (Var_70 * ((MR_Float) 2.0000000000000000));
      Cost_9 = (Var_68 + Var_69);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCost_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(Cost_9);
      }
    }
    else
      *MaybeCost_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_is_good_enough_7_p_0(
  MR_Word Info_8,
  MR_Word MaybeBestSolns_9,
  MR_Word STATE_VARIABLE_IncompleteParallelisation_0_17,
  MR_Word * STATE_VARIABLE_IncompleteParallelisation_18,
  MR_Word STATE_VARIABLE_Profile_0_19,
  MR_Word * STATE_VARIABLE_Profile_20,
  MR_Word * GoodEnough_12)
{
  {
    MR_bool succeeded;
    MR_Word CostData_13;

    mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0(Info_8, STATE_VARIABLE_IncompleteParallelisation_0_17, STATE_VARIABLE_IncompleteParallelisation_18, &CostData_13);
    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par__test_dependence_2_p_0(Info_8, CostData_13);
    if (succeeded)
      if ((MaybeBestSolns_9 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        MR_Integer Var_31;
        MR_Integer Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 0)));
        MR_Integer Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 1)));
        MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 2)));
        MR_Integer Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 3)));
        MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 4)));
        MR_Integer Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 5)));

        Var_31 = (MR_Integer) ((MR_Unsigned) Var_32 + (MR_Unsigned) (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
        }
        *GoodEnough_12 = (MR_Integer) 1;
      }
      else
      {
        MR_Float BestSolnCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), MaybeBestSolns_9, (MR_Integer) 1)));
        MR_Float CurIncompleteCost_16;
        MR_Integer Var_86;
        MR_Integer Var_87;
        MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeBestSolns_9, (MR_Integer) 0)));
        MR_Integer Var_82;
        MR_Integer Var_83;
        MR_Integer Var_84;
        MR_Integer Var_85;

        CurIncompleteCost_16 = mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_cost_1_f_0(*STATE_VARIABLE_IncompleteParallelisation_18);
        Var_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 0)));
        Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 1)));
        Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 2)));
        Var_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 3)));
        Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 4)));
        Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 5)));
        succeeded = (CurIncompleteCost_16 > BestSolnCost_15);
        if (succeeded)
        {
          MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) Var_86 + (MR_Unsigned) (MR_Integer) 1);
          MR_Integer Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 0)));
          MR_Integer Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 2)));
          MR_Integer Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 3)));
          MR_Integer Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 4)));
          MR_Integer Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 5)));
          MR_Integer Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 1)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Profile_20 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_59));
          }
          *GoodEnough_12 = (MR_Integer) 0;
        }
        else
        {
          MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Var_87 + (MR_Unsigned) (MR_Integer) 1);
          MR_Integer Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 1)));
          MR_Integer Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 2)));
          MR_Integer Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 3)));
          MR_Integer Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 4)));
          MR_Integer Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 5)));
          MR_Integer Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Profile_20 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_70));
          }
          *GoodEnough_12 = (MR_Integer) 1;
        }
      }
    else
    {
      MR_Integer Var_35;
      MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 1)));
      MR_Integer Var_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 0)));
      MR_Integer Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 2)));
      MR_Integer Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 3)));
      MR_Integer Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 4)));
      MR_Integer Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_19, (MR_Integer) 5)));

      Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Profile_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_75));
      }
      *GoodEnough_12 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__test_dependence_2_p_0(
  MR_Word Info_3,
  MR_Word CostData_4)
{
  {
    MR_bool succeeded;
    MR_Word Overlap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_4, (MR_Integer) 1)));
    MR_Word ParalleliseDepConjs_6;
    MR_Word IsDependent_7;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_4, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_4, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_4, (MR_Integer) 3)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 8)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 9)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 10)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 11)));
    MR_Float Var_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)));
    MR_Integer Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)));
    MR_Integer Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6)));
    MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7)));
    MR_Integer Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 8)));
    MR_Integer Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 9)));
    MR_Float Var_33 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 10)));
    MR_Word Var_34;

    ParalleliseDepConjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 11)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 12)));
    mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Overlap_5, &IsDependent_7);
    succeeded = (ParalleliseDepConjs_6 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    if (succeeded)
    {
      succeeded = (IsDependent_7 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      succeeded = !(succeeded);
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe_update_best_complete_parallelisation_5_p_0(
  MR_Word CurSoln_6,
  MR_Word MaybeBestSolns0_7,
  MR_Word * MaybeBestSolns_8,
  MR_Word STATE_VARIABLE_Profile_0_14,
  MR_Word * STATE_VARIABLE_Profile_15)
{
  {
    MR_bool succeeded;
    MR_Float CurSolnCost_10;
    MR_Integer Var_92;
    MR_Integer Var_93;
    MR_Integer Var_94;
    MR_Integer Var_95;
    MR_Integer Var_96;
    MR_Integer Var_97;

    CurSolnCost_10 = mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_cost_1_f_0(CurSoln_6);
    Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 0)));
    Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 1)));
    Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 2)));
    Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 3)));
    Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 4)));
    Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 5)));
    if ((MaybeBestSolns0_7 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MR_Word Var_30;
      MR_Integer Var_33;

      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (CurSoln_6));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBestSolns_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), base, 1) = MR_box_float(CurSolnCost_10);
      }
      Var_33 = (MR_Integer) ((MR_Unsigned) Var_95 + (MR_Unsigned) (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Profile_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_92));
      }
    }
    else
    {
      MR_Word BestSolns0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeBestSolns0_7, (MR_Integer) 0)));
      MR_Float BestCost0_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), MaybeBestSolns0_7, (MR_Integer) 1)));

      succeeded = (CurSolnCost_10 < BestCost0_12);
      if (succeeded)
      {
        MR_Word Var_16;
        MR_Integer Var_19;
        MR_Integer Var_52;
        MR_Integer Var_53;
        MR_Integer Var_55;
        MR_Integer Var_56;
        MR_Integer Var_57;
        MR_Integer Var_54;

        {
          Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (CurSoln_6));
          MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeBestSolns_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(1), base, 1) = MR_box_float(CurSolnCost_10);
        }
        Var_19 = (MR_Integer) ((MR_Unsigned) Var_95 + (MR_Unsigned) (MR_Integer) 1);
        Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 0)));
        Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 1)));
        Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 2)));
        Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 3)));
        Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 4)));
        Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 5)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_15 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_57));
        }
      }
      else
      {
        succeeded = (CurSolnCost_10 == BestCost0_12);
        if (succeeded)
        {
          MR_Word BestSolns_13;
          MR_Integer Var_23;
          MR_Integer Var_63;
          MR_Integer Var_64;
          MR_Integer Var_65;
          MR_Integer Var_67;
          MR_Integer Var_68;
          MR_Integer Var_66;

          {
            BestSolns_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), BestSolns_13, 0) = ((MR_Box) (CurSoln_6));
            MR_hl_field(MR_mktag(1), BestSolns_13, 1) = ((MR_Box) (BestSolns0_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeBestSolns_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BestSolns_13));
            MR_hl_field(MR_mktag(1), base, 1) = MR_box_float(BestCost0_12);
          }
          Var_23 = (MR_Integer) ((MR_Unsigned) Var_94 + (MR_Unsigned) (MR_Integer) 1);
          Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 0)));
          Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 1)));
          Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 2)));
          Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 3)));
          Var_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 4)));
          Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Profile_15 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_68));
          }
        }
        else
        {
          MR_Integer Var_27;
          MR_Integer Var_74;
          MR_Integer Var_75;
          MR_Integer Var_76;
          MR_Integer Var_77;
          MR_Integer Var_79;
          MR_Integer Var_78;

          *MaybeBestSolns_8 = MaybeBestSolns0_7;
          Var_27 = (MR_Integer) ((MR_Unsigned) Var_93 + (MR_Unsigned) (MR_Integer) 1);
          Var_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 0)));
          Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 1)));
          Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 2)));
          Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 3)));
          Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 4)));
          Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Profile_0_14, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Profile_15 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_79));
          }
        }
      }
    }
  }
}

static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_cost_1_f_0(
  MR_Word IncompleteParallelisation_3)
{
  {
    MR_Float Cost_4;
    MR_Word MaybeCostData_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 9)));
    MR_Word CostData_6;
    MR_Word IncompleteMetrics_7;
    MR_Word FullMetrics_8;
    MR_Float Var_26;
    MR_Float Var_27;
    MR_Float Var_28;
    MR_ArrayPtr Var_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 0)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 1)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 2)));
    MR_Integer Var_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 4)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 7)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), IncompleteParallelisation_3, (MR_Integer) 8)));
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Integer Var_30;
    MR_Float Var_31;
    MR_Float Var_32;
    MR_Float Var_33;
    MR_Float Var_34;
    MR_Float Var_35;
    MR_Float Var_36;
    MR_Float Var_37;

    if ((MaybeCostData_5 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par", (MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_find_best_par.incomplete_parallelisation_cost\'/1", (MR_String) "incomplete parallelisation has no cost data");
    }
    else
      CostData_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCostData_5, (MR_Integer) 0)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_6, (MR_Integer) 0)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_6, (MR_Integer) 1)));
    IncompleteMetrics_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_6, (MR_Integer) 2)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_6, (MR_Integer) 3)));
    FullMetrics_8 = measurements__finalise_parallel_exec_metrics_1_f_0(IncompleteMetrics_7);
    Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 0)));
    Var_31 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 1)));
    Var_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 2)));
    Var_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 3)));
    Var_33 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 4)));
    Var_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 5)));
    Var_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 6)));
    Var_36 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 7)));
    Var_37 = MR_unbox_float((MR_hl_field(MR_mktag(0), FullMetrics_8, (MR_Integer) 8)));
    Var_28 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(FullMetrics_8);
    Var_27 = (Var_28 * ((MR_Float) 2.0000000000000000));
    Cost_4 = (Var_26 + Var_27);
    return Cost_4;
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__should_expand_search_2_p_0(
  MR_Word Algorithm_3,
  MR_Word Profile_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Algorithm_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word MaybeLimit_5;

    if (succeeded)
    {
      MaybeLimit_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), Algorithm_3, (MR_Integer) 0)));
      if ((MaybeLimit_5 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
      {
        MR_Integer Limit_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeLimit_5, (MR_Integer) 0)));
        MR_Integer NumIncompleteTests_7;
        MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Profile_4, (MR_Integer) 1)));
        MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Profile_4, (MR_Integer) 0)));
        MR_Integer Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Profile_4, (MR_Integer) 2)));
        MR_Integer Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Profile_4, (MR_Integer) 3)));
        MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Profile_4, (MR_Integer) 4)));
        MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Profile_4, (MR_Integer) 5)));

        NumIncompleteTests_7 = (MR_Integer) ((MR_Unsigned) Var_8 + (MR_Unsigned) Var_10);
        succeeded = (NumIncompleteTests_7 < Limit_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__find_best_parallelisation_6_p_0(
  MR_Word Info_7,
  MR_Word Location_8,
  MR_Word Goals_9,
  MR_Word * MaybeBestParallelisation_10,
  MR_Word STATE_VARIABLE_Messages_0_16,
  MR_Word * STATE_VARIABLE_Messages_17)
{
  {
    MR_bool succeeded;
    MR_Integer ConjunctionSize_12;
    MR_Word Algorithm_13;
    MR_Word MaybePreprocessedGoals_14;
    MR_Word Algorithm0_23;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Float Var_40;
    MR_Word Var_41;
    MR_Integer Var_42;
    MR_Integer Var_43;
    MR_Integer Var_44;
    MR_Integer Var_45;
    MR_Integer Var_46;
    MR_Integer Var_47;
    MR_Integer Var_48;
    MR_Integer Var_49;
    MR_Float Var_50;
    MR_Word Var_51;

    ConjunctionSize_12 = mercury__list__length_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0], Goals_9);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 6)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 7)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 8)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 9)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 10)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 11)));
    Var_40 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1)));
    Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 2)));
    Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 3)));
    Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 4)));
    Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 5)));
    Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 6)));
    Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 7)));
    Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 8)));
    Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 9)));
    Var_50 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 10)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 11)));
    Algorithm0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 12)));
    switch (MR_tag((MR_Word) Algorithm0_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Algorithm0_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Algorithm_13 = (MR_Word) MR_mkword(MR_mktag(1), &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[1]);
            }
            break;
          case (MR_Integer) 1:
            Algorithm_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer BranchesLimit_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Algorithm0_23, (MR_Integer) 0)));
          MR_Word MaybeBranchesLimit_52;

          {
            MaybeBranchesLimit_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeBranchesLimit_52, 0) = ((MR_Box) (BranchesLimit_24));
          }
          {
            Algorithm_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Algorithm_13, 0) = ((MR_Box) (MaybeBranchesLimit_52));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer SizeLimit_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Algorithm0_23, (MR_Integer) 0)));

          succeeded = (SizeLimit_26 < ConjunctionSize_12);
          if (succeeded)
            Algorithm_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
          {
            Algorithm_13 = (MR_Word) MR_mkword(MR_mktag(1), &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[1]);
          }
        }
        break;
    }
    mdprof_fb__automatic_parallelism__autopar_find_best_par__preprocess_conjunction_5_p_0(Goals_9, &MaybePreprocessedGoals_14, Location_8, STATE_VARIABLE_Messages_0_16, STATE_VARIABLE_Messages_17);
    if ((MaybePreprocessedGoals_14 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *MaybeBestParallelisation_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word PreprocessedGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePreprocessedGoals_14, (MR_Integer) 0)));

      mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0(Info_7, Algorithm_13, PreprocessedGoals_15, MaybeBestParallelisation_10);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0(
  MR_Word Info_6,
  MR_Word Algorithm_8,
  MR_Word PreprocessedGoals_9,
  MR_Word * MaybeBestParallelisation_10)
{
  while (MR_TRUE)
  {
    MR_Word EqualBestSolns_19;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Integer GenParTime_18;
    MR_Box conv1_Var_51;
    MR_Word Profile_20;

    // setup for model_det tailcalls optimized into a loop
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (Algorithm_8));
    }
    mercury__benchmarking__benchmark_det_5_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goals_for_parallelisation_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[1], Var_50, ((MR_Box) (PreprocessedGoals_9)), &conv1_Var_51, (MR_Integer) 1, &GenParTime_18);
    Var_51 = ((MR_Word) conv1_Var_51);
    EqualBestSolns_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0)));
    Profile_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1)));
    if ((EqualBestSolns_19 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      MR_Word ParalleliseDepConjs_24;
      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
      MR_Word Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
      MR_Word Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
      MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
      MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
      MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
      MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
      MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)));
      MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 8)));
      MR_Word Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 9)));
      MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 10)));
      MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 11)));
      MR_Float Var_106 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 0)));
      MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 1)));
      MR_Integer Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 2)));
      MR_Integer Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 3)));
      MR_Integer Var_110 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 4)));
      MR_Integer Var_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 5)));
      MR_Integer Var_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 6)));
      MR_Integer Var_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 7)));
      MR_Integer Var_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 8)));
      MR_Integer Var_115 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 9)));
      MR_Float Var_116 = MR_unbox_float((MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 10)));
      MR_Word Var_117;

      ParalleliseDepConjs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 11)));
      Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_72, (MR_Integer) 12)));
      if ((ParalleliseDepConjs_24 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        MR_Word UpdatedInfo_26;
        MR_Word Var_75;
        MR_Word next_value_of_Info_6;

        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = MR_box_float(Var_106);
          MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Var_107));
          MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) (Var_108));
          MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (Var_110));
          MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) (Var_111));
          MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (Var_112));
          MR_hl_field(MR_mktag(0), Var_75, 7) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(0), Var_75, 8) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(0), Var_75, 9) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(0), Var_75, 10) = MR_box_float(Var_116);
          MR_hl_field(MR_mktag(0), Var_75, 11) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[0])));
          MR_hl_field(MR_mktag(0), Var_75, 12) = ((MR_Box) (Var_117));
        }
        {
          UpdatedInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 0) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 1) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 2) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 3) = ((MR_Box) (Var_97));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 4) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 5) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 6) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 7) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 8) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 9) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 10) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(0), UpdatedInfo_26, 11) = ((MR_Box) (Var_105));
        }
        // direct tailcall eliminated
        next_value_of_Info_6 = UpdatedInfo_26;
        Info_6 = next_value_of_Info_6;
        continue;
      }
      else
        *MaybeBestParallelisation_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word BestIncompleteParallelisation_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), EqualBestSolns_19, (MR_Integer) 0)));
      MR_Word BestParallelisation_23;
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), EqualBestSolns_19, (MR_Integer) 1)));

      mdprof_fb__automatic_parallelism__autopar_find_best_par__finalise_parallelisation_2_p_0(BestIncompleteParallelisation_21, &BestParallelisation_23);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBestParallelisation_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BestParallelisation_23));
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__finalise_parallelisation_2_p_0(
  MR_Word Incomplete_3,
  MR_Word * Best_4)
{
  {
    MR_Word GoalsBefore_5;
    MR_Word GoalsAfter_6;
    MR_Word MaybeCostData_7;
    MR_Word CostData_8;
    MR_Word Overlap_10;
    MR_Word Metrics0_11;
    MR_Word Metrics_13;
    MR_Word IsDependent_14;
    MR_Word ParConjs_15;
    MR_ArrayPtr Var_19;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Integer Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_9;
    MR_Word Var_12;

    GoalsBefore_5 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_before_1_f_0(Incomplete_3);
    GoalsAfter_6 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_after_1_f_0(Incomplete_3);
    Var_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 0)));
    Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 1)));
    Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 2)));
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 3)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 4)));
    Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 5)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 6)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 7)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 8)));
    MaybeCostData_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Incomplete_3, (MR_Integer) 9)));
    if ((MaybeCostData_7 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.finalise_parallelisation\'/2", (MR_String) "parallelisation has no cost data");
        return;
      }
    }
    else
      CostData_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCostData_7, (MR_Integer) 0)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 0)));
    Overlap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 1)));
    Metrics0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 2)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CostData_8, (MR_Integer) 3)));
    Metrics_13 = measurements__finalise_parallel_exec_metrics_1_f_0(Metrics0_11);
    mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Overlap_10, &IsDependent_14);
    ParConjs_15 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_1_f_0(Incomplete_3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Best_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalsBefore_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ParConjs_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GoalsAfter_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IsDependent_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Metrics_13));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Left_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word VarSet0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word IsDependent0_7;
      MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Left_3, &IsDependent0_7);
      if ((IsDependent0_7 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
      {
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, VarSet0_5);
        if (succeeded)
          *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarSet0_5));
          }
      }
      else
      {
        MR_Word VarSetLeft_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), IsDependent0_7, (MR_Integer) 0)));
        MR_Word VarSet_9;

        VarSet_9 = mercury__set__union_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, VarSet0_5, VarSetLeft_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (VarSet_9));
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__preprocess_conjunction_5_p_0(
  MR_Word Goals_6,
  MR_Word * MaybeGoalsForParallelisation_7,
  MR_Word Location_8,
  MR_Word STATE_VARIABLE_Messages_0_25,
  MR_Word * STATE_VARIABLE_Messages_26)
{
  {
    MR_bool succeeded;
    MR_ArrayPtr GoalsArray_10;
    MR_Word DependencyGraphs_11;
    MR_Word CostlyGoalsIndexes_12;
    MR_Integer FirstCostlyGoalIndex_16;
    MR_Integer LastCostlyGoalIndex_17;
    MR_Word Detism_18;
    MR_Word Graph0_62;
    MR_Word Graph_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_ArrayPtr conv0_GoalsArray_10;
    MR_Word _VarDepMap_63;
    MR_Integer FirstCostlyGoalIndexPrime_13;
    MR_Integer LastCostlyGoalIndexPrime_15;
    MR_Word TypeCtorInfo_48_48;
    MR_Word OtherIndexes_14;
    MR_Box conv1_LastCostlyGoalIndexPrime_15;

    conv0_GoalsArray_10 = mercury__array__from_list_1_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0], Goals_6);
    GoalsArray_10 = (MR_ArrayPtr) conv0_GoalsArray_10;
    Graph0_62 = mercury__digraph__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    Var_66 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0(Goals_6, (MR_Integer) 1, Var_66, &_VarDepMap_63, Graph0_62, &Graph_64);
    Var_67 = mercury__digraph__tc_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, Graph_64);
    {
      DependencyGraphs_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DependencyGraphs_11, 0) = ((MR_Box) (Graph_64));
      MR_hl_field(MR_mktag(0), DependencyGraphs_11, 1) = ((MR_Box) (Var_67));
    }
    mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goals_3_p_0(Goals_6, (MR_Integer) 0, &CostlyGoalsIndexes_12);
    succeeded = ((MR_tag((MR_Word) CostlyGoalsIndexes_12)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      FirstCostlyGoalIndexPrime_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), CostlyGoalsIndexes_12, (MR_Integer) 0)));
      OtherIndexes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), CostlyGoalsIndexes_12, (MR_Integer) 1)));
      TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      succeeded = mercury__list__last_2_p_0(TypeCtorInfo_48_48, OtherIndexes_14, &conv1_LastCostlyGoalIndexPrime_15);
      if (succeeded)
      {
        LastCostlyGoalIndexPrime_15 = ((MR_Integer) conv1_LastCostlyGoalIndexPrime_15);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      FirstCostlyGoalIndex_16 = FirstCostlyGoalIndexPrime_13;
      LastCostlyGoalIndex_17 = LastCostlyGoalIndexPrime_15;
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.preprocess_conjunction\'/5", (MR_String) "too few costly goals");
        return;
      }
    }
    mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho2_6_p_0(GoalsArray_10, FirstCostlyGoalIndex_16, LastCostlyGoalIndex_17, (MR_Integer) 0, &Detism_18);
    switch (Detism_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
      case (MR_Integer) 0:
        {
          MR_Word RevGoalGroups_19;
          MR_Word GoalGroups_20;
          MR_Word FirstCostlyGoal_21;
          MR_Word Cost_22;
          MR_Integer NumCalls_23;
          MR_Word GoalsForParallelisation_24;
          MR_Word Var_37;
          MR_Box conv2_FirstCostlyGoal_21;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;

          mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho1_6_p_0(GoalsArray_10, FirstCostlyGoalIndex_16, LastCostlyGoalIndex_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &RevGoalGroups_19);
          mercury__list__reverse_2_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[1], RevGoalGroups_19, &GoalGroups_20);
          conv2_FirstCostlyGoal_21 = mercury__array__lookup_2_f_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0], (MR_ArrayPtr) GoalsArray_10, FirstCostlyGoalIndex_16);
          FirstCostlyGoal_21 = ((MR_Word) conv2_FirstCostlyGoal_21);
          Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstCostlyGoal_21, (MR_Integer) 0)));
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstCostlyGoal_21, (MR_Integer) 1)));
          Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstCostlyGoal_21, (MR_Integer) 2)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0)));
          Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1)));
          Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 2)));
          Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 3)));
          Cost_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 4)));
          Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 5)));
          Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 6)));
          Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 7)));
          NumCalls_23 = measurements__goal_cost_get_calls_1_f_0(Cost_22);
          {
            GoalsForParallelisation_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GoalsForParallelisation_24, 0) = ((MR_Box) (GoalsArray_10));
            MR_hl_field(MR_mktag(0), GoalsForParallelisation_24, 1) = ((MR_Box) (FirstCostlyGoalIndex_16));
            MR_hl_field(MR_mktag(0), GoalsForParallelisation_24, 2) = ((MR_Box) (LastCostlyGoalIndex_17));
            MR_hl_field(MR_mktag(0), GoalsForParallelisation_24, 3) = ((MR_Box) (GoalGroups_20));
            MR_hl_field(MR_mktag(0), GoalsForParallelisation_24, 4) = ((MR_Box) (DependencyGraphs_11));
            MR_hl_field(MR_mktag(0), GoalsForParallelisation_24, 5) = ((MR_Box) (CostlyGoalsIndexes_12));
            MR_hl_field(MR_mktag(0), GoalsForParallelisation_24, 6) = ((MR_Box) (NumCalls_23));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeGoalsForParallelisation_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GoalsForParallelisation_24));
          }
          *STATE_VARIABLE_Messages_26 = STATE_VARIABLE_Messages_0_25;
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 7:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word Var_33;

          *MaybeGoalsForParallelisation_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Detism_18));
          }
          message__append_message_4_p_0(Location_8, Var_33, STATE_VARIABLE_Messages_0_25, STATE_VARIABLE_Messages_26);
        }
        break;
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho2_6_p_0(
  MR_ArrayPtr Array_8,
  MR_Integer Index_9,
  MR_Integer Last_10,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 <= Last_10);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Word X_12;
      MR_Word STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Box conv0_X_12;
      MR_Integer next_value_of_Index_9;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      mercury__array__lookup_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0], (MR_ArrayPtr) Array_8, Index_9, &conv0_X_12);
      X_12 = ((MR_Word) conv0_X_12);
      mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0(X_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Index_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_15_15;
      Index_9 = next_value_of_Index_9;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    mdbcomp__program_representation__detism_committed_choice_2_p_0((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__FinalDetism_17, &(env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Var_26);
    (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CommittedChoice_16 == (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Var_26);
    if ((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded)
      mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        mdbcomp__program_representation__detism_components_3_p_1(&(env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__FinalDetism_17, (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14, (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CanFail_15, mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_2, env_ptr);
        (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Detism_0_18,
  MR_Word * STATE_VARIABLE_Detism_19)
{
  {
    struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s env;

    {
      MR_Word Detism_7;
      MR_Word Solutions0_8;
      MR_Word CanFail0_9;
      MR_Word CommittedChoice0_10;
      MR_Word GoalSolutions_11;
      MR_Word GoalCanFail_12;
      MR_Word GoalCommittedChoice_13;
      MR_Word Var_24;
      MR_Word Var_25;

      mdbcomp__program_representation__detism_components_3_p_0(STATE_VARIABLE_Detism_0_18, &Solutions0_8, &CanFail0_9);
      mdbcomp__program_representation__detism_committed_choice_2_p_0(STATE_VARIABLE_Detism_0_18, &CommittedChoice0_10);
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
      Detism_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 2)));
      mdbcomp__program_representation__detism_components_3_p_0(Detism_7, &GoalSolutions_11, &GoalCanFail_12);
      mdbcomp__program_representation__detism_committed_choice_2_p_0(Detism_7, &GoalCommittedChoice_13);
      switch (GoalSolutions_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          switch (Solutions0_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14 = GoalSolutions_11;
              break;
            case (MR_Integer) 0:
              (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14 = (MR_Integer) 0;
              break;
          }
          break;
        case (MR_Integer) 1:
          (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14 = Solutions0_8;
          break;
        case (MR_Integer) 0:
          (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14 = (MR_Integer) 0;
          break;
      }
      switch (GoalCanFail_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CanFail_15 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CanFail_15 = CanFail0_9;
          break;
      }
      switch (GoalCommittedChoice_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CommittedChoice_16 = CommittedChoice0_10;
          break;
        case (MR_Integer) 1:
          (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CommittedChoice_16 = (MR_Integer) 1;
          break;
      }
      mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_3(&env);
      if ((env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded)
        *STATE_VARIABLE_Detism_19 = (env).mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__FinalDetism_17;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.goal_accumulate_detism\'/4", (MR_String) "cannot compute detism from components.");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho1_6_p_0(
  MR_ArrayPtr Array_8,
  MR_Integer Index_9,
  MR_Integer Last_10,
  MR_Word STATE_VARIABLE_Acc_0_13,
  MR_Word * STATE_VARIABLE_Acc_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 <= Last_10);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      MR_Word X_12;
      MR_Word STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Word Costly_26;
      MR_Word GoalClassification_27;
      MR_Word GoalGroup_28;
      MR_Word Var_29;
      MR_Box conv0_X_12;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Integer next_value_of_Index_9;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      mercury__array__lookup_3_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0], (MR_ArrayPtr) Array_8, Index_9, &conv0_X_12);
      X_12 = ((MR_Word) conv0_X_12);
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 0)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 1)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), X_12, (MR_Integer) 2)));
      mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(Var_29, &Costly_26);
      switch (Costly_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          GoalClassification_27 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          GoalClassification_27 = (MR_Integer) 0;
          break;
      }
      {
        GoalGroup_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), GoalGroup_28, 0) = ((MR_Box) (Index_9));
        MR_hl_field(MR_mktag(0), GoalGroup_28, 1) = ((MR_Box) (GoalClassification_27));
      }
      {
        STATE_VARIABLE_Acc_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_15_15, 0) = ((MR_Box) (GoalGroup_28));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_15_15, 1) = ((MR_Box) (STATE_VARIABLE_Acc_0_13));
      }
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_Index_9 = Var_16;
      next_value_of_STATE_VARIABLE_Acc_0_13 = STATE_VARIABLE_Acc_15_15;
      Index_9 = next_value_of_Index_9;
      STATE_VARIABLE_Acc_0_13 = next_value_of_STATE_VARIABLE_Acc_0_13;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_14 = STATE_VARIABLE_Acc_0_13;
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_46;

    mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph__296__1_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_LambdaHeadVar__3_46);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_46));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_41;

    mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph__282__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_LambdaHeadVar__3_41);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_41));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarDepMap_0_3,
  MR_Word * STATE_VARIABLE_VarDepMap_4,
  MR_Word STATE_VARIABLE_Graph_0_5,
  MR_Word * STATE_VARIABLE_Graph_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
    {
      *STATE_VARIABLE_Graph_6 = STATE_VARIABLE_Graph_0_5;
      *STATE_VARIABLE_VarDepMap_4 = STATE_VARIABLE_VarDepMap_0_3;
    }
    else
    {
      MR_Word PG_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PGs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word InstMapInfo_19;
      MR_Word RefedVars_20;
      MR_Word ThisConjKey_21;
      MR_Word MaybeAddEdge_22;
      MR_Word InstVars_28;
      MR_Word InsertForConjNum_29;
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), PG_14, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_Graph_38_38;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_Graph_43_43;
      MR_Word STATE_VARIABLE_VarDepMap_47_47;
      MR_Integer Var_48;
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), PG_14, (MR_Integer) 0)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), PG_14, (MR_Integer) 1)));
      MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0)));
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Box conv1_STATE_VARIABLE_Graph_43_43;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Box conv3_STATE_VARIABLE_VarDepMap_47_47;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarDepMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Graph_0_5;

      InstMapInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1)));
      Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 2)));
      Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 3)));
      Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 4)));
      Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 5)));
      Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 6)));
      Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 7)));
      Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 0)));
      Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 1)));
      RefedVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 2)));
      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 3)));
      mercury__digraph__add_vertex_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (HeadVar__2_2)), &ThisConjKey_21, STATE_VARIABLE_Graph_0_5, &STATE_VARIABLE_Graph_38_38);
      {
        MaybeAddEdge_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeAddEdge_22, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), MaybeAddEdge_22, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0_1));
        MR_hl_field(MR_mktag(0), MaybeAddEdge_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), MaybeAddEdge_22, 3) = ((MR_Box) (STATE_VARIABLE_VarDepMap_0_3));
        MR_hl_field(MR_mktag(0), MaybeAddEdge_22, 4) = ((MR_Box) (ThisConjKey_21));
      }
      Var_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, RefedVars_20);
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[3], MaybeAddEdge_22, Var_42, ((MR_Box) (STATE_VARIABLE_Graph_38_38)), &conv1_STATE_VARIABLE_Graph_43_43);
      STATE_VARIABLE_Graph_43_43 = ((MR_Word) conv1_STATE_VARIABLE_Graph_43_43);
      Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 0)));
      Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 1)));
      Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 2)));
      InstVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstMapInfo_19, (MR_Integer) 3)));
      {
        InsertForConjNum_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InsertForConjNum_29, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), InsertForConjNum_29, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_6_p_0_2));
        MR_hl_field(MR_mktag(0), InsertForConjNum_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), InsertForConjNum_29, 3) = ((MR_Box) (HeadVar__2_2));
      }
      mercury__set__fold_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[0], InsertForConjNum_29, InstVars_28, ((MR_Box) (STATE_VARIABLE_VarDepMap_0_3)), &conv3_STATE_VARIABLE_VarDepMap_47_47);
      STATE_VARIABLE_VarDepMap_47_47 = ((MR_Word) conv3_STATE_VARIABLE_VarDepMap_47_47);
      Var_48 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = PGs_15;
      next_value_of_HeadVar__2_2 = Var_48;
      next_value_of_STATE_VARIABLE_VarDepMap_0_3 = STATE_VARIABLE_VarDepMap_47_47;
      next_value_of_STATE_VARIABLE_Graph_0_5 = STATE_VARIABLE_Graph_43_43;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarDepMap_0_3 = next_value_of_STATE_VARIABLE_VarDepMap_0_3;
      STATE_VARIABLE_Graph_0_5 = next_value_of_STATE_VARIABLE_Graph_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdprof_fb__automatic_parallelism__autopar_find_best_par__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_find_best_par__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_alg_for_finding_best_par_simple_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_best_solutions_1);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_full_parallelisation_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_group_1);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goals_for_parallelisation_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_is_good_enough_0);
}

void mercury__mdprof_fb__automatic_parallelism__autopar_find_best_par__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_find_best_par__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_fb.automatic_parallelism.autopar_find_best_par.
