/*
** Automatically generated from `autopar_find_best_par.m'
** by the Mercury compiler,
** version rotd-2023-06-06
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
#include "coverage.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_calc_overlap.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"



struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s {
  MR_bool mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CanFail_15;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CommittedChoice_16;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__FinalDetism_17;
  jmp_buf mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_Word mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Var_25;
};


static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

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

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_goal_classification_0[2];

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

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_is_good_enough_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_is_good_enough_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_is_good_enough_0[2];

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_1;

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_maybe_add_choice_point_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_maybe_add_choice_point_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_maybe_add_choice_point_0[2];

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph_for_conjunct__316__1_4_p_0(
  MR_Integer ConjNum_8,
  MR_Integer LambdaHeadVar__1_34,
  MR_Word LambdaHeadVar__2_35,
  MR_Word * LambdaHeadVar__3_36);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph_for_conjunct__300__1_5_p_0(
  MR_Word ThisConjKey_13,
  MR_Word STATE_VARIABLE_ProducerMap_0_23,
  MR_Integer LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____producer_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____producer_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____maybe_add_choice_point_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____maybe_add_choice_point_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
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
mdprof_fb__automatic_parallelism__autopar_find_best_par__is_incomplete_parallelisation_good_enough_7_p_0(
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

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__may_add_choice_point_2_f_0(
  MR_Word Algorithm_4,
  MR_Word Profile_5);

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
mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarProducerMap_0_3,
  MR_Word * STATE_VARIABLE_VarProducerMap_4,
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

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____maybe_add_choice_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____maybe_add_choice_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____producer_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____producer_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[11][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[2][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[2][1];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_4[1][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_5[1][8];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[2][7];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_group_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[7]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[4])),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_4[1][6] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_alg_for_finding_best_par_simple_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goals_for_parallelisation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__pair__pti_pair_2__plain_list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0__plain_mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__pair__pti_pair_2__plain_list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0__plain_mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_alg_for_finding_best_par_simple_0_0[1] = { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe__ti_maybe_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_0 = {
  (MR_String) "affbps_complete",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_alg_for_finding_best_par_simple_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_1 = {
  (MR_String) "affbps_greedy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_1 };

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_1[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_alg_for_finding_best_par_simple_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_alg_for_finding_best_par_simple_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_alg_for_finding_best_par_simple_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "alg_for_finding_best_par_simple",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_alg_for_finding_best_par_simple_0 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_alg_for_finding_best_par_simple_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_alg_for_finding_best_par_simple_0,

};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_0 = {
  (MR_String) "no_best_solutions",
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

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_best_solutions_1_1[2] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_best_solutions_1_1[2] = {
  (MR_String) "bs_solutions",
  (MR_String) "bs_objective_value"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_1 = {
  (MR_String) "best_solutions",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_best_solutions_1_1,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_best_solutions_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_0 };

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_1[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_best_solutions_1_1 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_best_solutions_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_best_solutions_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "best_solutions",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_best_solutions_1 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_best_solutions_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_best_solutions_1,

};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_bnb_profile_0_0[6] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_bnb_profile_0_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_bnb_profile_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_bnb_profile_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_bnb_profile_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_bnb_profile_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_bnb_profile_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_bnb_profile_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_bnb_profile_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_bnb_profile_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_bnb_profile_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "bnb_profile",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_bnb_profile_0 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_bnb_profile_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_bnb_profile_0,

};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_full_parallelisation_0_0[5] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__feedback__automatic_parallelism__ti_seq_conj_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_conjuncts_are_dependent_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_parallel_exec_metrics_0)
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
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_full_parallelisation_0_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_full_parallelisation_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_full_parallelisation_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_full_parallelisation_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_full_parallelisation_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_full_parallelisation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_full_parallelisation_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_full_parallelisation_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_full_parallelisation_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_full_parallelisation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "full_parallelisation",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_full_parallelisation_0 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_full_parallelisation_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_full_parallelisation_0,

};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_0 = {
  (MR_String) "gc_cheap_goals",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_goal_classification_0_1 = {
  (MR_String) "gc_costly_goals",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_goal_classification_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "goal_classification",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_goal_classification_0 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_goal_classification_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_classification_0,

};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_0[2] = {
  (MR_String) "ggs_index",
  (MR_String) "ggs_abstract"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_0 = {
  (MR_String) "gg_single",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_1[3] = {
  (MR_String) "ggm_index",
  (MR_String) "ggm_count",
  (MR_String) "ggm_abstract"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_1 = {
  (MR_String) "gg_multiple",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goal_group_1_1,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goal_group_1_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_0 };

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_1[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goal_group_1_1 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goal_group_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goal_group_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "goal_group",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goal_group_1 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goal_group_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goal_group_1,

};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0 = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_group_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goals_for_parallelisation_0_0[7] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_find_best_par__ti_goal_group_1mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goal_classification_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependency_graphs_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_types_goals_for_parallelisation_0_0,
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__field_names_goals_for_parallelisation_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goals_for_parallelisation_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goals_for_parallelisation_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goals_for_parallelisation_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_stag_ordered_goals_for_parallelisation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goals_for_parallelisation_0[1] = { &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_functor_desc_goals_for_parallelisation_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goals_for_parallelisation_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goals_for_parallelisation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "goals_for_parallelisation",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_name_ordered_goals_for_parallelisation_0 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__du_ptag_ordered_goals_for_parallelisation_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_goals_for_parallelisation_0,

};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_0 = {
  (MR_String) "is_not_good_enough",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_is_good_enough_0_1 = {
  (MR_String) "is_good_enough",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_is_good_enough_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "is_good_enough",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_is_good_enough_0 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_is_good_enough_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_is_good_enough_0,

};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_0 = {
  (MR_String) "do_not_add_choice_point",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_1 = {
  (MR_String) "add_choice_point",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_maybe_add_choice_point_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_0,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_maybe_add_choice_point_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_1,
  &mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_functor_desc_maybe_add_choice_point_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_maybe_add_choice_point_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_maybe_add_choice_point_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____maybe_add_choice_point_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____maybe_add_choice_point_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "maybe_add_choice_point",
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_name_ordered_maybe_add_choice_point_0 },
  { mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__enum_ordinal_ordered_maybe_add_choice_point_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__functor_number_map_maybe_add_choice_point_0,

};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_producer_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____producer_map_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____producer_map_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_find_best_par",
  (MR_String) "producer_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph_for_conjunct__316__1_4_p_0(
  MR_Integer ConjNum_8,
  MR_Integer LambdaHeadVar__1_34,
  MR_Word LambdaHeadVar__2_35,
  MR_Word * LambdaHeadVar__3_36)
{
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LambdaHeadVar__1_34, ((MR_Box) (ConjNum_8)), LambdaHeadVar__2_35, LambdaHeadVar__3_36);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph_for_conjunct__300__1_5_p_0(
  MR_Word ThisConjKey_13,
  MR_Word STATE_VARIABLE_ProducerMap_0_23,
  MR_Integer LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  MR_bool succeeded;
  MR_Integer ProducerConjNum_17;
  MR_Box conv0_ProducerConjNum_17;

  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_ProducerMap_0_23, LambdaHeadVar__1_29, &conv0_ProducerConjNum_17);
  if (succeeded)
  {
    ProducerConjNum_17 = ((MR_Integer) (conv0_ProducerConjNum_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ProducerKey_18;

    mercury__digraph__lookup_key_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LambdaHeadVar__2_30, ((MR_Box) (ProducerConjNum_17)), &ProducerKey_18);
    mercury__digraph__add_edge_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ProducerKey_18, ThisConjKey_13, LambdaHeadVar__2_30, LambdaHeadVar__3_31);
  }
  else
    *LambdaHeadVar__3_31 = LambdaHeadVar__2_30;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____producer_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____producer_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____maybe_add_choice_point_0_0(
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
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____maybe_add_choice_point_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0(
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
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_ArrayPtr ArgX1_4 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_ArrayPtr ArgY1_5 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[9]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[10]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
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
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_22_22;
    MR_ArrayPtr ArgX1_3 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_ArrayPtr ArgY1_4 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]), (MR_ArrayPtr) (ArgX1_3), (MR_ArrayPtr) (ArgY1_4));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[10]);
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

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Box Var_33 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Integer ArgY1_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgY2_23 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Box ArgY3_26 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2));
      MR_Word SubResult1_21;

      succeeded = (Var_35 < ArgY1_20);
      if (succeeded)
      {
        SubResult1_21 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_35 > ArgY1_20);
        if (succeeded)
        {
          SubResult1_21 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_21 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_21;
      else
      {
        MR_Word SubResult2_24;

        succeeded = (Var_34 < ArgY2_23);
        if (succeeded)
        {
          SubResult2_24 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_34 > ArgY2_23);
          if (succeeded)
          {
            SubResult2_24 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_24 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_24;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_T_29, HeadVar__1_1, Var_33, ArgY3_26);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Box Var_36 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
    MR_Integer Var_37 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1));
      MR_Word SubResult1_6;

      succeeded = (Var_37 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_37 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0(TypeInfo_for_T_29, HeadVar__1_1, Var_36, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_8;
    MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_10;
    MR_Box ArgX3_11 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2));
    MR_Box ArgY3_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_12 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2));
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
    MR_Box ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0(
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
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[8]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mdbcomp__feedback__automatic_parallelism____Compare____conjuncts_are_dependent_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mdbcomp__feedback__automatic_parallelism____Compare____parallel_exec_metrics_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
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
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[6]);
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

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
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
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

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

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
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
    MR_Float Var_19 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Float ArgY2_12 = MR_unbox_float((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
      MR_Word SubResult1_10;

      mercury__list____Compare____list_1_0(TypeInfo_for_T_15, &SubResult1_10, Var_20, ArgY1_9);
      succeeded = (SubResult1_10 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_10;
      else
        mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, Var_19, ArgY2_12);
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Float ArgX2_7 = MR_unbox_float((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1)));
    MR_Float ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = MR_unbox_float((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1)));
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = (ArgX2_7 == ArgY2_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_4_p_0(
  MR_Word Info_5,
  MR_Word Algorithm_6,
  MR_Word GoalsForParallelisation_7,
  MR_Word * HeadVar__4_4)
{
  MR_Word EqualBestSolns_8;
  MR_Word FinalProfile_9;
  MR_Word STATE_VARIABLE_GoalGroups_24_24 = ((MR_Word) ((MR_hl_field(0, GoalsForParallelisation_7, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_GoalGroups_30_30;
  MR_Word STATE_VARIABLE_IncompleteParallelisation_33_33;
  MR_Word STATE_VARIABLE_MaybeBestSolns_42_42;
  MR_ArrayPtr GoalsArray_63 = ((MR_ArrayPtr) ((MR_hl_field(0, GoalsForParallelisation_7, (MR_Integer) 0))));
  MR_Integer FirstParGoal_64 = ((MR_Integer) ((MR_hl_field(0, GoalsForParallelisation_7, (MR_Integer) 1))));
  MR_Integer LastParGoal_65 = ((MR_Integer) ((MR_hl_field(0, GoalsForParallelisation_7, (MR_Integer) 2))));
  MR_Integer NumCalls_66 = ((MR_Integer) ((MR_hl_field(0, GoalsForParallelisation_7, (MR_Integer) 6))));
  MR_Word DependencyGraphs_67 = ((MR_Word) ((MR_hl_field(0, GoalsForParallelisation_7, (MR_Integer) 4))));

  if ((STATE_VARIABLE_GoalGroups_24_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.generate_parallelisations\'/4", (MR_String) "no goal groups");
      return;
    }
  else
  {
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalGroups_24_24, (MR_Integer) 1))));
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_GoalGroups_24_24, (MR_Integer) 0))));

    if ((Var_61 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.generate_parallelisations\'/4", (MR_String) "only one goal group");
        return;
      }
    else
    {
      MR_Integer Index_18;
      MR_Integer Num_19;
      MR_Integer LastScheduledGoal_21;
      MR_Integer Var_31;

      STATE_VARIABLE_GoalGroups_30_30 = Var_61;
      if (((MR_tag((MR_Word) Var_62)) == (MR_Integer) 1))
      {
        Index_18 = ((MR_Integer) ((MR_hl_field(1, Var_62, (MR_Integer) 0))));
        Num_19 = ((MR_Integer) ((MR_hl_field(1, Var_62, (MR_Integer) 1))));
      }
      else
      {
        Index_18 = ((MR_Integer) ((MR_hl_field(0, Var_62, (MR_Integer) 0))));
        Num_19 = (MR_Integer) 1;
      }
      Var_31 = (MR_Integer) ((MR_Unsigned) Index_18 + (MR_Unsigned) Num_19);
      LastScheduledGoal_21 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
      {
        STATE_VARIABLE_IncompleteParallelisation_33_33 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 0) = ((MR_Box) (GoalsArray_63));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 1) = ((MR_Box) (FirstParGoal_64));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 2) = ((MR_Box) (LastParGoal_65));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 3) = ((MR_Box) (LastScheduledGoal_21));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 5) = ((MR_Box) (NumCalls_66));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 6) = ((MR_Box) (DependencyGraphs_67));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_33_33, 9) = ((MR_Box) ((MR_Word) ((MR_Unsigned) 0U)));
      }
    }
  }
  mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_loop_8_p_0(Info_5, Algorithm_6, STATE_VARIABLE_GoalGroups_30_30, STATE_VARIABLE_IncompleteParallelisation_33_33, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeBestSolns_42_42, (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_4[0]), &FinalProfile_9);
  if ((STATE_VARIABLE_MaybeBestSolns_42_42 == (MR_Word) ((MR_Unsigned) 0U)))
    EqualBestSolns_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
    EqualBestSolns_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeBestSolns_42_42, (MR_Integer) 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (EqualBestSolns_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (FinalProfile_9));
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
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer Var_19;

      Var_19 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_parallel_conjuncts_1_f_0(STATE_VARIABLE_IncompleteParallelisation_0_4);
      succeeded = (Var_19 >= (MR_Integer) 2);
      if (succeeded)
        mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe_update_best_complete_parallelisation_5_p_0(STATE_VARIABLE_IncompleteParallelisation_0_4, STATE_VARIABLE_MaybeBestSolns_0_5, STATE_VARIABLE_MaybeBestSolns_6, STATE_VARIABLE_Profile_0_7, STATE_VARIABLE_Profile_8);
      else
      {
        MR_Integer Var_24;
        MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_7, (MR_Integer) 5))));
        MR_Integer Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_7, (MR_Integer) 0))));
        MR_Integer Var_73 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_7, (MR_Integer) 1))));
        MR_Integer Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_7, (MR_Integer) 2))));
        MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_7, (MR_Integer) 3))));
        MR_Integer Var_76 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_7, (MR_Integer) 4))));

        Var_24 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_73));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_74));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_75));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_76));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
        }
        *STATE_VARIABLE_MaybeBestSolns_6 = STATE_VARIABLE_MaybeBestSolns_0_5;
      }
    }
    else
    {
      MR_Word GoalGroup_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word GoalGroups_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer LastScheduledGoal0_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 3))));
      MR_Integer Num_36;
      MR_Integer LastScheduledGoal_38;
      MR_Word MaybeAddToLastCost_41;
      MR_Word ParConjsRevLastGoal0_42;
      MR_Word ParConjsRevLastGoal_43;
      MR_Word MaybeAddToNewCost_44;
      MR_Word Best0_47;
      MR_Word MaybeNextBest0_48;
      MR_Word Best_50;
      MR_Word BestGoodEnough_51;
      MR_Word STATE_VARIABLE_AddToLastParallelisation_62_62;
      MR_Word STATE_VARIABLE_AddToLastParallelisation_63_63;
      MR_Word STATE_VARIABLE_AddToNewParallelisation_65_65;
      MR_Word STATE_VARIABLE_AddToNewParallelisation_66_66;
      MR_Word STATE_VARIABLE_Profile_67_67;
      MR_Word STATE_VARIABLE_MaybeBestSolns_68_68;
      MR_Word STATE_VARIABLE_Profile_69_69;
      MR_ArrayPtr Var_102;
      MR_Integer Var_103;
      MR_Integer Var_104;
      MR_Integer Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Integer _Index_35;
      MR_Box conv0__Classification_37;
      MR_ArrayPtr Var_92;
      MR_Integer Var_93;
      MR_Integer Var_94;
      MR_Word Var_96;
      MR_Integer Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word NextBest0_52;
      MR_Word Var_70;

      mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_103_95_103_101_116_95_100_101_116_97_105_108_115_95_95_91_49_93_95_48_4_p_0(GoalGroup_29, &_Index_35, &Num_36, &conv0__Classification_37);
      LastScheduledGoal_38 = (MR_Integer) ((MR_Unsigned) LastScheduledGoal0_34 + (MR_Unsigned) Num_36);
      Var_92 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 0))));
      Var_93 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 1))));
      Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 2))));
      Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 4))));
      Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 5))));
      Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 6))));
      Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 7))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 8))));
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 9))));
      {
        STATE_VARIABLE_AddToLastParallelisation_62_62 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 0) = ((MR_Box) (Var_92));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 1) = ((MR_Box) (Var_93));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 2) = ((MR_Box) (Var_94));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 3) = ((MR_Box) (LastScheduledGoal_38));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 4) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 5) = ((MR_Box) (Var_97));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 6) = ((MR_Box) (Var_98));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 7) = ((MR_Box) (Var_99));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 8) = ((MR_Box) (Var_100));
        MR_hl_field(0, STATE_VARIABLE_AddToLastParallelisation_62_62, 9) = ((MR_Box) (Var_101));
      }
      mdprof_fb__automatic_parallelism__autopar_find_best_par__update_incomplete_parallelisation_cost_4_p_0(Info_1, STATE_VARIABLE_AddToLastParallelisation_62_62, &STATE_VARIABLE_AddToLastParallelisation_63_63, &MaybeAddToLastCost_41);
      Var_102 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 0))));
      Var_103 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 1))));
      Var_104 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 2))));
      ParConjsRevLastGoal0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 4))));
      Var_106 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 5))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 6))));
      Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 7))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 8))));
      Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IncompleteParallelisation_0_4, (MR_Integer) 9))));
      {
        ParConjsRevLastGoal_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ParConjsRevLastGoal_43, 0) = ((MR_Box) (LastScheduledGoal0_34));
        MR_hl_field(1, ParConjsRevLastGoal_43, 1) = ((MR_Box) (ParConjsRevLastGoal0_42));
      }
      {
        STATE_VARIABLE_AddToNewParallelisation_65_65 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 0) = ((MR_Box) (Var_102));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 1) = ((MR_Box) (Var_103));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 2) = ((MR_Box) (Var_104));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 3) = ((MR_Box) (LastScheduledGoal_38));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 4) = ((MR_Box) (ParConjsRevLastGoal_43));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 5) = ((MR_Box) (Var_106));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 6) = ((MR_Box) (Var_107));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 7) = ((MR_Box) (Var_108));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 8) = ((MR_Box) (Var_109));
        MR_hl_field(0, STATE_VARIABLE_AddToNewParallelisation_65_65, 9) = ((MR_Box) (Var_110));
      }
      mdprof_fb__automatic_parallelism__autopar_find_best_par__update_incomplete_parallelisation_cost_4_p_0(Info_1, STATE_VARIABLE_AddToNewParallelisation_65_65, &STATE_VARIABLE_AddToNewParallelisation_66_66, &MaybeAddToNewCost_44);
      if ((MaybeAddToLastCost_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Best0_47 = STATE_VARIABLE_AddToNewParallelisation_66_66;
        MaybeNextBest0_48 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Float AddToLastCost_45 = MR_unbox_float((MR_hl_field(1, MaybeAddToLastCost_41, (MR_Integer) 0)));

        if ((MaybeAddToNewCost_44 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Best0_47 = STATE_VARIABLE_AddToLastParallelisation_63_63;
          MaybeNextBest0_48 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Float AddToNewCost_46 = MR_unbox_float((MR_hl_field(1, MaybeAddToNewCost_44, (MR_Integer) 0)));

          succeeded = (AddToNewCost_46 > AddToLastCost_45);
          if (succeeded)
          {
            Best0_47 = STATE_VARIABLE_AddToLastParallelisation_63_63;
            {
              MaybeNextBest0_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeNextBest0_48, 0) = ((MR_Box) (STATE_VARIABLE_AddToNewParallelisation_66_66));
            }
          }
          else
          {
            Best0_47 = STATE_VARIABLE_AddToNewParallelisation_66_66;
            {
              MaybeNextBest0_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeNextBest0_48, 0) = ((MR_Box) (STATE_VARIABLE_AddToLastParallelisation_63_63));
            }
          }
        }
      }
      mdprof_fb__automatic_parallelism__autopar_find_best_par__is_incomplete_parallelisation_good_enough_7_p_0(Info_1, STATE_VARIABLE_MaybeBestSolns_0_5, Best0_47, &Best_50, STATE_VARIABLE_Profile_0_7, &STATE_VARIABLE_Profile_67_67, &BestGoodEnough_51);
      switch (BestGoodEnough_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_loop_8_p_0(Info_1, Algorithm_2, GoalGroups_30, Best_50, STATE_VARIABLE_MaybeBestSolns_0_5, &STATE_VARIABLE_MaybeBestSolns_68_68, STATE_VARIABLE_Profile_67_67, &STATE_VARIABLE_Profile_69_69);
          break;
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_MaybeBestSolns_68_68 = STATE_VARIABLE_MaybeBestSolns_0_5;
            STATE_VARIABLE_Profile_69_69 = STATE_VARIABLE_Profile_67_67;
          }
          break;
      }
      succeeded = (MaybeNextBest0_48 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NextBest0_52 = ((MR_Word) ((MR_hl_field(1, MaybeNextBest0_48, (MR_Integer) 0))));
        Var_70 = mdprof_fb__automatic_parallelism__autopar_find_best_par__may_add_choice_point_2_f_0(Algorithm_2, STATE_VARIABLE_Profile_0_7);
        succeeded = (Var_70 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        MR_Word NextBest_53;
        MR_Word NextBestGoodEnough_54;
        MR_Word STATE_VARIABLE_Profile_71_71;

        mdprof_fb__automatic_parallelism__autopar_find_best_par__is_incomplete_parallelisation_good_enough_7_p_0(Info_1, STATE_VARIABLE_MaybeBestSolns_68_68, NextBest0_52, &NextBest_53, STATE_VARIABLE_Profile_69_69, &STATE_VARIABLE_Profile_71_71, &NextBestGoodEnough_54);
        switch (NextBestGoodEnough_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__3_3 = GoalGroups_30;
              MR_Word next_value_of_STATE_VARIABLE_IncompleteParallelisation_0_4 = NextBest_53;
              MR_Word next_value_of_STATE_VARIABLE_MaybeBestSolns_0_5 = STATE_VARIABLE_MaybeBestSolns_68_68;
              MR_Word next_value_of_STATE_VARIABLE_Profile_0_7 = STATE_VARIABLE_Profile_71_71;

              // direct tailcall eliminated
              ;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              STATE_VARIABLE_IncompleteParallelisation_0_4 = next_value_of_STATE_VARIABLE_IncompleteParallelisation_0_4;
              STATE_VARIABLE_MaybeBestSolns_0_5 = next_value_of_STATE_VARIABLE_MaybeBestSolns_0_5;
              STATE_VARIABLE_Profile_0_7 = next_value_of_STATE_VARIABLE_Profile_0_7;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_MaybeBestSolns_6 = STATE_VARIABLE_MaybeBestSolns_68_68;
              *STATE_VARIABLE_Profile_8 = STATE_VARIABLE_Profile_71_71;
            }
            break;
        }
      }
      else
      {
        *STATE_VARIABLE_Profile_8 = STATE_VARIABLE_Profile_69_69;
        *STATE_VARIABLE_MaybeBestSolns_6 = STATE_VARIABLE_MaybeBestSolns_68_68;
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    *Index_2 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    *HeadVar__3_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    *P_4 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2));
  }
  else
  {
    *Index_2 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    *P_4 = (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1));
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
  MR_bool succeeded;
  MR_Word CostData_8;
  MR_Word Overlap_12;
  MR_Word ParalleliseDepConjs_13;
  MR_Word IsDependent_14;
  MR_Word Var_15;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0(Info_5, STATE_VARIABLE_IncompleteParallelisation_0_10, STATE_VARIABLE_IncompleteParallelisation_11, &CostData_8);
  Overlap_12 = ((MR_Word) ((MR_hl_field(0, CostData_8, (MR_Integer) 1))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, Info_5, (MR_Integer) 2))));
  ParalleliseDepConjs_13 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 11))));
  mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Overlap_12, &IsDependent_14);
  succeeded = (ParalleliseDepConjs_13 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (IsDependent_14 != (MR_Word) ((MR_Unsigned) 0U));
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Float Cost_9;
    MR_Word MaybeCostData_42 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_IncompleteParallelisation_11, (MR_Integer) 9))));
    MR_Word CostData_43;
    MR_Word IncompleteMetrics_44;
    MR_Word FullMetrics_45;
    MR_Float Var_60;
    MR_Float Var_61;
    MR_Float Var_62;

    if ((MaybeCostData_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_find_best_par.incomplete_parallelisation_cost\'/1", (MR_String) "incomplete parallelisation has no cost data");
        return;
      }
    else
      CostData_43 = ((MR_Word) ((MR_hl_field(1, MaybeCostData_42, (MR_Integer) 0))));
    IncompleteMetrics_44 = ((MR_Word) ((MR_hl_field(0, CostData_43, (MR_Integer) 2))));
    FullMetrics_45 = measurements__finalise_parallel_exec_metrics_1_f_0(IncompleteMetrics_44);
    Var_60 = MR_unbox_float((MR_hl_field(0, FullMetrics_45, (MR_Integer) 2)));
    Var_62 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(FullMetrics_45);
    Var_61 = (Var_62 * ((MR_Float) 2.0000000000000000));
    Cost_9 = (Var_60 + Var_61);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeCost_7 = base;
      MR_hl_field(1, base, 0) = MR_box_float(Cost_9);
    }
  }
  else
    *MaybeCost_7 = (MR_Word) ((MR_Unsigned) 0U);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__is_incomplete_parallelisation_good_enough_7_p_0(
  MR_Word Info_8,
  MR_Word MaybeBestSolns_9,
  MR_Word STATE_VARIABLE_IncompleteParallelisation_0_17,
  MR_Word * STATE_VARIABLE_IncompleteParallelisation_18,
  MR_Word STATE_VARIABLE_Profile_0_19,
  MR_Word * STATE_VARIABLE_Profile_20,
  MR_Word * GoodEnough_12)
{
  MR_bool succeeded;
  MR_Word CostData_13;

  mdprof_fb__automatic_parallelism__autopar_calc_overlap__calculate_parallel_cost_4_p_0(Info_8, STATE_VARIABLE_IncompleteParallelisation_0_17, STATE_VARIABLE_IncompleteParallelisation_18, &CostData_13);
  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par__test_dependence_2_p_0(Info_8, CostData_13);
  if (succeeded)
    if ((MaybeBestSolns_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer Var_23;
      MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 0))));
      MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 1))));
      MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 2))));
      MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 3))));
      MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 4))));
      MR_Integer Var_42 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 5))));

      Var_23 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Profile_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_40));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_41));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_42));
      }
      *GoodEnough_12 = (MR_Integer) 1;
    }
    else
    {
      MR_Float BestSolnCost_15 = MR_unbox_float((MR_hl_field(1, MaybeBestSolns_9, (MR_Integer) 1)));
      MR_Float CurIncompleteCost_16;
      MR_Integer Var_86;
      MR_Integer Var_87;

      CurIncompleteCost_16 = mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_cost_1_f_0(*STATE_VARIABLE_IncompleteParallelisation_18);
      Var_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 0))));
      Var_86 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 1))));
      succeeded = (CurIncompleteCost_16 > BestSolnCost_15);
      if (succeeded)
      {
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Var_86 + (MR_Unsigned) 1);
        MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 0))));
        MR_Integer Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 2))));
        MR_Integer Var_57 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 3))));
        MR_Integer Var_58 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 4))));
        MR_Integer Var_59 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 5))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_54));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_27));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_56));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_57));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_58));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_59));
        }
        *GoodEnough_12 = (MR_Integer) 0;
      }
      else
      {
        MR_Integer Var_31 = (MR_Integer) ((MR_Unsigned) Var_87 + (MR_Unsigned) 1);
        MR_Integer Var_66 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 1))));
        MR_Integer Var_67 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 2))));
        MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 3))));
        MR_Integer Var_69 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 4))));
        MR_Integer Var_70 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 5))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_66));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_68));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_69));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_70));
        }
        *GoodEnough_12 = (MR_Integer) 1;
      }
    }
  else
  {
    MR_Integer Var_35;
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 1))));
    MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 0))));
    MR_Integer Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 2))));
    MR_Integer Var_73 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 3))));
    MR_Integer Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 4))));
    MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_19, (MR_Integer) 5))));

    Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 + (MR_Unsigned) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Profile_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_75));
    }
    *GoodEnough_12 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__test_dependence_2_p_0(
  MR_Word Info_3,
  MR_Word CostData_4)
{
  MR_bool succeeded;
  MR_Word Overlap_5 = ((MR_Word) ((MR_hl_field(0, CostData_4, (MR_Integer) 1))));
  MR_Word ParalleliseDepConjs_6;
  MR_Word IsDependent_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 2))));

  ParalleliseDepConjs_6 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 11))));
  mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Overlap_5, &IsDependent_7);
  succeeded = (ParalleliseDepConjs_6 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (IsDependent_7 != (MR_Word) ((MR_Unsigned) 0U));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__maybe_update_best_complete_parallelisation_5_p_0(
  MR_Word CurSoln_6,
  MR_Word MaybeBestSolns0_7,
  MR_Word * MaybeBestSolns_8,
  MR_Word STATE_VARIABLE_Profile_0_14,
  MR_Word * STATE_VARIABLE_Profile_15)
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
  Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 0))));
  Var_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 1))));
  Var_95 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 2))));
  Var_94 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 3))));
  Var_93 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 4))));
  Var_92 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 5))));
  if ((MaybeBestSolns0_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_16;
    MR_Integer Var_19;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (CurSoln_6));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeBestSolns_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(1, base, 1) = MR_box_float(CurSolnCost_10);
    }
    Var_19 = (MR_Integer) ((MR_Unsigned) Var_95 + (MR_Unsigned) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Profile_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_96));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_94));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_93));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_92));
    }
  }
  else
  {
    MR_Word BestSolns0_11 = ((MR_Word) ((MR_hl_field(1, MaybeBestSolns0_7, (MR_Integer) 0))));
    MR_Float BestCost0_12 = MR_unbox_float((MR_hl_field(1, MaybeBestSolns0_7, (MR_Integer) 1)));

    succeeded = (CurSolnCost_10 < BestCost0_12);
    if (succeeded)
    {
      MR_Word Var_22;
      MR_Integer Var_25;
      MR_Integer Var_52;
      MR_Integer Var_53;
      MR_Integer Var_55;
      MR_Integer Var_56;
      MR_Integer Var_57;

      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (CurSoln_6));
        MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBestSolns_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, base, 1) = MR_box_float(CurSolnCost_10);
      }
      Var_25 = (MR_Integer) ((MR_Unsigned) Var_95 + (MR_Unsigned) 1);
      Var_52 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 0))));
      Var_53 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 1))));
      Var_55 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 3))));
      Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 4))));
      Var_57 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Profile_15 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_25));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_56));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_57));
      }
    }
    else
    {
      succeeded = (CurSolnCost_10 == BestCost0_12);
      if (succeeded)
      {
        MR_Word BestSolns_13;
        MR_Integer Var_29;
        MR_Integer Var_63;
        MR_Integer Var_64;
        MR_Integer Var_65;
        MR_Integer Var_67;
        MR_Integer Var_68;

        {
          BestSolns_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, BestSolns_13, 0) = ((MR_Box) (CurSoln_6));
          MR_hl_field(1, BestSolns_13, 1) = ((MR_Box) (BestSolns0_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeBestSolns_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (BestSolns_13));
          MR_hl_field(1, base, 1) = MR_box_float(CurSolnCost_10);
        }
        Var_29 = (MR_Integer) ((MR_Unsigned) Var_94 + (MR_Unsigned) 1);
        Var_63 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 0))));
        Var_64 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 1))));
        Var_65 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 2))));
        Var_67 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 4))));
        Var_68 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_15 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_64));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_29));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_68));
        }
      }
      else
      {
        MR_Integer Var_33;
        MR_Integer Var_74;
        MR_Integer Var_75;
        MR_Integer Var_76;
        MR_Integer Var_77;
        MR_Integer Var_79;

        *MaybeBestSolns_8 = MaybeBestSolns0_7;
        Var_33 = (MR_Integer) ((MR_Unsigned) Var_93 + (MR_Unsigned) 1);
        Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 0))));
        Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 1))));
        Var_76 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 2))));
        Var_77 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 3))));
        Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Profile_0_14, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Profile_15 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_75));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_76));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_77));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_33));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_79));
        }
      }
    }
  }
}

static MR_Float MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__incomplete_parallelisation_cost_1_f_0(
  MR_Word IncompleteParallelisation_3)
{
  MR_Float Cost_4;
  MR_Word MaybeCostData_5 = ((MR_Word) ((MR_hl_field(0, IncompleteParallelisation_3, (MR_Integer) 9))));
  MR_Word CostData_6;
  MR_Word IncompleteMetrics_7;
  MR_Word FullMetrics_8;
  MR_Float Var_23;
  MR_Float Var_24;
  MR_Float Var_25;

  if ((MaybeCostData_5 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_find_best_par.incomplete_parallelisation_cost\'/1", (MR_String) "incomplete parallelisation has no cost data");
  else
    CostData_6 = ((MR_Word) ((MR_hl_field(1, MaybeCostData_5, (MR_Integer) 0))));
  IncompleteMetrics_7 = ((MR_Word) ((MR_hl_field(0, CostData_6, (MR_Integer) 2))));
  FullMetrics_8 = measurements__finalise_parallel_exec_metrics_1_f_0(IncompleteMetrics_7);
  Var_23 = MR_unbox_float((MR_hl_field(0, FullMetrics_8, (MR_Integer) 2)));
  Var_25 = mdbcomp__feedback__automatic_parallelism__parallel_exec_metrics_get_overheads_1_f_0(FullMetrics_8);
  Var_24 = (Var_25 * ((MR_Float) 2.0000000000000000));
  Cost_4 = (Var_23 + Var_24);
  return Cost_4;
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__may_add_choice_point_2_f_0(
  MR_Word Algorithm_4,
  MR_Word Profile_5)
{
  MR_bool succeeded;
  MR_Word MayAddChoicePoint_6;

  if ((Algorithm_4 == (MR_Word) ((MR_Unsigned) 0U)))
    MayAddChoicePoint_6 = (MR_Integer) 0;
  else
  {
    MR_Word MaybeLimit_7 = ((MR_Word) ((MR_hl_field(1, Algorithm_4, (MR_Integer) 0))));

    if ((MaybeLimit_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MayAddChoicePoint_6 = (MR_Integer) 1;
    else
    {
      MR_Integer Limit_8 = ((MR_Integer) ((MR_hl_field(1, MaybeLimit_7, (MR_Integer) 0))));
      MR_Integer NumIncompleteTests_9;
      MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(0, Profile_5, (MR_Integer) 1))));
      MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(0, Profile_5, (MR_Integer) 0))));

      NumIncompleteTests_9 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) Var_12);
      succeeded = (NumIncompleteTests_9 < Limit_8);
      if (succeeded)
        MayAddChoicePoint_6 = (MR_Integer) 1;
      else
        MayAddChoicePoint_6 = (MR_Integer) 0;
    }
  }
  return MayAddChoicePoint_6;
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
  MR_bool succeeded;
  MR_Integer ConjunctionSize_12;
  MR_Word Algorithm_13;
  MR_Word MaybePreprocessedGoals_14;
  MR_Word Algorithm0_19;
  MR_Word Var_23;
  MR_ArrayPtr GoalsArray_49;
  MR_Word DependencyGraphs_50;
  MR_Word CostlyGoalsIndexes_51;
  MR_Integer FirstCostlyGoalIndex_55;
  MR_Integer LastCostlyGoalIndex_56;
  MR_Word Detism_57;
  MR_Word Graph0_87;
  MR_Word Graph_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_ArrayPtr conv0_GoalsArray_49;
  MR_Word _VarDepMap_88;
  MR_Integer FirstCostlyGoalIndexPrime_52;
  MR_Integer LastCostlyGoalIndexPrime_54;
  MR_Word TypeCtorInfo_46_83;
  MR_Word OtherIndexes_53;
  MR_Box conv1_LastCostlyGoalIndexPrime_54;

  ConjunctionSize_12 = mercury__list__length_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]), Goals_9);
  Var_23 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 2))));
  Algorithm0_19 = ((MR_Word) ((MR_hl_field(0, Var_23, (MR_Integer) 12))));
  switch (MR_tag((MR_Word) Algorithm0_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Algorithm0_19)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Algorithm_13 = (MR_Word) (MR_mkword(1, &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[0]));
          break;
        case (MR_Integer) 1:
          Algorithm_13 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer BranchesLimit_20 = ((MR_Integer) ((MR_hl_field(1, Algorithm0_19, (MR_Integer) 0))));
        MR_Word MaybeBranchesLimit_48;

        {
          MaybeBranchesLimit_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeBranchesLimit_48, 0) = ((MR_Box) (BranchesLimit_20));
        }
        {
          Algorithm_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Algorithm_13, 0) = ((MR_Box) (MaybeBranchesLimit_48));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer SizeLimit_22 = ((MR_Integer) ((MR_hl_field(2, Algorithm0_19, (MR_Integer) 0))));

        succeeded = (SizeLimit_22 < ConjunctionSize_12);
        if (succeeded)
          Algorithm_13 = (MR_Word) ((MR_Unsigned) 0U);
        else
          Algorithm_13 = (MR_Word) (MR_mkword(1, &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[0]));
      }
      break;
  }
  conv0_GoalsArray_49 = mercury__array__from_list_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]), Goals_9);
  GoalsArray_49 = (MR_ArrayPtr) (conv0_GoalsArray_49);
  Graph0_87 = mercury__digraph__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_91 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0(Goals_9, (MR_Integer) 1, Var_91, &_VarDepMap_88, Graph0_87, &Graph_89);
  Var_92 = mercury__digraph__tc_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Graph_89);
  {
    DependencyGraphs_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DependencyGraphs_50, 0) = ((MR_Box) (Graph_89));
    MR_hl_field(0, DependencyGraphs_50, 1) = ((MR_Box) (Var_92));
  }
  mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goals_3_p_0(Goals_9, (MR_Integer) 0, &CostlyGoalsIndexes_51);
  succeeded = (CostlyGoalsIndexes_51 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FirstCostlyGoalIndexPrime_52 = ((MR_Integer) ((MR_hl_field(1, CostlyGoalsIndexes_51, (MR_Integer) 0))));
    OtherIndexes_53 = ((MR_Word) ((MR_hl_field(1, CostlyGoalsIndexes_51, (MR_Integer) 1))));
    TypeCtorInfo_46_83 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    succeeded = mercury__list__last_2_p_0(TypeCtorInfo_46_83, OtherIndexes_53, &conv1_LastCostlyGoalIndexPrime_54);
    if (succeeded)
    {
      LastCostlyGoalIndexPrime_54 = ((MR_Integer) (conv1_LastCostlyGoalIndexPrime_54));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    FirstCostlyGoalIndex_55 = FirstCostlyGoalIndexPrime_52;
    LastCostlyGoalIndex_56 = LastCostlyGoalIndexPrime_54;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.preprocess_conjunction\'/5", (MR_String) "too few costly goals");
      return;
    }
  mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho2_6_p_0(GoalsArray_49, FirstCostlyGoalIndex_55, LastCostlyGoalIndex_56, (MR_Integer) 0, &Detism_57);
  switch (Detism_57) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
    case (MR_Integer) 0:
      {
        MR_Word RevGoalGroups_58;
        MR_Word GoalGroups_59;
        MR_Word FirstCostlyGoal_60;
        MR_Word Cost_61;
        MR_Integer NumCalls_62;
        MR_Word GoalsForParallelisation_63;
        MR_Word Var_72;
        MR_Box conv2_FirstCostlyGoal_60;

        mdprof_fb__automatic_parallelism__autopar_find_best_par__foldl_sub_array__ho1_6_p_0(GoalsArray_49, FirstCostlyGoalIndex_55, LastCostlyGoalIndex_56, (MR_Word) ((MR_Unsigned) 0U), &RevGoalGroups_58);
        mercury__list__reverse_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[1]), RevGoalGroups_58, &GoalGroups_59);
        conv2_FirstCostlyGoal_60 = mercury__array__lookup_2_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]), (MR_ArrayPtr) (GoalsArray_49), FirstCostlyGoalIndex_55);
        FirstCostlyGoal_60 = ((MR_Word) (conv2_FirstCostlyGoal_60));
        Var_72 = ((MR_Word) ((MR_hl_field(0, FirstCostlyGoal_60, (MR_Integer) 2))));
        Cost_61 = ((MR_Word) ((MR_hl_field(0, Var_72, (MR_Integer) 4))));
        NumCalls_62 = measurements__goal_cost_get_calls_1_f_0(Cost_61);
        {
          GoalsForParallelisation_63 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GoalsForParallelisation_63, 0) = ((MR_Box) (GoalsArray_49));
          MR_hl_field(0, GoalsForParallelisation_63, 1) = ((MR_Box) (FirstCostlyGoalIndex_55));
          MR_hl_field(0, GoalsForParallelisation_63, 2) = ((MR_Box) (LastCostlyGoalIndex_56));
          MR_hl_field(0, GoalsForParallelisation_63, 3) = ((MR_Box) (GoalGroups_59));
          MR_hl_field(0, GoalsForParallelisation_63, 4) = ((MR_Box) (DependencyGraphs_50));
          MR_hl_field(0, GoalsForParallelisation_63, 5) = ((MR_Box) (CostlyGoalsIndexes_51));
          MR_hl_field(0, GoalsForParallelisation_63, 6) = ((MR_Box) (NumCalls_62));
        }
        {
          MaybePreprocessedGoals_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybePreprocessedGoals_14, 0) = ((MR_Box) (GoalsForParallelisation_63));
        }
        *STATE_VARIABLE_Messages_17 = STATE_VARIABLE_Messages_0_16;
      }
      break;
    case (MR_Integer) 4:
    case (MR_Integer) 6:
    case (MR_Integer) 7:
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word Msg_64;

        MaybePreprocessedGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Msg_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Msg_64, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Msg_64, 1) = (MR_Box) ((MR_Unsigned) (Detism_57));
        }
        message__append_message_4_p_0(Location_8, Msg_64, STATE_VARIABLE_Messages_0_16, STATE_VARIABLE_Messages_17);
      }
      break;
  }
  if ((MaybePreprocessedGoals_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeBestParallelisation_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PreprocessedGoals_15 = ((MR_Word) ((MR_hl_field(1, MaybePreprocessedGoals_14, (MR_Integer) 0))));

    mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0(Info_7, Algorithm_13, PreprocessedGoals_15, MaybeBestParallelisation_10);
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  mdprof_fb__automatic_parallelism__autopar_find_best_par__generate_parallelisations_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
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
    MR_Word EqualBestSolns_20;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Integer GenParTime_19;
    MR_Box conv1_Var_53;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[1]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_101_115_116_95_112_97_114_97_108_108_101_108_105_115_97_116_105_111_110_95_99_111_109_112_108_101_116_101_95_98_110_98_95_95_91_50_93_95_48_5_p_0_1));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (Info_6));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) (Algorithm_8));
    }
    mercury__benchmarking__benchmark_det_5_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_goals_for_parallelisation_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[1]), Var_52, ((MR_Box) (PreprocessedGoals_9)), &conv1_Var_53, (MR_Integer) 1, &GenParTime_19);
    Var_53 = ((MR_Word) (conv1_Var_53));
    EqualBestSolns_20 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 0))));
    if ((EqualBestSolns_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ParalleliseDepConjs_25;
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 2))));
      MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 0))));
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 1))));
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 3))));
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 5))));
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 6))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 7))));
      MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 8))));
      MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 9))));
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 10))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 11))));
      MR_Float Var_111 = MR_unbox_float((MR_hl_field(0, Var_75, (MR_Integer) 0)));
      MR_Word Var_112 = ((MR_Unsigned) ((MR_hl_field(0, Var_75, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Integer Var_113 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 2))));
      MR_Integer Var_114 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 3))));
      MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 4))));
      MR_Integer Var_116 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 5))));
      MR_Integer Var_117 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 6))));
      MR_Integer Var_118 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 7))));
      MR_Integer Var_119 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 8))));
      MR_Integer Var_120 = ((MR_Integer) ((MR_hl_field(0, Var_75, (MR_Integer) 9))));
      MR_Float Var_121 = MR_unbox_float((MR_hl_field(0, Var_75, (MR_Integer) 10)));
      MR_Word Var_122;

      ParalleliseDepConjs_25 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 11))));
      Var_122 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 12))));
      if ((ParalleliseDepConjs_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word UpdatedInfo_27;
        MR_Word Var_78;
        MR_Word next_value_of_Info_6;

        {
          Var_78 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_78, 0) = MR_box_float(Var_111);
          MR_hl_field(0, Var_78, 1) = (MR_Box) ((MR_Unsigned) (Var_112));
          MR_hl_field(0, Var_78, 2) = ((MR_Box) (Var_113));
          MR_hl_field(0, Var_78, 3) = ((MR_Box) (Var_114));
          MR_hl_field(0, Var_78, 4) = ((MR_Box) (Var_115));
          MR_hl_field(0, Var_78, 5) = ((MR_Box) (Var_116));
          MR_hl_field(0, Var_78, 6) = ((MR_Box) (Var_117));
          MR_hl_field(0, Var_78, 7) = ((MR_Box) (Var_118));
          MR_hl_field(0, Var_78, 8) = ((MR_Box) (Var_119));
          MR_hl_field(0, Var_78, 9) = ((MR_Box) (Var_120));
          MR_hl_field(0, Var_78, 10) = MR_box_float(Var_121);
          MR_hl_field(0, Var_78, 11) = ((MR_Box) (MR_mkword(1, &mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_3[1])));
          MR_hl_field(0, Var_78, 12) = ((MR_Box) (Var_122));
        }
        {
          UpdatedInfo_27 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UpdatedInfo_27, 0) = ((MR_Box) (Var_100));
          MR_hl_field(0, UpdatedInfo_27, 1) = ((MR_Box) (Var_101));
          MR_hl_field(0, UpdatedInfo_27, 2) = ((MR_Box) (Var_78));
          MR_hl_field(0, UpdatedInfo_27, 3) = ((MR_Box) (Var_102));
          MR_hl_field(0, UpdatedInfo_27, 4) = ((MR_Box) (Var_103));
          MR_hl_field(0, UpdatedInfo_27, 5) = ((MR_Box) (Var_104));
          MR_hl_field(0, UpdatedInfo_27, 6) = ((MR_Box) (Var_105));
          MR_hl_field(0, UpdatedInfo_27, 7) = ((MR_Box) (Var_106));
          MR_hl_field(0, UpdatedInfo_27, 8) = ((MR_Box) (Var_107));
          MR_hl_field(0, UpdatedInfo_27, 9) = ((MR_Box) (Var_108));
          MR_hl_field(0, UpdatedInfo_27, 10) = ((MR_Box) (Var_109));
          MR_hl_field(0, UpdatedInfo_27, 11) = ((MR_Box) (Var_110));
        }
        // direct tailcall eliminated
        ;
        next_value_of_Info_6 = UpdatedInfo_27;
        Info_6 = next_value_of_Info_6;
        continue;
      }
      else
        *MaybeBestParallelisation_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word BestIncompleteParallelisation_22 = ((MR_Word) ((MR_hl_field(1, EqualBestSolns_20, (MR_Integer) 0))));
      MR_Word BestParallelisation_24;
      MR_Word GoalsBefore_165;
      MR_Word GoalsAfter_166;
      MR_Word MaybeCostData_167;
      MR_Word CostData_168;
      MR_Word Overlap_170;
      MR_Word Metrics0_171;
      MR_Word Metrics_173;
      MR_Word IsDependent_174;
      MR_Word ParConjs_175;

      GoalsBefore_165 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_before_1_f_0(BestIncompleteParallelisation_22);
      GoalsAfter_166 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_after_1_f_0(BestIncompleteParallelisation_22);
      MaybeCostData_167 = ((MR_Word) ((MR_hl_field(0, BestIncompleteParallelisation_22, (MR_Integer) 9))));
      if ((MaybeCostData_167 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.finalise_parallelisation\'/2", (MR_String) "parallelisation has no cost data");
          return;
        }
      else
        CostData_168 = ((MR_Word) ((MR_hl_field(1, MaybeCostData_167, (MR_Integer) 0))));
      Overlap_170 = ((MR_Word) ((MR_hl_field(0, CostData_168, (MR_Integer) 1))));
      Metrics0_171 = ((MR_Word) ((MR_hl_field(0, CostData_168, (MR_Integer) 2))));
      Metrics_173 = measurements__finalise_parallel_exec_metrics_1_f_0(Metrics0_171);
      mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Overlap_170, &IsDependent_174);
      ParConjs_175 = mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_1_f_0(BestIncompleteParallelisation_22);
      {
        BestParallelisation_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BestParallelisation_24, 0) = ((MR_Box) (GoalsBefore_165));
        MR_hl_field(0, BestParallelisation_24, 1) = ((MR_Box) (ParConjs_175));
        MR_hl_field(0, BestParallelisation_24, 2) = ((MR_Box) (GoalsAfter_166));
        MR_hl_field(0, BestParallelisation_24, 3) = ((MR_Box) (IsDependent_174));
        MR_hl_field(0, BestParallelisation_24, 4) = ((MR_Box) (Metrics_173));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeBestParallelisation_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BestParallelisation_24));
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Left_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word VarSet0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word IsDependent0_7;

    mdprof_fb__automatic_parallelism__autopar_find_best_par__par_conj_overlap_is_dependent_2_p_0(Left_3, &IsDependent0_7);
    if ((IsDependent0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarSet0_5);
      if (succeeded)
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (VarSet0_5));
        }
    }
    else
    {
      MR_Word VarSetLeft_8 = ((MR_Word) ((MR_hl_field(1, IsDependent0_7, (MR_Integer) 0))));
      MR_Word VarSet_9;

      VarSet_9 = mercury__set__union_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), VarSet0_5, VarSetLeft_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (VarSet_9));
      }
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
    ;
    if (succeeded)
    {
      MR_Word X_12;
      MR_Word STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Box conv0_X_12;
      MR_Integer next_value_of_Index_9;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      mercury__array__lookup_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]), (MR_ArrayPtr) (Array_8), Index_9, &conv0_X_12);
      X_12 = ((MR_Word) (conv0_X_12));
      mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0(X_12, STATE_VARIABLE_Acc_0_13, &STATE_VARIABLE_Acc_15_15);
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
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
  struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_2(
  void * env_ptr_arg)
{
  struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  mdbcomp__program_representation__detism_committed_choice_2_p_0((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__FinalDetism_17, &(env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Var_25);
  (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded = ((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CommittedChoice_16 == (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Var_25);
  if ((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded)
    mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_1(env_ptr);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_3(
  void * env_ptr_arg)
{
  struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
    {
      mdbcomp__program_representation__detism_components_3_p_1(&(env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__FinalDetism_17, (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__Solutions_14, (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__CanFail_15, mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0_2, env_ptr);
      (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_95_52_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_111_97_108_95_97_99_99_117_109_117_108_97_116_101_95_100_101_116_105_115_109_95_95_91_49_93_95_48_4_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Detism_0_18,
  MR_Word * STATE_VARIABLE_Detism_19)
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
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Unsigned packed_word_0;

    mdbcomp__program_representation__detism_components_3_p_0(STATE_VARIABLE_Detism_0_18, &Solutions0_8, &CanFail0_9);
    mdbcomp__program_representation__detism_committed_choice_2_p_0(STATE_VARIABLE_Detism_0_18, &CommittedChoice0_10);
    Var_23 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Goal_6, (MR_Integer) 1)));
    Detism_7 = ((MR_Unsigned) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))) & (MR_Integer) 7);
    Var_24 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 2))));
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_find_best_par.goal_accumulate_detism\'/4", (MR_String) "cannot compute detism from components.");
        return;
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
    ;
    if (succeeded)
    {
      MR_Word X_12;
      MR_Word STATE_VARIABLE_Acc_15_15;
      MR_Integer Var_16;
      MR_Word Costly_21;
      MR_Word GoalClassification_22;
      MR_Word GoalGroup_23;
      MR_Word Var_24;
      MR_Box conv0_X_12;
      MR_Integer next_value_of_Index_9;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_13;

      mercury__array__lookup_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[0]), (MR_ArrayPtr) (Array_8), Index_9, &conv0_X_12);
      X_12 = ((MR_Word) (conv0_X_12));
      Var_24 = ((MR_Word) ((MR_hl_field(0, X_12, (MR_Integer) 2))));
      mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(Var_24, &Costly_21);
      switch (Costly_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          GoalClassification_22 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          GoalClassification_22 = (MR_Integer) 0;
          break;
      }
      {
        GoalGroup_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, GoalGroup_23, 0) = ((MR_Box) (Index_9));
        MR_hl_field(0, GoalGroup_23, 1) = ((MR_Box) (GoalClassification_22));
      }
      {
        STATE_VARIABLE_Acc_15_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Acc_15_15, 0) = ((MR_Box) (GoalGroup_23));
        MR_hl_field(1, STATE_VARIABLE_Acc_15_15, 1) = ((MR_Box) (STATE_VARIABLE_Acc_0_13));
      }
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
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
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__3_36;

  mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph_for_conjunct__316__1_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_36);
  *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_36));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_31;

  mdprof_fb__automatic_parallelism__autopar_find_best_par__IntroducedFrom__pred__build_dependency_graph_for_conjunct__300__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_31));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarProducerMap_0_3,
  MR_Word * STATE_VARIABLE_VarProducerMap_4,
  MR_Word STATE_VARIABLE_Graph_0_5,
  MR_Word * STATE_VARIABLE_Graph_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Graph_6 = STATE_VARIABLE_Graph_0_5;
      *STATE_VARIABLE_VarProducerMap_4 = STATE_VARIABLE_VarProducerMap_0_3;
    }
    else
    {
      MR_Word PG_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PGs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarProducerMap_23_23;
      MR_Word STATE_VARIABLE_Graph_24_24;
      MR_Integer Var_25;
      MR_Word InstMapInfo_29;
      MR_Word ConsumedVars_30;
      MR_Word ThisConjKey_31;
      MR_Word MaybeAddEdge_32;
      MR_Word ProducedVars_33;
      MR_Word InsertThisConjAsProducer_34;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, PG_14, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_Graph_28_36;
      MR_Word Var_37;
      MR_Box conv1_STATE_VARIABLE_Graph_24_24;
      MR_Box conv3_STATE_VARIABLE_VarProducerMap_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_VarProducerMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Graph_0_5;

      InstMapInfo_29 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
      ConsumedVars_30 = ((MR_Word) ((MR_hl_field(0, InstMapInfo_29, (MR_Integer) 2))));
      mercury__digraph__add_vertex_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (HeadVar__2_2)), &ThisConjKey_31, STATE_VARIABLE_Graph_0_5, &STATE_VARIABLE_Graph_28_36);
      {
        MaybeAddEdge_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MaybeAddEdge_32, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_5[0]));
        MR_hl_field(0, MaybeAddEdge_32, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0_1));
        MR_hl_field(0, MaybeAddEdge_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, MaybeAddEdge_32, 3) = ((MR_Box) (ThisConjKey_31));
        MR_hl_field(0, MaybeAddEdge_32, 4) = ((MR_Box) (STATE_VARIABLE_VarProducerMap_0_3));
      }
      Var_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConsumedVars_30);
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_1[3]), MaybeAddEdge_32, Var_37, ((MR_Box) (STATE_VARIABLE_Graph_28_36)), &conv1_STATE_VARIABLE_Graph_24_24);
      STATE_VARIABLE_Graph_24_24 = ((MR_Word) (conv1_STATE_VARIABLE_Graph_24_24));
      ProducedVars_33 = ((MR_Word) ((MR_hl_field(0, InstMapInfo_29, (MR_Integer) 3))));
      {
        InsertThisConjAsProducer_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InsertThisConjAsProducer_34, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_6[0]));
        MR_hl_field(0, InsertThisConjAsProducer_34, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_find_best_par__build_dependency_graph_for_conjuncts_6_p_0_2));
        MR_hl_field(0, InsertThisConjAsProducer_34, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, InsertThisConjAsProducer_34, 3) = ((MR_Box) (HeadVar__2_2));
      }
      mercury__set__fold_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_find_best_par_scalar_common_2[0]), InsertThisConjAsProducer_34, ProducedVars_33, ((MR_Box) (STATE_VARIABLE_VarProducerMap_0_3)), &conv3_STATE_VARIABLE_VarProducerMap_23_23);
      STATE_VARIABLE_VarProducerMap_23_23 = ((MR_Word) (conv3_STATE_VARIABLE_VarProducerMap_23_23));
      Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PGs_15;
      next_value_of_HeadVar__2_2 = Var_25;
      next_value_of_STATE_VARIABLE_VarProducerMap_0_3 = STATE_VARIABLE_VarProducerMap_23_23;
      next_value_of_STATE_VARIABLE_Graph_0_5 = STATE_VARIABLE_Graph_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_VarProducerMap_0_3 = next_value_of_STATE_VARIABLE_VarProducerMap_0_3;
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
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____alg_for_finding_best_par_simple_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____alg_for_finding_best_par_simple_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____best_solutions_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____best_solutions_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____bnb_profile_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____bnb_profile_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____full_parallelisation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____full_parallelisation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_classification_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_classification_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goal_group_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goal_group_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____goals_for_parallelisation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____goals_for_parallelisation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____is_good_enough_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____is_good_enough_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____maybe_add_choice_point_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____maybe_add_choice_point_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____maybe_add_choice_point_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____maybe_add_choice_point_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____producer_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_find_best_par____Unify____producer_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____producer_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_find_best_par____Compare____producer_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_maybe_add_choice_point_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_find_best_par__mdprof_fb__automatic_parallelism__autopar_find_best_par__type_ctor_info_producer_map_0);
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
