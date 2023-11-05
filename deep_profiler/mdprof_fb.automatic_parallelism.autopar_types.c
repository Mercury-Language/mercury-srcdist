/*
** Automatically generated from `autopar_types.m'
** by the Mercury compiler,
** version rotd-2023-11-05
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


// :- module mdprof_fb.automatic_parallelism.autopar_types.
// :- implementation.

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_types__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_types.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "exclude.mih"
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
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__digraph__ti_digraph_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_dependency_graphs_0_0[2];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_dependency_graphs_0_0[2];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependency_graphs_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_dependency_graphs_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_dependency_graphs_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_dependency_graphs_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_dependency_graphs_0[1];

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_dependent_conjunct_execution_0_0[3];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_dependent_conjunct_execution_0_0[3];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependent_conjunct_execution_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_dependent_conjunct_execution_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_dependent_conjunct_execution_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_dependent_conjunct_execution_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_dependent_conjunct_execution_0[1];

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__goal_path__ti_goal_attr_array_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0;

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_implicit_parallelism_info_0_0[12];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_implicit_parallelism_info_0_0[12];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_implicit_parallelism_info_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_implicit_parallelism_info_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_implicit_parallelism_info_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_implicit_parallelism_info_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_implicit_parallelism_info_0[1];

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__maybe__ti_maybe_1measurements__type_ctor_info_goal_cost_csq_0;

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__maybe__ti_maybe_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_incomplete_parallelisation_0_0[10];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_incomplete_parallelisation_0_0[10];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_incomplete_parallelisation_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_incomplete_parallelisation_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_incomplete_parallelisation_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_incomplete_parallelisation_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_incomplete_parallelisation_0[1];

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_inst_map_info_0_0[4];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_inst_map_info_0_0[4];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_inst_map_info_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_inst_map_info_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_inst_map_info_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_inst_map_info_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_inst_map_info_0[1];

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_0;

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_1;

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_ordinal_ordered_is_costly_goal_0[2];

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_name_ordered_is_costly_goal_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_is_costly_goal_0[2];

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0;

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_parallel_execution_overlap_0_1[3];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_parallel_execution_overlap_0_1[3];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_1;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallel_execution_overlap_0_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallel_execution_overlap_0_1[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_parallel_execution_overlap_0[2];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_parallel_execution_overlap_0[2];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_parallel_execution_overlap_0[2];

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_parallelisation_cost_data_0_0[4];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_parallelisation_cost_data_0_0[4];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallelisation_cost_data_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallelisation_cost_data_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_parallelisation_cost_data_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_parallelisation_cost_data_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_parallelisation_cost_data_0[1];

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_pard_goal_detail_annotation_0_0[8];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_pard_goal_detail_annotation_0_0[8];

static const MR_DuArgLocn mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_locns_pard_goal_detail_annotation_0_0[8];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_detail_annotation_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_detail_annotation_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_pard_goal_detail_annotation_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_pard_goal_detail_annotation_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_pard_goal_detail_annotation_0[1];

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0;

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_pard_goal_type_0_0[2];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_pard_goal_type_0_0[2];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_0;

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_1;

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_2;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_type_0_0[2];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_type_0_1[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_pard_goal_type_0[2];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_pard_goal_type_0[3];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_pard_goal_type_0[3];

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_var_and_mode_0_0[2];

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_var_and_mode_0_0[2];

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_var_and_mode_0_0;

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_var_and_mode_0_0[1];

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_var_and_mode_0[1];

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_var_and_mode_0[1];

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_var_and_mode_0[1];

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__build_sharedvars_set_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__build_sharedvars_set_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BoundVars_0_11,
  MR_Word * STATE_VARIABLE_BoundVars_12,
  MR_Word STATE_VARIABLE_SharedVars_0_13,
  MR_Word * STATE_VARIABLE_SharedVars_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__build_var_use_list_4_p_0(
  MR_Word Map_5,
  MR_Integer Var_6,
  MR_Word STATE_VARIABLE_List_0_11,
  MR_Word * STATE_VARIABLE_List_12);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0(
  MR_Word SharedVarsSet_4,
  MR_Word PGD_5,
  MR_Word * PG_6);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_2_4_p_0(
  MR_ArrayPtr Array_1,
  MR_Integer First_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_to_pard_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____candidate_par_conjunctions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____candidate_par_conjunctions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____dependent_conjunct_execution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____dependent_conjunct_execution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____implicit_parallelism_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____implicit_parallelism_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____incomplete_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____incomplete_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____inst_map_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____inst_map_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____is_costly_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____is_costly_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____lazy_var_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____lazy_var_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____parallel_execution_overlap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____parallel_execution_overlap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____parallelisation_cost_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____parallelisation_cost_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_annotation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_annotation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____var_and_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____var_and_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[17][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[10][3];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_3[1][6];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_4[2][8];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_5[1][7];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[17][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_1)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[2]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_goal_cost_csq_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[5]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[9]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_cs_cost_csq_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[4]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_4[0])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_4[1])),
    ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types__build_sharedvars_set_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_types_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__feedback__automatic_parallelism__pti_seq_conj_1__plain_mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_seq_conj_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0 = {
  &mercury__lazy__lazy__type_ctor_info_lazy_1,
  { (MR_TypeInfo) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__pti_goal_rep_1__plain_mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0)
  }
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_candidate_par_conjunctions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____candidate_par_conjunctions_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____candidate_par_conjunctions_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "candidate_par_conjunctions",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__digraph__ti_digraph_1builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_dependency_graphs_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__digraph__ti_digraph_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__digraph__ti_digraph_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_dependency_graphs_0_0[2] = {
  (MR_String) "dm_forward",
  (MR_String) "dm_forward_tc"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependency_graphs_0_0 = {
  (MR_String) "dependency_graphs",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_dependency_graphs_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_dependency_graphs_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_dependency_graphs_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependency_graphs_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_dependency_graphs_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_dependency_graphs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_dependency_graphs_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependency_graphs_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_dependency_graphs_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependency_graphs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "dependency_graphs",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_dependency_graphs_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_dependency_graphs_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_dependency_graphs_0,

};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0) }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
  }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_dependent_conjunct_execution_0_0[3] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_float_0builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_dependent_conjunct_execution_0_0[3] = {
  (MR_String) "dce_execution",
  (MR_String) "dce_productions",
  (MR_String) "dce_consumptions"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependent_conjunct_execution_0_0 = {
  (MR_String) "dependent_conjunct_execution",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_dependent_conjunct_execution_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_dependent_conjunct_execution_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_dependent_conjunct_execution_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependent_conjunct_execution_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_dependent_conjunct_execution_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_dependent_conjunct_execution_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_dependent_conjunct_execution_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_dependent_conjunct_execution_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_dependent_conjunct_execution_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependent_conjunct_execution_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____dependent_conjunct_execution_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____dependent_conjunct_execution_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "dependent_conjunct_execution",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_dependent_conjunct_execution_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_dependent_conjunct_execution_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_dependent_conjunct_execution_0,

};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_prog_rep_1,
  { (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  { (MR_TypeInfo) (&analysis_utils__analysis_utils__type_ctor_info_callee_0) }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_TypeInfo) (&measurements__measurements__type_ctor_info_cs_cost_csq_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  { (MR_TypeInfo) (&coverage__coverage__type_ctor_info_coverage_info_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__goal_path__ti_goal_attr_array_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0) }
};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_implicit_parallelism_info_0_0[12] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_deep_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_prog_rep_1unit__type_ctor_info_unit_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0),
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0measurements__type_ctor_info_cs_cost_csq_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__goal_path__ti_goal_attr_array_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0),
  (MR_PseudoTypeInfo) (&report__report__type_ctor_info_recursion_type_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_implicit_parallelism_info_0_0[12] = {
  (MR_String) "ipi_deep",
  (MR_String) "ipi_progrep",
  (MR_String) "ipi_opts",
  (MR_String) "ipi_clique",
  (MR_String) "ipi_call_sites",
  (MR_String) "ipi_rec_call_sites",
  (MR_String) "ipi_containing_goal_map",
  (MR_String) "ipi_coverage_array",
  (MR_String) "ipi_inst_map_array",
  (MR_String) "ipi_recursion_type",
  (MR_String) "ipi_var_name_table",
  (MR_String) "ipi_proc_label"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_implicit_parallelism_info_0_0 = {
  (MR_String) "implicit_parallelism_info",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_implicit_parallelism_info_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_implicit_parallelism_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_implicit_parallelism_info_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_implicit_parallelism_info_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_implicit_parallelism_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_implicit_parallelism_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_implicit_parallelism_info_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_implicit_parallelism_info_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_implicit_parallelism_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____implicit_parallelism_info_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____implicit_parallelism_info_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "implicit_parallelism_info",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_implicit_parallelism_info_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_implicit_parallelism_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_implicit_parallelism_info_0,

};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__maybe__ti_maybe_1measurements__type_ctor_info_goal_cost_csq_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&measurements__measurements__type_ctor_info_goal_cost_csq_0) }
};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__maybe__ti_maybe_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_incomplete_parallelisation_0_0[10] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__array__ti_array_1mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependency_graphs_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__maybe__ti_maybe_1measurements__type_ctor_info_goal_cost_csq_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__maybe__ti_maybe_1measurements__type_ctor_info_goal_cost_csq_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__maybe__ti_maybe_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_incomplete_parallelisation_0_0[10] = {
  (MR_String) "ip_goals",
  (MR_String) "ip_first_par_goal",
  (MR_String) "ip_last_par_goal",
  (MR_String) "ip_last_scheduled_goal",
  (MR_String) "ip_par_conjs_rev_last_goal",
  (MR_String) "ip_num_calls",
  (MR_String) "ip_dependency_graphs",
  (MR_String) "ip_maybe_goals_before_cost",
  (MR_String) "ip_maybe_goals_after_cost",
  (MR_String) "ip_maybe_par_cost_data"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_incomplete_parallelisation_0_0 = {
  (MR_String) "incomplete_parallelisation",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_incomplete_parallelisation_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_incomplete_parallelisation_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_incomplete_parallelisation_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_incomplete_parallelisation_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_incomplete_parallelisation_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_incomplete_parallelisation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_incomplete_parallelisation_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_incomplete_parallelisation_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_incomplete_parallelisation_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____incomplete_parallelisation_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____incomplete_parallelisation_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "incomplete_parallelisation",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_incomplete_parallelisation_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_incomplete_parallelisation_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_incomplete_parallelisation_0,

};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_inst_map_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0),
  (MR_PseudoTypeInfo) (&program_representation_utils__program_representation_utils__type_ctor_info_inst_map_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_inst_map_info_0_0[4] = {
  (MR_String) "im_before",
  (MR_String) "im_after",
  (MR_String) "im_consumed_vars",
  (MR_String) "im_bound_vars"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_inst_map_info_0_0 = {
  (MR_String) "inst_map_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_inst_map_info_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_inst_map_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_inst_map_info_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_inst_map_info_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_inst_map_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_inst_map_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_inst_map_info_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_inst_map_info_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_inst_map_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____inst_map_info_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____inst_map_info_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "inst_map_info",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_inst_map_info_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_inst_map_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_inst_map_info_0,

};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_0 = {
  (MR_String) "is_not_costly_goal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_1 = {
  (MR_String) "is_costly_goal",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_ordinal_ordered_is_costly_goal_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_0,
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_1
};

static const MR_EnumFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_name_ordered_is_costly_goal_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_1,
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_functor_desc_is_costly_goal_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_is_costly_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_is_costly_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____is_costly_goal_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____is_costly_goal_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "is_costly_goal",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_name_ordered_is_costly_goal_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__enum_ordinal_ordered_is_costly_goal_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_is_costly_goal_0,

};

static const MR_FA_TypeInfo_Struct2 mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0)
  }
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_lazy_var_use_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____lazy_var_use_map_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____lazy_var_use_map_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "lazy_var_use_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_0 = {
  (MR_String) "peo_empty_conjunct",
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

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_parallel_execution_overlap_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallel_execution_overlap_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependent_conjunct_execution_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_parallel_execution_overlap_0_1[3] = {
  (MR_String) "poec_left_conjunct",
  (MR_String) "poec_right_conjunct",
  (MR_String) "poec_dependent_vars"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_1 = {
  (MR_String) "peo_conjunction",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_parallel_execution_overlap_0_1,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_parallel_execution_overlap_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallel_execution_overlap_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_0 };

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallel_execution_overlap_0_1[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_1 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_parallel_execution_overlap_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallel_execution_overlap_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallel_execution_overlap_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_parallel_execution_overlap_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_1,
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallel_execution_overlap_0_0
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_parallel_execution_overlap_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallel_execution_overlap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____parallel_execution_overlap_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____parallel_execution_overlap_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "parallel_execution_overlap",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_parallel_execution_overlap_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_parallel_execution_overlap_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_parallel_execution_overlap_0,

};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_parallelisation_cost_data_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallel_execution_overlap_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_parallel_exec_metrics_incomplete_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_parallelisation_cost_data_0_0[4] = {
  (MR_String) "pcd_shared_vars",
  (MR_String) "pcd_par_exec_overlap",
  (MR_String) "pcd_par_exec_metrics",
  (MR_String) "pcd_productions_map"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallelisation_cost_data_0_0 = {
  (MR_String) "parallelisation_cost_data",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_parallelisation_cost_data_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_parallelisation_cost_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallelisation_cost_data_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallelisation_cost_data_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_parallelisation_cost_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_parallelisation_cost_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_parallelisation_cost_data_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_parallelisation_cost_data_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_parallelisation_cost_data_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____parallelisation_cost_data_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____parallelisation_cost_data_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "parallelisation_cost_data",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_parallelisation_cost_data_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_parallelisation_cost_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_parallelisation_cost_data_0,

};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "pard_goal_detail",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdbcomp__program_representation__ti_goal_rep_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_pard_goal_detail_annotation_0_0[8] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_type_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
  (MR_PseudoTypeInfo) (&coverage__coverage__type_ctor_info_coverage_info_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_goal_cost_csq_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_cost_above_par_threshold_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__tree234__ti_tree234_2builtin__type_ctor_info_int_0lazy__ti_lazy_1var_use_analysis__type_ctor_info_var_use_info_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_pard_goal_detail_annotation_0_0[8] = {
  (MR_String) "pgd_pg_type",
  (MR_String) "pgd_inst_map_info",
  (MR_String) "pgd_original_path",
  (MR_String) "pgd_coverage",
  (MR_String) "pgd_cost",
  (MR_String) "pgd_cost_above_threshold",
  (MR_String) "pgd_var_production_map",
  (MR_String) "pgd_var_consumption_map"
};

static const MR_DuArgLocn mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_locns_pard_goal_detail_annotation_0_0[8] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_detail_annotation_0_0 = {
  (MR_String) "pard_goal_detail",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_pard_goal_detail_annotation_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_pard_goal_detail_annotation_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_locns_pard_goal_detail_annotation_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_detail_annotation_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_detail_annotation_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_pard_goal_detail_annotation_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_detail_annotation_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_pard_goal_detail_annotation_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_detail_annotation_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_pard_goal_detail_annotation_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_annotation_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_annotation_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "pard_goal_detail_annotation",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_pard_goal_detail_annotation_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_pard_goal_detail_annotation_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_pard_goal_detail_annotation_0,

};

static const MR_FA_TypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0) }
};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_pard_goal_type_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__list__ti_list_1mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0),
  (MR_PseudoTypeInfo) (&mdprof_fb__automatic_parallelism__autopar_types__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_pard_goal_type_0_0[2] = {
  (MR_String) "pgtc_args",
  (MR_String) "pgtc_call_site"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_0 = {
  (MR_String) "pgt_call",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_pard_goal_type_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_pard_goal_type_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_1 = {
  (MR_String) "pgt_other_atomic_goal",
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

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_2 = {
  (MR_String) "pgt_non_atomic_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_type_0_0[2] = {
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_1,
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_2
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_type_0_1[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_pard_goal_type_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_pard_goal_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_pard_goal_type_0[3] = {
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_0,
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_2,
  &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_pard_goal_type_0_1
};

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_pard_goal_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_type_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_type_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "pard_goal_type",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_pard_goal_type_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_pard_goal_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_pard_goal_type_0,

};

static const MR_PseudoTypeInfo mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_var_and_mode_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_mode_rep_0)
};

static const MR_ConstString mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_var_and_mode_0_0[2] = {
  (MR_String) "vmu_var",
  (MR_String) "vmu_mode"
};

static const MR_DuFunctorDesc mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_var_and_mode_0_0 = {
  (MR_String) "var_and_mode",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_types_var_and_mode_0_0,
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__field_names_var_and_mode_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_var_and_mode_0_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_var_and_mode_0_0 };

static const MR_DuPtagLayout mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_var_and_mode_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_stag_ordered_var_and_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_var_and_mode_0[1] = { &mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_functor_desc_var_and_mode_0_0 };

static const MR_Integer mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_var_and_mode_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Unify____var_and_mode_0_0_10001)),
  ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types____Compare____var_and_mode_0_0_10001)),
  (MR_String) "mdprof_fb.automatic_parallelism.autopar_types",
  (MR_String) "var_and_mode",
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_name_ordered_var_and_mode_0 },
  { mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__du_ptag_ordered_var_and_mode_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__functor_number_map_var_and_mode_0,

};

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____var_and_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      mdbcomp__program_representation____Compare____var_mode_rep_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____var_and_mode_0_0(
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
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__program_representation____Unify____var_mode_rep_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_annotation_0_0(
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
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdprof_fb__automatic_parallelism__autopar_types____Compare____inst_map_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          coverage____Compare____coverage_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            measurements____Compare____goal_cost_csq_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_37 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_38 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_37 < Var_38);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_37 > Var_38);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[7]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[16]), &SubResult1_6, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_5)));
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (Var_21)), ((MR_Box) (ArgY2_8)));
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_annotation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
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
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_type_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____inst_map_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = coverage____Unify____coverage_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = measurements____Unify____goal_cost_csq_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[7]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_13_13;
          MR_Word TypeInfo_14_14;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            TypeInfo_13_13 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[16]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            if (succeeded)
            {
              TypeInfo_14_14 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[9]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____parallelisation_cost_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdprof_fb__automatic_parallelism__autopar_types____Compare____parallel_execution_overlap_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        measurements____Compare____parallel_exec_metrics_incomplete_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____parallelisation_cost_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____parallel_execution_overlap_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = measurements____Unify____parallel_exec_metrics_incomplete_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____parallel_execution_overlap_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_12;

      mdprof_fb__automatic_parallelism__autopar_types____Compare____parallel_execution_overlap_0_0(&SubResult1_12, Var_25, ArgY1_11);
      succeeded = (SubResult1_12 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_12;
      else
      {
        MR_Word SubResult2_15;

        mdprof_fb__automatic_parallelism__autopar_types____Compare____dependent_conjunct_execution_0_0(&SubResult2_15, Var_24, ArgY2_14);
        succeeded = (SubResult2_15 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_15;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY3_17)));
      }
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____parallel_execution_overlap_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____parallel_execution_overlap_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____dependent_conjunct_execution_0_0(ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____lazy_var_use_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____lazy_var_use_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____is_costly_goal_0_0(
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
mdprof_fb__automatic_parallelism__autopar_types____Unify____is_costly_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____inst_map_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;

    program_representation_utils____Compare____inst_map_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      program_representation_utils____Compare____inst_map_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____inst_map_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = program_representation_utils____Unify____inst_map_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = program_representation_utils____Unify____inst_map_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____incomplete_parallelisation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
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
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[12]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

            mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[13]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[14]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[14]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[15]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____incomplete_parallelisation_0_0(
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
  {
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_ArrayPtr ArgX1_3 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_ArrayPtr ArgY1_4 = ((MR_ArrayPtr) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), (MR_ArrayPtr) (ArgX1_3), (MR_ArrayPtr) (ArgY1_4));
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
            TypeInfo_26_26 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[13]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[14]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[14]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_29_29 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[15]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                    }
                  }
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

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____implicit_parallelism_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
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
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word SubResult1_6;

    profile____Compare____deep_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[8]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_53 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_54 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_53 < Var_54);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_53 > Var_54);
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

            mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[6]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[10]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[11]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      report____Compare____recursion_type_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          mdbcomp__program_representation____Compare____string_proc_label_0_0(HeadVar__1_1, ArgX12_37, ArgY12_38);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____implicit_parallelism_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_36_36;
    MR_Word TypeInfo_37_37;
    MR_Word TypeCtorInfo_39_39;
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
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Integer Var_41;
    MR_Integer Var_42;

    succeeded = profile____Unify____deep_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_30_30 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[8]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          Var_41 = (MR_Integer) (ArgX4_9);
          Var_42 = (MR_Integer) (ArgY4_10);
          succeeded = (Var_41 == Var_42);
          if (succeeded)
          {
            TypeInfo_33_33 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_34_34 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_35_35 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_36_36 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[10]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_37_37 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[11]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      succeeded = report____Unify____recursion_type_0_0(ArgX10_21, ArgY10_22);
                      if (succeeded)
                      {
                        TypeCtorInfo_39_39 = (MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_var_name_table_0);
                        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_39_39, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                          succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(ArgX12_25, ArgY12_26);
                      }
                    }
                  }
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

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____dependent_conjunct_execution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
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
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____dependent_conjunct_execution_0_0(
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
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0(
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
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____candidate_par_conjunctions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____candidate_par_conjunctions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__build_sharedvars_set_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Produced_11;
  MR_Word conv0_STATE_VARIABLE_Consumed_13;

  mdprof_fb__automatic_parallelism__autopar_types__conj_produced_and_consumed_vars_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Produced_11, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Consumed_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Produced_11));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Consumed_13));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__build_sharedvars_set_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_BoundVars_0_11,
  MR_Word * STATE_VARIABLE_BoundVars_12,
  MR_Word STATE_VARIABLE_SharedVars_0_13,
  MR_Word * STATE_VARIABLE_SharedVars_14)
{
  MR_Word Conjs_6 = (MR_Word) (HeadVar__1_1);
  MR_Word SharedVars_8;
  MR_Word ProducedVars_9;
  MR_Word ConsumedVars_10;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Box conv3_ProducedVars_9;
  MR_Box conv2_ConsumedVars_10;

  Var_16 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[9]), Conjs_6, ((MR_Box) (Var_16)), &conv3_ProducedVars_9, ((MR_Box) (Var_17)), &conv2_ConsumedVars_10);
  ProducedVars_9 = ((MR_Word) (conv3_ProducedVars_9));
  ConsumedVars_10 = ((MR_Word) (conv2_ConsumedVars_10));
  SharedVars_8 = mercury__set__intersect_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_BoundVars_0_11, ConsumedVars_10);
  *STATE_VARIABLE_SharedVars_14 = mercury__set__union_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_SharedVars_0_13, SharedVars_8);
  *STATE_VARIABLE_BoundVars_12 = mercury__set__union_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_BoundVars_0_11, ProducedVars_9);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__build_var_use_list_4_p_0(
  MR_Word Map_5,
  MR_Integer Var_6,
  MR_Word STATE_VARIABLE_List_0_11,
  MR_Word * STATE_VARIABLE_List_12)
{
  MR_bool succeeded;
  MR_Word Use_9;
  MR_Word TypeCtorInfo_19_19;
  MR_Word LazyUse_8;
  MR_Box conv0_LazyUse_8;
  MR_Box conv1_Use_9;

  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[4]), Map_5, Var_6, &conv0_LazyUse_8);
  if (succeeded)
  {
    LazyUse_8 = ((MR_Word) (conv0_LazyUse_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_19_19 = (MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0);
    succeeded = mercury__lazy__read_if_val_2_p_0(TypeCtorInfo_19_19, LazyUse_8, &conv1_Use_9);
    if (succeeded)
    {
      Use_9 = ((MR_Word) (conv1_Use_9));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Float UseTime_10 = MR_unbox_float((MR_hl_field(0, Use_9, (MR_Integer) 0)));
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_6));
      MR_hl_field(0, Var_14, 1) = MR_box_float(UseTime_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_List_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_List_0_11));
    }
  }
  else
    *STATE_VARIABLE_List_12 = STATE_VARIABLE_List_0_11;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_List_12;

  mdprof_fb__automatic_parallelism__autopar_types__build_var_use_list_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_List_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_List_12));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_List_12;

  mdprof_fb__automatic_parallelism__autopar_types__build_var_use_list_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_List_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_List_12));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0(
  MR_Word SharedVarsSet_4,
  MR_Word PGD_5,
  MR_Word * PG_6)
{
  MR_bool succeeded;
  MR_Float CostPercall_7;
  MR_Word CostAboveThreshold_8;
  MR_Word SharedVars_9;
  MR_Word Coverage_10;
  MR_Integer Calls_11;
  MR_Word Productions_12;
  MR_Word Consumptions_13;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, PGD_5, (MR_Integer) 4))));

  CostPercall_7 = measurements__goal_cost_get_percall_1_f_0(Var_14);
  CostAboveThreshold_8 = ((MR_Unsigned) ((MR_hl_field(0, PGD_5, (MR_Integer) 5))) & (MR_Integer) 1);
  SharedVars_9 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), SharedVarsSet_4);
  Coverage_10 = ((MR_Word) ((MR_hl_field(0, PGD_5, (MR_Integer) 3))));
  coverage__get_coverage_before_det_2_p_0(Coverage_10, &Calls_11);
  succeeded = (Calls_11 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_16;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, PGD_5, (MR_Integer) 6))));
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Box conv1_Productions_12;
    MR_Box conv3_Consumptions_13;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_5[0]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0_1));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (Var_18));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[3]), Var_16, SharedVars_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Productions_12);
    Productions_12 = ((MR_Word) (conv1_Productions_12));
    Var_21 = ((MR_Word) ((MR_hl_field(0, PGD_5, (MR_Integer) 7))));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_5[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0_2));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (Var_21));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[3]), Var_19, SharedVars_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Consumptions_13);
    Consumptions_13 = ((MR_Word) (conv3_Consumptions_13));
  }
  else
  {
    Productions_12 = (MR_Word) ((MR_Unsigned) 0U);
    Consumptions_13 = (MR_Word) ((MR_Unsigned) 0U);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *PG_6 = base;
    MR_hl_field(0, base, 0) = MR_box_float(CostPercall_7);
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (CostAboveThreshold_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Productions_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Consumptions_13));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_BoundVars_12;
  MR_Word conv0_STATE_VARIABLE_SharedVars_14;

  mdprof_fb__automatic_parallelism__autopar_types__build_sharedvars_set_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_BoundVars_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_SharedVars_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_BoundVars_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_SharedVars_14));
}

MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_calc_sharedvars_set_1_f_0(
  MR_Word Incomplete_3)
{
  MR_Word SharedVars_4;
  MR_Word ParConjs_5;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_ArrayPtr Goals_18 = ((MR_ArrayPtr) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 0))));
  MR_Integer Start_19 = ((MR_Integer) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 1))));
  MR_Integer Last_20 = ((MR_Integer) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 3))));
  MR_Word LastGoalsRev0_21 = ((MR_Word) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 4))));
  MR_Word LastGoalsRev_22;
  MR_Word LastGoals_23;
  MR_Box conv3_Var_6;
  MR_Box conv2_SharedVars_4;

  {
    LastGoalsRev_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LastGoalsRev_22, 0) = ((MR_Box) (Last_20));
    MR_hl_field(1, LastGoalsRev_22, 1) = ((MR_Box) (LastGoalsRev0_21));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LastGoalsRev_22, &LastGoals_23);
  mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_2_4_p_0(Goals_18, Start_19, LastGoals_23, &ParConjs_5);
  Var_8 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  Var_9 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[1]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[2]), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_2[8]), ParConjs_5, ((MR_Box) (Var_8)), &conv3_Var_6, ((MR_Box) (Var_9)), &conv2_SharedVars_4);
  SharedVars_4 = ((MR_Word) (conv2_SharedVars_4));
  return SharedVars_4;
}

MR_Integer MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_goals_middle_1_f_0(
  MR_Word Incomplete_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer LastParGoal_4 = ((MR_Integer) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 2))));
  MR_Integer FirstParGoal_5 = ((MR_Integer) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 1))));
  MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) LastParGoal_4 - (MR_Unsigned) FirstParGoal_5);

  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_6 + (MR_Unsigned) 1);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_parallel_conjuncts_1_f_0(
  MR_Word Incomplete_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 4))));

  Var_4 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_5);
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_4 + (MR_Unsigned) 1);
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_num_goals_1_f_0(
  MR_Word Incomplete_3)
{
  MR_Integer HeadVar__2_2;
  MR_ArrayPtr Var_4 = ((MR_ArrayPtr) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 0))));

  HeadVar__2_2 = mercury__array__size_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), (MR_ArrayPtr) (Var_4));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_1_f_0(
  MR_Word Incomplete_3)
{
  MR_Word ParConjs_4;
  MR_ArrayPtr Goals_5 = ((MR_ArrayPtr) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 0))));
  MR_Integer Start_6 = ((MR_Integer) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 1))));
  MR_Integer Last_7 = ((MR_Integer) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 3))));
  MR_Word LastGoalsRev0_8 = ((MR_Word) ((MR_hl_field(0, Incomplete_3, (MR_Integer) 4))));
  MR_Word LastGoalsRev_9;
  MR_Word LastGoals_10;

  {
    LastGoalsRev_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LastGoalsRev_9, 0) = ((MR_Box) (Last_7));
    MR_hl_field(1, LastGoalsRev_9, 1) = ((MR_Box) (LastGoalsRev0_8));
  }
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LastGoalsRev_9, &LastGoals_10);
  mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_2_4_p_0(Goals_5, Start_6, LastGoals_10, &ParConjs_4);
  return ParConjs_4;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_2_4_p_0(
  MR_ArrayPtr Array_1,
  MR_Integer First_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Last_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Lasts_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Conj_11;
    MR_Word Conjs_12;
    MR_Word Goals_13;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Last_9 + (MR_Unsigned) 1);

    mdprof_fb__automatic_parallelism__autopar_types__ip_get_par_conjs_2_4_p_0(Array_1, Var_14, Lasts_10, &Conjs_12);
    mercury__array__fetch_items_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), (MR_ArrayPtr) (Array_1), First_2, Last_9, &Goals_13);
    Conj_11 = (MR_Word) (Goals_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Conj_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Conjs_12));
    }
  }
}

MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_after_1_f_0(
  MR_Word Parallelisation_3)
{
  MR_Word GoalsAfter_4;
  MR_ArrayPtr Goals_5 = ((MR_ArrayPtr) ((MR_hl_field(0, Parallelisation_3, (MR_Integer) 0))));
  MR_Integer LastParGoalIndex_6 = ((MR_Integer) ((MR_hl_field(0, Parallelisation_3, (MR_Integer) 2))));
  MR_Integer NumGoals_7;
  MR_Integer FirstGoalAfter_8;
  MR_Integer Var_10;

  NumGoals_7 = mercury__array__size_1_f_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), (MR_ArrayPtr) (Goals_5));
  FirstGoalAfter_8 = (MR_Integer) ((MR_Unsigned) LastParGoalIndex_6 + (MR_Unsigned) 1);
  Var_10 = (MR_Integer) ((MR_Unsigned) NumGoals_7 - (MR_Unsigned) 1);
  mercury__array__fetch_items_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), (MR_ArrayPtr) (Goals_5), FirstGoalAfter_8, Var_10, &GoalsAfter_4);
  return GoalsAfter_4;
}

MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__ip_get_goals_before_1_f_0(
  MR_Word Parallelisation_3)
{
  MR_Word GoalsBefore_4;
  MR_ArrayPtr Goals_5 = ((MR_ArrayPtr) ((MR_hl_field(0, Parallelisation_3, (MR_Integer) 0))));
  MR_Integer FirstParGoalIndex_6 = ((MR_Integer) ((MR_hl_field(0, Parallelisation_3, (MR_Integer) 1))));
  MR_Integer LastGoalBefore_7 = (MR_Integer) ((MR_Unsigned) FirstParGoalIndex_6 - (MR_Unsigned) 1);

  mercury__array__fetch_items_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_1[0]), (MR_ArrayPtr) (Goals_5), (MR_Integer) 0, LastGoalBefore_7, &GoalsBefore_4);
  return GoalsBefore_4;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Index_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Indexes0_9;
    MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Index_2 + (MR_Unsigned) 1);
    MR_Word Var_13;
    MR_Word CostAboveThreshold_16;

    mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goals_3_p_0(Goals_6, Var_11, &Indexes0_9);
    Var_13 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 2))));
    CostAboveThreshold_16 = ((MR_Unsigned) ((MR_hl_field(0, Var_13, (MR_Integer) 5))) & (MR_Integer) 1);
    switch (CostAboveThreshold_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Index_2));
          MR_hl_field(1, base, 1) = ((MR_Box) (Indexes0_9));
        }
        break;
      case (MR_Integer) 1:
        *HeadVar__3_3 = Indexes0_9;
        break;
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__identify_costly_goal_2_p_0(
  MR_Word Annotation_3,
  MR_Word * Costly_4)
{
  MR_Word CostAboveThreshold_5 = ((MR_Unsigned) ((MR_hl_field(0, Annotation_3, (MR_Integer) 5))) & (MR_Integer) 1);

  switch (CostAboveThreshold_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Costly_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      *Costly_4 = (MR_Integer) 0;
      break;
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__conj_produced_and_consumed_vars_5_p_0(
  MR_Word Conj_6,
  MR_Word STATE_VARIABLE_Produced_0_10,
  MR_Word * STATE_VARIABLE_Produced_11,
  MR_Word STATE_VARIABLE_Consumed_0_12,
  MR_Word * STATE_VARIABLE_Consumed_13)
{
  MR_Word InstMapInfo_9;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Conj_6, (MR_Integer) 2))));
  MR_Word Var_16;
  MR_Word Var_18;

  InstMapInfo_9 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, InstMapInfo_9, (MR_Integer) 3))));
  *STATE_VARIABLE_Produced_11 = mercury__set__union_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Produced_0_10, Var_16);
  Var_18 = ((MR_Word) ((MR_hl_field(0, InstMapInfo_9, (MR_Integer) 2))));
  *STATE_VARIABLE_Consumed_13 = mercury__set__union_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_Consumed_0_12, Var_18);
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_to_pard_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PG_6;

  mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_annon_to_pard_goal_annon_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PG_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_PG_6));
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_to_pard_goal_3_p_0(
  MR_Word CPC_4,
  MR_Word STATE_VARIABLE_Goal_0_8,
  MR_Word * STATE_VARIABLE_Goal_9)
{
  MR_Word IsDependent_6 = ((MR_Word) ((MR_hl_field(0, CPC_4, (MR_Integer) 3))));
  MR_Word SharedVars_7;
  MR_Word Var_10;

  if ((IsDependent_6 == (MR_Word) ((MR_Unsigned) 0U)))
    SharedVars_7 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  else
    SharedVars_7 = ((MR_Word) ((MR_hl_field(1, IsDependent_6, (MR_Integer) 0))));
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types_scalar_common_3[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_types__pard_goal_detail_to_pard_goal_3_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (SharedVars_7));
  }
  mdbcomp__program_representation__transform_goal_rep_3_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0), (MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0), Var_10, STATE_VARIABLE_Goal_0_8, STATE_VARIABLE_Goal_9);
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____candidate_par_conjunctions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____candidate_par_conjunctions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____candidate_par_conjunctions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____candidate_par_conjunctions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____dependency_graphs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____dependency_graphs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____dependent_conjunct_execution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____dependent_conjunct_execution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____dependent_conjunct_execution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____dependent_conjunct_execution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____implicit_parallelism_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____implicit_parallelism_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____implicit_parallelism_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____implicit_parallelism_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____incomplete_parallelisation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____incomplete_parallelisation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____incomplete_parallelisation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____incomplete_parallelisation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____inst_map_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____inst_map_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____inst_map_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____inst_map_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____is_costly_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____is_costly_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____is_costly_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____is_costly_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____lazy_var_use_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____lazy_var_use_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____lazy_var_use_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____lazy_var_use_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____parallel_execution_overlap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____parallel_execution_overlap_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____parallel_execution_overlap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____parallel_execution_overlap_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____parallelisation_cost_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____parallelisation_cost_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____parallelisation_cost_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____parallelisation_cost_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_annotation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_detail_annotation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_annotation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_detail_annotation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____pard_goal_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____pard_goal_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Unify____var_and_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_fb__automatic_parallelism__autopar_types____Unify____var_and_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_types____Compare____var_and_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_fb__automatic_parallelism__autopar_types____Compare____var_and_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdprof_fb__automatic_parallelism__autopar_types__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_types__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_candidate_par_conjunctions_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependency_graphs_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_dependent_conjunct_execution_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_incomplete_parallelisation_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_inst_map_info_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_is_costly_goal_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_lazy_var_use_map_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallel_execution_overlap_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_parallelisation_cost_data_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_detail_annotation_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_pard_goal_type_0);
	MR_register_type_ctor_info(&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_var_and_mode_0);
}

void mercury__mdprof_fb__automatic_parallelism__autopar_types__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_types__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_fb.automatic_parallelism.autopar_types.
